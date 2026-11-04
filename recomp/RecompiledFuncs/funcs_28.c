#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80028794_3B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028794: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80028798: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8002879C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800287A0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800287A4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800287A8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800287AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800287B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800287B4: addiu       $v1, $v1, 0x47F0
    ctx->r3 = ADD32(ctx->r3, 0X47F0);
    // 0x800287B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800287BC: sb          $a1, 0x9C($v0)
    MEM_B(0X9C, ctx->r2) = ctx->r5;
    // 0x800287C0: sb          $a2, 0x9D($v0)
    MEM_B(0X9D, ctx->r2) = ctx->r6;
    // 0x800287C4: jr          $ra
    // 0x800287C8: sb          $a3, 0x9E($v0)
    MEM_B(0X9E, ctx->r2) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x800287C8: sb          $a3, 0x9E($v0)
    MEM_B(0X9E, ctx->r2) = ctx->r7;
;}
RECOMP_FUNC void func_8006BF64_47364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006BF64: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8006BF68: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8006BF6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006BF70: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8006BF74: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8006BF78: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006BF7C: bne         $v0, $zero, L_8006BFA0
    if (ctx->r2 != 0) {
        // 0x8006BF80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006BFA0;
    }
    // 0x8006BF80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006BF84: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006BF88: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8006BF8C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8006BF90: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8006BF94: sh          $zero, 0x108($s0)
    MEM_H(0X108, ctx->r16) = 0;
    // 0x8006BF98: sh          $zero, 0x10A($s0)
    MEM_H(0X10A, ctx->r16) = 0;
    // 0x8006BF9C: sh          $zero, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = 0;
L_8006BFA0:
    // 0x8006BFA0: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8006BFA4: lw          $s1, -0x1B68($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X1B68);
    // 0x8006BFA8: beq         $s1, $zero, L_8006C01C
    if (ctx->r17 == 0) {
        // 0x8006BFAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006C01C;
    }
    // 0x8006BFAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BFB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006BFB4: lw          $v0, 0x6B30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6B30);
    // 0x8006BFB8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8006BFBC: beq         $v0, $zero, L_8006C020
    if (ctx->r2 == 0) {
        // 0x8006BFC0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8006C020;
    }
    // 0x8006BFC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006BFC4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8006BFC8: lb          $v0, -0x3BC2($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC2);
    // 0x8006BFCC: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006BFD0: bne         $v0, $zero, L_8006C014
    if (ctx->r2 != 0) {
        // 0x8006BFD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006C014;
    }
    // 0x8006BFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006BFD8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006BFDC: lbu         $v1, -0x3B95($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B95);
    // 0x8006BFE0: bne         $v1, $zero, L_8006BFF8
    if (ctx->r3 != 0) {
        // 0x8006BFE4: nop
    
            goto L_8006BFF8;
    }
    // 0x8006BFE4: nop

    // 0x8006BFE8: lhu         $v0, 0x13E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13E);
    // 0x8006BFEC: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8006BFF0: bne         $v0, $zero, L_8006C014
    if (ctx->r2 != 0) {
        // 0x8006BFF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006C014;
    }
    // 0x8006BFF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006BFF8:
    // 0x8006BFF8: bne         $v1, $v0, L_8006C014
    if (ctx->r3 != ctx->r2) {
        // 0x8006BFFC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006C014;
    }
    // 0x8006BFFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006C000: lhu         $v0, 0x140($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X140);
    // 0x8006C004: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8006C008: bne         $v0, $zero, L_8006C014
    if (ctx->r2 != 0) {
        // 0x8006C00C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006C014;
    }
    // 0x8006C00C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006C010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006C014:
    // 0x8006C014: beq         $v0, $zero, L_8006C0E4
    if (ctx->r2 == 0) {
        // 0x8006C018: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006C0E4;
    }
    // 0x8006C018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006C01C:
    // 0x8006C01C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8006C020:
    // 0x8006C020: jal         0x8006FC90
    // 0x8006C024: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8006FC90_4B090(rdram, ctx);
        goto after_0;
    // 0x8006C024: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8006C028: lh          $a0, 0x108($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X108);
    // 0x8006C02C: jal         0x80034678
    // 0x8006C030: addiu       $a1, $zero, 0x15E
    ctx->r5 = ADD32(0, 0X15E);
    func_80034678_FA78(rdram, ctx);
        goto after_1;
    // 0x8006C030: addiu       $a1, $zero, 0x15E
    ctx->r5 = ADD32(0, 0X15E);
    after_1:
    // 0x8006C034: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006C038: andi        $a0, $v0, 0xC0
    ctx->r4 = ctx->r2 & 0XC0;
    // 0x8006C03C: bne         $a0, $zero, L_8006C060
    if (ctx->r4 != 0) {
        // 0x8006C040: sh          $zero, 0x10E($s0)
        MEM_H(0X10E, ctx->r16) = 0;
            goto L_8006C060;
    }
    // 0x8006C040: sh          $zero, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = 0;
    // 0x8006C044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006C048: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8006C04C: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    // 0x8006C050: jal         0x8006FDFC
    // 0x8006C054: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FDFC_4B1FC(rdram, ctx);
        goto after_2;
    // 0x8006C054: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8006C058: j           L_8006C370
    // 0x8006C05C: nop

        goto L_8006C370;
    // 0x8006C05C: nop

L_8006C060:
    // 0x8006C060: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006C064: bne         $a0, $v0, L_8006C090
    if (ctx->r4 != ctx->r2) {
        // 0x8006C068: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8006C090;
    }
    // 0x8006C068: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8006C06C: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006C070: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006C074: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006C078: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006C07C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006C080: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006C084: lbu         $v0, 0x30FA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30FA);
    // 0x8006C088: beq         $v0, $zero, L_8006C0BC
    if (ctx->r2 == 0) {
        // 0x8006C08C: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8006C0BC;
    }
    // 0x8006C08C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8006C090:
    // 0x8006C090: bne         $a0, $v0, L_8006C0C0
    if (ctx->r4 != ctx->r2) {
        // 0x8006C094: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006C0C0;
    }
    // 0x8006C094: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006C098: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006C09C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006C0A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006C0A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006C0A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006C0AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006C0B0: lbu         $v0, 0x30FA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30FA);
    // 0x8006C0B4: bne         $v0, $zero, L_8006C0C0
    if (ctx->r2 != 0) {
        // 0x8006C0B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006C0C0;
    }
    // 0x8006C0B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006C0BC:
    // 0x8006C0BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006C0C0:
    // 0x8006C0C0: bnel        $v0, $zero, L_8006C370
    if (ctx->r2 != 0) {
        // 0x8006C0C4: sh          $zero, 0xB4($s0)
        MEM_H(0XB4, ctx->r16) = 0;
            goto L_8006C370;
    }
    goto skip_0;
    // 0x8006C0C4: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    skip_0:
    // 0x8006C0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006C0CC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8006C0D0: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    // 0x8006C0D4: jal         0x8006FDFC
    // 0x8006C0D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FDFC_4B1FC(rdram, ctx);
        goto after_3;
    // 0x8006C0D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8006C0DC: j           L_8006C370
    // 0x8006C0E0: nop

        goto L_8006C370;
    // 0x8006C0E0: nop

L_8006C0E4:
    // 0x8006C0E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8006C0E8: jal         0x8004ED08
    // 0x8006C0EC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004ED08_2A108(rdram, ctx);
        goto after_4;
    // 0x8006C0EC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
    // 0x8006C0F0: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8006C0F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8006C0F8: sh          $v0, 0x10A($s0)
    MEM_H(0X10A, ctx->r16) = ctx->r2;
    // 0x8006C0FC: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x8006C100: slti        $v0, $a0, 0x801
    ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
    // 0x8006C104: beql        $v0, $zero, L_8006C10C
    if (ctx->r2 == 0) {
        // 0x8006C108: addiu       $a0, $a0, -0x1000
        ctx->r4 = ADD32(ctx->r4, -0X1000);
            goto L_8006C10C;
    }
    goto skip_1;
    // 0x8006C108: addiu       $a0, $a0, -0x1000
    ctx->r4 = ADD32(ctx->r4, -0X1000);
    skip_1:
L_8006C10C:
    // 0x8006C10C: slti        $v0, $a0, -0x800
    ctx->r2 = SIGNED(ctx->r4) < -0X800 ? 1 : 0;
    // 0x8006C110: bnel        $v0, $zero, L_8006C118
    if (ctx->r2 != 0) {
        // 0x8006C114: addiu       $a0, $a0, 0x1000
        ctx->r4 = ADD32(ctx->r4, 0X1000);
            goto L_8006C118;
    }
    goto skip_2;
    // 0x8006C114: addiu       $a0, $a0, 0x1000
    ctx->r4 = ADD32(ctx->r4, 0X1000);
    skip_2:
L_8006C118:
    // 0x8006C118: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006C11C: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x8006C120: bne         $v0, $zero, L_8006C190
    if (ctx->r2 != 0) {
        // 0x8006C124: nop
    
            goto L_8006C190;
    }
    // 0x8006C124: nop

    // 0x8006C128: bgez        $a0, L_8006C134
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8006C12C: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_8006C134;
    }
    // 0x8006C12C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8006C130: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_8006C134:
    // 0x8006C134: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8006C138: beq         $v0, $zero, L_8006C164
    if (ctx->r2 == 0) {
        // 0x8006C13C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8006C164;
    }
    // 0x8006C13C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006C140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006C144: lhu         $v0, 0x10A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10A);
    // 0x8006C148: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006C14C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8006C150: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    // 0x8006C154: jal         0x8006FB90
    // 0x8006C158: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8006FB90_4AF90(rdram, ctx);
        goto after_5;
    // 0x8006C158: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_5:
    // 0x8006C15C: j           L_8006C250
    // 0x8006C160: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_8006C250;
    // 0x8006C160: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8006C164:
    // 0x8006C164: bgtz        $a0, L_8006C170
    if (SIGNED(ctx->r4) > 0) {
        // 0x8006C168: addiu       $v0, $zero, -0x80
        ctx->r2 = ADD32(0, -0X80);
            goto L_8006C170;
    }
    // 0x8006C168: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8006C16C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8006C170:
    // 0x8006C170: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
    // 0x8006C174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006C178: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8006C17C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006C180: jal         0x8006FB90
    // 0x8006C184: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_6;
    // 0x8006C184: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8006C188: j           L_8006C23C
    // 0x8006C18C: nop

        goto L_8006C23C;
    // 0x8006C18C: nop

L_8006C190:
    // 0x8006C190: lhu         $a1, 0x11C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006C194: lhu         $v0, 0x13C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006C198: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8006C19C: beq         $v0, $zero, L_8006C1C8
    if (ctx->r2 == 0) {
        // 0x8006C1A0: nop
    
            goto L_8006C1C8;
    }
    // 0x8006C1A0: nop

    // 0x8006C1A4: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006C1A8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006C1AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006C1B0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006C1B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006C1B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006C1BC: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006C1C0: beq         $v0, $zero, L_8006C200
    if (ctx->r2 == 0) {
        // 0x8006C1C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006C200;
    }
    // 0x8006C1C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006C1C8:
    // 0x8006C1C8: lhu         $v0, 0x13A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006C1CC: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8006C1D0: beq         $v0, $zero, L_8006C200
    if (ctx->r2 == 0) {
        // 0x8006C1D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006C200;
    }
    // 0x8006C1D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006C1D8: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006C1DC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006C1E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006C1E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006C1E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006C1EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006C1F0: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006C1F4: bne         $v0, $zero, L_8006C200
    if (ctx->r2 != 0) {
        // 0x8006C1F8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006C200;
    }
    // 0x8006C1F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006C1FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006C200:
    // 0x8006C200: bnel        $v0, $zero, L_8006C250
    if (ctx->r2 != 0) {
        // 0x8006C204: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8006C250;
    }
    goto skip_3;
    // 0x8006C204: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    skip_3:
    // 0x8006C208: bgez        $a0, L_8006C214
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8006C20C: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_8006C214;
    }
    // 0x8006C20C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8006C210: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_8006C214:
    // 0x8006C214: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8006C218: beq         $v0, $zero, L_8006C22C
    if (ctx->r2 == 0) {
        // 0x8006C21C: nop
    
            goto L_8006C22C;
    }
    // 0x8006C21C: nop

    // 0x8006C220: lhu         $v0, 0x10A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10A);
    // 0x8006C224: j           L_8006C248
    // 0x8006C228: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
        goto L_8006C248;
    // 0x8006C228: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
L_8006C22C:
    // 0x8006C22C: bgtz        $a0, L_8006C238
    if (SIGNED(ctx->r4) > 0) {
        // 0x8006C230: addiu       $v0, $zero, -0x80
        ctx->r2 = ADD32(0, -0X80);
            goto L_8006C238;
    }
    // 0x8006C230: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8006C234: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8006C238:
    // 0x8006C238: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
L_8006C23C:
    // 0x8006C23C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8006C240: lhu         $v1, 0xB4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB4);
    // 0x8006C244: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8006C248:
    // 0x8006C248: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8006C24C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8006C250:
    // 0x8006C250: jal         0x8004ED3C
    // 0x8006C254: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004ED3C_2A13C(rdram, ctx);
        goto after_7;
    // 0x8006C254: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_7:
    // 0x8006C258: lh          $v1, 0x108($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X108);
    // 0x8006C25C: addiu       $a0, $v0, -0xC00
    ctx->r4 = ADD32(ctx->r2, -0XC00);
    // 0x8006C260: bne         $a0, $v1, L_8006C270
    if (ctx->r4 != ctx->r3) {
        // 0x8006C264: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8006C270;
    }
    // 0x8006C264: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8006C268: j           L_8006C364
    // 0x8006C26C: sh          $zero, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = 0;
        goto L_8006C364;
    // 0x8006C26C: sh          $zero, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = 0;
L_8006C270:
    // 0x8006C270: blez        $v0, L_8006C2F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006C274: nop
    
            goto L_8006C2F0;
    }
    // 0x8006C274: nop

    // 0x8006C278: lh          $v0, 0x10E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10E);
    // 0x8006C27C: bgez        $v0, L_8006C28C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006C280: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8006C28C;
    }
    // 0x8006C280: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006C284: j           L_8006C2AC
    // 0x8006C288: sh          $zero, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = 0;
        goto L_8006C2AC;
    // 0x8006C288: sh          $zero, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = 0;
L_8006C28C:
    // 0x8006C28C: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x8006C290: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
    // 0x8006C294: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006C298: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006C29C: slti        $v0, $v0, 0x41
    ctx->r2 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x8006C2A0: bne         $v0, $zero, L_8006C2AC
    if (ctx->r2 != 0) {
        // 0x8006C2A4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8006C2AC;
    }
    // 0x8006C2A4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006C2A8: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
L_8006C2AC:
    // 0x8006C2AC: lh          $v1, 0x108($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X108);
    // 0x8006C2B0: lh          $v0, 0x10E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10E);
    // 0x8006C2B4: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8006C2B8: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8006C2BC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006C2C0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006C2C4: beq         $v0, $zero, L_8006C2D4
    if (ctx->r2 == 0) {
        // 0x8006C2C8: addu        $v0, $a2, $a1
        ctx->r2 = ADD32(ctx->r6, ctx->r5);
            goto L_8006C2D4;
    }
    // 0x8006C2C8: addu        $v0, $a2, $a1
    ctx->r2 = ADD32(ctx->r6, ctx->r5);
    // 0x8006C2CC: j           L_8006C2D8
    // 0x8006C2D0: sh          $v0, 0x108($s0)
    MEM_H(0X108, ctx->r16) = ctx->r2;
        goto L_8006C2D8;
    // 0x8006C2D0: sh          $v0, 0x108($s0)
    MEM_H(0X108, ctx->r16) = ctx->r2;
L_8006C2D4:
    // 0x8006C2D4: sh          $a0, 0x108($s0)
    MEM_H(0X108, ctx->r16) = ctx->r4;
L_8006C2D8:
    // 0x8006C2D8: lh          $v0, 0x108($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X108);
    // 0x8006C2DC: slti        $v0, $v0, 0x1C1
    ctx->r2 = SIGNED(ctx->r2) < 0X1C1 ? 1 : 0;
    // 0x8006C2E0: bne         $v0, $zero, L_8006C364
    if (ctx->r2 != 0) {
        // 0x8006C2E4: addiu       $v0, $zero, 0x1C0
        ctx->r2 = ADD32(0, 0X1C0);
            goto L_8006C364;
    }
    // 0x8006C2E4: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x8006C2E8: j           L_8006C364
    // 0x8006C2EC: sh          $v0, 0x108($s0)
    MEM_H(0X108, ctx->r16) = ctx->r2;
        goto L_8006C364;
    // 0x8006C2EC: sh          $v0, 0x108($s0)
    MEM_H(0X108, ctx->r16) = ctx->r2;
L_8006C2F0:
    // 0x8006C2F0: lh          $v0, 0x10E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X10E);
    // 0x8006C2F4: blez        $v0, L_8006C304
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006C2F8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8006C304;
    }
    // 0x8006C2F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006C2FC: j           L_8006C324
    // 0x8006C300: sh          $zero, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = 0;
        goto L_8006C324;
    // 0x8006C300: sh          $zero, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = 0;
L_8006C304:
    // 0x8006C304: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
    // 0x8006C308: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
    // 0x8006C30C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006C310: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006C314: slti        $v0, $v0, -0x40
    ctx->r2 = SIGNED(ctx->r2) < -0X40 ? 1 : 0;
    // 0x8006C318: beq         $v0, $zero, L_8006C324
    if (ctx->r2 == 0) {
        // 0x8006C31C: addiu       $v0, $zero, -0x40
        ctx->r2 = ADD32(0, -0X40);
            goto L_8006C324;
    }
    // 0x8006C31C: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x8006C320: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
L_8006C324:
    // 0x8006C324: lh          $v0, 0x108($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X108);
    // 0x8006C328: lh          $v1, 0x10E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10E);
    // 0x8006C32C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8006C330: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8006C334: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006C338: beq         $v0, $zero, L_8006C34C
    if (ctx->r2 == 0) {
        // 0x8006C33C: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8006C34C;
    }
    // 0x8006C33C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8006C340: addu        $v0, $a2, $a1
    ctx->r2 = ADD32(ctx->r6, ctx->r5);
    // 0x8006C344: j           L_8006C350
    // 0x8006C348: sh          $v0, 0x108($s0)
    MEM_H(0X108, ctx->r16) = ctx->r2;
        goto L_8006C350;
    // 0x8006C348: sh          $v0, 0x108($s0)
    MEM_H(0X108, ctx->r16) = ctx->r2;
L_8006C34C:
    // 0x8006C34C: sh          $a0, 0x108($s0)
    MEM_H(0X108, ctx->r16) = ctx->r4;
L_8006C350:
    // 0x8006C350: lh          $v0, 0x108($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X108);
    // 0x8006C354: slti        $v0, $v0, -0x1C0
    ctx->r2 = SIGNED(ctx->r2) < -0X1C0 ? 1 : 0;
    // 0x8006C358: beq         $v0, $zero, L_8006C364
    if (ctx->r2 == 0) {
        // 0x8006C35C: addiu       $v0, $zero, -0x1C0
        ctx->r2 = ADD32(0, -0X1C0);
            goto L_8006C364;
    }
    // 0x8006C35C: addiu       $v0, $zero, -0x1C0
    ctx->r2 = ADD32(0, -0X1C0);
    // 0x8006C360: sh          $v0, 0x108($s0)
    MEM_H(0X108, ctx->r16) = ctx->r2;
L_8006C364:
    // 0x8006C364: lh          $a0, 0x108($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X108);
    // 0x8006C368: jal         0x80034678
    // 0x8006C36C: addiu       $a1, $zero, 0x15E
    ctx->r5 = ADD32(0, 0X15E);
    func_80034678_FA78(rdram, ctx);
        goto after_8;
    // 0x8006C36C: addiu       $a1, $zero, 0x15E
    ctx->r5 = ADD32(0, 0X15E);
    after_8:
L_8006C370:
    // 0x8006C370: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8006C374: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8006C378: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8006C37C: jr          $ra
    // 0x8006C380: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8006C380: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8007AB38_55F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007AB38: jr          $ra
    // 0x8007AB3C: nop

    TRACE_RETURN()
    return;
    // 0x8007AB3C: nop

;}
RECOMP_FUNC void func_80085210_60610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80085210: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80085214: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80085218: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8008521C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80085220: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80085224: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80085228: lbu         $s2, 0x48($a0)
    ctx->r18 = MEM_BU(ctx->r4, 0X48);
    // 0x8008522C: lbu         $s3, 0x49($a0)
    ctx->r19 = MEM_BU(ctx->r4, 0X49);
    // 0x80085230: lbu         $s0, 0x4A($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X4A);
    // 0x80085234: lbu         $s1, 0x4B($a0)
    ctx->r17 = MEM_BU(ctx->r4, 0X4B);
    // 0x80085238: bgez        $s2, L_80085244
    if (SIGNED(ctx->r18) >= 0) {
        // 0x8008523C: addu        $v1, $s2, $zero
        ctx->r3 = ADD32(ctx->r18, 0);
            goto L_80085244;
    }
    // 0x8008523C: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
    // 0x80085240: addiu       $v1, $s2, 0x3
    ctx->r3 = ADD32(ctx->r18, 0X3);
L_80085244:
    // 0x80085244: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80085248: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x8008524C: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80085250: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80085254: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80085258: bgez        $s3, L_80085264
    if (SIGNED(ctx->r19) >= 0) {
        // 0x8008525C: sra         $a0, $v0, 16
        ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80085264;
    }
    // 0x8008525C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085260: addiu       $a3, $s3, 0x3
    ctx->r7 = ADD32(ctx->r19, 0X3);
L_80085264:
    // 0x80085264: lhu         $v0, 0x6($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6);
    // 0x80085268: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8008526C: sra         $v1, $a3, 2
    ctx->r3 = S32(SIGNED(ctx->r7) >> 2);
    // 0x80085270: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80085274: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80085278: bgez        $s0, L_80085284
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8008527C: sra         $a1, $v0, 16
        ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80085284;
    }
    // 0x8008527C: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085280: addiu       $a2, $s0, 0x3
    ctx->r6 = ADD32(ctx->r16, 0X3);
L_80085284:
    // 0x80085284: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x80085288: bgez        $s1, L_80085294
    if (SIGNED(ctx->r17) >= 0) {
        // 0x8008528C: srl         $a2, $a2, 2
        ctx->r6 = S32(U32(ctx->r6) >> 2);
            goto L_80085294;
    }
    // 0x8008528C: srl         $a2, $a2, 2
    ctx->r6 = S32(U32(ctx->r6) >> 2);
    // 0x80085290: addiu       $a3, $s1, 0x3
    ctx->r7 = ADD32(ctx->r17, 0X3);
L_80085294:
    // 0x80085294: jal         0x8002CA30
    // 0x80085298: srl         $a3, $a3, 2
    ctx->r7 = S32(U32(ctx->r7) >> 2);
    func_8002CA30_7E30(rdram, ctx);
        goto after_0;
    // 0x80085298: srl         $a3, $a3, 2
    ctx->r7 = S32(U32(ctx->r7) >> 2);
    after_0:
    // 0x8008529C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x800852A0: beq         $a2, $zero, L_800853E8
    if (ctx->r6 == 0) {
        // 0x800852A4: lui         $a1, 0x708
        ctx->r5 = S32(0X708 << 16);
            goto L_800853E8;
    }
    // 0x800852A4: lui         $a1, 0x708
    ctx->r5 = S32(0X708 << 16);
    // 0x800852A8: lw          $t1, 0x4($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X4);
    // 0x800852AC: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    // 0x800852B0: lui         $t2, 0x8
    ctx->r10 = S32(0X8 << 16);
    // 0x800852B4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800852B8: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x800852BC: lh          $v0, 0xC($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XC);
    // 0x800852C0: ori         $t2, $t2, 0x200
    ctx->r10 = ctx->r10 | 0X200;
    // 0x800852C4: lh          $t0, 0xC($a2)
    ctx->r8 = MEM_H(ctx->r6, 0XC);
    // 0x800852C8: sra         $a2, $s0, 1
    ctx->r6 = S32(SIGNED(ctx->r16) >> 1);
    // 0x800852CC: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    // 0x800852D0: srl         $a2, $a2, 3
    ctx->r6 = S32(U32(ctx->r6) >> 3);
    // 0x800852D4: sll         $a2, $a2, 9
    ctx->r6 = S32(ctx->r6 << 9);
    // 0x800852D8: addiu       $a3, $s1, -0x1
    ctx->r7 = ADD32(ctx->r17, -0X1);
    // 0x800852DC: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x800852E0: andi        $a3, $a3, 0xFFF
    ctx->r7 = ctx->r7 & 0XFFF;
    // 0x800852E4: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x800852E8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800852EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800852F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x800852F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800852F8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800852FC: lui         $v1, 0xFD48
    ctx->r3 = S32(0XFD48 << 16);
    // 0x80085300: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80085304: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80085308: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8008530C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085310: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085314: lui         $v0, 0xF548
    ctx->r2 = S32(0XF548 << 16);
    // 0x80085318: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x8008531C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x80085320: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x80085324: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085328: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8008532C: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x80085330: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x80085334: addiu       $v0, $a0, 0x20
    ctx->r2 = ADD32(ctx->r4, 0X20);
    // 0x80085338: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008533C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085340: lui         $v0, 0xF400
    ctx->r2 = S32(0XF400 << 16);
    // 0x80085344: sw          $a1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r5;
    // 0x80085348: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    // 0x8008534C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x80085350: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80085354: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80085358: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x8008535C: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x80085360: or          $v0, $a3, $v0
    ctx->r2 = ctx->r7 | ctx->r2;
    // 0x80085364: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80085368: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x8008536C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085370: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085374: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80085378: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x8008537C: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x80085380: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085384: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085388: lui         $v0, 0xF540
    ctx->r2 = S32(0XF540 << 16);
    // 0x8008538C: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    // 0x80085390: addiu       $v0, $a0, 0x38
    ctx->r2 = ADD32(ctx->r4, 0X38);
    // 0x80085394: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085398: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8008539C: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x800853A0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x800853A4: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x800853A8: sll         $a1, $a1, 12
    ctx->r5 = S32(ctx->r5 << 12);
    // 0x800853AC: mult        $s3, $t0
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800853B0: mflo        $t0
    ctx->r8 = lo;
    // 0x800853B4: or          $a1, $a1, $a3
    ctx->r5 = ctx->r5 | ctx->r7;
    // 0x800853B8: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x800853BC: srl         $v0, $s2, 1
    ctx->r2 = S32(U32(ctx->r18) >> 1);
    // 0x800853C0: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x800853C4: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x800853C8: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x800853CC: sw          $a2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r6;
    // 0x800853D0: sw          $t2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r10;
    // 0x800853D4: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    // 0x800853D8: sll         $t0, $t0, 1
    ctx->r8 = S32(ctx->r8 << 1);
    // 0x800853DC: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800853E0: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x800853E4: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
L_800853E8:
    // 0x800853E8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x800853EC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800853F0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800853F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800853F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800853FC: jr          $ra
    // 0x80085400: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80085400: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80091C78_6D078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091C78: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80091C7C: lw          $a0, -0xEEC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEEC);
    // 0x80091C80: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80091C84: beq         $v0, $zero, L_80091C9C
    if (ctx->r2 == 0) {
        // 0x80091C88: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80091C9C;
    }
    // 0x80091C88: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80091C8C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80091C90: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80091C94: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x80091C98: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_80091C9C:
    // 0x80091C9C: jr          $ra
    // 0x80091CA0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x80091CA0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_8006471C_3FB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006471C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80064720: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
    // 0x80064724: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80064728: lbu         $v1, -0x278E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X278E);
    // 0x8006472C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80064730: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80064734: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80064738: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8006473C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80064740: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80064744: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80064748: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8006474C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80064750: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80064754: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80064758: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006475C: lhu         $v0, 0xBC0($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XBC0);
    // 0x80064760: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80064764: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80064768: addiu       $a0, $a0, 0x55A8
    ctx->r4 = ADD32(ctx->r4, 0X55A8);
    // 0x8006476C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80064770: sw          $zero, 0x56F8($at)
    MEM_W(0X56F8, ctx->r1) = 0;
    // 0x80064774: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80064778: sb          $v1, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = ctx->r3;
    // 0x8006477C: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
    // 0x80064780: addu        $s4, $v1, $a0
    ctx->r20 = ADD32(ctx->r3, ctx->r4);
    // 0x80064784: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80064788: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8006478C: lh          $v1, 0x4A60($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A60);
    // 0x80064790: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80064794: addu        $s3, $v0, $a0
    ctx->r19 = ADD32(ctx->r2, ctx->r4);
    // 0x80064798: slti        $v0, $v1, 0xA0
    ctx->r2 = SIGNED(ctx->r3) < 0XA0 ? 1 : 0;
    // 0x8006479C: bne         $v0, $zero, L_800647B8
    if (ctx->r2 != 0) {
        // 0x800647A0: addiu       $v0, $zero, 0xA0
        ctx->r2 = ADD32(0, 0XA0);
            goto L_800647B8;
    }
    // 0x800647A0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x800647A4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800647A8: lhu         $v0, -0x1CD8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1CD8);
    // 0x800647AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800647B0: j           L_800647E8
    // 0x800647B4: sh          $v0, -0x1D9A($at)
    MEM_H(-0X1D9A, ctx->r1) = ctx->r2;
        goto L_800647E8;
    // 0x800647B4: sh          $v0, -0x1D9A($at)
    MEM_H(-0X1D9A, ctx->r1) = ctx->r2;
L_800647B8:
    // 0x800647B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800647BC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800647C0: addiu       $a0, $a0, -0x1D9A
    ctx->r4 = ADD32(ctx->r4, -0X1D9A);
    // 0x800647C4: bltzl       $v0, L_800647CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x800647C8: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_800647CC;
    }
    goto skip_0;
    // 0x800647C8: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_0:
L_800647CC:
    // 0x800647CC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x800647D0: addiu       $v1, $zero, 0x85
    ctx->r3 = ADD32(0, 0X85);
    // 0x800647D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800647D8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800647DC: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x800647E0: lhu         $v0, -0x46($v1)
    ctx->r2 = MEM_HU(ctx->r3, -0X46);
    // 0x800647E4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_800647E8:
    // 0x800647E8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800647EC: lbu         $v1, -0x3B9B($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B9B);
    // 0x800647F0: sltiu       $v0, $v1, 0x12
    ctx->r2 = ctx->r3 < 0X12 ? 1 : 0;
    // 0x800647F4: bne         $v0, $zero, L_80064808
    if (ctx->r2 != 0) {
        // 0x800647F8: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_80064808;
    }
    // 0x800647F8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800647FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80064800: j           L_80064814
    // 0x80064804: lhu         $v0, -0x1CBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1CBA);
        goto L_80064814;
    // 0x80064804: lhu         $v0, -0x1CBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1CBA);
L_80064808:
    // 0x80064808: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006480C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064810: lhu         $v0, -0x1CDC($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CDC);
L_80064814:
    // 0x80064814: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80064818: sh          $v0, -0x1D96($at)
    MEM_H(-0X1D96, ctx->r1) = ctx->r2;
    // 0x8006481C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80064820: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
    // 0x80064824: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80064828: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006482C: lbu         $v0, 0xBC4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XBC4);
    // 0x80064830: blez        $v0, L_800649BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80064834: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_800649BC;
    }
    // 0x80064834: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80064838: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8006483C: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80064840: addiu       $s2, $s2, -0x6F90
    ctx->r18 = ADD32(ctx->r18, -0X6F90);
    // 0x80064844: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_80064848:
    // 0x80064848: jal         0x8006033C
    // 0x8006484C: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8006484C: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    after_0:
    // 0x80064850: bne         $v0, $zero, L_800648E8
    if (ctx->r2 != 0) {
        // 0x80064854: sra         $v0, $s0, 3
        ctx->r2 = S32(SIGNED(ctx->r16) >> 3);
            goto L_800648E8;
    }
    // 0x80064854: sra         $v0, $s0, 3
    ctx->r2 = S32(SIGNED(ctx->r16) >> 3);
    // 0x80064858: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x8006485C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80064860: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80064864: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80064868: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8006486C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80064870: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x80064874: srav        $v0, $s6, $v0
    ctx->r2 = S32(SIGNED(ctx->r22) >> (ctx->r2 & 31));
    // 0x80064878: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8006487C: beq         $v1, $zero, L_80064974
    if (ctx->r3 == 0) {
        // 0x80064880: nop
    
            goto L_80064974;
    }
    // 0x80064880: nop

    // 0x80064884: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80064888: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
    // 0x8006488C: bne         $v0, $s5, L_800649A0
    if (ctx->r2 != ctx->r21) {
        // 0x80064890: nop
    
            goto L_800649A0;
    }
    // 0x80064890: nop

    // 0x80064894: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80064898: bne         $s0, $v0, L_800648BC
    if (ctx->r16 != ctx->r2) {
        // 0x8006489C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_800648BC;
    }
    // 0x8006489C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800648A0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800648A4: lh          $v1, 0x4A60($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A60);
    // 0x800648A8: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x800648AC: beq         $v1, $v0, L_80064998
    if (ctx->r3 == ctx->r2) {
        // 0x800648B0: nop
    
            goto L_80064998;
    }
    // 0x800648B0: nop

    // 0x800648B4: j           L_80064974
    // 0x800648B8: nop

        goto L_80064974;
    // 0x800648B8: nop

L_800648BC:
    // 0x800648BC: bne         $s0, $v0, L_80064998
    if (ctx->r16 != ctx->r2) {
        // 0x800648C0: nop
    
            goto L_80064998;
    }
    // 0x800648C0: nop

    // 0x800648C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800648C8: lbu         $v0, -0x3B9B($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9B);
    // 0x800648CC: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x800648D0: sltiu       $v0, $v0, 0x63
    ctx->r2 = ctx->r2 < 0X63 ? 1 : 0;
    // 0x800648D4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800648D8: beq         $v1, $zero, L_80064998
    if (ctx->r3 == 0) {
        // 0x800648DC: nop
    
            goto L_80064998;
    }
    // 0x800648DC: nop

    // 0x800648E0: j           L_80064974
    // 0x800648E4: nop

        goto L_80064974;
    // 0x800648E4: nop

L_800648E8:
    // 0x800648E8: addu        $v1, $s3, $v0
    ctx->r3 = ADD32(ctx->r19, ctx->r2);
    // 0x800648EC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x800648F0: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x800648F4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x800648F8: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x800648FC: srav        $v0, $s6, $v0
    ctx->r2 = S32(SIGNED(ctx->r22) >> (ctx->r2 & 31));
    // 0x80064900: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80064904: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80064908: beq         $v1, $zero, L_80064998
    if (ctx->r3 == 0) {
        // 0x8006490C: nop
    
            goto L_80064998;
    }
    // 0x8006490C: nop

    // 0x80064910: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80064914: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
    // 0x80064918: bne         $v0, $s5, L_80064974
    if (ctx->r2 != ctx->r21) {
        // 0x8006491C: nop
    
            goto L_80064974;
    }
    // 0x8006491C: nop

    // 0x80064920: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80064924: lw          $v0, 0x56F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56F8);
    // 0x80064928: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8006492C: sb          $s0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r16;
    // 0x80064930: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80064934: lw          $v1, 0x56F8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56F8);
    // 0x80064938: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8006493C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80064940: sw          $v0, 0x56F8($at)
    MEM_W(0X56F8, ctx->r1) = ctx->r2;
    // 0x80064944: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x80064948: bne         $v0, $zero, L_80064968
    if (ctx->r2 != 0) {
        // 0x8006494C: addiu       $v0, $s0, -0x24
        ctx->r2 = ADD32(ctx->r16, -0X24);
            goto L_80064968;
    }
    // 0x8006494C: addiu       $v0, $s0, -0x24
    ctx->r2 = ADD32(ctx->r16, -0X24);
    // 0x80064950: sltiu       $v0, $v0, 0x14
    ctx->r2 = ctx->r2 < 0X14 ? 1 : 0;
    // 0x80064954: bne         $v0, $zero, L_80064968
    if (ctx->r2 != 0) {
        // 0x80064958: addiu       $v0, $s0, -0x4C
        ctx->r2 = ADD32(ctx->r16, -0X4C);
            goto L_80064968;
    }
    // 0x80064958: addiu       $v0, $s0, -0x4C
    ctx->r2 = ADD32(ctx->r16, -0X4C);
    // 0x8006495C: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80064960: beq         $v0, $zero, L_80064998
    if (ctx->r2 == 0) {
        // 0x80064964: nop
    
            goto L_80064998;
    }
    // 0x80064964: nop

L_80064968:
    // 0x80064968: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006496C: j           L_80064998
    // 0x80064970: sw          $v1, 0x56F8($at)
    MEM_W(0X56F8, ctx->r1) = ctx->r3;
        goto L_80064998;
    // 0x80064970: sw          $v1, 0x56F8($at)
    MEM_W(0X56F8, ctx->r1) = ctx->r3;
L_80064974:
    // 0x80064974: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80064978: lw          $v0, 0x56F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56F8);
    // 0x8006497C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80064980: sb          $s0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r16;
    // 0x80064984: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80064988: lw          $v0, 0x56F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56F8);
    // 0x8006498C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80064990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80064994: sw          $v0, 0x56F8($at)
    MEM_W(0X56F8, ctx->r1) = ctx->r2;
L_80064998:
    // 0x80064998: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8006499C: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
L_800649A0:
    // 0x800649A0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800649A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800649A8: lbu         $v0, 0xBC4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0XBC4);
    // 0x800649AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800649B0: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800649B4: bne         $v0, $zero, L_80064848
    if (ctx->r2 != 0) {
        // 0x800649B8: nop
    
            goto L_80064848;
    }
    // 0x800649B8: nop

L_800649BC:
    // 0x800649BC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800649C0: lw          $v1, 0x56F8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56F8);
    // 0x800649C4: beq         $v1, $zero, L_80064A14
    if (ctx->r3 == 0) {
        // 0x800649C8: sltiu       $v0, $v1, 0x5
        ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
            goto L_80064A14;
    }
    // 0x800649C8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x800649CC: beq         $v0, $zero, L_80064A04
    if (ctx->r2 == 0) {
        // 0x800649D0: nop
    
            goto L_80064A04;
    }
    // 0x800649D0: nop

    // 0x800649D4: lw          $a1, 0x6C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X6C);
    // 0x800649D8: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x800649DC: lbu         $v1, 0x7($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X7);
    // 0x800649E0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800649E4: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x800649E8: beql        $a0, $v0, L_80064A2C
    if (ctx->r4 == ctx->r2) {
        // 0x800649EC: addiu       $v0, $a1, 0x7
        ctx->r2 = ADD32(ctx->r5, 0X7);
            goto L_80064A2C;
    }
    goto skip_1;
    // 0x800649EC: addiu       $v0, $a1, 0x7
    ctx->r2 = ADD32(ctx->r5, 0X7);
    skip_1:
    // 0x800649F0: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x800649F4: bne         $a1, $zero, L_80064A40
    if (ctx->r5 != 0) {
        // 0x800649F8: sh          $v1, 0xC2($s1)
        MEM_H(0XC2, ctx->r17) = ctx->r3;
            goto L_80064A40;
    }
    // 0x800649F8: sh          $v1, 0xC2($s1)
    MEM_H(0XC2, ctx->r17) = ctx->r3;
    // 0x800649FC: j           L_80064A70
    // 0x80064A00: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
        goto L_80064A70;
    // 0x80064A00: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_80064A04:
    // 0x80064A04: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x80064A08: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80064A0C: j           L_80064A90
    // 0x80064A10: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
        goto L_80064A90;
    // 0x80064A10: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
L_80064A14:
    // 0x80064A14: lw          $a1, 0x6C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X6C);
    // 0x80064A18: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80064A1C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80064A20: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80064A24: bne         $a0, $v0, L_80064A34
    if (ctx->r4 != ctx->r2) {
        // 0x80064A28: addiu       $v0, $a1, 0x7
        ctx->r2 = ADD32(ctx->r5, 0X7);
            goto L_80064A34;
    }
    // 0x80064A28: addiu       $v0, $a1, 0x7
    ctx->r2 = ADD32(ctx->r5, 0X7);
L_80064A2C:
    // 0x80064A2C: j           L_80064A90
    // 0x80064A30: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
        goto L_80064A90;
    // 0x80064A30: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
L_80064A34:
    // 0x80064A34: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x80064A38: beq         $a1, $zero, L_80064A6C
    if (ctx->r5 == 0) {
        // 0x80064A3C: sh          $v1, 0xC2($s1)
        MEM_H(0XC2, ctx->r17) = ctx->r3;
            goto L_80064A6C;
    }
    // 0x80064A3C: sh          $v1, 0xC2($s1)
    MEM_H(0XC2, ctx->r17) = ctx->r3;
L_80064A40:
    // 0x80064A40: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80064A44: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80064A48: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80064A4C: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80064A50: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80064A54: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80064A58: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80064A5C: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x80064A60: sw          $v1, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r3;
    // 0x80064A64: j           L_80064A84
    // 0x80064A68: sw          $v1, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r3;
        goto L_80064A84;
    // 0x80064A68: sw          $v1, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r3;
L_80064A6C:
    // 0x80064A6C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
L_80064A70:
    // 0x80064A70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80064A74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064A78: lw          $v0, 0x27EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27EC);
    // 0x80064A7C: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x80064A80: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
L_80064A84:
    // 0x80064A84: sb          $zero, 0x3E($s1)
    MEM_B(0X3E, ctx->r17) = 0;
    // 0x80064A88: sb          $zero, 0x3C($s1)
    MEM_B(0X3C, ctx->r17) = 0;
    // 0x80064A8C: sb          $zero, 0x72($s1)
    MEM_B(0X72, ctx->r17) = 0;
L_80064A90:
    // 0x80064A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80064A94: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80064A98: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80064A9C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80064AA0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80064AA4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80064AA8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80064AAC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80064AB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80064AB4: jr          $ra
    // 0x80064AB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80064AB8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80069838_44C38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069838: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006983C: jr          $ra
    // 0x80069840: sw          $a0, -0x3E80($at)
    MEM_W(-0X3E80, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80069840: sw          $a0, -0x3E80($at)
    MEM_W(-0X3E80, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80054610_2FA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80054610: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80054614: lhu         $a3, -0x2334($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X2334);
    // 0x80054618: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8005461C: lbu         $a0, -0x2338($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2338);
    // 0x80054620: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80054624: lbu         $a1, -0x2337($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2337);
    // 0x80054628: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005462C: lbu         $a2, -0x2336($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X2336);
    // 0x80054630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80054634: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80054638: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005463C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80054640: sb          $v0, -0x72EC($at)
    MEM_B(-0X72EC, ctx->r1) = ctx->r2;
    // 0x80054644: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80054648: sb          $v0, 0xB61($at)
    MEM_B(0XB61, ctx->r1) = ctx->r2;
    // 0x8005464C: jal         0x80054984
    // 0x80054650: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    func_80054984_2FD84(rdram, ctx);
        goto after_0;
    // 0x80054650: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    after_0:
    // 0x80054654: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80054658: jr          $ra
    // 0x8005465C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005465C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008BE44_67244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008BE44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008BE48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008BE4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008BE50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008BE54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008BE58: lbu         $v0, 0xBC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBC);
    // 0x8008BE5C: lbu         $v1, 0xC4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC4);
    // 0x8008BE60: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008BE64: mflo        $v0
    ctx->r2 = lo;
    // 0x8008BE68: lbu         $v1, 0xBB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XBB);
    // 0x8008BE6C: nop

    // 0x8008BE70: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008BE74: mflo        $v0
    ctx->r2 = lo;
    // 0x8008BE78: lh          $v1, 0x9E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X9E);
    // 0x8008BE7C: nop

    // 0x8008BE80: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008BE84: mflo        $v0
    ctx->r2 = lo;
    // 0x8008BE88: srl         $a0, $v0, 13
    ctx->r4 = S32(U32(ctx->r2) >> 13);
    // 0x8008BE8C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8008BE90: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8008BE94: beq         $v0, $zero, L_8008BEA0
    if (ctx->r2 == 0) {
        // 0x8008BE98: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_8008BEA0;
    }
    // 0x8008BE98: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8008BE9C: addiu       $a0, $zero, 0x7FFF
    ctx->r4 = ADD32(0, 0X7FFF);
L_8008BEA0:
    // 0x8008BEA0: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    // 0x8008BEA4: bne         $v0, $zero, L_8008BEB8
    if (ctx->r2 != 0) {
        // 0x8008BEA8: nop
    
            goto L_8008BEB8;
    }
    // 0x8008BEA8: nop

    // 0x8008BEAC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008BEB0: j           L_8008BEC0
    // 0x8008BEB4: lhu         $v0, 0x4F9E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4F9E);
        goto L_8008BEC0;
    // 0x8008BEB4: lhu         $v0, 0x4F9E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4F9E);
L_8008BEB8:
    // 0x8008BEB8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008BEBC: lhu         $v0, 0x4F9C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4F9C);
L_8008BEC0:
    // 0x8008BEC0: nop

    // 0x8008BEC4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008BEC8: mflo        $a0
    ctx->r4 = lo;
    // 0x8008BECC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8008BED0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8008BED4: beq         $v1, $v0, L_8008BF04
    if (ctx->r3 == ctx->r2) {
        // 0x8008BED8: srl         $a0, $a0, 15
        ctx->r4 = S32(U32(ctx->r4) >> 15);
            goto L_8008BF04;
    }
    // 0x8008BED8: srl         $a0, $a0, 15
    ctx->r4 = S32(U32(ctx->r4) >> 15);
    // 0x8008BEDC: nop

    // 0x8008BEE0: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008BEE4: mflo        $v1
    ctx->r3 = lo;
    // 0x8008BEE8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8008BEEC: nop

    // 0x8008BEF0: divu        $zero, $v1, $v0
    lo = S32(U32(ctx->r3) / U32(ctx->r2)); hi = S32(U32(ctx->r3) % U32(ctx->r2));
    // 0x8008BEF4: bne         $v0, $zero, L_8008BF00
    if (ctx->r2 != 0) {
        // 0x8008BEF8: nop
    
            goto L_8008BF00;
    }
    // 0x8008BEF8: nop

    // 0x8008BEFC: break       7
    do_break(2148056828);
L_8008BF00:
    // 0x8008BF00: mflo        $a0
    ctx->r4 = lo;
L_8008BF04:
    // 0x8008BF04: lhu         $v0, 0xA0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA0);
    // 0x8008BF08: nop

    // 0x8008BF0C: beq         $a0, $v0, L_8008BF40
    if (ctx->r4 == ctx->r2) {
        // 0x8008BF10: sll         $a1, $a0, 16
        ctx->r5 = S32(ctx->r4 << 16);
            goto L_8008BF40;
    }
    // 0x8008BF10: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x8008BF14: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8008BF18: sh          $a0, 0xA0($s0)
    MEM_H(0XA0, ctx->r16) = ctx->r4;
    // 0x8008BF1C: sll         $a0, $s1, 3
    ctx->r4 = S32(ctx->r17 << 3);
    // 0x8008BF20: subu        $a0, $a0, $s1
    ctx->r4 = SUB32(ctx->r4, ctx->r17);
    // 0x8008BF24: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008BF28: lw          $v0, 0x4F88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F88);
    // 0x8008BF2C: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008BF30: lw          $a2, 0x4F98($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4F98);
    // 0x8008BF34: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8008BF38: jal         0x800916E0
    // 0x8008BF3C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800916E0_6CAE0(rdram, ctx);
        goto after_0;
    // 0x8008BF3C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
L_8008BF40:
    // 0x8008BF40: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x8008BF44: lh          $v1, 0xB0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XB0);
    // 0x8008BF48: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008BF4C: mflo        $v0
    ctx->r2 = lo;
    // 0x8008BF50: lbu         $v1, 0xBE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XBE);
    // 0x8008BF54: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8008BF58: andi        $a0, $v0, 0x7F
    ctx->r4 = ctx->r2 & 0X7F;
    // 0x8008BF5C: beq         $a0, $v1, L_8008BF84
    if (ctx->r4 == ctx->r3) {
        // 0x8008BF60: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8008BF84;
    }
    // 0x8008BF60: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8008BF64: sll         $a0, $s1, 3
    ctx->r4 = S32(ctx->r17 << 3);
    // 0x8008BF68: sb          $a1, 0xBE($s0)
    MEM_B(0XBE, ctx->r16) = ctx->r5;
    // 0x8008BF6C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008BF70: lw          $v0, 0x4F88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F88);
    // 0x8008BF74: subu        $a0, $a0, $s1
    ctx->r4 = SUB32(ctx->r4, ctx->r17);
    // 0x8008BF78: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8008BF7C: jal         0x800915C0
    // 0x8008BF80: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800915C0_6C9C0(rdram, ctx);
        goto after_1;
    // 0x8008BF80: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
L_8008BF84:
    // 0x8008BF84: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008BF88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008BF8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008BF90: jr          $ra
    // 0x8008BF94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008BF94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008E440_69840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E440: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008E444: lw          $v0, -0x11E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X11E0);
    // 0x8008E448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E44C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008E450: beq         $v0, $zero, L_8008E48C
    if (ctx->r2 == 0) {
        // 0x8008E454: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8008E48C;
    }
    // 0x8008E454: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8008E458: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8008E45C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008E460: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8008E464: jal         0x8008E0C0
    // 0x8008E468: lw          $a0, -0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X11DC);
    func_8008E0C0_694C0(rdram, ctx);
        goto after_0;
    // 0x8008E468: lw          $a0, -0x11DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X11DC);
    after_0:
    // 0x8008E46C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8008E470: lw          $v0, 0xB30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB30);
    // 0x8008E474: lw          $a2, 0x34($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X34);
    // 0x8008E478: lw          $a0, 0x20($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X20);
    // 0x8008E47C: jal         0x800982D4
    // 0x8008E480: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    alFxParam(rdram, ctx);
        goto after_1;
    // 0x8008E480: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8008E484: j           L_8008E490
    // 0x8008E488: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008E490;
    // 0x8008E488: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008E48C:
    // 0x8008E48C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008E490:
    // 0x8008E490: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8008E494: jr          $ra
    // 0x8008E498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008E498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E49C: nop

;}
RECOMP_FUNC void func_8007BF08_57308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007BF08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007BF0C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8007BF10: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8007BF14: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007BF18: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8007BF1C: addiu       $v1, $v1, -0x2864
    ctx->r3 = ADD32(ctx->r3, -0X2864);
    // 0x8007BF20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007BF24: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8007BF28: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x8007BF2C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8007BF30: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x8007BF34: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x8007BF38: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x8007BF3C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8007BF40: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x8007BF44: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8007BF48: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x8007BF4C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8007BF50: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8007BF54: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x8007BF58: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8007BF5C: jal         0x80027388
    // 0x8007BF60: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    Overlay_Loader(rdram, ctx);
        goto after_0;
    // 0x8007BF60: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    after_0:
    // 0x8007BF64: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8007BF68: jr          $ra
    // 0x8007BF6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8007BF6C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800354A8_108A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800354A8: jr          $ra
    // 0x800354AC: nop

    TRACE_RETURN()
    return;
    // 0x800354AC: nop

;}
RECOMP_FUNC void func_8005D240_38640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005D240: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005D244: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005D248: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005D24C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8005D250: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8005D254: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8005D258: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8005D25C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8005D260: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005D264: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005D268: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005D26C: sb          $v0, -0xC5C($at)
    MEM_B(-0XC5C, ctx->r1) = ctx->r2;
    // 0x8005D270: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005D274: sw          $zero, 0x5454($at)
    MEM_W(0X5454, ctx->r1) = 0;
    // 0x8005D278: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005D27C: sb          $zero, -0x3BC6($at)
    MEM_B(-0X3BC6, ctx->r1) = 0;
    // 0x8005D280: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005D284: sb          $zero, -0x3BC5($at)
    MEM_B(-0X3BC5, ctx->r1) = 0;
    // 0x8005D288: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005D28C: jal         0x80048C10
    // 0x8005D290: sb          $zero, -0x3B96($at)
    MEM_B(-0X3B96, ctx->r1) = 0;
    func_80048C10_24010(rdram, ctx);
        goto after_0;
    // 0x8005D290: sb          $zero, -0x3B96($at)
    MEM_B(-0X3B96, ctx->r1) = 0;
    after_0:
    // 0x8005D294: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8005D298: lbu         $v0, -0x26AA($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X26AA);
    // 0x8005D29C: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8005D2A0: addiu       $s0, $s0, 0x5448
    ctx->r16 = ADD32(ctx->r16, 0X5448);
    // 0x8005D2A4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8005D2A8: bne         $v0, $zero, L_8005D39C
    if (ctx->r2 != 0) {
        // 0x8005D2AC: nop
    
            goto L_8005D39C;
    }
    // 0x8005D2AC: nop

    // 0x8005D2B0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x8005D2B4: jal         0x80036340
    // 0x8005D2B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80036340_11740(rdram, ctx);
        goto after_1;
    // 0x8005D2B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8005D2BC: addiu       $s6, $zero, 0x9
    ctx->r22 = ADD32(0, 0X9);
    // 0x8005D2C0: addiu       $s5, $zero, 0x2C
    ctx->r21 = ADD32(0, 0X2C);
    // 0x8005D2C4: addiu       $s2, $zero, 0x80
    ctx->r18 = ADD32(0, 0X80);
    // 0x8005D2C8: addiu       $s4, $zero, 0x20
    ctx->r20 = ADD32(0, 0X20);
    // 0x8005D2CC: addiu       $s3, $zero, 0x11F
    ctx->r19 = ADD32(0, 0X11F);
    // 0x8005D2D0: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8005D2D4:
    // 0x8005D2D4: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8005D2D8: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8005D2DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005D2E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005D2E4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8005D2E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8005D2EC: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    // 0x8005D2F0: sb          $s5, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r21;
    // 0x8005D2F4: jal         0x80030284
    // 0x8005D2F8: sh          $s2, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r18;
    func_80030284_B684(rdram, ctx);
        goto after_2;
    // 0x8005D2F8: sh          $s2, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r18;
    after_2:
    // 0x8005D2FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005D300: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    // 0x8005D304: jal         0x8003026C
    // 0x8005D308: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_3;
    // 0x8005D308: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_3:
    // 0x8005D30C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005D310: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8005D314: sb          $s1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r17;
    // 0x8005D318: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8005D31C: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005D320: sb          $s1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r17;
    // 0x8005D324: sb          $s1, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r17;
    // 0x8005D328: sb          $s1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r17;
    // 0x8005D32C: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    // 0x8005D330: sb          $s2, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r18;
    // 0x8005D334: sb          $s2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r18;
    // 0x8005D338: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005D33C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005D340: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005D344: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005D348: sh          $s4, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r20;
    // 0x8005D34C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8005D350: sh          $s3, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r19;
    // 0x8005D354: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
    // 0x8005D358: sh          $s4, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r20;
    // 0x8005D35C: sh          $s1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r17;
    // 0x8005D360: sh          $s3, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r19;
    // 0x8005D364: sh          $s1, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r17;
    // 0x8005D368: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005D36C: jal         0x800302C8
    // 0x8005D370: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    func_800302C8_B6C8(rdram, ctx);
        goto after_4;
    // 0x8005D370: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    after_4:
    // 0x8005D374: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005D378: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x8005D37C: jal         0x80029114
    // 0x8005D380: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_5;
    // 0x8005D380: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8005D384: j           L_8005D2D4
    // 0x8005D388: nop

        goto L_8005D2D4;
    // 0x8005D388: nop

L_8005D38C:
    // 0x8005D38C: jal         0x8005CE58
    // 0x8005D390: nop

    func_8005CE58_38258(rdram, ctx);
        goto after_6;
    // 0x8005D390: nop

    after_6:
    // 0x8005D394: jal         0x80029114
    // 0x8005D398: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_7;
    // 0x8005D398: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
L_8005D39C:
    // 0x8005D39C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005D3A0: lh          $v0, -0x12FC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X12FC);
    // 0x8005D3A4: bne         $v0, $zero, L_8005D38C
    if (ctx->r2 != 0) {
        // 0x8005D3A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005D38C;
    }
    // 0x8005D3A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005D3AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005D3B0: sb          $v0, -0x3BC4($at)
    MEM_B(-0X3BC4, ctx->r1) = ctx->r2;
    // 0x8005D3B4: jal         0x80061380
    // 0x8005D3B8: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    func_80061380_3C780(rdram, ctx);
        goto after_8;
    // 0x8005D3B8: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    after_8:
    // 0x8005D3BC: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x8005D3C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005D3C4: sb          $zero, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = 0;
    // 0x8005D3C8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005D3CC: sb          $zero, -0x35A6($at)
    MEM_B(-0X35A6, ctx->r1) = 0;
    // 0x8005D3D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005D3D4: sb          $zero, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = 0;
    // 0x8005D3D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005D3DC: sb          $zero, -0x35A8($at)
    MEM_B(-0X35A8, ctx->r1) = 0;
    // 0x8005D3E0: jal         0x80036340
    // 0x8005D3E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80036340_11740(rdram, ctx);
        goto after_9;
    // 0x8005D3E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_9:
    // 0x8005D3E8: jal         0x8002A2AC
    // 0x8005D3EC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    func_8002A2AC_56AC(rdram, ctx);
        goto after_10;
    // 0x8005D3EC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    after_10:
    // 0x8005D3F0: jal         0x80061724
    // 0x8005D3F4: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    func_80061724_3CB24(rdram, ctx);
        goto after_11;
    // 0x8005D3F4: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    after_11:
    // 0x8005D3F8: jal         0x80061090
    // 0x8005D3FC: nop

    func_80061090_3C490(rdram, ctx);
        goto after_12;
    // 0x8005D3FC: nop

    after_12:
    // 0x8005D400: jal         0x8004B5B0
    // 0x8005D404: nop

    func_8004B5B0_269B0(rdram, ctx);
        goto after_13;
    // 0x8005D404: nop

    after_13:
    // 0x8005D408: jal         0x80036BC4
    // 0x8005D40C: nop

    func_80036BC4_11FC4(rdram, ctx);
        goto after_14;
    // 0x8005D40C: nop

    after_14:
    // 0x8005D410: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8005D414: addiu       $s1, $s1, -0xC66
    ctx->r17 = ADD32(ctx->r17, -0XC66);
    // 0x8005D418: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8005D41C: addiu       $s2, $s2, -0x12F4
    ctx->r18 = ADD32(ctx->r18, -0X12F4);
L_8005D420:
    // 0x8005D420: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8005D424: bne         $v0, $s5, L_8005D47C
    if (ctx->r2 != ctx->r21) {
        // 0x8005D428: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8005D47C;
    }
    // 0x8005D428: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005D42C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005D430: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005D434: andi        $v0, $v0, 0x6008
    ctx->r2 = ctx->r2 & 0X6008;
    // 0x8005D438: beq         $v0, $zero, L_8005D474
    if (ctx->r2 == 0) {
        // 0x8005D43C: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_8005D474;
    }
    // 0x8005D43C: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x8005D440: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8005D444: jal         0x8002A2F8
    // 0x8005D448: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_15;
    // 0x8005D448: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
    // 0x8005D44C: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8005D450: bgtzl       $v0, L_8005D470
    if (SIGNED(ctx->r2) > 0) {
        // 0x8005D454: sb          $s4, 0x1($s0)
        MEM_B(0X1, ctx->r16) = ctx->r20;
            goto L_8005D470;
    }
    goto skip_0;
    // 0x8005D454: sb          $s4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r20;
    skip_0:
    // 0x8005D458: bnel        $v0, $zero, L_8005D470
    if (ctx->r2 != 0) {
        // 0x8005D45C: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_8005D470;
    }
    goto skip_1;
    // 0x8005D45C: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_1:
    // 0x8005D460: lh          $v0, -0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, -0X2);
    // 0x8005D464: bnel        $v0, $zero, L_8005D470
    if (ctx->r2 != 0) {
        // 0x8005D468: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_8005D470;
    }
    goto skip_2;
    // 0x8005D468: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_2:
    // 0x8005D46C: sb          $s4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r20;
L_8005D470:
    // 0x8005D470: sb          $s3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r19;
L_8005D474:
    // 0x8005D474: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8005D478: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8005D47C:
    // 0x8005D47C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8005D480: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8005D484: jalr        $v0
    // 0x8005D488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_16;
    // 0x8005D488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x8005D48C: jal         0x8004F6DC
    // 0x8005D490: nop

    func_8004F6DC_2AADC(rdram, ctx);
        goto after_17;
    // 0x8005D490: nop

    after_17:
    // 0x8005D494: jal         0x80029114
    // 0x8005D498: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_18;
    // 0x8005D498: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_18:
    // 0x8005D49C: j           L_8005D420
    // 0x8005D4A0: nop

        goto L_8005D420;
    // 0x8005D4A0: nop

    // 0x8005D4A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005D4A8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8005D4AC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8005D4B0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8005D4B4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8005D4B8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8005D4BC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005D4C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005D4C4: jr          $ra
    // 0x8005D4C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8005D4C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alMainBusParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097C80: lw          $a3, 0x1C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X1C);
    // 0x80097C84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80097C88: bne         $a1, $v0, L_80097CA8
    if (ctx->r5 != ctx->r2) {
        // 0x80097C8C: nop
    
            goto L_80097CA8;
    }
    // 0x80097C8C: nop

    // 0x80097C90: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80097C94: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80097C98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80097C9C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80097CA0: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x80097CA4: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_80097CA8:
    // 0x80097CA8: jr          $ra
    // 0x80097CAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80097CAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_8002CB20_7F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002CB20: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8002CB24: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002CB28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002CB2C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002CB30: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8002CB34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002CB38: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002CB3C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8002CB40: jal         0x8009A3B4
    // 0x8002CB44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002CB44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8002CB48: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x8002CB4C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8002CB50: lhu         $v1, -0x77B0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X77B0);
    // 0x8002CB54: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8002CB58: sh          $v1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r3;
    // 0x8002CB5C: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002CB60: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8002CB64: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002CB68: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8002CB6C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002CB70: sb          $v0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r2;
    // 0x8002CB74: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002CB78: sb          $v0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r2;
    // 0x8002CB7C: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002CB80: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8002CB84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002CB88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002CB8C: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8002CB90: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002CB94: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8002CB98: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002CB9C: lbu         $v1, 0x11($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X11);
    // 0x8002CBA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002CBA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002CBA8: sb          $v0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r2;
    // 0x8002CBAC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002CBB0: sb          $v0, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r2;
    // 0x8002CBB4: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002CBB8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8002CBBC: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002CBC0: lhu         $v1, 0x12($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12);
    // 0x8002CBC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002CBC8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002CBCC: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8002CBD0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002CBD4: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x8002CBD8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002CBDC: lbu         $v1, 0x13($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13);
    // 0x8002CBE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002CBE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002CBE8: sb          $v0, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r2;
    // 0x8002CBEC: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002CBF0: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8002CBF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002CBF8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002CBFC: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8002CC00: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002CC04: lhu         $v1, 0x12($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12);
    // 0x8002CC08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002CC0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002CC10: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8002CC14: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002CC18: lbu         $v1, 0x11($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X11);
    // 0x8002CC1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002CC20: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002CC24: sb          $v0, 0x34($sp)
    MEM_B(0X34, ctx->r29) = ctx->r2;
    // 0x8002CC28: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002CC2C: lbu         $v1, 0x13($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X13);
    // 0x8002CC30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002CC34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002CC38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002CC3C: jal         0x8002DFA8
    // 0x8002CC40: sb          $v0, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r2;
    func_8002DFA8_93A8(rdram, ctx);
        goto after_1;
    // 0x8002CC40: sb          $v0, 0x35($sp)
    MEM_B(0X35, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002CC44: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8002CC48: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002CC4C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002CC50: jr          $ra
    // 0x8002CC54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8002CC54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void _timeToSamples(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800992EC: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x800992F0: nop

    // 0x800992F4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800992F8: lwc1        $f2, 0x44($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X44);
    // 0x800992FC: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80099300: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80099304: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099308: ldc1        $f2, 0x3180($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3180);
    // 0x8009930C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80099310: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80099314: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099318: ldc1        $f2, 0x3188($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3188);
    // 0x8009931C: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80099320: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80099324: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80099328: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x8009932C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x80099330: jr          $ra
    // 0x80099334: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80099334: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
;}
RECOMP_FUNC void func_80092184_6D584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092184: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80092188: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8009218C: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x80092190: addiu       $s1, $s1, 0x5124
    ctx->r17 = ADD32(ctx->r17, 0X5124);
    // 0x80092194: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80092198: addiu       $s4, $zero, 0x29A
    ctx->r20 = ADD32(0, 0X29A);
    // 0x8009219C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800921A0: addiu       $s3, $zero, 0x29D
    ctx->r19 = ADD32(0, 0X29D);
    // 0x800921A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800921A8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800921AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800921B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800921B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800921B8: sw          $zero, -0xECC($at)
    MEM_W(-0XECC, ctx->r1) = 0;
L_800921BC:
    // 0x800921BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_800921C0:
    // 0x800921C0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x800921C4: jal         0x8009A5E0
    // 0x800921C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800921C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800921CC: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x800921D0: beq         $v0, $s4, L_800921E8
    if (ctx->r2 == ctx->r20) {
        // 0x800921D4: nop
    
            goto L_800921E8;
    }
    // 0x800921D4: nop

    // 0x800921D8: beq         $v0, $s3, L_80092250
    if (ctx->r2 == ctx->r19) {
        // 0x800921DC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80092250;
    }
    // 0x800921DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800921E0: j           L_800921C0
    // 0x800921E4: nop

        goto L_800921C0;
    // 0x800921E4: nop

L_800921E8:
    // 0x800921E8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800921EC: lw          $v0, -0xECC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XECC);
    // 0x800921F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800921F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800921F8: sw          $v0, -0xECC($at)
    MEM_W(-0XECC, ctx->r1) = ctx->r2;
    // 0x800921FC: jal         0x8009241C
    // 0x80092200: addiu       $a0, $s1, -0x74
    ctx->r4 = ADD32(ctx->r17, -0X74);
    func_8009241C_6D81C(rdram, ctx);
        goto after_1;
    // 0x80092200: addiu       $a0, $s1, -0x74
    ctx->r4 = ADD32(ctx->r17, -0X74);
    after_1:
    // 0x80092204: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80092208: lbu         $v0, 0x5474($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5474);
    // 0x8009220C: beql        $v0, $zero, L_800921C0
    if (ctx->r2 == 0) {
        // 0x80092210: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_800921C0;
    }
    goto skip_0;
    // 0x80092210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x80092214: beq         $s0, $zero, L_80092224
    if (ctx->r16 == 0) {
        // 0x80092218: ori         $v0, $v0, 0x2
        ctx->r2 = ctx->r2 | 0X2;
            goto L_80092224;
    }
    // 0x80092218: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8009221C: j           L_800921BC
    // 0x80092220: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_800921BC;
    // 0x80092220: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_80092224:
    // 0x80092224: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80092228: jal         0x8009F5B0
    // 0x8009222C: sb          $v0, 0x5474($at)
    MEM_B(0X5474, ctx->r1) = ctx->r2;
    osAfterPreNMI(rdram, ctx);
        goto after_2;
    // 0x8009222C: sb          $v0, 0x5474($at)
    MEM_B(0X5474, ctx->r1) = ctx->r2;
    after_2:
    // 0x80092230: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80092234: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80092238: jal         0x8009C830
    // 0x8009223C: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_3;
    // 0x8009223C: nop

    after_3:
    // 0x80092240: jal         0x8009CBE0
    // 0x80092244: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_4;
    // 0x80092244: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80092248: j           L_800921C0
    // 0x8009224C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_800921C0;
    // 0x8009224C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80092250:
    // 0x80092250: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80092254: sb          $s2, 0x5474($at)
    MEM_B(0X5474, ctx->r1) = ctx->r18;
    // 0x80092258: jal         0x8009241C
    // 0x8009225C: addiu       $a0, $s1, -0x72
    ctx->r4 = ADD32(ctx->r17, -0X72);
    func_8009241C_6D81C(rdram, ctx);
        goto after_5;
    // 0x8009225C: addiu       $a0, $s1, -0x72
    ctx->r4 = ADD32(ctx->r17, -0X72);
    after_5:
    // 0x80092260: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80092264: lw          $v0, -0xEE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEE0);
    // 0x80092268: beq         $v0, $zero, L_80092278
    if (ctx->r2 == 0) {
        // 0x8009226C: nop
    
            goto L_80092278;
    }
    // 0x8009226C: nop

    // 0x80092270: jalr        $v0
    // 0x80092274: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80092274: nop

    after_6:
L_80092278:
    // 0x80092278: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8009227C: lbu         $v0, 0x572C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X572C);
    // 0x80092280: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80092284: lw          $v1, 0x5728($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5728);
    // 0x80092288: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8009228C: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x80092290: bne         $v1, $zero, L_8009229C
    if (ctx->r3 != 0) {
        // 0x80092294: nop
    
            goto L_8009229C;
    }
    // 0x80092294: nop

    // 0x80092298: break       7
    do_break(2148082328);
L_8009229C:
    // 0x8009229C: mflo        $v0
    ctx->r2 = lo;
    // 0x800922A0: nop

    // 0x800922A4: nop

    // 0x800922A8: j           L_800921BC
    // 0x800922AC: addiu       $s0, $v0, -0x3
    ctx->r16 = ADD32(ctx->r2, -0X3);
        goto L_800921BC;
    // 0x800922AC: addiu       $s0, $v0, -0x3
    ctx->r16 = ADD32(ctx->r2, -0X3);
    // 0x800922B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800922B4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800922B8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800922BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800922C0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800922C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800922C8: jr          $ra
    // 0x800922CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800922CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void osScRemoveClient(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009AD40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009AD44: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8009AD48: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8009AD4C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8009AD50: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8009AD54: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8009AD58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8009AD5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009AD60: lw          $s0, 0x260($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X260);
    // 0x8009AD64: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8009AD68: jal         0x80094460
    // 0x8009AD6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8009AD6C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8009AD70: beq         $s0, $zero, L_8009ADAC
    if (ctx->r16 == 0) {
        // 0x8009AD74: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8009ADAC;
    }
    // 0x8009AD74: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_8009AD78:
    // 0x8009AD78: bnel        $s0, $s3, L_8009ADA0
    if (ctx->r16 != ctx->r19) {
        // 0x8009AD7C: addu        $s1, $s0, $zero
        ctx->r17 = ADD32(ctx->r16, 0);
            goto L_8009ADA0;
    }
    goto skip_0;
    // 0x8009AD7C: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8009AD80: beq         $s1, $zero, L_8009AD94
    if (ctx->r17 == 0) {
        // 0x8009AD84: nop
    
            goto L_8009AD94;
    }
    // 0x8009AD84: nop

    // 0x8009AD88: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8009AD8C: j           L_8009ADAC
    // 0x8009AD90: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
        goto L_8009ADAC;
    // 0x8009AD90: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_8009AD94:
    // 0x8009AD94: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8009AD98: j           L_8009ADAC
    // 0x8009AD9C: sw          $v0, 0x260($s2)
    MEM_W(0X260, ctx->r18) = ctx->r2;
        goto L_8009ADAC;
    // 0x8009AD9C: sw          $v0, 0x260($s2)
    MEM_W(0X260, ctx->r18) = ctx->r2;
L_8009ADA0:
    // 0x8009ADA0: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8009ADA4: bne         $s0, $zero, L_8009AD78
    if (ctx->r16 != 0) {
        // 0x8009ADA8: nop
    
            goto L_8009AD78;
    }
    // 0x8009ADA8: nop

L_8009ADAC:
    // 0x8009ADAC: jal         0x80094460
    // 0x8009ADB0: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8009ADB0: nop

    after_1:
    // 0x8009ADB4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8009ADB8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8009ADBC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8009ADC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009ADC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009ADC8: jr          $ra
    // 0x8009ADCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8009ADCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80058B4C_33F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80058B4C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80058B50: lh          $a0, 0x8($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X8);
    // 0x80058B54: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x80058B58: lh          $v1, 0x14($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X14);
    // 0x80058B5C: subu        $t0, $a0, $v0
    ctx->r8 = SUB32(ctx->r4, ctx->r2);
    // 0x80058B60: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x80058B64: sltu        $v0, $a2, $t0
    ctx->r2 = ctx->r6 < ctx->r8 ? 1 : 0;
    // 0x80058B68: beq         $v0, $zero, L_80058BF0
    if (ctx->r2 == 0) {
        // 0x80058B6C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058BF0;
    }
    // 0x80058B6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80058B70: lh          $a0, 0xC($a1)
    ctx->r4 = MEM_H(ctx->r5, 0XC);
    // 0x80058B74: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x80058B78: lh          $v1, 0x18($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X18);
    // 0x80058B7C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80058B80: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80058B84: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80058B88: beql        $v0, $zero, L_80058BF0
    if (ctx->r2 == 0) {
        // 0x80058B8C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058BF0;
    }
    goto skip_0;
    // 0x80058B8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80058B90: beq         $a2, $zero, L_80058BF0
    if (ctx->r6 == 0) {
        // 0x80058B94: addiu       $v0, $zero, -0x7F
        ctx->r2 = ADD32(0, -0X7F);
            goto L_80058BF0;
    }
    // 0x80058B94: addiu       $v0, $zero, -0x7F
    ctx->r2 = ADD32(0, -0X7F);
    // 0x80058B98: nop

    // 0x80058B9C: mult        $v1, $t0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80058BA0: mflo        $v0
    ctx->r2 = lo;
    // 0x80058BA4: nop

    // 0x80058BA8: nop

    // 0x80058BAC: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80058BB0: bne         $a2, $zero, L_80058BBC
    if (ctx->r6 != 0) {
        // 0x80058BB4: nop
    
            goto L_80058BBC;
    }
    // 0x80058BB4: nop

    // 0x80058BB8: break       7
    do_break(2147847096);
L_80058BBC:
    // 0x80058BBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80058BC0: bne         $a2, $at, L_80058BD4
    if (ctx->r6 != ctx->r1) {
        // 0x80058BC4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80058BD4;
    }
    // 0x80058BC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80058BC8: bne         $v0, $at, L_80058BD4
    if (ctx->r2 != ctx->r1) {
        // 0x80058BCC: nop
    
            goto L_80058BD4;
    }
    // 0x80058BCC: nop

    // 0x80058BD0: break       6
    do_break(2147847120);
L_80058BD4:
    // 0x80058BD4: mflo        $v0
    ctx->r2 = lo;
    // 0x80058BD8: addiu       $v1, $zero, -0x7F
    ctx->r3 = ADD32(0, -0X7F);
    // 0x80058BDC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80058BE0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80058BE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80058BE8: addiu       $v1, $zero, -0x80
    ctx->r3 = ADD32(0, -0X80);
    // 0x80058BEC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_80058BF0:
    // 0x80058BF0: jr          $ra
    // 0x80058BF4: nop

    TRACE_RETURN()
    return;
    // 0x80058BF4: nop

;}
RECOMP_FUNC void func_80076A3C_51E3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80076A3C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80076A40: lw          $v0, -0x3C0C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C0C);
    // 0x80076A44: lui         $v1, 0x8888
    ctx->r3 = S32(0X8888 << 16);
    // 0x80076A48: ori         $v1, $v1, 0x8889
    ctx->r3 = ctx->r3 | 0X8889;
    // 0x80076A4C: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076A50: mfhi        $v0
    ctx->r2 = hi;
    // 0x80076A54: srl         $a0, $v0, 4
    ctx->r4 = S32(U32(ctx->r2) >> 4);
    // 0x80076A58: nop

    // 0x80076A5C: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076A60: mfhi        $v0
    ctx->r2 = hi;
    // 0x80076A64: lui         $a3, 0xCCCC
    ctx->r7 = S32(0XCCCC << 16);
    // 0x80076A68: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80076A6C: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076A70: srl         $a1, $v0, 5
    ctx->r5 = S32(U32(ctx->r2) >> 5);
    // 0x80076A74: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x80076A78: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80076A7C: mfhi        $a2
    ctx->r6 = hi;
    // 0x80076A80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076A84: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80076A88: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076A8C: mfhi        $t1
    ctx->r9 = hi;
    // 0x80076A90: nop

    // 0x80076A94: nop

    // 0x80076A98: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076A9C: mfhi        $v0
    ctx->r2 = hi;
    // 0x80076AA0: nop

    // 0x80076AA4: nop

    // 0x80076AA8: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076AAC: srl         $t0, $a2, 3
    ctx->r8 = S32(U32(ctx->r6) >> 3);
    // 0x80076AB0: srl         $a2, $v0, 5
    ctx->r6 = S32(U32(ctx->r2) >> 5);
    // 0x80076AB4: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x80076AB8: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80076ABC: mfhi        $t2
    ctx->r10 = hi;
    // 0x80076AC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076AC4: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x80076AC8: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076ACC: sll         $v1, $t0, 2
    ctx->r3 = S32(ctx->r8 << 2);
    // 0x80076AD0: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80076AD4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80076AD8: subu        $t0, $a0, $v1
    ctx->r8 = SUB32(ctx->r4, ctx->r3);
    // 0x80076ADC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076AE0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076AE4: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80076AE8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80076AEC: sb          $t0, 0xA99($at)
    MEM_B(0XA99, ctx->r1) = ctx->r8;
    // 0x80076AF0: srl         $t0, $t1, 3
    ctx->r8 = S32(U32(ctx->r9) >> 3);
    // 0x80076AF4: mfhi        $t3
    ctx->r11 = hi;
    // 0x80076AF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076AFC: sb          $v0, 0x2D97($at)
    MEM_B(0X2D97, ctx->r1) = ctx->r2;
    // 0x80076B00: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80076B04: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80076B08: lbu         $v1, 0x2D98($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2D98);
    // 0x80076B0C: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076B10: lui         $a0, 0x51EB
    ctx->r4 = S32(0X51EB << 16);
    // 0x80076B14: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80076B18: sb          $t0, 0xA98($at)
    MEM_B(0XA98, ctx->r1) = ctx->r8;
    // 0x80076B1C: srl         $t0, $t2, 3
    ctx->r8 = S32(U32(ctx->r10) >> 3);
    // 0x80076B20: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x80076B24: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076B28: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076B2C: subu        $t0, $a1, $v0
    ctx->r8 = SUB32(ctx->r5, ctx->r2);
    // 0x80076B30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076B34: sb          $v1, 0x2D96($at)
    MEM_B(0X2D96, ctx->r1) = ctx->r3;
    // 0x80076B38: mfhi        $t1
    ctx->r9 = hi;
    // 0x80076B3C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076B40: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076B44: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80076B48: ori         $a0, $a0, 0x851F
    ctx->r4 = ctx->r4 | 0X851F;
    // 0x80076B4C: multu       $a2, $a0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076B50: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80076B54: sb          $t0, 0xA97($at)
    MEM_B(0XA97, ctx->r1) = ctx->r8;
    // 0x80076B58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076B5C: sb          $v0, 0x2D94($at)
    MEM_B(0X2D94, ctx->r1) = ctx->r2;
    // 0x80076B60: srl         $t0, $t3, 3
    ctx->r8 = S32(U32(ctx->r11) >> 3);
    // 0x80076B64: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80076B68: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80076B6C: lbu         $a1, 0x2D98($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2D98);
    // 0x80076B70: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80076B74: sb          $t0, 0xA96($at)
    MEM_B(0XA96, ctx->r1) = ctx->r8;
    // 0x80076B78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076B7C: sb          $a1, 0x2D93($at)
    MEM_B(0X2D93, ctx->r1) = ctx->r5;
    // 0x80076B80: srl         $t0, $t1, 3
    ctx->r8 = S32(U32(ctx->r9) >> 3);
    // 0x80076B84: mfhi        $v1
    ctx->r3 = hi;
    // 0x80076B88: srl         $v1, $v1, 5
    ctx->r3 = S32(U32(ctx->r3) >> 5);
    // 0x80076B8C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80076B90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80076B94: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80076B98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80076B9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076BA0: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x80076BA4: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076BA8: sll         $a0, $t0, 2
    ctx->r4 = S32(ctx->r8 << 2);
    // 0x80076BAC: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80076BB0: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80076BB4: subu        $t0, $a2, $a0
    ctx->r8 = SUB32(ctx->r6, ctx->r4);
    // 0x80076BB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076BBC: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076BC0: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80076BC4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80076BC8: sb          $t0, 0xA95($at)
    MEM_B(0XA95, ctx->r1) = ctx->r8;
    // 0x80076BCC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076BD0: sb          $v0, 0x2D91($at)
    MEM_B(0X2D91, ctx->r1) = ctx->r2;
    // 0x80076BD4: mfhi        $v1
    ctx->r3 = hi;
    // 0x80076BD8: srl         $t0, $v1, 3
    ctx->r8 = S32(U32(ctx->r3) >> 3);
    // 0x80076BDC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076BE0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076BE4: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80076BE8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80076BEC: sb          $t0, 0xA94($at)
    MEM_B(0XA94, ctx->r1) = ctx->r8;
    // 0x80076BF0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076BF4: jr          $ra
    // 0x80076BF8: sb          $v0, 0x2D90($at)
    MEM_B(0X2D90, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80076BF8: sb          $v0, 0x2D90($at)
    MEM_B(0X2D90, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80047C8C_2308C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047C8C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80047C90: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80047C94: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80047C98: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80047C9C: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80047CA0: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x80047CA4: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80047CA8: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x80047CAC: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80047CB0: addiu       $s5, $zero, 0x7FFF
    ctx->r21 = ADD32(0, 0X7FFF);
    // 0x80047CB4: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80047CB8: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80047CBC: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80047CC0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80047CC4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80047CC8: bne         $fp, $zero, L_80047D54
    if (ctx->r30 != 0) {
        // 0x80047CCC: sw          $s0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r16;
            goto L_80047D54;
    }
    // 0x80047CCC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80047CD0: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x80047CD4: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x80047CD8: addiu       $s1, $s1, -0x2120
    ctx->r17 = ADD32(ctx->r17, -0X2120);
    // 0x80047CDC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80047CE0: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x80047CE4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80047CE8: sw          $v0, -0x211C($at)
    MEM_W(-0X211C, ctx->r1) = ctx->r2;
    // 0x80047CEC: lw          $v0, 0x24($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X24);
    // 0x80047CF0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80047CF4: sw          $v0, -0x2118($at)
    MEM_W(-0X2118, ctx->r1) = ctx->r2;
    // 0x80047CF8: lhu         $v0, 0x54($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X54);
    // 0x80047CFC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80047D00: sh          $v0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r2;
    // 0x80047D04: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x80047D08: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80047D0C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80047D10: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x80047D14: lhu         $v0, 0x58($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X58);
    // 0x80047D18: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80047D1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80047D20: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80047D24: jal         0x80031428
    // 0x80047D28: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    func_80031428_C828(rdram, ctx);
        goto after_0;
    // 0x80047D28: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    after_0:
    // 0x80047D2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80047D30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80047D34: jal         0x8004DD50
    // 0x80047D38: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_1;
    // 0x80047D38: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_1:
    // 0x80047D3C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80047D40: addiu       $a1, $a1, -0x7158
    ctx->r5 = ADD32(ctx->r5, -0X7158);
    // 0x80047D44: jal         0x8004DD04
    // 0x80047D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80047D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80047D4C: j           L_80047D6C
    // 0x80047D50: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
        goto L_80047D6C;
    // 0x80047D50: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_80047D54:
    // 0x80047D54: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80047D58: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
    // 0x80047D5C: addiu       $a1, $v1, 0x14
    ctx->r5 = ADD32(ctx->r3, 0X14);
    // 0x80047D60: jal         0x8009A3B4
    // 0x80047D64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80047D64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80047D68: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_80047D6C:
    // 0x80047D6C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80047D70: addiu       $s0, $s0, -0x2340
    ctx->r16 = ADD32(ctx->r16, -0X2340);
    // 0x80047D74: jal         0x8004DD04
    // 0x80047D78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x80047D78: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80047D7C: lw          $v0, 0x88($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X88);
    // 0x80047D80: lw          $s4, 0x0($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X0);
    // 0x80047D84: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x80047D88: beq         $v0, $zero, L_80047E80
    if (ctx->r2 == 0) {
        // 0x80047D8C: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80047E80;
    }
    // 0x80047D8C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80047D90: addu        $s6, $s0, $zero
    ctx->r22 = ADD32(ctx->r16, 0);
    // 0x80047D94: addiu       $s1, $s4, 0x8
    ctx->r17 = ADD32(ctx->r20, 0X8);
L_80047D98:
    // 0x80047D98: lhu         $v1, 0x0($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X0);
    // 0x80047D9C: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80047DA0: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80047DA4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80047DA8: lhu         $v0, -0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X6);
    // 0x80047DAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80047DB0: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80047DB4: lhu         $v1, 0x4($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X4);
    // 0x80047DB8: lhu         $v0, -0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X4);
    // 0x80047DBC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80047DC0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80047DC4: lhu         $v0, -0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X2);
    // 0x80047DC8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80047DCC: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x80047DD0: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x80047DD4: lhu         $a1, 0x4($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X4);
    // 0x80047DD8: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80047DDC: addiu       $t0, $t0, -0x35F0
    ctx->r8 = ADD32(ctx->r8, -0X35F0);
    // 0x80047DE0: andi        $v0, $a1, 0xF0
    ctx->r2 = ctx->r5 & 0XF0;
    // 0x80047DE4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x80047DE8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80047DEC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80047DF0: jalr        $v0
    // 0x80047DF4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80047DF4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_5:
    // 0x80047DF8: beql        $v0, $zero, L_80047E70
    if (ctx->r2 == 0) {
        // 0x80047DFC: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_80047E70;
    }
    goto skip_0;
    // 0x80047DFC: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    skip_0:
    // 0x80047E00: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x80047E04: addiu       $s0, $s3, 0x4
    ctx->r16 = ADD32(ctx->r19, 0X4);
L_80047E08:
    // 0x80047E08: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80047E0C: lhu         $v1, -0x233E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X233E);
    // 0x80047E10: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x80047E14: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80047E18: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80047E1C: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x80047E20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80047E24: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x80047E28: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x80047E2C: jal         0x8003FC30
    // 0x80047E30: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8003FC30_1B030(rdram, ctx);
        goto after_6;
    // 0x80047E30: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x80047E34: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x80047E38: slt         $v0, $a0, $s5
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80047E3C: beql        $v0, $zero, L_80047E60
    if (ctx->r2 == 0) {
        // 0x80047E40: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80047E60;
    }
    goto skip_1;
    // 0x80047E40: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_1:
    // 0x80047E44: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80047E48: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x80047E4C: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x80047E50: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80047E54: beql        $v0, $zero, L_80047E5C
    if (ctx->r2 == 0) {
        // 0x80047E58: addu        $s5, $a0, $zero
        ctx->r21 = ADD32(ctx->r4, 0);
            goto L_80047E5C;
    }
    goto skip_2;
    // 0x80047E58: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    skip_2:
L_80047E5C:
    // 0x80047E5C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80047E60:
    // 0x80047E60: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80047E64: bne         $s2, $zero, L_80047E08
    if (ctx->r18 != 0) {
        // 0x80047E68: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_80047E08;
    }
    // 0x80047E68: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80047E6C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
L_80047E70:
    // 0x80047E70: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80047E74: bne         $v0, $zero, L_80047D98
    if (ctx->r2 != 0) {
        // 0x80047E78: addiu       $s4, $s4, 0x10
        ctx->r20 = ADD32(ctx->r20, 0X10);
            goto L_80047D98;
    }
    // 0x80047E78: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x80047E7C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80047E80:
    // 0x80047E80: beq         $s5, $v0, L_80047E9C
    if (ctx->r21 == ctx->r2) {
        // 0x80047E84: addiu       $v1, $s5, -0x20
        ctx->r3 = ADD32(ctx->r21, -0X20);
            goto L_80047E9C;
    }
    // 0x80047E84: addiu       $v1, $s5, -0x20
    ctx->r3 = ADD32(ctx->r21, -0X20);
    // 0x80047E88: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80047E8C: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80047E90: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80047E94: beq         $v0, $zero, L_80047EA4
    if (ctx->r2 == 0) {
        // 0x80047E98: sll         $v0, $s5, 16
        ctx->r2 = S32(ctx->r21 << 16);
            goto L_80047EA4;
    }
    // 0x80047E98: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
L_80047E9C:
    // 0x80047E9C: j           L_80047EFC
    // 0x80047EA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80047EFC;
    // 0x80047EA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80047EA4:
    // 0x80047EA4: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x80047EA8: addiu       $s1, $s1, -0x211C
    ctx->r17 = ADD32(ctx->r17, -0X211C);
    // 0x80047EAC: bne         $fp, $zero, L_80047EF8
    if (ctx->r30 != 0) {
        // 0x80047EB0: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_80047EF8;
    }
    // 0x80047EB0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80047EB4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80047EB8: lhu         $v0, 0x40($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X40);
    // 0x80047EBC: lhu         $v1, 0x42($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X42);
    // 0x80047EC0: lhu         $a2, 0x44($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X44);
    // 0x80047EC4: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80047EC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80047ECC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80047ED0: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80047ED4: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x80047ED8: sh          $v0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r2;
    // 0x80047EDC: sh          $v1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r3;
    // 0x80047EE0: jal         0x80031600
    // 0x80047EE4: sh          $a2, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r6;
    func_80031600_CA00(rdram, ctx);
        goto after_7;
    // 0x80047EE4: sh          $a2, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r6;
    after_7:
    // 0x80047EE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80047EEC: addiu       $a1, $s1, -0x4
    ctx->r5 = ADD32(ctx->r17, -0X4);
    // 0x80047EF0: jal         0x8004DD50
    // 0x80047EF4: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    func_8004DD50_29150(rdram, ctx);
        goto after_8;
    // 0x80047EF4: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_8:
L_80047EF8:
    // 0x80047EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047EFC:
    // 0x80047EFC: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80047F00: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80047F04: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80047F08: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80047F0C: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80047F10: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80047F14: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80047F18: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80047F1C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80047F20: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80047F24: jr          $ra
    // 0x80047F28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x80047F28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_800702F0_4B6F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800702F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800702F4: addu        $t8, $a0, $zero
    ctx->r24 = ADD32(ctx->r4, 0);
    // 0x800702F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800702FC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80070300: addiu       $v0, $v0, 0x3010
    ctx->r2 = ADD32(ctx->r2, 0X3010);
    // 0x80070304: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x80070308: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8007030C: addu        $v1, $t8, $zero
    ctx->r3 = ADD32(ctx->r24, 0);
    // 0x80070310: sw          $s6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r22;
    // 0x80070314: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x80070318: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x8007031C: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x80070320: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x80070324: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x80070328: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
L_8007032C:
    // 0x8007032C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80070330: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80070334: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80070338: sh          $v0, 0x124($v1)
    MEM_H(0X124, ctx->r3) = ctx->r2;
    // 0x8007033C: sltiu       $v0, $a0, 0x10
    ctx->r2 = ctx->r4 < 0X10 ? 1 : 0;
    // 0x80070340: bne         $v0, $zero, L_8007032C
    if (ctx->r2 != 0) {
        // 0x80070344: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8007032C;
    }
    // 0x80070344: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80070348: lhu         $v0, 0x124($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X124);
    // 0x8007034C: lhu         $t1, 0x126($t8)
    ctx->r9 = MEM_HU(ctx->r24, 0X126);
    // 0x80070350: lhu         $s0, 0x124($t8)
    ctx->r16 = MEM_HU(ctx->r24, 0X124);
    // 0x80070354: lhu         $v1, 0x12C($t8)
    ctx->r3 = MEM_HU(ctx->r24, 0X12C);
    // 0x80070358: lhu         $t2, 0x12E($t8)
    ctx->r10 = MEM_HU(ctx->r24, 0X12E);
    // 0x8007035C: lhu         $s1, 0x12E($t8)
    ctx->r17 = MEM_HU(ctx->r24, 0X12E);
    // 0x80070360: lhu         $a0, 0x12C($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X12C);
    // 0x80070364: lhu         $t3, 0x12E($t8)
    ctx->r11 = MEM_HU(ctx->r24, 0X12E);
    // 0x80070368: lhu         $s2, 0x12C($t8)
    ctx->r18 = MEM_HU(ctx->r24, 0X12C);
    // 0x8007036C: lhu         $a1, 0x124($t8)
    ctx->r5 = MEM_HU(ctx->r24, 0X124);
    // 0x80070370: lhu         $t4, 0x126($t8)
    ctx->r12 = MEM_HU(ctx->r24, 0X126);
    // 0x80070374: lhu         $s3, 0x124($t8)
    ctx->r19 = MEM_HU(ctx->r24, 0X124);
    // 0x80070378: lhu         $a2, 0x124($t8)
    ctx->r6 = MEM_HU(ctx->r24, 0X124);
    // 0x8007037C: lhu         $t5, 0x126($t8)
    ctx->r13 = MEM_HU(ctx->r24, 0X126);
    // 0x80070380: lhu         $s4, 0x126($t8)
    ctx->r20 = MEM_HU(ctx->r24, 0X126);
    // 0x80070384: lhu         $a3, 0x12C($t8)
    ctx->r7 = MEM_HU(ctx->r24, 0X12C);
    // 0x80070388: lhu         $t6, 0x12E($t8)
    ctx->r14 = MEM_HU(ctx->r24, 0X12E);
    // 0x8007038C: lhu         $s5, 0x12C($t8)
    ctx->r21 = MEM_HU(ctx->r24, 0X12C);
    // 0x80070390: lhu         $t0, 0x12C($t8)
    ctx->r8 = MEM_HU(ctx->r24, 0X12C);
    // 0x80070394: lhu         $t7, 0x12E($t8)
    ctx->r15 = MEM_HU(ctx->r24, 0X12E);
    // 0x80070398: lhu         $s6, 0x12E($t8)
    ctx->r22 = MEM_HU(ctx->r24, 0X12E);
    // 0x8007039C: or          $v0, $v0, $t1
    ctx->r2 = ctx->r2 | ctx->r9;
    // 0x800703A0: or          $v1, $v1, $t2
    ctx->r3 = ctx->r3 | ctx->r10;
    // 0x800703A4: or          $a0, $a0, $t3
    ctx->r4 = ctx->r4 | ctx->r11;
    // 0x800703A8: or          $a1, $a1, $t4
    ctx->r5 = ctx->r5 | ctx->r12;
    // 0x800703AC: or          $a2, $a2, $t5
    ctx->r6 = ctx->r6 | ctx->r13;
    // 0x800703B0: or          $a3, $a3, $t6
    ctx->r7 = ctx->r7 | ctx->r14;
    // 0x800703B4: or          $t0, $t0, $t7
    ctx->r8 = ctx->r8 | ctx->r15;
    // 0x800703B8: sh          $v0, 0x144($t8)
    MEM_H(0X144, ctx->r24) = ctx->r2;
    // 0x800703BC: sh          $s0, 0x146($t8)
    MEM_H(0X146, ctx->r24) = ctx->r16;
    // 0x800703C0: sh          $v1, 0x148($t8)
    MEM_H(0X148, ctx->r24) = ctx->r3;
    // 0x800703C4: sh          $s1, 0x14A($t8)
    MEM_H(0X14A, ctx->r24) = ctx->r17;
    // 0x800703C8: sh          $a0, 0x14C($t8)
    MEM_H(0X14C, ctx->r24) = ctx->r4;
    // 0x800703CC: sh          $s2, 0x14E($t8)
    MEM_H(0X14E, ctx->r24) = ctx->r18;
    // 0x800703D0: sh          $a1, 0x150($t8)
    MEM_H(0X150, ctx->r24) = ctx->r5;
    // 0x800703D4: sh          $s3, 0x152($t8)
    MEM_H(0X152, ctx->r24) = ctx->r19;
    // 0x800703D8: sh          $a2, 0x154($t8)
    MEM_H(0X154, ctx->r24) = ctx->r6;
    // 0x800703DC: sh          $s4, 0x156($t8)
    MEM_H(0X156, ctx->r24) = ctx->r20;
    // 0x800703E0: sh          $a3, 0x158($t8)
    MEM_H(0X158, ctx->r24) = ctx->r7;
    // 0x800703E4: sh          $s5, 0x15A($t8)
    MEM_H(0X15A, ctx->r24) = ctx->r21;
    // 0x800703E8: sh          $t0, 0x15C($t8)
    MEM_H(0X15C, ctx->r24) = ctx->r8;
    // 0x800703EC: sh          $s6, 0x15E($t8)
    MEM_H(0X15E, ctx->r24) = ctx->r22;
    // 0x800703F0: lhu         $v0, 0x124($t8)
    ctx->r2 = MEM_HU(ctx->r24, 0X124);
    // 0x800703F4: lhu         $v1, 0x126($t8)
    ctx->r3 = MEM_HU(ctx->r24, 0X126);
    // 0x800703F8: lhu         $a0, 0x126($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X126);
    // 0x800703FC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80070400: sh          $v0, 0x160($t8)
    MEM_H(0X160, ctx->r24) = ctx->r2;
    // 0x80070404: sh          $a0, 0x162($t8)
    MEM_H(0X162, ctx->r24) = ctx->r4;
    // 0x80070408: lw          $s6, 0x18($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X18);
    // 0x8007040C: lw          $s5, 0x14($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X14);
    // 0x80070410: lw          $s4, 0x10($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X10);
    // 0x80070414: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x80070418: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x8007041C: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x80070420: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x80070424: jr          $ra
    // 0x80070428: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80070428: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007042C: nop

;}
RECOMP_FUNC void func_800934C0_6E8C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800934C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800934C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800934C8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800934CC: jal         0x80093FC0
    // 0x800934D0: addiu       $a0, $a0, -0xE30
    ctx->r4 = ADD32(ctx->r4, -0XE30);
    func_80093FC0_6F3C0(rdram, ctx);
        goto after_0;
    // 0x800934D0: addiu       $a0, $a0, -0xE30
    ctx->r4 = ADD32(ctx->r4, -0XE30);
    after_0:
    // 0x800934D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800934D8: jr          $ra
    // 0x800934DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800934DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002D370_8770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002D370: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8002D374: sw          $s1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r17;
    // 0x8002D378: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8002D37C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8002D380: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x8002D384: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8002D388: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002D38C: addiu       $v0, $t0, 0x7
    ctx->r2 = ADD32(ctx->r8, 0X7);
    // 0x8002D390: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x8002D394: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002D398: subu        $a0, $a0, $t3
    ctx->r4 = SUB32(ctx->r4, ctx->r11);
    // 0x8002D39C: sll         $a0, $a0, 11
    ctx->r4 = S32(ctx->r4 << 11);
    // 0x8002D3A0: divu        $zero, $a0, $v0
    lo = S32(U32(ctx->r4) / U32(ctx->r2)); hi = S32(U32(ctx->r4) % U32(ctx->r2));
    // 0x8002D3A4: bne         $v0, $zero, L_8002D3B0
    if (ctx->r2 != 0) {
        // 0x8002D3A8: nop
    
            goto L_8002D3B0;
    }
    // 0x8002D3A8: nop

    // 0x8002D3AC: break       7
    do_break(2147668908);
L_8002D3B0:
    // 0x8002D3B0: mflo        $a0
    ctx->r4 = lo;
    // 0x8002D3B4: sw          $s5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r21;
    // 0x8002D3B8: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8002D3BC: sw          $fp, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r30;
    // 0x8002D3C0: lhu         $t3, 0xB2($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0XB2);
    // 0x8002D3C4: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x8002D3C8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8002D3CC: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x8002D3D0: sw          $s7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r23;
    // 0x8002D3D4: sw          $s6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r22;
    // 0x8002D3D8: sw          $s4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r20;
    // 0x8002D3DC: sw          $s3, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r19;
    // 0x8002D3E0: sw          $s2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r18;
    // 0x8002D3E4: sw          $s0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r16;
    // 0x8002D3E8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002D3EC: sh          $t3, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r11;
    // 0x8002D3F0: blez        $a2, L_8002DF78
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8002D3F4: sh          $a0, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r4;
            goto L_8002DF78;
    }
    // 0x8002D3F4: sh          $a0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r4;
    // 0x8002D3F8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8002D3FC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002D400: addu        $s7, $t0, $zero
    ctx->r23 = ADD32(ctx->r8, 0);
    // 0x8002D404: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8002D408: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8002D40C: srl         $v0, $a1, 31
    ctx->r2 = S32(U32(ctx->r5) >> 31);
    // 0x8002D410: addu        $v0, $s7, $v0
    ctx->r2 = ADD32(ctx->r23, ctx->r2);
    // 0x8002D414: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8002D418: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002D41C: sll         $t3, $s7, 10
    ctx->r11 = S32(ctx->r23 << 10);
    // 0x8002D420: lui         $s6, 0xFFFF
    ctx->r22 = S32(0XFFFF << 16);
    // 0x8002D424: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8002D428: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8002D42C: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
L_8002D430:
    // 0x8002D430: lhu         $s4, 0x1E($sp)
    ctx->r20 = MEM_HU(ctx->r29, 0X1E);
    // 0x8002D434: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8002D438: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8002D43C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002D440: subu        $v0, $v0, $t3
    ctx->r2 = SUB32(ctx->r2, ctx->r11);
    // 0x8002D444: bltzl       $v0, L_8002D44C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8002D448: addu        $s4, $s5, $zero
        ctx->r20 = ADD32(ctx->r21, 0);
            goto L_8002D44C;
    }
    goto skip_0;
    // 0x8002D448: addu        $s4, $s5, $zero
    ctx->r20 = ADD32(ctx->r21, 0);
    skip_0:
L_8002D44C:
    // 0x8002D44C: lhu         $t3, 0x1E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X1E);
    // 0x8002D450: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8002D454: subu        $s5, $s5, $t3
    ctx->r21 = SUB32(ctx->r21, ctx->r11);
    // 0x8002D458: andi        $a0, $v0, 0xF
    ctx->r4 = ctx->r2 & 0XF;
    // 0x8002D45C: andi        $v1, $v0, 0x10
    ctx->r3 = ctx->r2 & 0X10;
    // 0x8002D460: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8002D464: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8002D468: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x8002D46C: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8002D470: beq         $t3, $zero, L_8002D48C
    if (ctx->r11 == 0) {
        // 0x8002D474: or          $a1, $v1, $v0
        ctx->r5 = ctx->r3 | ctx->r2;
            goto L_8002D48C;
    }
    // 0x8002D474: or          $a1, $v1, $v0
    ctx->r5 = ctx->r3 | ctx->r2;
    // 0x8002D478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002D47C: beq         $t3, $v0, L_8002D6B8
    if (ctx->r11 == ctx->r2) {
        // 0x8002D480: sll         $a0, $a0, 6
        ctx->r4 = S32(ctx->r4 << 6);
            goto L_8002D6B8;
    }
    // 0x8002D480: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x8002D484: j           L_8002D8C4
    // 0x8002D488: nop

        goto L_8002D8C4;
    // 0x8002D488: nop

L_8002D48C:
    // 0x8002D48C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8002D490: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x8002D494: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8002D498: bgez        $s0, L_8002D4A4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8002D49C: addu        $a2, $s0, $zero
        ctx->r6 = ADD32(ctx->r16, 0);
            goto L_8002D4A4;
    }
    // 0x8002D49C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8002D4A0: addiu       $a2, $s0, 0x3
    ctx->r6 = ADD32(ctx->r16, 0X3);
L_8002D4A4:
    // 0x8002D4A4: sra         $a2, $a2, 2
    ctx->r6 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8002D4A8: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x8002D4AC: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002D4B0: jal         0x8002CA30
    // 0x8002D4B4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8002CA30_7E30(rdram, ctx);
        goto after_0;
    // 0x8002D4B4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_0:
    // 0x8002D4B8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8002D4BC: beq         $a3, $zero, L_8002D8C4
    if (ctx->r7 == 0) {
        // 0x8002D4C0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8002D8C4;
    }
    // 0x8002D4C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8002D4C4: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8002D4C8: lw          $v1, 0x3C30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C30);
    // 0x8002D4CC: bne         $v1, $v0, L_8002D4E8
    if (ctx->r3 != ctx->r2) {
        // 0x8002D4D0: nop
    
            goto L_8002D4E8;
    }
    // 0x8002D4D0: nop

    // 0x8002D4D4: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x8002D4D8: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002D4DC: lw          $v0, 0x2718($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2718);
    // 0x8002D4E0: beq         $v1, $v0, L_8002D8C4
    if (ctx->r3 == ctx->r2) {
        // 0x8002D4E4: nop
    
            goto L_8002D8C4;
    }
    // 0x8002D4E4: nop

L_8002D4E8:
    // 0x8002D4E8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8002D4EC: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x8002D4F0: lui         $a0, 0x708
    ctx->r4 = S32(0X708 << 16);
    // 0x8002D4F4: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8002D4F8: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x8002D4FC: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x8002D500: lh          $v1, 0xC($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XC);
    // 0x8002D504: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    // 0x8002D508: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x8002D50C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D510: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D514: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
    // 0x8002D518: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D51C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D520: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x8002D524: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D528: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D52C: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    // 0x8002D530: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D534: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D538: addiu       $v0, $a2, 0x28
    ctx->r2 = ADD32(ctx->r6, 0X28);
    // 0x8002D53C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D540: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D544: lui         $v0, 0xFD48
    ctx->r2 = S32(0XFD48 << 16);
    // 0x8002D548: lui         $t3, 0xF548
    ctx->r11 = S32(0XF548 << 16);
    // 0x8002D54C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8002D550: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002D554: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8002D558: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002D55C: sw          $v1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r3;
    // 0x8002D560: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x8002D564: sra         $v0, $s0, 1
    ctx->r2 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8002D568: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002D56C: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8002D570: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8002D574: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8002D578: or          $v0, $v0, $t3
    ctx->r2 = ctx->r2 | ctx->r11;
    // 0x8002D57C: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x8002D580: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x8002D584: lui         $a3, 0x8
    ctx->r7 = S32(0X8 << 16);
    // 0x8002D588: ori         $a3, $a3, 0x200
    ctx->r7 = ctx->r7 | 0X200;
    // 0x8002D58C: sw          $a0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r4;
    // 0x8002D590: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x8002D594: sw          $zero, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = 0;
    // 0x8002D598: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
    // 0x8002D59C: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8002D5A0: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8002D5A4: lui         $v1, 0xF400
    ctx->r3 = S32(0XF400 << 16);
    // 0x8002D5A8: sll         $a0, $a0, 13
    ctx->r4 = S32(ctx->r4 << 13);
    // 0x8002D5AC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8002D5B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002D5B4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8002D5B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002D5BC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8002D5C0: sw          $a0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r4;
    // 0x8002D5C4: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8002D5C8: lbu         $a1, 0xD($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XD);
    // 0x8002D5CC: addiu       $v0, $a2, 0x30
    ctx->r2 = ADD32(ctx->r6, 0X30);
    // 0x8002D5D0: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8002D5D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D5D8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D5DC: addiu       $v0, $a2, 0x38
    ctx->r2 = ADD32(ctx->r6, 0X38);
    // 0x8002D5E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D5E4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D5E8: sra         $v0, $s0, 1
    ctx->r2 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8002D5EC: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002D5F0: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8002D5F4: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8002D5F8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8002D5FC: lui         $v1, 0xF540
    ctx->r3 = S32(0XF540 << 16);
    // 0x8002D600: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002D604: sw          $v0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r2;
    // 0x8002D608: addiu       $v0, $a2, 0x40
    ctx->r2 = ADD32(ctx->r6, 0X40);
    // 0x8002D60C: sw          $a3, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->r7;
    // 0x8002D610: addu        $a3, $s2, $s3
    ctx->r7 = ADD32(ctx->r18, ctx->r19);
    // 0x8002D614: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D618: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D61C: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x8002D620: sw          $t3, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r11;
    // 0x8002D624: sw          $zero, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = 0;
    // 0x8002D628: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8002D62C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002D630: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8002D634: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8002D638: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x8002D63C: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x8002D640: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8002D644: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8002D648: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8002D64C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8002D650: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x8002D654: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
    // 0x8002D658: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8002D65C: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8002D660: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x8002D664: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x8002D668: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8002D66C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002D670: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8002D674: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002D678: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8002D67C: sw          $a0, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r4;
    // 0x8002D680: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8002D684: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8002D688: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8002D68C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002D690: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002D694: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8002D698: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8002D69C: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8002D6A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002D6A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002D6A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8002D6AC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002D6B0: j           L_8002D8C4
    // 0x8002D6B4: sw          $v1, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r3;
        goto L_8002D8C4;
    // 0x8002D6B4: sw          $v1, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->r3;
L_8002D6B8:
    // 0x8002D6B8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x8002D6BC: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x8002D6C0: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002D6C4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8002D6C8: jal         0x8002CA30
    // 0x8002D6CC: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_8002CA30_7E30(rdram, ctx);
        goto after_1;
    // 0x8002D6CC: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_1:
    // 0x8002D6D0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8002D6D4: beq         $a3, $zero, L_8002D8C4
    if (ctx->r7 == 0) {
        // 0x8002D6D8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8002D8C4;
    }
    // 0x8002D6D8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8002D6DC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8002D6E0: lw          $v1, 0x3C30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C30);
    // 0x8002D6E4: bne         $v1, $v0, L_8002D700
    if (ctx->r3 != ctx->r2) {
        // 0x8002D6E8: nop
    
            goto L_8002D700;
    }
    // 0x8002D6E8: nop

    // 0x8002D6EC: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x8002D6F0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002D6F4: lw          $v0, 0x2718($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2718);
    // 0x8002D6F8: beq         $v1, $v0, L_8002D8C4
    if (ctx->r3 == ctx->r2) {
        // 0x8002D6FC: nop
    
            goto L_8002D8C4;
    }
    // 0x8002D6FC: nop

L_8002D700:
    // 0x8002D700: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8002D704: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8002D708: lui         $a0, 0x708
    ctx->r4 = S32(0X708 << 16);
    // 0x8002D70C: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    // 0x8002D710: lui         $a2, 0x8
    ctx->r6 = S32(0X8 << 16);
    // 0x8002D714: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8002D718: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x8002D71C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8002D720: lh          $v1, 0xC($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XC);
    // 0x8002D724: ori         $a2, $a2, 0x200
    ctx->r6 = ctx->r6 | 0X200;
    // 0x8002D728: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x8002D72C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D730: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D734: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x8002D738: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D73C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D740: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x8002D744: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D748: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D74C: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x8002D750: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D754: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D758: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8002D75C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D760: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D764: lui         $v0, 0xFD48
    ctx->r2 = S32(0XFD48 << 16);
    // 0x8002D768: lui         $t3, 0xF548
    ctx->r11 = S32(0XF548 << 16);
    // 0x8002D76C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8002D770: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002D774: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8002D778: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002D77C: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x8002D780: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x8002D784: addiu       $v0, $s7, 0x7
    ctx->r2 = ADD32(ctx->r23, 0X7);
    // 0x8002D788: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8002D78C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8002D790: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8002D794: or          $v0, $v0, $t3
    ctx->r2 = ctx->r2 | ctx->r11;
    // 0x8002D798: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x8002D79C: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x8002D7A0: sw          $a0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r4;
    // 0x8002D7A4: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8002D7A8: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x8002D7AC: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x8002D7B0: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8002D7B4: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8002D7B8: lui         $v1, 0xF400
    ctx->r3 = S32(0XF400 << 16);
    // 0x8002D7BC: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x8002D7C0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8002D7C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002D7C8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8002D7CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002D7D0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8002D7D4: sw          $a0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r4;
    // 0x8002D7D8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8002D7DC: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x8002D7E0: addiu       $v0, $a1, 0x30
    ctx->r2 = ADD32(ctx->r5, 0X30);
    // 0x8002D7E4: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x8002D7E8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D7EC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D7F0: addiu       $v0, $a1, 0x38
    ctx->r2 = ADD32(ctx->r5, 0X38);
    // 0x8002D7F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D7F8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D7FC: addiu       $v0, $s7, 0x7
    ctx->r2 = ADD32(ctx->r23, 0X7);
    // 0x8002D800: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8002D804: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8002D808: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8002D80C: sw          $t3, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r11;
    // 0x8002D810: lui         $t3, 0xF548
    ctx->r11 = S32(0XF548 << 16);
    // 0x8002D814: or          $v0, $v0, $t3
    ctx->r2 = ctx->r2 | ctx->r11;
    // 0x8002D818: sw          $v0, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r2;
    // 0x8002D81C: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
    // 0x8002D820: sw          $a2, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r6;
    // 0x8002D824: addu        $a2, $s2, $s0
    ctx->r6 = ADD32(ctx->r18, ctx->r16);
    // 0x8002D828: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D82C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D830: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x8002D834: sw          $zero, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = 0;
    // 0x8002D838: addu        $v1, $v1, $s7
    ctx->r3 = ADD32(ctx->r3, ctx->r23);
    // 0x8002D83C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002D840: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002D844: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8002D848: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8002D84C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8002D850: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002D854: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002D858: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8002D85C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8002D860: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8002D864: sw          $v1, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r3;
    // 0x8002D868: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8002D86C: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8002D870: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x8002D874: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x8002D878: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8002D87C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002D880: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8002D884: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002D888: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8002D88C: sw          $a0, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->r4;
    // 0x8002D890: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8002D894: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8002D898: addu        $v1, $v1, $s7
    ctx->r3 = ADD32(ctx->r3, ctx->r23);
    // 0x8002D89C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002D8A0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002D8A4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8002D8A8: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8002D8AC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8002D8B0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002D8B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002D8B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8002D8BC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002D8C0: sw          $v1, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r3;
L_8002D8C4:
    // 0x8002D8C4: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x8002D8C8: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x8002D8CC: bne         $v1, $v0, L_8002DD20
    if (ctx->r3 != ctx->r2) {
        // 0x8002D8D0: nop
    
            goto L_8002DD20;
    }
    // 0x8002D8D0: nop

    // 0x8002D8D4: lh          $v1, 0x10($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X10);
    // 0x8002D8D8: lh          $v0, 0x20($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X20);
    // 0x8002D8DC: bne         $v1, $v0, L_8002DD20
    if (ctx->r3 != ctx->r2) {
        // 0x8002D8E0: nop
    
            goto L_8002DD20;
    }
    // 0x8002D8E0: nop

    // 0x8002D8E4: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8002D8E8: lh          $v0, 0x12($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X12);
    // 0x8002D8EC: bne         $v1, $v0, L_8002DD20
    if (ctx->r3 != ctx->r2) {
        // 0x8002D8F0: nop
    
            goto L_8002DD20;
    }
    // 0x8002D8F0: nop

    // 0x8002D8F4: lh          $v1, 0x1A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1A);
    // 0x8002D8F8: lh          $v0, 0x22($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X22);
    // 0x8002D8FC: bne         $v1, $v0, L_8002DD20
    if (ctx->r3 != ctx->r2) {
        // 0x8002D900: sll         $v0, $s5, 16
        ctx->r2 = S32(ctx->r21 << 16);
            goto L_8002DD20;
    }
    // 0x8002D900: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8002D904: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8002D908: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x8002D90C: sltiu       $v1, $t3, 0x1
    ctx->r3 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x8002D910: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002D914: beq         $v1, $zero, L_8002DB98
    if (ctx->r3 == 0) {
        // 0x8002D918: sll         $v0, $fp, 16
        ctx->r2 = S32(ctx->r30 << 16);
            goto L_8002DB98;
    }
    // 0x8002D918: sll         $v0, $fp, 16
    ctx->r2 = S32(ctx->r30 << 16);
    // 0x8002D91C: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8002D920: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002D924: div         $zero, $t3, $v0
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r2)));
    // 0x8002D928: bne         $v0, $zero, L_8002D934
    if (ctx->r2 != 0) {
        // 0x8002D92C: nop
    
            goto L_8002D934;
    }
    // 0x8002D92C: nop

    // 0x8002D930: break       7
    do_break(2147670320);
L_8002D934:
    // 0x8002D934: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002D938: bne         $v0, $at, L_8002D94C
    if (ctx->r2 != ctx->r1) {
        // 0x8002D93C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002D94C;
    }
    // 0x8002D93C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002D940: bne         $t3, $at, L_8002D94C
    if (ctx->r11 != ctx->r1) {
        // 0x8002D944: nop
    
            goto L_8002D94C;
    }
    // 0x8002D944: nop

    // 0x8002D948: break       6
    do_break(2147670344);
L_8002D94C:
    // 0x8002D94C: mflo        $t1
    ctx->r9 = lo;
    // 0x8002D950: lhu         $t3, 0x16($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X16);
    // 0x8002D954: sll         $a3, $s4, 16
    ctx->r7 = S32(ctx->r20 << 16);
    // 0x8002D958: sra         $a3, $a3, 6
    ctx->r7 = S32(SIGNED(ctx->r7) >> 6);
    // 0x8002D95C: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
    // 0x8002D960: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002D964: div         $zero, $a3, $v0
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r2)));
    // 0x8002D968: bne         $v0, $zero, L_8002D974
    if (ctx->r2 != 0) {
        // 0x8002D96C: nop
    
            goto L_8002D974;
    }
    // 0x8002D96C: nop

    // 0x8002D970: break       7
    do_break(2147670384);
L_8002D974:
    // 0x8002D974: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002D978: bne         $v0, $at, L_8002D98C
    if (ctx->r2 != ctx->r1) {
        // 0x8002D97C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002D98C;
    }
    // 0x8002D97C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002D980: bne         $a3, $at, L_8002D98C
    if (ctx->r7 != ctx->r1) {
        // 0x8002D984: nop
    
            goto L_8002D98C;
    }
    // 0x8002D984: nop

    // 0x8002D988: break       6
    do_break(2147670408);
L_8002D98C:
    // 0x8002D98C: mflo        $a3
    ctx->r7 = lo;
    // 0x8002D990: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8002D994: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8002D998: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x8002D99C: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8002D9A0: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8002D9A4: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002D9A8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002D9AC: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8002D9B0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002D9B4: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8002D9B8: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8002D9BC: andi        $a0, $a0, 0xFFC
    ctx->r4 = ctx->r4 & 0XFFC;
    // 0x8002D9C0: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x8002D9C4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8002D9C8: addu        $v0, $t3, $v0
    ctx->r2 = ADD32(ctx->r11, ctx->r2);
    // 0x8002D9CC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8002D9D0: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002D9D4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002D9D8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8002D9DC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002D9E0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002D9E4: andi        $v1, $v1, 0xFFC
    ctx->r3 = ctx->r3 & 0XFFC;
    // 0x8002D9E8: lui         $v0, 0xE400
    ctx->r2 = S32(0XE400 << 16);
    // 0x8002D9EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002D9F0: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8002D9F4: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x8002D9F8: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
    // 0x8002D9FC: lhu         $a0, 0xA($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XA);
    // 0x8002DA00: addiu       $t0, $a2, 0x8
    ctx->r8 = ADD32(ctx->r6, 0X8);
    // 0x8002DA04: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DA08: sw          $t0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r8;
    // 0x8002DA0C: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
    // 0x8002DA10: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DA14: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DA18: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x8002DA1C: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x8002DA20: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8002DA24: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x8002DA28: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002DA2C: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x8002DA30: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002DA34: and         $a1, $a1, $v1
    ctx->r5 = ctx->r5 & ctx->r3;
    // 0x8002DA38: andi        $a1, $a1, 0xFFC
    ctx->r5 = ctx->r5 & 0XFFC;
    // 0x8002DA3C: sll         $a1, $a1, 12
    ctx->r5 = S32(ctx->r5 << 12);
    // 0x8002DA40: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x8002DA44: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8002DA48: sll         $a0, $a0, 18
    ctx->r4 = S32(ctx->r4 << 18);
    // 0x8002DA4C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002DA50: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x8002DA54: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8002DA58: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8002DA5C: andi        $v0, $v0, 0xFFC
    ctx->r2 = ctx->r2 & 0XFFC;
    // 0x8002DA60: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8002DA64: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    // 0x8002DA68: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x8002DA6C: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8002DA70: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8002DA74: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x8002DA78: sll         $a2, $v1, 5
    ctx->r6 = S32(ctx->r3 << 5);
    // 0x8002DA7C: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8002DA80: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DA84: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002DA88: bgez        $v1, L_8002DAE0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002DA8C: addu        $t2, $t1, $zero
        ctx->r10 = ADD32(ctx->r9, 0);
            goto L_8002DAE0;
    }
    // 0x8002DA8C: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
    // 0x8002DA90: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x8002DA94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002DA98: bgez        $v0, L_8002DAB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002DA9C: nop
    
            goto L_8002DAB8;
    }
    // 0x8002DA9C: nop

    // 0x8002DAA0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DAA4: mflo        $v0
    ctx->r2 = lo;
    // 0x8002DAA8: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8002DAAC: nor         $v1, $zero, $v0
    ctx->r3 = ~(0 | ctx->r2);
    // 0x8002DAB0: j           L_8002DAD0
    // 0x8002DAB4: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
        goto L_8002DAD0;
    // 0x8002DAB4: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
L_8002DAB8:
    // 0x8002DAB8: nop

    // 0x8002DABC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DAC0: mflo        $v0
    ctx->r2 = lo;
    // 0x8002DAC4: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8002DAC8: slti        $v1, $v0, 0x1
    ctx->r3 = SIGNED(ctx->r2) < 0X1 ? 1 : 0;
    // 0x8002DACC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_8002DAD0:
    // 0x8002DAD0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002DAD4: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8002DAD8: j           L_8002DAE4
    // 0x8002DADC: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
        goto L_8002DAE4;
    // 0x8002DADC: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
L_8002DAE0:
    // 0x8002DAE0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_8002DAE4:
    // 0x8002DAE4: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8002DAE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8002DAEC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8002DAF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002DAF4: bgez        $v0, L_8002DB60
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002DAF8: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_8002DB60;
    }
    // 0x8002DAF8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8002DAFC: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002DB00: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002DB04: bgez        $a1, L_8002DB38
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8002DB08: addu        $v0, $v1, $s2
        ctx->r2 = ADD32(ctx->r3, ctx->r18);
            goto L_8002DB38;
    }
    // 0x8002DB08: addu        $v0, $v1, $s2
    ctx->r2 = ADD32(ctx->r3, ctx->r18);
    // 0x8002DB0C: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DB10: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002DB14: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DB18: mflo        $v0
    ctx->r2 = lo;
    // 0x8002DB1C: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8002DB20: nor         $v1, $zero, $v0
    ctx->r3 = ~(0 | ctx->r2);
    // 0x8002DB24: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002DB28: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002DB2C: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x8002DB30: j           L_8002DB60
    // 0x8002DB34: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
        goto L_8002DB60;
    // 0x8002DB34: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
L_8002DB38:
    // 0x8002DB38: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DB3C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002DB40: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002DB44: mflo        $v0
    ctx->r2 = lo;
    // 0x8002DB48: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8002DB4C: slti        $v1, $v0, 0x1
    ctx->r3 = SIGNED(ctx->r2) < 0X1 ? 1 : 0;
    // 0x8002DB50: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8002DB54: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002DB58: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x8002DB5C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
L_8002DB60:
    // 0x8002DB60: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8002DB64: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002DB68: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8002DB6C: andi        $v1, $a3, 0xFFFF
    ctx->r3 = ctx->r7 & 0XFFFF;
    // 0x8002DB70: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x8002DB74: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8002DB78: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DB7C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DB80: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x8002DB84: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8002DB88: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x8002DB8C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002DB90: j           L_8002DF5C
    // 0x8002DB94: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
        goto L_8002DF5C;
    // 0x8002DB94: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_8002DB98:
    // 0x8002DB98: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8002DB9C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8002DBA0: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x8002DBA4: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8002DBA8: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8002DBAC: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DBB0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002DBB4: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8002DBB8: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002DBBC: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8002DBC0: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8002DBC4: andi        $a0, $a0, 0xFFC
    ctx->r4 = ctx->r4 & 0XFFC;
    // 0x8002DBC8: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x8002DBCC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8002DBD0: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8002DBD4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8002DBD8: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DBDC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002DBE0: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8002DBE4: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002DBE8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002DBEC: andi        $v1, $v1, 0xFFC
    ctx->r3 = ctx->r3 & 0XFFC;
    // 0x8002DBF0: lui         $v0, 0xE400
    ctx->r2 = S32(0XE400 << 16);
    // 0x8002DBF4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002DBF8: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8002DBFC: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x8002DC00: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
    // 0x8002DC04: lhu         $a0, 0xA($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XA);
    // 0x8002DC08: addiu       $a3, $a2, 0x8
    ctx->r7 = ADD32(ctx->r6, 0X8);
    // 0x8002DC0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DC10: sw          $a3, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r7;
    // 0x8002DC14: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
    // 0x8002DC18: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DC1C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DC20: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x8002DC24: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x8002DC28: sll         $a1, $v1, 2
    ctx->r5 = S32(ctx->r3 << 2);
    // 0x8002DC2C: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x8002DC30: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002DC34: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x8002DC38: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002DC3C: and         $a1, $a1, $v1
    ctx->r5 = ctx->r5 & ctx->r3;
    // 0x8002DC40: andi        $a1, $a1, 0xFFC
    ctx->r5 = ctx->r5 & 0XFFC;
    // 0x8002DC44: sll         $a1, $a1, 12
    ctx->r5 = S32(ctx->r5 << 12);
    // 0x8002DC48: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x8002DC4C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8002DC50: sll         $a0, $a0, 18
    ctx->r4 = S32(ctx->r4 << 18);
    // 0x8002DC54: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002DC58: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x8002DC5C: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8002DC60: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8002DC64: andi        $v0, $v0, 0xFFC
    ctx->r2 = ctx->r2 & 0XFFC;
    // 0x8002DC68: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8002DC6C: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    // 0x8002DC70: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x8002DC74: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8002DC78: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8002DC7C: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x8002DC80: sll         $a1, $v1, 5
    ctx->r5 = S32(ctx->r3 << 5);
    // 0x8002DC84: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DC88: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002DC8C: bgez        $v0, L_8002DCB0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002DC90: sll         $a0, $a0, 5
        ctx->r4 = S32(ctx->r4 << 5);
            goto L_8002DCB0;
    }
    // 0x8002DC90: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8002DC94: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8002DC98: slti        $v0, $v1, 0x1
    ctx->r2 = SIGNED(ctx->r3) < 0X1 ? 1 : 0;
    // 0x8002DC9C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8002DCA0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002DCA4: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8002DCA8: j           L_8002DCB4
    // 0x8002DCAC: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
        goto L_8002DCB4;
    // 0x8002DCAC: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
L_8002DCB0:
    // 0x8002DCB0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
L_8002DCB4:
    // 0x8002DCB4: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8002DCB8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8002DCBC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8002DCC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002DCC4: bgezl       $v0, L_8002DCEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002DCC8: andi        $v0, $a1, 0xFFFF
        ctx->r2 = ctx->r5 & 0XFFFF;
            goto L_8002DCEC;
    }
    goto skip_1;
    // 0x8002DCC8: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    skip_1:
    // 0x8002DCCC: addu        $v0, $v1, $s2
    ctx->r2 = ADD32(ctx->r3, ctx->r18);
    // 0x8002DCD0: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DCD4: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8002DCD8: slti        $v1, $v0, 0x1
    ctx->r3 = SIGNED(ctx->r2) < 0X1 ? 1 : 0;
    // 0x8002DCDC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8002DCE0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002DCE4: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x8002DCE8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
L_8002DCEC:
    // 0x8002DCEC: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8002DCF0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002DCF4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002DCF8: lui         $a0, 0x400
    ctx->r4 = S32(0X400 << 16);
    // 0x8002DCFC: ori         $a0, $a0, 0x400
    ctx->r4 = ctx->r4 | 0X400;
    // 0x8002DD00: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x8002DD04: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002DD08: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DD0C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DD10: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x8002DD14: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002DD18: j           L_8002DF5C
    // 0x8002DD1C: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
        goto L_8002DF5C;
    // 0x8002DD1C: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
L_8002DD20:
    // 0x8002DD20: jal         0x800281C8
    // 0x8002DD24: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800281C8_35C8(rdram, ctx);
        goto after_2;
    // 0x8002DD24: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_2:
    // 0x8002DD28: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8002DD2C: beq         $s0, $zero, L_8002DF5C
    if (ctx->r16 == 0) {
        // 0x8002DD30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8002DF5C;
    }
    // 0x8002DD30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002DD34: jal         0x8009A2B0
    // 0x8002DD38: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x8002DD38: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_3:
    // 0x8002DD3C: lui         $a1, 0x400
    ctx->r5 = S32(0X400 << 16);
    // 0x8002DD40: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    // 0x8002DD44: lui         $v1, 0xDA38
    ctx->r3 = S32(0XDA38 << 16);
    // 0x8002DD48: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x8002DD4C: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x8002DD50: ori         $a2, $a2, 0x4008
    ctx->r6 = ctx->r6 | 0X4008;
    // 0x8002DD54: lui         $a3, 0x218
    ctx->r7 = S32(0X218 << 16);
    // 0x8002DD58: ori         $a3, $a3, 0x2
    ctx->r7 = ctx->r7 | 0X2;
    // 0x8002DD5C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002DD60: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8002DD64: lui         $t0, 0x218
    ctx->r8 = S32(0X218 << 16);
    // 0x8002DD68: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002DD6C: addiu       $v0, $v0, -0x77BC
    ctx->r2 = ADD32(ctx->r2, -0X77BC);
    // 0x8002DD70: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x8002DD74: addiu       $v0, $v0, -0x1C
    ctx->r2 = ADD32(ctx->r2, -0X1C);
    // 0x8002DD78: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8002DD7C: lui         $v0, 0x218
    ctx->r2 = S32(0X218 << 16);
    // 0x8002DD80: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x8002DD84: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x8002DD88: sw          $s0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r16;
    // 0x8002DD8C: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x8002DD90: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x8002DD94: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8002DD98: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x8002DD9C: lui         $a1, 0x218
    ctx->r5 = S32(0X218 << 16);
    // 0x8002DDA0: sw          $a3, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r7;
    // 0x8002DDA4: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DDA8: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x8002DDAC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002DDB0: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8002DDB4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002DDB8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x8002DDBC: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x8002DDC0: lh          $v1, 0x12($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X12);
    // 0x8002DDC4: ori         $a1, $a1, 0x6
    ctx->r5 = ctx->r5 | 0X6;
    // 0x8002DDC8: lui         $t1, 0x214
    ctx->r9 = S32(0X214 << 16);
    // 0x8002DDCC: sw          $t0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r8;
    // 0x8002DDD0: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DDD4: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x8002DDD8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002DDDC: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8002DDE0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002DDE4: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x8002DDE8: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x8002DDEC: lh          $v1, 0x1A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1A);
    // 0x8002DDF0: ori         $t1, $t1, 0x2
    ctx->r9 = ctx->r9 | 0X2;
    // 0x8002DDF4: lui         $a2, 0x214
    ctx->r6 = S32(0X214 << 16);
    // 0x8002DDF8: sw          $a1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r5;
    // 0x8002DDFC: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002DE00: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x8002DE04: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002DE08: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8002DE0C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002DE10: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x8002DE14: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x8002DE18: lh          $a1, 0x22($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X22);
    // 0x8002DE1C: ori         $a2, $a2, 0x4
    ctx->r6 = ctx->r6 | 0X4;
    // 0x8002DE20: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8002DE24: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DE28: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DE2C: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8002DE30: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DE34: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DE38: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x8002DE3C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DE40: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DE44: addiu       $v0, $a0, 0x20
    ctx->r2 = ADD32(ctx->r4, 0X20);
    // 0x8002DE48: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DE4C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DE50: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x8002DE54: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DE58: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DE5C: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x8002DE60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DE64: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DE68: addiu       $v0, $a0, 0x38
    ctx->r2 = ADD32(ctx->r4, 0X38);
    // 0x8002DE6C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DE70: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DE74: lui         $v0, 0x214
    ctx->r2 = S32(0X214 << 16);
    // 0x8002DE78: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x8002DE7C: sll         $v1, $v1, 18
    ctx->r3 = S32(ctx->r3 << 18);
    // 0x8002DE80: and         $v1, $v1, $s6
    ctx->r3 = ctx->r3 & ctx->r22;
    // 0x8002DE84: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8002DE88: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8002DE8C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8002DE90: sw          $v1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r3;
    // 0x8002DE94: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8002DE98: lui         $a3, 0x214
    ctx->r7 = S32(0X214 << 16);
    // 0x8002DE9C: lbu         $v1, 0xD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD);
    // 0x8002DEA0: sll         $v0, $v0, 22
    ctx->r2 = S32(ctx->r2 << 22);
    // 0x8002DEA4: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x8002DEA8: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8002DEAC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002DEB0: sw          $v0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r2;
    // 0x8002DEB4: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
    // 0x8002DEB8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DEBC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DEC0: sw          $t1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r9;
    // 0x8002DEC4: lbu         $v1, 0x14($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X14);
    // 0x8002DEC8: lbu         $a1, 0x15($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X15);
    // 0x8002DECC: ori         $a3, $a3, 0x6
    ctx->r7 = ctx->r7 | 0X6;
    // 0x8002DED0: addiu       $v0, $a0, 0x48
    ctx->r2 = ADD32(ctx->r4, 0X48);
    // 0x8002DED4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DED8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DEDC: sw          $a2, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r6;
    // 0x8002DEE0: sll         $v1, $v1, 22
    ctx->r3 = S32(ctx->r3 << 22);
    // 0x8002DEE4: and         $v1, $v1, $s6
    ctx->r3 = ctx->r3 & ctx->r22;
    // 0x8002DEE8: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x8002DEEC: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8002DEF0: sw          $v1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r3;
    // 0x8002DEF4: lbu         $v1, 0x1C($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1C);
    // 0x8002DEF8: lbu         $a1, 0x1D($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1D);
    // 0x8002DEFC: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x8002DF00: addiu       $v0, $a0, 0x50
    ctx->r2 = ADD32(ctx->r4, 0X50);
    // 0x8002DF04: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DF08: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DF0C: sw          $a3, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r7;
    // 0x8002DF10: sll         $v1, $v1, 22
    ctx->r3 = S32(ctx->r3 << 22);
    // 0x8002DF14: and         $v1, $v1, $s6
    ctx->r3 = ctx->r3 & ctx->r22;
    // 0x8002DF18: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x8002DF1C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8002DF20: sw          $v1, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r3;
    // 0x8002DF24: lbu         $v1, 0x24($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X24);
    // 0x8002DF28: lbu         $a1, 0x25($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X25);
    // 0x8002DF2C: ori         $a2, $a2, 0x406
    ctx->r6 = ctx->r6 | 0X406;
    // 0x8002DF30: addiu       $v0, $a0, 0x58
    ctx->r2 = ADD32(ctx->r4, 0X58);
    // 0x8002DF34: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002DF38: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002DF3C: addiu       $v0, $zero, 0x602
    ctx->r2 = ADD32(0, 0X602);
    // 0x8002DF40: sw          $a2, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r6;
    // 0x8002DF44: sw          $v0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r2;
    // 0x8002DF48: sll         $v1, $v1, 22
    ctx->r3 = S32(ctx->r3 << 22);
    // 0x8002DF4C: and         $v1, $v1, $s6
    ctx->r3 = ctx->r3 & ctx->r22;
    // 0x8002DF50: sll         $a1, $a1, 6
    ctx->r5 = S32(ctx->r5 << 6);
    // 0x8002DF54: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8002DF58: sw          $v1, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r3;
L_8002DF5C:
    // 0x8002DF5C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8002DF60: addu        $s2, $s2, $t3
    ctx->r18 = ADD32(ctx->r18, ctx->r11);
    // 0x8002DF64: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8002DF68: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x8002DF6C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8002DF70: bgtz        $v0, L_8002D430
    if (SIGNED(ctx->r2) > 0) {
        // 0x8002DF74: sw          $t3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r11;
            goto L_8002D430;
    }
    // 0x8002DF74: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_8002DF78:
    // 0x8002DF78: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x8002DF7C: lw          $fp, 0x98($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X98);
    // 0x8002DF80: lw          $s7, 0x94($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X94);
    // 0x8002DF84: lw          $s6, 0x90($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X90);
    // 0x8002DF88: lw          $s5, 0x8C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X8C);
    // 0x8002DF8C: lw          $s4, 0x88($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X88);
    // 0x8002DF90: lw          $s3, 0x84($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X84);
    // 0x8002DF94: lw          $s2, 0x80($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X80);
    // 0x8002DF98: lw          $s1, 0x7C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X7C);
    // 0x8002DF9C: lw          $s0, 0x78($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X78);
    // 0x8002DFA0: jr          $ra
    // 0x8002DFA4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x8002DFA4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80066690_41A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066690: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80066694: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80066698: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8006669C: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x800666A0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x800666A4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800666A8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x800666AC: sh          $v1, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r3;
    // 0x800666B0: lbu         $v1, 0x4($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X4);
    // 0x800666B4: lbu         $a1, 0x3($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X3);
    // 0x800666B8: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x800666BC: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x800666C0: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x800666C4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x800666C8: jr          $ra
    // 0x800666CC: sh          $a1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800666CC: sh          $a1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8004A958_25D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A958: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004A95C: lw          $v0, -0x2F38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F38);
    // 0x8004A960: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004A964: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004A968: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8004A96C: beq         $v0, $zero, L_8004AB68
    if (ctx->r2 == 0) {
        // 0x8004A970: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_8004AB68;
    }
    // 0x8004A970: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004A974: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8004A978: lhu         $v1, -0x783E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783E);
    // 0x8004A97C: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8004A980: beq         $v0, $zero, L_8004A9A0
    if (ctx->r2 == 0) {
        // 0x8004A984: andi        $v0, $v1, 0x40
        ctx->r2 = ctx->r3 & 0X40;
            goto L_8004A9A0;
    }
    // 0x8004A984: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8004A988: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004A98C: lhu         $v0, -0x49FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X49FA);
    // 0x8004A990: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8004A994: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004A998: sh          $v0, -0x49FA($at)
    MEM_H(-0X49FA, ctx->r1) = ctx->r2;
    // 0x8004A99C: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
L_8004A9A0:
    // 0x8004A9A0: beq         $v0, $zero, L_8004A9C0
    if (ctx->r2 == 0) {
        // 0x8004A9A4: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_8004A9C0;
    }
    // 0x8004A9A4: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8004A9A8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004A9AC: lhu         $v0, -0x49FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X49FA);
    // 0x8004A9B0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8004A9B4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004A9B8: sh          $v0, -0x49FA($at)
    MEM_H(-0X49FA, ctx->r1) = ctx->r2;
    // 0x8004A9BC: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
L_8004A9C0:
    // 0x8004A9C0: beq         $v0, $zero, L_8004A9E0
    if (ctx->r2 == 0) {
        // 0x8004A9C4: andi        $v0, $v1, 0x20
        ctx->r2 = ctx->r3 & 0X20;
            goto L_8004A9E0;
    }
    // 0x8004A9C4: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x8004A9C8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004A9CC: lhu         $v0, -0x49FC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X49FC);
    // 0x8004A9D0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8004A9D4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004A9D8: sh          $v0, -0x49FC($at)
    MEM_H(-0X49FC, ctx->r1) = ctx->r2;
    // 0x8004A9DC: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
L_8004A9E0:
    // 0x8004A9E0: beq         $v0, $zero, L_8004A9FC
    if (ctx->r2 == 0) {
        // 0x8004A9E4: nop
    
            goto L_8004A9FC;
    }
    // 0x8004A9E4: nop

    // 0x8004A9E8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004A9EC: lhu         $v0, -0x49FC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X49FC);
    // 0x8004A9F0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8004A9F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004A9F8: sh          $v0, -0x49FC($at)
    MEM_H(-0X49FC, ctx->r1) = ctx->r2;
L_8004A9FC:
    // 0x8004A9FC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004AA00: lh          $v0, -0x49FC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49FC);
    // 0x8004AA04: slti        $v0, $v0, -0x20
    ctx->r2 = SIGNED(ctx->r2) < -0X20 ? 1 : 0;
    // 0x8004AA08: beq         $v0, $zero, L_8004AA18
    if (ctx->r2 == 0) {
        // 0x8004AA0C: addiu       $v0, $zero, -0x20
        ctx->r2 = ADD32(0, -0X20);
            goto L_8004AA18;
    }
    // 0x8004AA0C: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x8004AA10: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004AA14: sh          $v0, -0x49FC($at)
    MEM_H(-0X49FC, ctx->r1) = ctx->r2;
L_8004AA18:
    // 0x8004AA18: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004AA1C: lh          $v0, -0x49FC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49FC);
    // 0x8004AA20: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8004AA24: bne         $v0, $zero, L_8004AA34
    if (ctx->r2 != 0) {
        // 0x8004AA28: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8004AA34;
    }
    // 0x8004AA28: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8004AA2C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004AA30: sh          $v0, -0x49FC($at)
    MEM_H(-0X49FC, ctx->r1) = ctx->r2;
L_8004AA34:
    // 0x8004AA34: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004AA38: lh          $v0, -0x49FA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49FA);
    // 0x8004AA3C: slti        $v0, $v0, -0x20
    ctx->r2 = SIGNED(ctx->r2) < -0X20 ? 1 : 0;
    // 0x8004AA40: beq         $v0, $zero, L_8004AA50
    if (ctx->r2 == 0) {
        // 0x8004AA44: addiu       $v0, $zero, -0x20
        ctx->r2 = ADD32(0, -0X20);
            goto L_8004AA50;
    }
    // 0x8004AA44: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x8004AA48: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004AA4C: sh          $v0, -0x49FA($at)
    MEM_H(-0X49FA, ctx->r1) = ctx->r2;
L_8004AA50:
    // 0x8004AA50: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004AA54: lh          $v0, -0x49FA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X49FA);
    // 0x8004AA58: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8004AA5C: bne         $v0, $zero, L_8004AA70
    if (ctx->r2 != 0) {
        // 0x8004AA60: addiu       $a2, $zero, 0x6
        ctx->r6 = ADD32(0, 0X6);
            goto L_8004AA70;
    }
    // 0x8004AA60: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8004AA64: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8004AA68: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004AA6C: sh          $v0, -0x49FA($at)
    MEM_H(-0X49FA, ctx->r1) = ctx->r2;
L_8004AA70:
    // 0x8004AA70: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x8004AA74: divu        $zero, $v1, $a2
    lo = S32(U32(ctx->r3) / U32(ctx->r6)); hi = S32(U32(ctx->r3) % U32(ctx->r6));
    // 0x8004AA78: bne         $a2, $zero, L_8004AA84
    if (ctx->r6 != 0) {
        // 0x8004AA7C: nop
    
            goto L_8004AA84;
    }
    // 0x8004AA7C: nop

    // 0x8004AA80: break       7
    do_break(2147789440);
L_8004AA84:
    // 0x8004AA84: mflo        $v1
    ctx->r3 = lo;
    // 0x8004AA88: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    // 0x8004AA8C: nop

    // 0x8004AA90: divu        $zero, $a1, $a2
    lo = S32(U32(ctx->r5) / U32(ctx->r6)); hi = S32(U32(ctx->r5) % U32(ctx->r6));
    // 0x8004AA94: bne         $a2, $zero, L_8004AAA0
    if (ctx->r6 != 0) {
        // 0x8004AA98: nop
    
            goto L_8004AAA0;
    }
    // 0x8004AA98: nop

    // 0x8004AA9C: break       7
    do_break(2147789468);
L_8004AAA0:
    // 0x8004AAA0: mflo        $a1
    ctx->r5 = lo;
    // 0x8004AAA4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004AAA8: lw          $a0, 0x4978($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4978);
    // 0x8004AAAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004AAB0: sw          $a2, -0x2ED4($at)
    MEM_W(-0X2ED4, ctx->r1) = ctx->r6;
    // 0x8004AAB4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8004AAB8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8004AABC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004AAC0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8004AAC4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8004AAC8: lbu         $a0, -0x354E($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X354E);
    // 0x8004AACC: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    // 0x8004AAD0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8004AAD4: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8004AAD8: lbu         $a3, -0x354D($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X354D);
    // 0x8004AADC: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8004AAE0: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x8004AAE4: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8004AAE8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8004AAEC: mult        $v1, $a2
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004AAF0: mflo        $v1
    ctx->r3 = lo;
    // 0x8004AAF4: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x8004AAF8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004AAFC: lhu         $v0, -0x49FC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X49FC);
    // 0x8004AB00: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8004AB04: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x8004AB08: sh          $zero, 0x22($sp)
    MEM_H(0X22, ctx->r29) = 0;
    // 0x8004AB0C: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x8004AB10: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x8004AB14: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x8004AB18: mult        $a1, $a2
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004AB1C: mflo        $a1
    ctx->r5 = lo;
    // 0x8004AB20: sh          $a3, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r7;
    // 0x8004AB24: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8004AB28: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8004AB2C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8004AB30: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x8004AB34: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004AB38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004AB3C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8004AB40: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8004AB44: lhu         $v0, -0x49FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X49FA);
    // 0x8004AB48: srl         $a1, $a1, 1
    ctx->r5 = S32(U32(ctx->r5) >> 1);
    // 0x8004AB4C: addiu       $a1, $a1, -0xF0
    ctx->r5 = ADD32(ctx->r5, -0XF0);
    // 0x8004AB50: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8004AB54: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8004AB58: jal         0x8004B008
    // 0x8004AB5C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8004B008_26408(rdram, ctx);
        goto after_0;
    // 0x8004AB5C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_0:
    // 0x8004AB60: jal         0x8004B494
    // 0x8004AB64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004B494_26894(rdram, ctx);
        goto after_1;
    // 0x8004AB64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8004AB68:
    // 0x8004AB68: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004AB6C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8004AB70: jr          $ra
    // 0x8004AB74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8004AB74: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8008D85C_68C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D85C: sb          $zero, 0xD2($a0)
    MEM_B(0XD2, ctx->r4) = 0;
    // 0x8008D860: jr          $ra
    // 0x8008D864: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D864: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_8008D26C_6866C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D26C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8008D270: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x8008D274: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x8008D278: sw          $zero, 0x74($a0)
    MEM_W(0X74, ctx->r4) = 0;
    // 0x8008D27C: sw          $zero, 0x78($a0)
    MEM_W(0X78, ctx->r4) = 0;
    // 0x8008D280: sw          $zero, 0x44($a0)
    MEM_W(0X44, ctx->r4) = 0;
    // 0x8008D284: jr          $ra
    // 0x8008D288: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8008D288: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80053550_2E950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80053550: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80053554: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80053558: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8005355C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80053560: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80053564: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80053568: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x8005356C: addiu       $s0, $s0, -0x49F0
    ctx->r16 = ADD32(ctx->r16, -0X49F0);
    // 0x80053570: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80053574: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80053578: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8005357C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80053580: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80053584: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80053588: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
L_8005358C:
    // 0x8005358C: jal         0x80054B94
    // 0x80053590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80054B94_2FF94(rdram, ctx);
        goto after_0;
    // 0x80053590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80053594: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80053598: sltiu       $v0, $s1, 0x4
    ctx->r2 = ctx->r17 < 0X4 ? 1 : 0;
    // 0x8005359C: bne         $v0, $zero, L_8005358C
    if (ctx->r2 != 0) {
        // 0x800535A0: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_8005358C;
    }
    // 0x800535A0: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x800535A4: lui         $s4, 0x3D
    ctx->r20 = S32(0X3D << 16);
    // 0x800535A8: ori         $s4, $s4, 0x900
    ctx->r20 = ctx->r20 | 0X900;
    // 0x800535AC: lbu         $s6, 0x1($s2)
    ctx->r22 = MEM_BU(ctx->r18, 0X1);
    // 0x800535B0: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x800535B4: lw          $s5, -0x11CC($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X11CC);
    // 0x800535B8: beq         $s6, $zero, L_800535D0
    if (ctx->r22 == 0) {
        // 0x800535BC: addiu       $s3, $zero, -0x1
        ctx->r19 = ADD32(0, -0X1);
            goto L_800535D0;
    }
    // 0x800535BC: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x800535C0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800535C4: lbu         $s0, -0x1B6D($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1B6D);
    // 0x800535C8: j           L_800535DC
    // 0x800535CC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
        goto L_800535DC;
    // 0x800535CC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_800535D0:
    // 0x800535D0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800535D4: lbu         $s0, -0x1B6E($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X1B6E);
    // 0x800535D8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_800535DC:
    // 0x800535DC: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x800535E0: jal         0x8009A3B4
    // 0x800535E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800535E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x800535E8: beq         $s5, $zero, L_80053818
    if (ctx->r21 == 0) {
        // 0x800535EC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80053818;
    }
    // 0x800535EC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x800535F0: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    // 0x800535F4: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800535F8: lui         $s2, 0x7F
    ctx->r18 = S32(0X7F << 16);
    // 0x800535FC: ori         $s2, $s2, 0xFFFF
    ctx->r18 = ctx->r18 | 0XFFFF;
    // 0x80053600: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
    // 0x80053604: lui         $fp, 0x801B
    ctx->r30 = S32(0X801B << 16);
    // 0x80053608: addiu       $fp, $fp, -0x2782
    ctx->r30 = ADD32(ctx->r30, -0X2782);
    // 0x8005360C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
L_80053610:
    // 0x80053610: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80053614: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x80053618: addu        $v0, $a2, $fp
    ctx->r2 = ADD32(ctx->r6, ctx->r30);
    // 0x8005361C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80053620: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80053624: srl         $v0, $v0, 13
    ctx->r2 = S32(U32(ctx->r2) >> 13);
    // 0x80053628: sllv        $v0, $a3, $v0
    ctx->r2 = S32(ctx->r7 << (ctx->r2 & 31));
    // 0x8005362C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80053630: beql        $v0, $zero, L_8005380C
    if (ctx->r2 == 0) {
        // 0x80053634: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005380C;
    }
    goto skip_0;
    // 0x80053634: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80053638: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8005363C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80053640: lw          $a0, -0x2780($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2780);
    // 0x80053644: and         $v0, $a0, $s2
    ctx->r2 = ctx->r4 & ctx->r18;
    // 0x80053648: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x8005364C: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    // 0x80053650: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x80053654: bnel        $v0, $zero, L_8005380C
    if (ctx->r2 != 0) {
        // 0x80053658: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005380C;
    }
    goto skip_1;
    // 0x80053658: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x8005365C: srl         $a0, $a0, 24
    ctx->r4 = S32(U32(ctx->r4) >> 24);
    // 0x80053660: sltiu       $v0, $a0, 0x80
    ctx->r2 = ctx->r4 < 0X80 ? 1 : 0;
    // 0x80053664: beql        $v0, $zero, L_8005380C
    if (ctx->r2 == 0) {
        // 0x80053668: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005380C;
    }
    goto skip_2;
    // 0x80053668: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x8005366C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80053670: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80053674: lhu         $v0, -0x2782($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2782);
    // 0x80053678: andi        $v0, $v0, 0x600
    ctx->r2 = ctx->r2 & 0X600;
    // 0x8005367C: beq         $v0, $zero, L_80053704
    if (ctx->r2 == 0) {
        // 0x80053680: addiu       $a1, $s1, 0x1
        ctx->r5 = ADD32(ctx->r17, 0X1);
            goto L_80053704;
    }
    // 0x80053680: addiu       $a1, $s1, 0x1
    ctx->r5 = ADD32(ctx->r17, 0X1);
    // 0x80053684: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80053688: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8005368C: lh          $v1, -0x2788($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2788);
    // 0x80053690: sll         $a0, $a1, 1
    ctx->r4 = S32(ctx->r5 << 1);
    // 0x80053694: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80053698: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8005369C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800536A0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800536A4: lh          $v0, -0x2788($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2788);
    // 0x800536A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800536AC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800536B0: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x800536B4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800536B8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800536BC: lh          $v0, -0x2786($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2786);
    // 0x800536C0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800536C4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800536C8: lh          $v1, -0x2786($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2786);
    // 0x800536CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800536D0: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x800536D4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x800536D8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800536DC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800536E0: lh          $v0, -0x2784($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X2784);
    // 0x800536E4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800536E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800536EC: lh          $v1, -0x2784($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2784);
    // 0x800536F0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x800536F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800536F8: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x800536FC: j           L_8005371C
    // 0x80053700: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
        goto L_8005371C;
    // 0x80053700: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
L_80053704:
    // 0x80053704: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80053708: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8005370C: addiu       $a3, $a3, -0x2788
    ctx->r7 = ADD32(ctx->r7, -0X2788);
    // 0x80053710: addu        $a1, $a2, $a3
    ctx->r5 = ADD32(ctx->r6, ctx->r7);
    // 0x80053714: jal         0x8009A3B4
    // 0x80053718: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80053718: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
L_8005371C:
    // 0x8005371C: lh          $v1, 0x18($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X18);
    // 0x80053720: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80053724: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x80053728: addiu       $v0, $a2, 0x7D0
    ctx->r2 = ADD32(ctx->r6, 0X7D0);
    // 0x8005372C: sltiu       $v0, $v0, 0xFA1
    ctx->r2 = ctx->r2 < 0XFA1 ? 1 : 0;
    // 0x80053730: beql        $v0, $zero, L_8005380C
    if (ctx->r2 == 0) {
        // 0x80053734: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005380C;
    }
    goto skip_3;
    // 0x80053734: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_3:
    // 0x80053738: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x8005373C: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80053740: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80053744: addiu       $v0, $a0, 0x7D0
    ctx->r2 = ADD32(ctx->r4, 0X7D0);
    // 0x80053748: sltiu       $v0, $v0, 0xFA1
    ctx->r2 = ctx->r2 < 0XFA1 ? 1 : 0;
    // 0x8005374C: beql        $v0, $zero, L_8005380C
    if (ctx->r2 == 0) {
        // 0x80053750: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005380C;
    }
    goto skip_4;
    // 0x80053750: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x80053754: lh          $v1, 0x1C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1C);
    // 0x80053758: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8005375C: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
    // 0x80053760: addiu       $v0, $a1, 0x7D0
    ctx->r2 = ADD32(ctx->r5, 0X7D0);
    // 0x80053764: sltiu       $v0, $v0, 0xFA1
    ctx->r2 = ctx->r2 < 0XFA1 ? 1 : 0;
    // 0x80053768: beql        $v0, $zero, L_8005380C
    if (ctx->r2 == 0) {
        // 0x8005376C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005380C;
    }
    goto skip_5;
    // 0x8005376C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_5:
    // 0x80053770: nop

    // 0x80053774: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053778: mflo        $v1
    ctx->r3 = lo;
    // 0x8005377C: nop

    // 0x80053780: nop

    // 0x80053784: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053788: mflo        $a0
    ctx->r4 = lo;
    // 0x8005378C: nop

    // 0x80053790: nop

    // 0x80053794: mult        $a1, $a1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053798: mflo        $a1
    ctx->r5 = lo;
    // 0x8005379C: lui         $v0, 0x3D
    ctx->r2 = S32(0X3D << 16);
    // 0x800537A0: ori         $v0, $v0, 0x900
    ctx->r2 = ctx->r2 | 0X900;
    // 0x800537A4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800537A8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800537AC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800537B0: bnel        $v0, $zero, L_8005380C
    if (ctx->r2 != 0) {
        // 0x800537B4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005380C;
    }
    goto skip_6;
    // 0x800537B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_6:
    // 0x800537B8: addiu       $v0, $s6, 0x1
    ctx->r2 = ADD32(ctx->r22, 0X1);
    // 0x800537BC: and         $v0, $s0, $v0
    ctx->r2 = ctx->r16 & ctx->r2;
    // 0x800537C0: bne         $v0, $zero, L_800537F8
    if (ctx->r2 != 0) {
        // 0x800537C4: sltu        $v0, $v1, $s4
        ctx->r2 = ctx->r3 < ctx->r20 ? 1 : 0;
            goto L_800537F8;
    }
    // 0x800537C4: sltu        $v0, $v1, $s4
    ctx->r2 = ctx->r3 < ctx->r20 ? 1 : 0;
    // 0x800537C8: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x800537CC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x800537D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800537D4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800537D8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800537DC: lw          $a1, -0x2780($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2780);
    // 0x800537E0: srl         $a0, $a1, 24
    ctx->r4 = S32(U32(ctx->r5) >> 24);
    // 0x800537E4: and         $a1, $a1, $s2
    ctx->r5 = ctx->r5 & ctx->r18;
    // 0x800537E8: jal         0x80054AC4
    // 0x800537EC: or          $a1, $a1, $s7
    ctx->r5 = ctx->r5 | ctx->r23;
    func_80054AC4_2FEC4(rdram, ctx);
        goto after_3;
    // 0x800537EC: or          $a1, $a1, $s7
    ctx->r5 = ctx->r5 | ctx->r23;
    after_3:
    // 0x800537F0: j           L_8005380C
    // 0x800537F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_8005380C;
    // 0x800537F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_800537F8:
    // 0x800537F8: beql        $v0, $zero, L_8005380C
    if (ctx->r2 == 0) {
        // 0x800537FC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8005380C;
    }
    goto skip_7;
    // 0x800537FC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_7:
    // 0x80053800: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x80053804: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    // 0x80053808: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8005380C:
    // 0x8005380C: sltu        $v0, $s1, $s5
    ctx->r2 = ctx->r17 < ctx->r21 ? 1 : 0;
    // 0x80053810: bne         $v0, $zero, L_80053610
    if (ctx->r2 != 0) {
        // 0x80053814: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_80053610;
    }
    // 0x80053814: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
L_80053818:
    // 0x80053818: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8005381C: lw          $v0, -0x4998($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4998);
    // 0x80053820: beq         $v0, $zero, L_80053830
    if (ctx->r2 == 0) {
        // 0x80053824: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80053830;
    }
    // 0x80053824: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80053828: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8005382C: sw          $v0, -0x4998($at)
    MEM_W(-0X4998, ctx->r1) = ctx->r2;
L_80053830:
    // 0x80053830: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80053834: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80053838: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8005383C: beq         $v0, $zero, L_8005384C
    if (ctx->r2 == 0) {
        // 0x80053840: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005384C;
    }
    // 0x80053840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80053844: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80053848: sw          $v0, -0x4994($at)
    MEM_W(-0X4994, ctx->r1) = ctx->r2;
L_8005384C:
    // 0x8005384C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80053850: lhu         $v0, -0x783E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783E);
    // 0x80053854: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x80053858: bne         $v0, $zero, L_80053868
    if (ctx->r2 != 0) {
        // 0x8005385C: nop
    
            goto L_80053868;
    }
    // 0x8005385C: nop

    // 0x80053860: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80053864: sw          $zero, -0x4994($at)
    MEM_W(-0X4994, ctx->r1) = 0;
L_80053868:
    // 0x80053868: bltz        $s3, L_80053918
    if (SIGNED(ctx->r19) < 0) {
        // 0x8005386C: sll         $v0, $s3, 1
        ctx->r2 = S32(ctx->r19 << 1);
            goto L_80053918;
    }
    // 0x8005386C: sll         $v0, $s3, 1
    ctx->r2 = S32(ctx->r19 << 1);
    // 0x80053870: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80053874: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80053878: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8005387C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80053880: lbu         $a0, -0x2780($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2780);
    // 0x80053884: sltiu       $v0, $a0, 0x80
    ctx->r2 = ctx->r4 < 0X80 ? 1 : 0;
    // 0x80053888: beq         $v0, $zero, L_8005391C
    if (ctx->r2 == 0) {
        // 0x8005388C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8005391C;
    }
    // 0x8005388C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80053890: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80053894: lw          $v0, -0x4994($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4994);
    // 0x80053898: beq         $v0, $zero, L_800538D4
    if (ctx->r2 == 0) {
        // 0x8005389C: nop
    
            goto L_800538D4;
    }
    // 0x8005389C: nop

    // 0x800538A0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800538A4: lw          $v0, -0x499C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X499C);
    // 0x800538A8: beq         $a0, $v0, L_800538C0
    if (ctx->r4 == ctx->r2) {
        // 0x800538AC: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_800538C0;
    }
    // 0x800538AC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x800538B0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800538B4: sw          $v0, -0x4998($at)
    MEM_W(-0X4998, ctx->r1) = ctx->r2;
    // 0x800538B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800538BC: sw          $a0, -0x499C($at)
    MEM_W(-0X499C, ctx->r1) = ctx->r4;
L_800538C0:
    // 0x800538C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800538C4: jal         0x80053ED8
    // 0x800538C8: sw          $zero, -0x4994($at)
    MEM_W(-0X4994, ctx->r1) = 0;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x800538C8: sw          $zero, -0x4994($at)
    MEM_W(-0X4994, ctx->r1) = 0;
    after_4:
    // 0x800538CC: j           L_8005391C
    // 0x800538D0: nop

        goto L_8005391C;
    // 0x800538D0: nop

L_800538D4:
    // 0x800538D4: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x800538D8: jal         0x80053ED8
    // 0x800538DC: lbu         $a0, -0x4999($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4999);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_5;
    // 0x800538DC: lbu         $a0, -0x4999($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4999);
    after_5:
    // 0x800538E0: beq         $v0, $zero, L_80053904
    if (ctx->r2 == 0) {
        // 0x800538E4: nop
    
            goto L_80053904;
    }
    // 0x800538E4: nop

    // 0x800538E8: lh          $v0, 0x6E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6E);
    // 0x800538EC: bgtz        $v0, L_80053904
    if (SIGNED(ctx->r2) > 0) {
        // 0x800538F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80053904;
    }
    // 0x800538F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800538F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800538F8: sw          $v0, -0x4994($at)
    MEM_W(-0X4994, ctx->r1) = ctx->r2;
    // 0x800538FC: j           L_8005391C
    // 0x80053900: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8005391C;
    // 0x80053900: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80053904:
    // 0x80053904: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80053908: jal         0x80053ED8
    // 0x8005390C: lbu         $a0, -0x4999($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4999);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_6;
    // 0x8005390C: lbu         $a0, -0x4999($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X4999);
    after_6:
    // 0x80053910: j           L_8005391C
    // 0x80053914: nop

        goto L_8005391C;
    // 0x80053914: nop

L_80053918:
    // 0x80053918: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8005391C:
    // 0x8005391C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80053920: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80053924: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80053928: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8005392C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80053930: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80053934: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80053938: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8005393C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80053940: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80053944: jr          $ra
    // 0x80053948: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80053948: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8006B97C_46D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006B97C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B980: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006B984: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006B988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B98C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B990: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8006B994: beq         $v0, $zero, L_8006BBF4
    if (ctx->r2 == 0) {
        // 0x8006B998: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006BBF4;
    }
    // 0x8006B998: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006B99C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006B9A0: addu        $at, $at, $v0
    gpr jr_addend_8006B9A8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006B9A4: lw          $v0, 0x28A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X28A0);
    // 0x8006B9A8: jr          $v0
    // 0x8006B9AC: nop

    switch (jr_addend_8006B9A8 >> 2) {
        case 0: goto L_8006B9B0; break;
        case 1: goto L_8006B9B0; break;
        case 2: goto L_8006BA58; break;
        case 3: goto L_8006BA9C; break;
        case 4: goto L_8006BAC0; break;
        case 5: goto L_8006BB60; break;
        default: switch_error(__func__, 0x8006B9A8, 0x800D28A0);
    }
    // 0x8006B9AC: nop

L_8006B9B0:
    // 0x8006B9B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B9B4: lbu         $a2, 0xA($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B9B8: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x8006B9BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8006B9C0: sltu        $a2, $zero, $a2
    ctx->r6 = 0 < ctx->r6 ? 1 : 0;
    // 0x8006B9C4: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8006B9C8: jal         0x8006FB90
    // 0x8006B9CC: andi        $a2, $a2, 0x6
    ctx->r6 = ctx->r6 & 0X6;
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006B9CC: andi        $a2, $a2, 0x6
    ctx->r6 = ctx->r6 & 0X6;
    after_0:
    // 0x8006B9D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B9D4: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8006B9D8: jal         0x800700D8
    // 0x8006B9DC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_800700D8_4B4D8(rdram, ctx);
        goto after_1;
    // 0x8006B9DC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_1:
    // 0x8006B9E0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006B9E4: addiu       $v0, $zero, -0x160
    ctx->r2 = ADD32(0, -0X160);
    // 0x8006B9E8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8006B9EC: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8006B9F0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8006B9F4: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8006B9F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B9FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006BA00: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006BA04: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x8006BA08: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8006BA0C: sb          $v1, 0x168($s0)
    MEM_B(0X168, ctx->r16) = ctx->r3;
    // 0x8006BA10: sb          $v1, 0x169($s0)
    MEM_B(0X169, ctx->r16) = ctx->r3;
    // 0x8006BA14: jal         0x8006FC34
    // 0x8006BA18: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    func_8006FC34_4B034(rdram, ctx);
        goto after_2;
    // 0x8006BA18: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    after_2:
    // 0x8006BA1C: jal         0x8002A46C
    // 0x8006BA20: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8002A46C_586C(rdram, ctx);
        goto after_3;
    // 0x8006BA20: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_3:
    // 0x8006BA24: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    // 0x8006BA28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006BA2C: jal         0x8002A2F8
    // 0x8006BA30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x8006BA30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8006BA34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006BA38: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8006BA3C: jal         0x80089EE4
    // 0x8006BA40: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80089EE4_652E4(rdram, ctx);
        goto after_5;
    // 0x8006BA40: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_5:
    // 0x8006BA44: jal         0x80034634
    // 0x8006BA48: nop

    func_80034634_FA34(rdram, ctx);
        goto after_6;
    // 0x8006BA48: nop

    after_6:
    // 0x8006BA4C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006BA50: j           L_8006BB2C
    // 0x8006BA54: sh          $zero, 0x108($s0)
    MEM_H(0X108, ctx->r16) = 0;
        goto L_8006BB2C;
    // 0x8006BA54: sh          $zero, 0x108($s0)
    MEM_H(0X108, ctx->r16) = 0;
L_8006BA58:
    // 0x8006BA58: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8006BA5C: bne         $v0, $zero, L_8006BA80
    if (ctx->r2 != 0) {
        // 0x8006BA60: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006BA80;
    }
    // 0x8006BA60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006BA64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BA68: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8006BA6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006BA70: jal         0x8006FB90
    // 0x8006BA74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_7;
    // 0x8006BA74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x8006BA78: j           L_8006BB1C
    // 0x8006BA7C: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
        goto L_8006BB1C;
    // 0x8006BA7C: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
L_8006BA80:
    // 0x8006BA80: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8006BA84: bne         $v1, $v0, L_8006BB38
    if (ctx->r3 != ctx->r2) {
        // 0x8006BA88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006BB38;
    }
    // 0x8006BA88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BA8C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006BA90: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8006BA94: j           L_8006BB38
    // 0x8006BA98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006BB38;
    // 0x8006BA98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006BA9C:
    // 0x8006BA9C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006BAA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006BAA4: bne         $v1, $v0, L_8006BBF4
    if (ctx->r3 != ctx->r2) {
        // 0x8006BAA8: nop
    
            goto L_8006BBF4;
    }
    // 0x8006BAA8: nop

    // 0x8006BAAC: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8006BAB0: bltz        $v0, L_8006BBE8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006BAB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006BBE8;
    }
    // 0x8006BAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BAB8: j           L_8006BB80
    // 0x8006BABC: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
        goto L_8006BB80;
    // 0x8006BABC: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
L_8006BAC0:
    // 0x8006BAC0: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8006BAC4: bne         $v0, $zero, L_8006BB38
    if (ctx->r2 != 0) {
        // 0x8006BAC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006BB38;
    }
    // 0x8006BAC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BACC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x8006BAD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006BAD4: jal         0x8006FB90
    // 0x8006BAD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_8;
    // 0x8006BAD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x8006BADC: jal         0x8004A2AC
    // 0x8006BAE0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8004A2AC_256AC(rdram, ctx);
        goto after_9;
    // 0x8006BAE0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_9:
    // 0x8006BAE4: beq         $v0, $zero, L_8006BB08
    if (ctx->r2 == 0) {
        // 0x8006BAE8: addiu       $a0, $zero, 0x1E
        ctx->r4 = ADD32(0, 0X1E);
            goto L_8006BB08;
    }
    // 0x8006BAE8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8006BAEC: lb          $v0, 0x16A($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X16A);
    // 0x8006BAF0: bne         $v0, $zero, L_8006BB0C
    if (ctx->r2 != 0) {
        // 0x8006BAF4: addiu       $a1, $zero, 0x400
        ctx->r5 = ADD32(0, 0X400);
            goto L_8006BB0C;
    }
    // 0x8006BAF4: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8006BAF8: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8006BAFC: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8006BB00: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8006BB04: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
L_8006BB08:
    // 0x8006BB08: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
L_8006BB0C:
    // 0x8006BB0C: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    // 0x8006BB10: jal         0x8003491C
    // 0x8006BB14: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    func_8003491C_FD1C(rdram, ctx);
        goto after_10;
    // 0x8006BB14: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    after_10:
    // 0x8006BB18: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
L_8006BB1C:
    // 0x8006BB1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006BB20: jal         0x8002A2F8
    // 0x8006BB24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_11;
    // 0x8006BB24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x8006BB28: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_8006BB2C:
    // 0x8006BB2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006BB30: j           L_8006BBF4
    // 0x8006BB34: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006BBF4;
    // 0x8006BB34: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006BB38:
    // 0x8006BB38: lhu         $v0, 0x46($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X46);
    // 0x8006BB3C: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8006BB40: lh          $a3, 0x48($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X48);
    // 0x8006BB44: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8006BB48: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8006BB4C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8006BB50: jal         0x8006FC34
    // 0x8006BB54: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    func_8006FC34_4B034(rdram, ctx);
        goto after_12;
    // 0x8006BB54: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    after_12:
    // 0x8006BB58: j           L_8006BBF4
    // 0x8006BB5C: nop

        goto L_8006BBF4;
    // 0x8006BB5C: nop

L_8006BB60:
    // 0x8006BB60: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006BB64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006BB68: bne         $v1, $v0, L_8006BBF4
    if (ctx->r3 != ctx->r2) {
        // 0x8006BB6C: nop
    
            goto L_8006BBF4;
    }
    // 0x8006BB6C: nop

    // 0x8006BB70: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8006BB74: bltz        $v0, L_8006BBE8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006BB78: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006BBE8;
    }
    // 0x8006BB78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BB7C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
L_8006BB80:
    // 0x8006BB80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006BB84: jal         0x8006FB90
    // 0x8006BB88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_13;
    // 0x8006BB88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_13:
    // 0x8006BB8C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8006BB90: lhu         $v1, 0x116($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X116);
    // 0x8006BB94: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8006BB98: addiu       $a0, $a0, 0x2F4C
    ctx->r4 = ADD32(ctx->r4, 0X2F4C);
    // 0x8006BB9C: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006BBA0: sh          $zero, 0x116($s0)
    MEM_H(0X116, ctx->r16) = 0;
    // 0x8006BBA4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8006BBA8: jal         0x80034A54
    // 0x8006BBAC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80034A54_FE54(rdram, ctx);
        goto after_14;
    // 0x8006BBAC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_14:
    // 0x8006BBB0: jal         0x80049F14
    // 0x8006BBB4: nop

    func_80049F14_25314(rdram, ctx);
        goto after_15;
    // 0x8006BBB4: nop

    after_15:
    // 0x8006BBB8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006BBBC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006BBC0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8006BBC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006BBC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006BBCC: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8006BBD0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8006BBD4: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    // 0x8006BBD8: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
    // 0x8006BBDC: sb          $zero, 0x169($s0)
    MEM_B(0X169, ctx->r16) = 0;
    // 0x8006BBE0: j           L_8006BBF4
    // 0x8006BBE4: sb          $v0, 0x111($s0)
    MEM_B(0X111, ctx->r16) = ctx->r2;
        goto L_8006BBF4;
    // 0x8006BBE4: sb          $v0, 0x111($s0)
    MEM_B(0X111, ctx->r16) = ctx->r2;
L_8006BBE8:
    // 0x8006BBE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006BBEC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8006BBF0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8006BBF4:
    // 0x8006BBF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006BBF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006BBFC: jr          $ra
    // 0x8006BC00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006BC00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800354B0_108B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800354B0: jr          $ra
    // 0x800354B4: nop

    TRACE_RETURN()
    return;
    // 0x800354B4: nop

;}
RECOMP_FUNC void func_80094440_6F840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80094440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094444: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80094448: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x8009444C: jal         0x80093C88
    // 0x80094450: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80093C88_6F088(rdram, ctx);
        goto after_0;
    // 0x80094450: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80094454: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80094458: jr          $ra
    // 0x8009445C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8009445C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006770C_42B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006770C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80067710: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x80067714: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80067718: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8006771C: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80067720: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80067724: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80067728: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8006772C: and         $a1, $v0, $a0
    ctx->r5 = ctx->r2 & ctx->r4;
    // 0x80067730: bne         $a1, $zero, L_800677E8
    if (ctx->r5 != 0) {
        // 0x80067734: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800677E8;
    }
    // 0x80067734: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80067738: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x8006773C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80067740: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80067744: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x80067748: sh          $zero, 0x86($s0)
    MEM_H(0X86, ctx->r16) = 0;
    // 0x8006774C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80067750: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80067754: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
    // 0x80067758: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8006775C: sb          $zero, 0x73($s0)
    MEM_B(0X73, ctx->r16) = 0;
    // 0x80067760: sb          $v1, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r3;
    // 0x80067764: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80067768: sb          $v0, -0x482E($at)
    MEM_B(-0X482E, ctx->r1) = ctx->r2;
    // 0x8006776C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80067770: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80067774: sb          $v0, -0x482D($at)
    MEM_B(-0X482D, ctx->r1) = ctx->r2;
    // 0x80067778: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x8006777C: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80067780: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067784: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80067788: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006778C: beq         $v1, $zero, L_800677E4
    if (ctx->r3 == 0) {
        // 0x80067790: sh          $v0, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r2;
            goto L_800677E4;
    }
    // 0x80067790: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80067794: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80067798: addiu       $a3, $a3, 0x2D98
    ctx->r7 = ADD32(ctx->r7, 0X2D98);
    // 0x8006779C: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
L_800677A0:
    // 0x800677A0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800677A4: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x800677A8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800677AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800677B0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x800677B4: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x800677B8: lbu         $a1, 0x0($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X0);
    // 0x800677BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800677C0: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x800677C4: sb          $a1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r5;
    // 0x800677C8: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x800677CC: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x800677D0: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x800677D4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800677D8: bne         $v0, $zero, L_800677A0
    if (ctx->r2 != 0) {
        // 0x800677DC: andi        $v1, $a2, 0xFFFF
        ctx->r3 = ctx->r6 & 0XFFFF;
            goto L_800677A0;
    }
    // 0x800677DC: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x800677E0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_800677E4:
    // 0x800677E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_800677E8:
    // 0x800677E8: lbu         $a1, 0x71($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X71);
    // 0x800677EC: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x800677F0: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x800677F4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800677F8: sll         $v1, $a1, 24
    ctx->r3 = S32(ctx->r5 << 24);
    // 0x800677FC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80067800: bgtz        $a0, L_80067A98
    if (SIGNED(ctx->r4) > 0) {
        // 0x80067804: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80067A98;
    }
    // 0x80067804: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80067808: lhu         $a0, 0xBA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XBA);
    // 0x8006780C: andi        $v0, $a0, 0x6000
    ctx->r2 = ctx->r4 & 0X6000;
    // 0x80067810: beq         $v0, $zero, L_80067850
    if (ctx->r2 == 0) {
        // 0x80067814: andi        $v0, $a0, 0x8000
        ctx->r2 = ctx->r4 & 0X8000;
            goto L_80067850;
    }
    // 0x80067814: andi        $v0, $a0, 0x8000
    ctx->r2 = ctx->r4 & 0X8000;
    // 0x80067818: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8006781C: lw          $v0, -0x2404($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2404);
    // 0x80067820: beq         $v0, $zero, L_80067848
    if (ctx->r2 == 0) {
        // 0x80067824: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80067848;
    }
    // 0x80067824: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80067828: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006782C: jal         0x8002A2F8
    // 0x80067830: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80067830: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80067834: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x80067838: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8006783C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80067840: j           L_80067880
    // 0x80067844: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_80067880;
    // 0x80067844: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80067848:
    // 0x80067848: j           L_80067904
    // 0x8006784C: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
        goto L_80067904;
    // 0x8006784C: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
L_80067850:
    // 0x80067850: beq         $v0, $zero, L_8006788C
    if (ctx->r2 == 0) {
        // 0x80067854: andi        $v0, $a0, 0x20
        ctx->r2 = ctx->r4 & 0X20;
            goto L_8006788C;
    }
    // 0x80067854: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80067858: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x8006785C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067860: jal         0x8002A2F8
    // 0x80067864: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80067864: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80067868: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x8006786C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80067870: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80067874: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80067878: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8006787C: sw          $zero, -0x2404($at)
    MEM_W(-0X2404, ctx->r1) = 0;
L_80067880:
    // 0x80067880: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80067884: j           L_80067AA0
    // 0x80067888: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_80067AA0;
    // 0x80067888: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_8006788C:
    // 0x8006788C: beq         $v0, $zero, L_80067924
    if (ctx->r2 == 0) {
        // 0x80067890: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80067924;
    }
    // 0x80067890: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80067894: lb          $a0, 0x72($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X72);
    // 0x80067898: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
    // 0x8006789C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800678A0: sra         $a1, $v0, 24
    ctx->r5 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800678A4: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x800678A8: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800678AC: beq         $v0, $zero, L_80067918
    if (ctx->r2 == 0) {
        // 0x800678B0: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80067918;
    }
    // 0x800678B0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x800678B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800678B8: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x800678BC: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x800678C0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800678C4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800678C8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800678CC: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x800678D0: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_800678D4:
    // 0x800678D4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800678D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800678DC: lbu         $v0, 0x2D98($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X2D98);
    // 0x800678E0: beql        $v1, $v0, L_80067900
    if (ctx->r3 == ctx->r2) {
        // 0x800678E4: sh          $a2, 0x86($s0)
        MEM_H(0X86, ctx->r16) = ctx->r6;
            goto L_80067900;
    }
    goto skip_0;
    // 0x800678E4: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
    skip_0:
    // 0x800678E8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800678EC: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x800678F0: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x800678F4: bne         $v0, $zero, L_800678D4
    if (ctx->r2 != 0) {
        // 0x800678F8: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_800678D4;
    }
    // 0x800678F8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x800678FC: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
L_80067900:
    // 0x80067900: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
L_80067904:
    // 0x80067904: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067908: jal         0x8002A2F8
    // 0x8006790C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8006790C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80067910: j           L_80067AA0
    // 0x80067914: nop

        goto L_80067AA0;
    // 0x80067914: nop

L_80067918:
    // 0x80067918: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x8006791C: j           L_80067AA0
    // 0x80067920: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80067AA0;
    // 0x80067920: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_80067924:
    // 0x80067924: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x80067928: beql        $v0, $zero, L_800679A4
    if (ctx->r2 == 0) {
        // 0x8006792C: andi        $v0, $a0, 0x10
        ctx->r2 = ctx->r4 & 0X10;
            goto L_800679A4;
    }
    goto skip_1;
    // 0x8006792C: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    skip_1:
    // 0x80067930: beq         $v1, $zero, L_8006793C
    if (ctx->r3 == 0) {
        // 0x80067934: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_8006793C;
    }
    // 0x80067934: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x80067938: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_8006793C:
    // 0x8006793C: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80067940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067944: jal         0x8002A2F8
    // 0x80067948: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80067948: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8006794C: lb          $a0, 0x72($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X72);
    // 0x80067950: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80067954: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067958: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x8006795C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80067960: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80067964: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80067968: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8006796C: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x80067970: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80067974:
    // 0x80067974: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80067978: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006797C: lbu         $v0, 0x2D98($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X2D98);
    // 0x80067980: beql        $v1, $v0, L_80067AA0
    if (ctx->r3 == ctx->r2) {
        // 0x80067984: sh          $a2, 0x86($s0)
        MEM_H(0X86, ctx->r16) = ctx->r6;
            goto L_80067AA0;
    }
    goto skip_2;
    // 0x80067984: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
    skip_2:
    // 0x80067988: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8006798C: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80067990: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x80067994: bne         $v0, $zero, L_80067974
    if (ctx->r2 != 0) {
        // 0x80067998: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_80067974;
    }
    // 0x80067998: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8006799C: j           L_80067AA0
    // 0x800679A0: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
        goto L_80067AA0;
    // 0x800679A0: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
L_800679A4:
    // 0x800679A4: beq         $v0, $zero, L_800679C4
    if (ctx->r2 == 0) {
        // 0x800679A8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800679C4;
    }
    // 0x800679A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800679AC: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x800679B0: lhu         $v0, 0x86($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X86);
    // 0x800679B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800679B8: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x800679BC: j           L_80067A2C
    // 0x800679C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80067A2C;
    // 0x800679C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800679C4:
    // 0x800679C4: lw          $a1, 0xB8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB8);
    // 0x800679C8: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x800679CC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x800679D0: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x800679D4: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x800679D8: bne         $v0, $v1, L_80067A10
    if (ctx->r2 != ctx->r3) {
        // 0x800679DC: andi        $v0, $a0, 0x40
        ctx->r2 = ctx->r4 & 0X40;
            goto L_80067A10;
    }
    // 0x800679DC: andi        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 & 0X40;
    // 0x800679E0: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x800679E4: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x800679E8: bne         $v0, $zero, L_80067A90
    if (ctx->r2 != 0) {
        // 0x800679EC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80067A90;
    }
    // 0x800679EC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800679F0: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x800679F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800679F8: lhu         $v1, 0x86($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X86);
    // 0x800679FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067A00: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80067A04: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
    // 0x80067A08: j           L_80067A80
    // 0x80067A0C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_80067A80;
    // 0x80067A0C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80067A10:
    // 0x80067A10: beq         $v0, $zero, L_80067A3C
    if (ctx->r2 == 0) {
        // 0x80067A14: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_80067A3C;
    }
    // 0x80067A14: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80067A18: lhu         $v0, 0x86($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X86);
    // 0x80067A1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067A20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067A24: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x80067A28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80067A2C:
    // 0x80067A2C: jal         0x8002A2F8
    // 0x80067A30: sh          $v0, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x80067A30: sh          $v0, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r2;
    after_4:
    // 0x80067A34: j           L_80067AA0
    // 0x80067A38: nop

        goto L_80067AA0;
    // 0x80067A38: nop

L_80067A3C:
    // 0x80067A3C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x80067A40: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80067A44: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80067A48: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x80067A4C: bne         $v0, $v1, L_80067AA0
    if (ctx->r2 != ctx->r3) {
        // 0x80067A50: nop
    
            goto L_80067AA0;
    }
    // 0x80067A50: nop

    // 0x80067A54: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80067A58: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80067A5C: bne         $v0, $zero, L_80067A90
    if (ctx->r2 != 0) {
        // 0x80067A60: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80067A90;
    }
    // 0x80067A60: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80067A64: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80067A68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067A6C: lhu         $v1, 0x86($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X86);
    // 0x80067A70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067A74: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80067A78: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
    // 0x80067A7C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80067A80:
    // 0x80067A80: jal         0x8002A2F8
    // 0x80067A84: sh          $v1, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x80067A84: sh          $v1, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r3;
    after_5:
    // 0x80067A88: j           L_80067AA0
    // 0x80067A8C: nop

        goto L_80067AA0;
    // 0x80067A8C: nop

L_80067A90:
    // 0x80067A90: j           L_80067AA0
    // 0x80067A94: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
        goto L_80067AA0;
    // 0x80067A94: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
L_80067A98:
    // 0x80067A98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80067A9C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80067AA0:
    // 0x80067AA0: lh          $v0, 0x86($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X86);
    // 0x80067AA4: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80067AA8: beql        $v0, $zero, L_80067AB0
    if (ctx->r2 == 0) {
        // 0x80067AAC: sh          $zero, 0x86($s0)
        MEM_H(0X86, ctx->r16) = 0;
            goto L_80067AB0;
    }
    goto skip_3;
    // 0x80067AAC: sh          $zero, 0x86($s0)
    MEM_H(0X86, ctx->r16) = 0;
    skip_3:
L_80067AB0:
    // 0x80067AB0: lh          $v0, 0x86($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X86);
    // 0x80067AB4: bgez        $v0, L_80067AC4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80067AB8: andi        $v1, $s2, 0xFFFF
        ctx->r3 = ctx->r18 & 0XFFFF;
            goto L_80067AC4;
    }
    // 0x80067AB8: andi        $v1, $s2, 0xFFFF
    ctx->r3 = ctx->r18 & 0XFFFF;
    // 0x80067ABC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80067AC0: sh          $v0, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r2;
L_80067AC4:
    // 0x80067AC4: bne         $v1, $zero, L_80067D38
    if (ctx->r3 != 0) {
        // 0x80067AC8: nop
    
            goto L_80067D38;
    }
    // 0x80067AC8: nop

    // 0x80067ACC: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80067AD0: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80067AD4: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80067AD8: beq         $v0, $zero, L_80067B24
    if (ctx->r2 == 0) {
        // 0x80067ADC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80067B24;
    }
    // 0x80067ADC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067AE0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80067AE4: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80067AE8:
    // 0x80067AE8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80067AEC: sll         $v1, $a0, 24
    ctx->r3 = S32(ctx->r4 << 24);
    // 0x80067AF0: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80067AF4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80067AF8: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80067AFC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80067B00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80067B04: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80067B08: sb          $a1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r5;
    // 0x80067B0C: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80067B10: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80067B14: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80067B18: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80067B1C: bne         $v0, $zero, L_80067AE8
    if (ctx->r2 != 0) {
        // 0x80067B20: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_80067AE8;
    }
    // 0x80067B20: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80067B24:
    // 0x80067B24: lb          $a0, 0x72($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X72);
    // 0x80067B28: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80067B2C: lh          $a1, 0x86($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X86);
    // 0x80067B30: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80067B34: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80067B38: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80067B3C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80067B40: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80067B44: lbu         $a1, 0x2D98($at)
    ctx->r5 = MEM_BU(ctx->r1, 0X2D98);
    // 0x80067B48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80067B4C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80067B50: sb          $a1, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r5;
    // 0x80067B54: lb          $a0, 0x72($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X72);
    // 0x80067B58: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80067B5C: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80067B60: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80067B64: lbu         $a1, -0x482E($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X482E);
    // 0x80067B68: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80067B6C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80067B70: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80067B74: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80067B78: sb          $a1, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r5;
    // 0x80067B7C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80067B80: lbu         $v0, -0x482E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X482E);
    // 0x80067B84: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80067B88: lbu         $a0, -0x482D($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X482D);
    // 0x80067B8C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80067B90: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80067B94: sb          $v0, -0x482E($at)
    MEM_B(-0X482E, ctx->r1) = ctx->r2;
    // 0x80067B98: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80067B9C: xori        $v1, $v0, 0x80
    ctx->r3 = ctx->r2 ^ 0X80;
    // 0x80067BA0: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80067BA4: xori        $v0, $v0, 0x60
    ctx->r2 = ctx->r2 ^ 0X60;
    // 0x80067BA8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80067BAC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80067BB0: beq         $v1, $zero, L_80067BC0
    if (ctx->r3 == 0) {
        // 0x80067BB4: negu        $v0, $a0
        ctx->r2 = SUB32(0, ctx->r4);
            goto L_80067BC0;
    }
    // 0x80067BB4: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x80067BB8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80067BBC: sb          $v0, -0x482D($at)
    MEM_B(-0X482D, ctx->r1) = ctx->r2;
L_80067BC0:
    // 0x80067BC0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067BC4: sw          $zero, -0x2404($at)
    MEM_W(-0X2404, ctx->r1) = 0;
    // 0x80067BC8: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80067BCC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80067BD0: blez        $v0, L_80067C48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80067BD4: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80067C48;
    }
    // 0x80067BD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067BD8: lw          $a3, 0x6C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X6C);
    // 0x80067BDC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80067BE0: lbu         $a1, 0x2D98($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2D98);
L_80067BE4:
    // 0x80067BE4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80067BE8: lw          $v0, -0x2404($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2404);
    // 0x80067BEC: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80067BF0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80067BF4: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80067BF8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067BFC: sw          $a0, -0x2404($at)
    MEM_W(-0X2404, ctx->r1) = ctx->r4;
    // 0x80067C00: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80067C04: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80067C08: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80067C0C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80067C10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80067C14: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
    // 0x80067C18: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80067C1C: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80067C20: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80067C24: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067C28: sw          $a0, -0x2404($at)
    MEM_W(-0X2404, ctx->r1) = ctx->r4;
    // 0x80067C2C: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80067C30: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80067C34: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80067C38: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80067C3C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80067C40: bne         $v0, $zero, L_80067BE4
    if (ctx->r2 != 0) {
        // 0x80067C44: nop
    
            goto L_80067BE4;
    }
    // 0x80067C44: nop

L_80067C48:
    // 0x80067C48: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80067C4C: lw          $a0, -0x2378($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2378);
    // 0x80067C50: jal         0x80070E80
    // 0x80067C54: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_80070E80_4C280(rdram, ctx);
        goto after_6;
    // 0x80067C54: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_6:
    // 0x80067C58: beq         $v0, $zero, L_80067C6C
    if (ctx->r2 == 0) {
        // 0x80067C5C: nop
    
            goto L_80067C6C;
    }
    // 0x80067C5C: nop

    // 0x80067C60: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80067C64: j           L_80067C74
    // 0x80067C68: lw          $s1, -0x3BFC($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3BFC);
        goto L_80067C74;
    // 0x80067C68: lw          $s1, -0x3BFC($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3BFC);
L_80067C6C:
    // 0x80067C6C: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x80067C70: lw          $s1, -0x2378($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X2378);
L_80067C74:
    // 0x80067C74: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80067C78: lw          $v0, -0x2404($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2404);
    // 0x80067C7C: sltu        $v0, $s1, $v0
    ctx->r2 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x80067C80: beq         $v0, $zero, L_80067E14
    if (ctx->r2 == 0) {
        // 0x80067C84: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80067E14;
    }
    // 0x80067C84: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80067C88: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80067C8C: addiu       $a2, $a2, -0x6F90
    ctx->r6 = ADD32(ctx->r6, -0X6F90);
    // 0x80067C90: jal         0x80069518
    // 0x80067C94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80069518_44918(rdram, ctx);
        goto after_7;
    // 0x80067C94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80067C98: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80067C9C: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80067CA0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80067CA4: blez        $v0, L_80067CFC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80067CA8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80067CFC;
    }
    // 0x80067CA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067CAC: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
L_80067CB0:
    // 0x80067CB0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80067CB4: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x80067CB8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80067CBC: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80067CC0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80067CC4: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80067CC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067CCC: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80067CD0: lbu         $a1, -0x6F8F($at)
    ctx->r5 = MEM_BU(ctx->r1, -0X6F8F);
    // 0x80067CD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80067CD8: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80067CDC: sb          $a1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r5;
    // 0x80067CE0: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80067CE4: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80067CE8: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80067CEC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80067CF0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80067CF4: bne         $v0, $zero, L_80067CB0
    if (ctx->r2 != 0) {
        // 0x80067CF8: andi        $a1, $a2, 0xFFFF
        ctx->r5 = ctx->r6 & 0XFFFF;
            goto L_80067CB0;
    }
    // 0x80067CF8: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
L_80067CFC:
    // 0x80067CFC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067D00: sw          $s1, -0x2404($at)
    MEM_W(-0X2404, ctx->r1) = ctx->r17;
    // 0x80067D04: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80067D08: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80067D0C: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80067D10: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80067D14: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80067D18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80067D1C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80067D20: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80067D24: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80067D28: lbu         $v1, 0x2D98($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2D98);
    // 0x80067D2C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80067D30: j           L_80067E14
    // 0x80067D34: sh          $v0, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r2;
        goto L_80067E14;
    // 0x80067D34: sh          $v0, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r2;
L_80067D38:
    // 0x80067D38: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80067D3C: lw          $a1, -0x2404($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2404);
    // 0x80067D40: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80067D44: addiu       $a2, $a2, -0x6F90
    ctx->r6 = ADD32(ctx->r6, -0X6F90);
    // 0x80067D48: jal         0x80069518
    // 0x80067D4C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80069518_44918(rdram, ctx);
        goto after_8;
    // 0x80067D4C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x80067D50: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80067D54: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80067D58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80067D5C: blez        $v0, L_80067DB4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80067D60: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80067DB4;
    }
    // 0x80067D60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067D64: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
L_80067D68:
    // 0x80067D68: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80067D6C: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x80067D70: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80067D74: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80067D78: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80067D7C: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80067D80: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067D84: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80067D88: lbu         $a1, -0x6F8F($at)
    ctx->r5 = MEM_BU(ctx->r1, -0X6F8F);
    // 0x80067D8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80067D90: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80067D94: sb          $a1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r5;
    // 0x80067D98: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80067D9C: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80067DA0: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80067DA4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80067DA8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80067DAC: bne         $v0, $zero, L_80067D68
    if (ctx->r2 != 0) {
        // 0x80067DB0: andi        $a1, $a2, 0xFFFF
        ctx->r5 = ctx->r6 & 0XFFFF;
            goto L_80067D68;
    }
    // 0x80067DB0: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
L_80067DB4:
    // 0x80067DB4: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80067DB8: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80067DBC: blez        $v0, L_80067E08
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80067DC0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80067E08;
    }
    // 0x80067DC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80067DC4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80067DC8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80067DCC:
    // 0x80067DCC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80067DD0: sll         $v1, $a0, 24
    ctx->r3 = S32(ctx->r4 << 24);
    // 0x80067DD4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80067DD8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80067DDC: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80067DE0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80067DE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80067DE8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80067DEC: sb          $a1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r5;
    // 0x80067DF0: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80067DF4: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80067DF8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80067DFC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80067E00: bne         $v0, $zero, L_80067DCC
    if (ctx->r2 != 0) {
        // 0x80067E04: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_80067DCC;
    }
    // 0x80067E04: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80067E08:
    // 0x80067E08: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80067E0C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80067E10: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_80067E14:
    // 0x80067E14: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80067E18: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80067E1C: lui         $a0, 0x80
    ctx->r4 = S32(0X80 << 16);
    // 0x80067E20: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80067E24: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80067E28: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80067E2C: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80067E30: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80067E34: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80067E38: jr          $ra
    // 0x80067E3C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x80067E3C: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void alMainBusNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800961AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800961B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800961B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800961B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800961BC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800961C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800961C4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x800961C8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800961CC: addiu       $a1, $a1, 0x7B40
    ctx->r5 = ADD32(ctx->r5, 0X7B40);
    // 0x800961D0: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800961D4: addiu       $a2, $a2, 0x7C80
    ctx->r6 = ADD32(ctx->r6, 0X7C80);
    // 0x800961D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800961DC: jal         0x80097B20
    // 0x800961E0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x800961E0: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_0:
    // 0x800961E4: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x800961E8: sw          $s1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r17;
    // 0x800961EC: sw          $s2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r18;
    // 0x800961F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800961F4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800961F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800961FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80096200: jr          $ra
    // 0x80096204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80096204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007ABE0_55FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007ABE0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8007ABE4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007ABE8: lbu         $v0, -0x2DDB($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2DDB);
    // 0x8007ABEC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8007ABF0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007ABF4: lw          $v0, -0x2DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2DE0);
    // 0x8007ABF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x8007ABFC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007AC00: lbu         $v0, -0x2DDA($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2DDA);
    // 0x8007AC04: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8007AC08: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007AC0C: lbu         $v0, -0x2DD9($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2DD9);
    // 0x8007AC10: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
    // 0x8007AC14: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007AC18: lbu         $v0, -0x2DDC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2DDC);
    // 0x8007AC1C: jr          $ra
    // 0x8007AC20: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8007AC20: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80090D70_6C170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80090D70: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80090D74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80090D78: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80090D7C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80090D80: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80090D84: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80090D88: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x80090D8C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80090D90: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80090D94: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80090D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80090D9C: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x80090DA0: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x80090DA4: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x80090DA8: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x80090DAC: beq         $v0, $zero, L_80090F28
    if (ctx->r2 == 0) {
        // 0x80090DB0: addiu       $s2, $zero, 0xB8
        ctx->r18 = ADD32(0, 0XB8);
            goto L_80090F28;
    }
    // 0x80090DB0: addiu       $s2, $zero, 0xB8
    ctx->r18 = ADD32(0, 0XB8);
    // 0x80090DB4: lw          $s0, 0x4($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X4);
    // 0x80090DB8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80090DBC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80090DC0: addiu       $a1, $zero, 0xB8
    ctx->r5 = ADD32(0, 0XB8);
    // 0x80090DC4: jal         0x80098A6C
    // 0x80090DC8: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    _doModFunc(rdram, ctx);
        goto after_0;
    // 0x80090DC8: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    after_0:
    // 0x80090DCC: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
    // 0x80090DD0: nop

    // 0x80090DD4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80090DD8: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80090DDC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80090DE0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80090DE4: nop

    // 0x80090DE8: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80090DEC: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80090DF0: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80090DF4: nop

    // 0x80090DF8: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x80090DFC: nop

    // 0x80090E00: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80090E04: div.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80090E08: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80090E0C: ldc1        $f20, 0x2EE0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X2EE0);
    // 0x80090E10: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80090E14: sub.d       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f20.d = ctx->f20.d - ctx->f0.d;
    // 0x80090E18: mtc1        $s2, $f2
    ctx->f2.u32l = ctx->r18;
    // 0x80090E1C: nop

    // 0x80090E20: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80090E24: cvt.s.d     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f20.fl = CVT_S_D(ctx->f20.d);
    // 0x80090E28: mul.s       $f2, $f20, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80090E2C: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x80090E30: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x80090E34: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80090E38: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80090E3C: mfc1        $s2, $f2
    ctx->r18 = (int32_t)ctx->f2.u32l;
    // 0x80090E40: nop

    // 0x80090E44: mtc1        $s2, $f2
    ctx->f2.u32l = ctx->r18;
    // 0x80090E48: nop

    // 0x80090E4C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80090E50: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80090E54: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x80090E58: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x80090E5C: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x80090E60: lw          $a1, 0x18($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X18);
    // 0x80090E64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80090E68: addiu       $a2, $zero, 0x2E0
    ctx->r6 = ADD32(0, 0X2E0);
    // 0x80090E6C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80090E70: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80090E74: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80090E78: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80090E7C: andi        $a3, $a1, 0x7
    ctx->r7 = ctx->r5 & 0X7;
    // 0x80090E80: sra         $a3, $a3, 1
    ctx->r7 = S32(SIGNED(ctx->r7) >> 1);
    // 0x80090E84: sll         $s1, $a3, 1
    ctx->r17 = S32(ctx->r7 << 1);
    // 0x80090E88: subu        $a1, $a1, $s1
    ctx->r5 = SUB32(ctx->r5, ctx->r17);
    // 0x80090E8C: jal         0x80090F80
    // 0x80090E90: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    func_80090F80_6C380(rdram, ctx);
        goto after_1;
    // 0x80090E90: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    after_1:
    // 0x80090E94: nop

    // 0x80090E98: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x80090E9C: lw          $v1, 0x24($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X24);
    // 0x80090EA0: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x80090EA4: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80090EA8: trunc.w.s   $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x80090EAC: mfc1        $s0, $f0
    ctx->r16 = (int32_t)ctx->f0.u32l;
    // 0x80090EB0: nop

    // 0x80090EB4: jal         0x80099BB0
    // 0x80090EB8: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80090EB8: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    after_2:
    // 0x80090EBC: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80090EC0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80090EC4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80090EC8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80090ECC: lui         $v1, 0x500
    ctx->r3 = S32(0X500 << 16);
    // 0x80090ED0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80090ED4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80090ED8: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x80090EDC: sra         $v1, $s5, 8
    ctx->r3 = S32(SIGNED(ctx->r21) >> 8);
    // 0x80090EE0: sll         $s0, $s0, 14
    ctx->r16 = S32(ctx->r16 << 14);
    // 0x80090EE4: ori         $s1, $s1, 0x2E0
    ctx->r17 = ctx->r17 | 0X2E0;
    // 0x80090EE8: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
    // 0x80090EEC: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x80090EF0: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80090EF4: sll         $v0, $v0, 30
    ctx->r2 = S32(ctx->r2 << 30);
    // 0x80090EF8: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x80090EFC: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x80090F00: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80090F04: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80090F08: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x80090F0C: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x80090F10: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x80090F14: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80090F18: addiu       $s2, $s2, -0xB8
    ctx->r18 = ADD32(ctx->r18, -0XB8);
    // 0x80090F1C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80090F20: j           L_80090F50
    // 0x80090F24: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
        goto L_80090F50;
    // 0x80090F24: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
L_80090F28:
    // 0x80090F28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80090F2C: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x80090F30: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80090F34: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80090F38: addiu       $a3, $zero, 0xB8
    ctx->r7 = ADD32(0, 0XB8);
    // 0x80090F3C: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x80090F40: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80090F44: jal         0x80090F80
    // 0x80090F48: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    func_80090F80_6C380(rdram, ctx);
        goto after_3;
    // 0x80090F48: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    after_3:
    // 0x80090F4C: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
L_80090F50:
    // 0x80090F50: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x80090F54: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80090F58: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80090F5C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80090F60: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80090F64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80090F68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80090F6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80090F70: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x80090F74: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x80090F78: jr          $ra
    // 0x80090F7C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80090F7C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80047C64_23064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047C64: lb          $v0, 0x76($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X76);
    // 0x80047C68: beq         $v0, $zero, L_80047C84
    if (ctx->r2 == 0) {
        // 0x80047C6C: nop
    
            goto L_80047C84;
    }
    // 0x80047C6C: nop

    // 0x80047C70: lw          $v0, 0xC0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC0);
    // 0x80047C74: bne         $a0, $v0, L_80047C84
    if (ctx->r4 != ctx->r2) {
        // 0x80047C78: nop
    
            goto L_80047C84;
    }
    // 0x80047C78: nop

    // 0x80047C7C: sb          $zero, 0x76($a1)
    MEM_B(0X76, ctx->r5) = 0;
    // 0x80047C80: sw          $zero, 0xC0($a1)
    MEM_W(0XC0, ctx->r5) = 0;
L_80047C84:
    // 0x80047C84: jr          $ra
    // 0x80047C88: nop

    TRACE_RETURN()
    return;
    // 0x80047C88: nop

;}
RECOMP_FUNC void func_80072110_4D510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80072114: bne         $a0, $zero, L_80072144
    if (ctx->r4 != 0) {
        // 0x80072118: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80072144;
    }
    // 0x80072118: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007211C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80072120: addiu       $v1, $zero, 0x37F
    ctx->r3 = ADD32(0, 0X37F);
    // 0x80072124: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072128: addiu       $v0, $v0, -0x2794
    ctx->r2 = ADD32(ctx->r2, -0X2794);
L_8007212C:
    // 0x8007212C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x80072130: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80072134: bgez        $v1, L_8007212C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80072138: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_8007212C;
    }
    // 0x80072138: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8007213C: j           L_8007215C
    // 0x80072140: nop

        goto L_8007215C;
    // 0x80072140: nop

L_80072144:
    // 0x80072144: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80072148: addiu       $a0, $a0, 0x3FF0
    ctx->r4 = ADD32(ctx->r4, 0X3FF0);
    // 0x8007214C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80072150: addiu       $a1, $a1, -0x3590
    ctx->r5 = ADD32(ctx->r5, -0X3590);
    // 0x80072154: jal         0x8003BD6C
    // 0x80072158: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_0;
    // 0x80072158: addiu       $a2, $zero, 0x70
    ctx->r6 = ADD32(0, 0X70);
    after_0:
L_8007215C:
    // 0x8007215C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80072160: jr          $ra
    // 0x80072164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80072164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80067410_42810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80067410: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80067414: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80067418: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8006741C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80067420: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80067424: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80067428: jal         0x8006033C
    // 0x8006742C: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8006742C: addiu       $a0, $zero, 0x23D
    ctx->r4 = ADD32(0, 0X23D);
    after_0:
    // 0x80067430: beq         $v0, $zero, L_80067454
    if (ctx->r2 == 0) {
        // 0x80067434: addiu       $v0, $zero, 0x1F4
        ctx->r2 = ADD32(0, 0X1F4);
            goto L_80067454;
    }
    // 0x80067434: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x80067438: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006743C: lw          $v1, -0x3BF0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BF0);
    // 0x80067440: beq         $v1, $v0, L_80067454
    if (ctx->r3 == ctx->r2) {
        // 0x80067444: nop
    
            goto L_80067454;
    }
    // 0x80067444: nop

    // 0x80067448: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8006744C: sb          $zero, -0x6F90($at)
    MEM_B(-0X6F90, ctx->r1) = 0;
    // 0x80067450: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80067454:
    // 0x80067454: jal         0x8006033C
    // 0x80067458: addiu       $a0, $zero, 0x23E
    ctx->r4 = ADD32(0, 0X23E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80067458: addiu       $a0, $zero, 0x23E
    ctx->r4 = ADD32(0, 0X23E);
    after_1:
    // 0x8006745C: beq         $v0, $zero, L_80067484
    if (ctx->r2 == 0) {
        // 0x80067460: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_80067484;
    }
    // 0x80067460: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80067464: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80067468: lw          $v1, -0x3BEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BEC);
    // 0x8006746C: beq         $v1, $v0, L_80067484
    if (ctx->r3 == ctx->r2) {
        // 0x80067470: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80067484;
    }
    // 0x80067470: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80067474: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067478: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8006747C: sb          $v0, -0x6F90($at)
    MEM_B(-0X6F90, ctx->r1) = ctx->r2;
    // 0x80067480: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80067484:
    // 0x80067484: jal         0x8006033C
    // 0x80067488: addiu       $a0, $zero, 0x23F
    ctx->r4 = ADD32(0, 0X23F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80067488: addiu       $a0, $zero, 0x23F
    ctx->r4 = ADD32(0, 0X23F);
    after_2:
    // 0x8006748C: beq         $v0, $zero, L_800674B4
    if (ctx->r2 == 0) {
        // 0x80067490: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_800674B4;
    }
    // 0x80067490: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x80067494: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80067498: lw          $v1, -0x3BE8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BE8);
    // 0x8006749C: beq         $v1, $v0, L_800674B4
    if (ctx->r3 == ctx->r2) {
        // 0x800674A0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800674B4;
    }
    // 0x800674A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800674A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800674A8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x800674AC: sb          $v0, -0x6F90($at)
    MEM_B(-0X6F90, ctx->r1) = ctx->r2;
    // 0x800674B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800674B4:
    // 0x800674B4: jal         0x8006033C
    // 0x800674B8: addiu       $a0, $zero, 0x240
    ctx->r4 = ADD32(0, 0X240);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x800674B8: addiu       $a0, $zero, 0x240
    ctx->r4 = ADD32(0, 0X240);
    after_3:
    // 0x800674BC: beq         $v0, $zero, L_800674E4
    if (ctx->r2 == 0) {
        // 0x800674C0: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_800674E4;
    }
    // 0x800674C0: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x800674C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800674C8: lw          $v1, -0x3BE4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BE4);
    // 0x800674CC: beq         $v1, $v0, L_800674E4
    if (ctx->r3 == ctx->r2) {
        // 0x800674D0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800674E4;
    }
    // 0x800674D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800674D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800674D8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x800674DC: sb          $v0, -0x6F90($at)
    MEM_B(-0X6F90, ctx->r1) = ctx->r2;
    // 0x800674E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800674E4:
    // 0x800674E4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800674E8: lbu         $v0, -0x3BB2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BB2);
    // 0x800674EC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800674F0: lw          $a0, -0x3BE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3BE0);
    // 0x800674F4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x800674F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800674FC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80067500: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80067504: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80067508: beq         $v0, $a0, L_80067520
    if (ctx->r2 == ctx->r4) {
        // 0x8006750C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80067520;
    }
    // 0x8006750C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80067510: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067514: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80067518: sb          $v0, -0x6F90($at)
    MEM_B(-0X6F90, ctx->r1) = ctx->r2;
    // 0x8006751C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80067520:
    // 0x80067520: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80067524: lbu         $v0, -0x3BB1($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BB1);
    // 0x80067528: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8006752C: lw          $a0, -0x3BDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3BDC);
    // 0x80067530: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80067534: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80067538: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8006753C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80067540: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80067544: beq         $v0, $a0, L_8006755C
    if (ctx->r2 == ctx->r4) {
        // 0x80067548: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8006755C;
    }
    // 0x80067548: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8006754C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067550: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80067554: sb          $v0, -0x6F90($at)
    MEM_B(-0X6F90, ctx->r1) = ctx->r2;
    // 0x80067558: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8006755C:
    // 0x8006755C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80067560: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80067564: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80067568: sb          $v0, -0x6F90($at)
    MEM_B(-0X6F90, ctx->r1) = ctx->r2;
    // 0x8006756C: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x80067570: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80067574: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x80067578: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8006757C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x80067580: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80067584: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80067588: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8006758C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80067590: sh          $v1, 0xC2($s1)
    MEM_H(0XC2, ctx->r17) = ctx->r3;
    // 0x80067594: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x80067598: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006759C: sb          $zero, 0x3E($s1)
    MEM_B(0X3E, ctx->r17) = 0;
    // 0x800675A0: sb          $zero, 0x3C($s1)
    MEM_B(0X3C, ctx->r17) = 0;
    // 0x800675A4: sb          $zero, 0x72($s1)
    MEM_B(0X72, ctx->r17) = 0;
    // 0x800675A8: srl         $v1, $a0, 8
    ctx->r3 = S32(U32(ctx->r4) >> 8);
    // 0x800675AC: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x800675B0: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x800675B4: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x800675B8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x800675BC: sw          $a1, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r5;
    // 0x800675C0: sw          $a1, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r5;
    // 0x800675C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800675C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800675CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800675D0: jr          $ra
    // 0x800675D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800675D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80079BE0_54FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80079BE0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80079BE4: srl         $v0, $a1, 24
    ctx->r2 = S32(U32(ctx->r5) >> 24);
    // 0x80079BE8: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80079BEC: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x80079BF0: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x80079BF4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80079BF8: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80079BFC: srl         $v0, $a1, 8
    ctx->r2 = S32(U32(ctx->r5) >> 8);
    // 0x80079C00: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80079C04: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80079C08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80079C0C: sltiu       $v0, $s7, 0x11
    ctx->r2 = ctx->r23 < 0X11 ? 1 : 0;
    // 0x80079C10: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80079C14: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80079C18: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80079C1C: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80079C20: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80079C24: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80079C28: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80079C2C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80079C30: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x80079C34: bne         $v0, $zero, L_80079C40
    if (ctx->r2 != 0) {
        // 0x80079C38: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80079C40;
    }
    // 0x80079C38: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80079C3C: addiu       $s7, $zero, 0x10
    ctx->r23 = ADD32(0, 0X10);
L_80079C40:
    // 0x80079C40: sll         $v0, $s7, 1
    ctx->r2 = S32(ctx->r23 << 1);
    // 0x80079C44: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x80079C48: addu        $fp, $fp, $v0
    ctx->r30 = ADD32(ctx->r30, ctx->r2);
    // 0x80079C4C: lhu         $fp, -0x2E66($fp)
    ctx->r30 = MEM_HU(ctx->r30, -0X2E66);
    // 0x80079C50: jal         0x800A3450
    // 0x80079C54: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80079C54: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    after_0:
    // 0x80079C58: beq         $s7, $zero, L_80079DF0
    if (ctx->r23 == 0) {
        // 0x80079C5C: andi        $s5, $v0, 0xFFF
        ctx->r21 = ctx->r2 & 0XFFF;
            goto L_80079DF0;
    }
    // 0x80079C5C: andi        $s5, $v0, 0xFFF
    ctx->r21 = ctx->r2 & 0XFFF;
    // 0x80079C60: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80079C64: addiu       $v1, $v1, -0x2F4C
    ctx->r3 = ADD32(ctx->r3, -0X2F4C);
    // 0x80079C68: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x80079C6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80079C70: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80079C74:
    // 0x80079C74: jal         0x8004F144
    // 0x80079C78: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80079C78: nop

    after_1:
    // 0x80079C7C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80079C80: beql        $s3, $zero, L_80079DE4
    if (ctx->r19 == 0) {
        // 0x80079C84: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80079DE4;
    }
    goto skip_0;
    // 0x80079C84: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_0:
    // 0x80079C88: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80079C8C: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80079C90: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x80079C94: sb          $zero, 0x3($s3)
    MEM_B(0X3, ctx->r19) = 0;
    // 0x80079C98: jal         0x800A3450
    // 0x80079C9C: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80079C9C: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    after_2:
    // 0x80079CA0: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x80079CA4: addiu       $a0, $s3, 0x38
    ctx->r4 = ADD32(ctx->r19, 0X38);
    // 0x80079CA8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80079CAC: jal         0x8009A3B4
    // 0x80079CB0: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80079CB0: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    after_3:
    // 0x80079CB4: lhu         $v0, 0x3A($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X3A);
    // 0x80079CB8: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x80079CBC: jal         0x800A3450
    // 0x80079CC0: sh          $v0, 0x3A($s3)
    MEM_H(0X3A, ctx->r19) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80079CC0: sh          $v0, 0x3A($s3)
    MEM_H(0X3A, ctx->r19) = ctx->r2;
    after_4:
    // 0x80079CC4: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80079CC8: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80079CCC: andi        $v0, $s4, 0xF
    ctx->r2 = ctx->r20 & 0XF;
    // 0x80079CD0: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80079CD4: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80079CD8: sltiu       $v0, $s1, 0x5
    ctx->r2 = ctx->r17 < 0X5 ? 1 : 0;
    // 0x80079CDC: bne         $v0, $zero, L_80079CF4
    if (ctx->r2 != 0) {
        // 0x80079CE0: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_80079CF4;
    }
    // 0x80079CE0: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80079CE4: jal         0x8004F5C4
    // 0x80079CE8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_5;
    // 0x80079CE8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_5:
    // 0x80079CEC: j           L_80079DE4
    // 0x80079CF0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
        goto L_80079DE4;
    // 0x80079CF0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80079CF4:
    // 0x80079CF4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80079CF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80079CFC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80079D00: addiu       $v1, $v1, -0x45C0
    ctx->r3 = ADD32(ctx->r3, -0X45C0);
    // 0x80079D04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80079D08: sb          $s1, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r17;
    // 0x80079D0C: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x80079D10: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x80079D14: addiu       $a3, $a3, -0x2EDC
    ctx->r7 = ADD32(ctx->r7, -0X2EDC);
    // 0x80079D18: sw          $v0, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r2;
    // 0x80079D1C: addu        $v0, $s1, $a3
    ctx->r2 = ADD32(ctx->r17, ctx->r7);
    // 0x80079D20: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80079D24: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80079D28: andi        $v0, $s4, 0xFFF
    ctx->r2 = ctx->r20 & 0XFFF;
    // 0x80079D2C: sh          $v0, 0xC($s3)
    MEM_H(0XC, ctx->r19) = ctx->r2;
    // 0x80079D30: srl         $v0, $s4, 4
    ctx->r2 = S32(U32(ctx->r20) >> 4);
    // 0x80079D34: sh          $v0, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r2;
    // 0x80079D38: jal         0x80032498
    // 0x80079D3C: sh          $v1, 0x3E($s3)
    MEM_H(0X3E, ctx->r19) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x80079D3C: sh          $v1, 0x3E($s3)
    MEM_H(0X3E, ctx->r19) = ctx->r3;
    after_6:
    // 0x80079D40: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x80079D44: addiu       $s0, $s0, -0x2E44
    ctx->r16 = ADD32(ctx->r16, -0X2E44);
    // 0x80079D48: addu        $s0, $s1, $s0
    ctx->r16 = ADD32(ctx->r17, ctx->r16);
    // 0x80079D4C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80079D50: andi        $s2, $s4, 0x3
    ctx->r18 = ctx->r20 & 0X3;
    // 0x80079D54: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x80079D58: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80079D5C: mflo        $v0
    ctx->r2 = lo;
    // 0x80079D60: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80079D64: sh          $v0, 0x2C($s3)
    MEM_H(0X2C, ctx->r19) = ctx->r2;
    // 0x80079D68: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80079D6C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80079D70: lhu         $v0, -0x2E3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2E3C);
    // 0x80079D74: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80079D78: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80079D7C: jal         0x800324B4
    // 0x80079D80: sh          $v0, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x80079D80: sh          $v0, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r2;
    after_7:
    // 0x80079D84: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x80079D88: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80079D8C: sh          $v1, 0x34($s3)
    MEM_H(0X34, ctx->r19) = ctx->r3;
    // 0x80079D90: lhu         $v1, 0x3E($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X3E);
    // 0x80079D94: lui         $a1, 0x280
    ctx->r5 = S32(0X280 << 16);
    // 0x80079D98: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x80079D9C: sh          $zero, 0x32($s3)
    MEM_H(0X32, ctx->r19) = 0;
    // 0x80079DA0: sh          $zero, 0x36($s3)
    MEM_H(0X36, ctx->r19) = 0;
    // 0x80079DA4: sw          $a1, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r5;
    // 0x80079DA8: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x80079DAC: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80079DB0: mflo        $v0
    ctx->r2 = lo;
    // 0x80079DB4: sh          $zero, 0x26($s3)
    MEM_H(0X26, ctx->r19) = 0;
    // 0x80079DB8: sh          $zero, 0x24($s3)
    MEM_H(0X24, ctx->r19) = 0;
    // 0x80079DBC: sh          $zero, 0x22($s3)
    MEM_H(0X22, ctx->r19) = 0;
    // 0x80079DC0: sh          $zero, 0x1E($s3)
    MEM_H(0X1E, ctx->r19) = 0;
    // 0x80079DC4: sh          $zero, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = 0;
    // 0x80079DC8: sh          $zero, 0x1A($s3)
    MEM_H(0X1A, ctx->r19) = 0;
    // 0x80079DCC: sh          $v1, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r3;
    // 0x80079DD0: sh          $v1, 0x20($s3)
    MEM_H(0X20, ctx->r19) = ctx->r3;
    // 0x80079DD4: sh          $v1, 0x18($s3)
    MEM_H(0X18, ctx->r19) = ctx->r3;
    // 0x80079DD8: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80079DDC: sh          $v0, 0x30($s3)
    MEM_H(0X30, ctx->r19) = ctx->r2;
    // 0x80079DE0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80079DE4:
    // 0x80079DE4: sltu        $v0, $s6, $s7
    ctx->r2 = ctx->r22 < ctx->r23 ? 1 : 0;
    // 0x80079DE8: bne         $v0, $zero, L_80079C74
    if (ctx->r2 != 0) {
        // 0x80079DEC: addu        $s5, $s5, $fp
        ctx->r21 = ADD32(ctx->r21, ctx->r30);
            goto L_80079C74;
    }
    // 0x80079DEC: addu        $s5, $s5, $fp
    ctx->r21 = ADD32(ctx->r21, ctx->r30);
L_80079DF0:
    // 0x80079DF0: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x80079DF4: sltiu       $v0, $s7, 0x11
    ctx->r2 = ctx->r23 < 0X11 ? 1 : 0;
    // 0x80079DF8: beql        $v0, $zero, L_80079E00
    if (ctx->r2 == 0) {
        // 0x80079DFC: addiu       $s7, $zero, 0x10
        ctx->r23 = ADD32(0, 0X10);
            goto L_80079E00;
    }
    goto skip_1;
    // 0x80079DFC: addiu       $s7, $zero, 0x10
    ctx->r23 = ADD32(0, 0X10);
    skip_1:
L_80079E00:
    // 0x80079E00: sll         $v0, $s7, 1
    ctx->r2 = S32(ctx->r23 << 1);
    // 0x80079E04: lui         $fp, 0x800C
    ctx->r30 = S32(0X800C << 16);
    // 0x80079E08: addu        $fp, $fp, $v0
    ctx->r30 = ADD32(ctx->r30, ctx->r2);
    // 0x80079E0C: lhu         $fp, -0x2E66($fp)
    ctx->r30 = MEM_HU(ctx->r30, -0X2E66);
    // 0x80079E10: addiu       $v0, $s5, 0x800
    ctx->r2 = ADD32(ctx->r21, 0X800);
    // 0x80079E14: andi        $s5, $v0, 0xFFF
    ctx->r21 = ctx->r2 & 0XFFF;
    // 0x80079E18: beq         $s7, $zero, L_80079F78
    if (ctx->r23 == 0) {
        // 0x80079E1C: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_80079F78;
    }
    // 0x80079E1C: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80079E20: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80079E24: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80079E28: addiu       $v1, $v1, -0x2F4C
    ctx->r3 = ADD32(ctx->r3, -0X2F4C);
    // 0x80079E2C: sll         $v0, $a3, 4
    ctx->r2 = S32(ctx->r7 << 4);
    // 0x80079E30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80079E34: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80079E38:
    // 0x80079E38: jal         0x8004F144
    // 0x80079E3C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80079E3C: nop

    after_8:
    // 0x80079E40: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80079E44: beql        $s3, $zero, L_80079F6C
    if (ctx->r19 == 0) {
        // 0x80079E48: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80079F6C;
    }
    goto skip_2;
    // 0x80079E48: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_2:
    // 0x80079E4C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80079E50: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80079E54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80079E58: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80079E5C: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x80079E60: jal         0x800A3450
    // 0x80079E64: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x80079E64: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    after_9:
    // 0x80079E68: addiu       $a0, $s3, 0x38
    ctx->r4 = ADD32(ctx->r19, 0X38);
    // 0x80079E6C: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x80079E70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80079E74: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80079E78: addiu       $v0, $v0, -0x4570
    ctx->r2 = ADD32(ctx->r2, -0X4570);
    // 0x80079E7C: sw          $v0, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r2;
    // 0x80079E80: jal         0x8009A3B4
    // 0x80079E84: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80079E84: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    after_10:
    // 0x80079E88: jal         0x800A3450
    // 0x80079E8C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x80079E8C: nop

    after_11:
    // 0x80079E90: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80079E94: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80079E98: andi        $v0, $s4, 0xF
    ctx->r2 = ctx->r20 & 0XF;
    // 0x80079E9C: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80079EA0: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80079EA4: sltiu       $v0, $s1, 0x5
    ctx->r2 = ctx->r17 < 0X5 ? 1 : 0;
    // 0x80079EA8: bne         $v0, $zero, L_80079EC0
    if (ctx->r2 != 0) {
        // 0x80079EAC: sll         $s2, $s1, 1
        ctx->r18 = S32(ctx->r17 << 1);
            goto L_80079EC0;
    }
    // 0x80079EAC: sll         $s2, $s1, 1
    ctx->r18 = S32(ctx->r17 << 1);
    // 0x80079EB0: jal         0x8004F5C4
    // 0x80079EB4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_12;
    // 0x80079EB4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_12:
    // 0x80079EB8: j           L_80079F6C
    // 0x80079EBC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
        goto L_80079F6C;
    // 0x80079EBC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80079EC0:
    // 0x80079EC0: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x80079EC4: addiu       $a3, $a3, -0x2EDC
    ctx->r7 = ADD32(ctx->r7, -0X2EDC);
    // 0x80079EC8: addu        $v0, $s2, $a3
    ctx->r2 = ADD32(ctx->r18, ctx->r7);
    // 0x80079ECC: sb          $s1, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r17;
    // 0x80079ED0: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x80079ED4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80079ED8: andi        $v0, $s4, 0xFFF
    ctx->r2 = ctx->r20 & 0XFFF;
    // 0x80079EDC: sh          $v0, 0xC($s3)
    MEM_H(0XC, ctx->r19) = ctx->r2;
    // 0x80079EE0: srl         $v0, $s4, 4
    ctx->r2 = S32(U32(ctx->r20) >> 4);
    // 0x80079EE4: sh          $v0, 0xE($s3)
    MEM_H(0XE, ctx->r19) = ctx->r2;
    // 0x80079EE8: jal         0x80032498
    // 0x80079EEC: sh          $v1, 0x3E($s3)
    MEM_H(0X3E, ctx->r19) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_13;
    // 0x80079EEC: sh          $v1, 0x3E($s3)
    MEM_H(0X3E, ctx->r19) = ctx->r3;
    after_13:
    // 0x80079EF0: lui         $s0, 0x800C
    ctx->r16 = S32(0X800C << 16);
    // 0x80079EF4: addiu       $s0, $s0, -0x2E44
    ctx->r16 = ADD32(ctx->r16, -0X2E44);
    // 0x80079EF8: addu        $s0, $s2, $s0
    ctx->r16 = ADD32(ctx->r18, ctx->r16);
    // 0x80079EFC: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80079F00: andi        $s1, $s4, 0x3
    ctx->r17 = ctx->r20 & 0X3;
    // 0x80079F04: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80079F08: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80079F0C: mflo        $v0
    ctx->r2 = lo;
    // 0x80079F10: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80079F14: sh          $v0, 0x2C($s3)
    MEM_H(0X2C, ctx->r19) = ctx->r2;
    // 0x80079F18: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80079F1C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80079F20: lhu         $v0, -0x2E3C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2E3C);
    // 0x80079F24: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80079F28: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80079F2C: jal         0x800324B4
    // 0x80079F30: sh          $v0, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_14;
    // 0x80079F30: sh          $v0, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r2;
    after_14:
    // 0x80079F34: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80079F38: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80079F3C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80079F40: mflo        $v0
    ctx->r2 = lo;
    // 0x80079F44: lui         $a0, 0x220
    ctx->r4 = S32(0X220 << 16);
    // 0x80079F48: ori         $a0, $a0, 0x2020
    ctx->r4 = ctx->r4 | 0X2020;
    // 0x80079F4C: sh          $zero, 0x32($s3)
    MEM_H(0X32, ctx->r19) = 0;
    // 0x80079F50: sh          $zero, 0x36($s3)
    MEM_H(0X36, ctx->r19) = 0;
    // 0x80079F54: sw          $a0, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r4;
    // 0x80079F58: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80079F5C: sh          $v1, 0x34($s3)
    MEM_H(0X34, ctx->r19) = ctx->r3;
    // 0x80079F60: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80079F64: sh          $v0, 0x30($s3)
    MEM_H(0X30, ctx->r19) = ctx->r2;
    // 0x80079F68: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80079F6C:
    // 0x80079F6C: sltu        $v0, $s6, $s7
    ctx->r2 = ctx->r22 < ctx->r23 ? 1 : 0;
    // 0x80079F70: bne         $v0, $zero, L_80079E38
    if (ctx->r2 != 0) {
        // 0x80079F74: addu        $s5, $s5, $fp
        ctx->r21 = ADD32(ctx->r21, ctx->r30);
            goto L_80079E38;
    }
    // 0x80079F74: addu        $s5, $s5, $fp
    ctx->r21 = ADD32(ctx->r21, ctx->r30);
L_80079F78:
    // 0x80079F78: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80079F7C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80079F80: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80079F84: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80079F88: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80079F8C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80079F90: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80079F94: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80079F98: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80079F9C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80079FA0: jr          $ra
    // 0x80079FA4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x80079FA4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8008D59C_6899C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D59C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D5A0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D5A4: sb          $v0, 0xB6($a0)
    MEM_B(0XB6, ctx->r4) = ctx->r2;
    // 0x8008D5A8: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D5AC: sb          $v0, 0xD5($a0)
    MEM_B(0XD5, ctx->r4) = ctx->r2;
    // 0x8008D5B0: lbu         $v0, 0xD5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD5);
    // 0x8008D5B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008D5B8: ldc1        $f2, 0x2DC8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2DC8);
    // 0x8008D5BC: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008D5C0: nop

    // 0x8008D5C4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008D5C8: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008D5CC: div.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f2.d, ctx->f0.d);
    // 0x8008D5D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D5D4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D5D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008D5DC: ldc1        $f4, 0x2DD0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2DD0);
    // 0x8008D5E0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008D5E4: nop

    // 0x8008D5E8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008D5EC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
    // 0x8008D5F0: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008D5F4: div.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f4.d);
    // 0x8008D5F8: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8008D5FC: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x8008D600: swc1        $f2, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f2.u32l;
    // 0x8008D604: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8008D608: jr          $ra
    // 0x8008D60C: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
    TRACE_RETURN()
    return;
    // 0x8008D60C: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_80072168_4D568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072168: bltz        $a1, L_800721E8
    if (SIGNED(ctx->r5) < 0) {
        // 0x8007216C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800721E8;
    }
    // 0x8007216C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80072170: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80072174: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80072178: lb          $v1, 0x3580($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3580);
    // 0x8007217C: bltz        $v1, L_800721E8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80072180: sll         $v1, $v1, 9
        ctx->r3 = S32(ctx->r3 << 9);
            goto L_800721E8;
    }
    // 0x80072180: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80072184: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072188: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x8007218C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80072190: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x80072194: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80072198: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007219C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800721A0: andi        $v0, $a1, 0xF
    ctx->r2 = ctx->r5 & 0XF;
    // 0x800721A4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800721A8: srlv        $v1, $v1, $v0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r2 & 31));
    // 0x800721AC: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x800721B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800721B4: beq         $v1, $v0, L_800721E8
    if (ctx->r3 == ctx->r2) {
        // 0x800721B8: nop
    
            goto L_800721E8;
    }
    // 0x800721B8: nop

    // 0x800721BC: beq         $v1, $zero, L_800721DC
    if (ctx->r3 == 0) {
        // 0x800721C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800721DC;
    }
    // 0x800721C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800721C4: beq         $v1, $v0, L_800721E4
    if (ctx->r3 == ctx->r2) {
        // 0x800721C8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800721E4;
    }
    // 0x800721C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800721CC: beq         $v1, $v0, L_800721E8
    if (ctx->r3 == ctx->r2) {
        // 0x800721D0: nop
    
            goto L_800721E8;
    }
    // 0x800721D0: nop

    // 0x800721D4: j           L_800721E8
    // 0x800721D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800721E8;
    // 0x800721D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800721DC:
    // 0x800721DC: j           L_800721E8
    // 0x800721E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800721E8;
    // 0x800721E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800721E4:
    // 0x800721E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800721E8:
    // 0x800721E8: jr          $ra
    // 0x800721EC: nop

    TRACE_RETURN()
    return;
    // 0x800721EC: nop

;}
RECOMP_FUNC void func_8008D974_68D74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D974: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008D978: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008D97C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8008D980: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008D984: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8008D988: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008D98C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8008D990: jal         0x8008C984
    // 0x8008D994: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_8008C984_67D84(rdram, ctx);
        goto after_0;
    // 0x8008D994: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x8008D998: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8008D99C: sb          $v1, 0xB9($s1)
    MEM_B(0XB9, ctx->r17) = ctx->r3;
    // 0x8008D9A0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8008D9A4: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8008D9A8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8008D9AC: sb          $v1, 0xB9($s1)
    MEM_B(0XB9, ctx->r17) = ctx->r3;
    // 0x8008D9B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008D9B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008D9B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008D9BC: jr          $ra
    // 0x8008D9C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008D9C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void _saveBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098860: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80098864: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80098868: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x8009886C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80098870: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x80098874: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80098878: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8009887C: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80098880: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80098884: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80098888: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8009888C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80098890: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80098894: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80098898: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009889C: lw          $v1, 0x1C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X1C);
    // 0x800988A0: lw          $v0, 0x14($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X14);
    // 0x800988A4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800988A8: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x800988AC: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x800988B0: beq         $v0, $zero, L_800988BC
    if (ctx->r2 == 0) {
        // 0x800988B4: addu        $a2, $s5, $zero
        ctx->r6 = ADD32(ctx->r21, 0);
            goto L_800988BC;
    }
    // 0x800988B4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x800988B8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_800988BC:
    // 0x800988BC: sll         $fp, $a3, 1
    ctx->r30 = S32(ctx->r7 << 1);
    // 0x800988C0: addu        $s0, $a0, $fp
    ctx->r16 = ADD32(ctx->r4, ctx->r30);
    // 0x800988C4: sltu        $v0, $a1, $s0
    ctx->r2 = ctx->r5 < ctx->r16 ? 1 : 0;
    // 0x800988C8: beq         $v0, $zero, L_80098968
    if (ctx->r2 == 0) {
        // 0x800988CC: lui         $s2, 0x800
        ctx->r18 = S32(0X800 << 16);
            goto L_80098968;
    }
    // 0x800988CC: lui         $s2, 0x800
    ctx->r18 = S32(0X800 << 16);
    // 0x800988D0: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800988D4: addu        $s4, $s5, $zero
    ctx->r20 = ADD32(ctx->r21, 0);
    // 0x800988D8: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x800988DC: subu        $s1, $a1, $a0
    ctx->r17 = SUB32(ctx->r5, ctx->r4);
    // 0x800988E0: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x800988E4: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x800988E8: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x800988EC: andi        $v1, $s1, 0xFFFF
    ctx->r3 = ctx->r17 & 0XFFFF;
    // 0x800988F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800988F4: lui         $s3, 0x600
    ctx->r19 = S32(0X600 << 16);
    // 0x800988F8: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x800988FC: sra         $s0, $s0, 1
    ctx->r16 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80098900: sw          $s2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r18;
    // 0x80098904: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x80098908: jal         0x80099BB0
    // 0x8009890C: sw          $s3, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r19;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x8009890C: sw          $s3, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r19;
    after_0:
    // 0x80098910: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x80098914: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80098918: addu        $s1, $s6, $s1
    ctx->r17 = ADD32(ctx->r22, ctx->r17);
    // 0x8009891C: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x80098920: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80098924: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x80098928: or          $s1, $s1, $s0
    ctx->r17 = ctx->r17 | ctx->r16;
    // 0x8009892C: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x80098930: sw          $v0, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r2;
    // 0x80098934: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    // 0x80098938: sw          $s1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r17;
    // 0x8009893C: sw          $s3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r19;
    // 0x80098940: lw          $a0, 0x14($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X14);
    // 0x80098944: jal         0x80099BB0
    // 0x80098948: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x80098948: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    after_1:
    // 0x8009894C: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x80098950: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80098954: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80098958: andi        $v0, $fp, 0xFFFF
    ctx->r2 = ctx->r30 & 0XFFFF;
    // 0x8009895C: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    // 0x80098960: j           L_8009899C
    // 0x80098964: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_8009899C;
    // 0x80098964: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80098968:
    // 0x80098968: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x8009896C: addu        $s0, $s5, $zero
    ctx->r16 = ADD32(ctx->r21, 0);
    // 0x80098970: addiu       $s5, $s5, 0x8
    ctx->r21 = ADD32(ctx->r21, 0X8);
    // 0x80098974: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80098978: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8009897C: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x80098980: andi        $v1, $fp, 0xFFFF
    ctx->r3 = ctx->r30 & 0XFFFF;
    // 0x80098984: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80098988: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x8009898C: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x80098990: jal         0x80099BB0
    // 0x80098994: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80098994: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_2:
    // 0x80098998: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_8009899C:
    // 0x8009899C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x800989A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800989A4: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x800989A8: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x800989AC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x800989B0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x800989B4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800989B8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800989BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800989C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800989C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800989C8: jr          $ra
    // 0x800989CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800989CC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8004C500_27900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C508: beq         $a0, $zero, L_8004C54C
    if (ctx->r4 == 0) {
        // 0x8004C50C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004C54C;
    }
    // 0x8004C50C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004C510: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8004C514: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004C518: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8004C51C: jal         0x8003BDA4
    // 0x8004C520: addiu       $a1, $a0, 0xBE4
    ctx->r5 = ADD32(ctx->r4, 0XBE4);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_0;
    // 0x8004C520: addiu       $a1, $a0, 0xBE4
    ctx->r5 = ADD32(ctx->r4, 0XBE4);
    after_0:
    // 0x8004C524: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8004C528: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8004C52C:
    // 0x8004C52C: or          $v0, $s0, $v1
    ctx->r2 = ctx->r16 | ctx->r3;
    // 0x8004C530: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C534: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004C538: sb          $v0, 0x49B1($at)
    MEM_B(0X49B1, ctx->r1) = ctx->r2;
    // 0x8004C53C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004C540: sltiu       $v0, $v1, 0x2
    ctx->r2 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x8004C544: bne         $v0, $zero, L_8004C52C
    if (ctx->r2 != 0) {
        // 0x8004C548: addiu       $a0, $a0, 0x5F4
        ctx->r4 = ADD32(ctx->r4, 0X5F4);
            goto L_8004C52C;
    }
    // 0x8004C548: addiu       $a0, $a0, 0x5F4
    ctx->r4 = ADD32(ctx->r4, 0X5F4);
L_8004C54C:
    // 0x8004C54C: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x8004C550: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004C554: addiu       $a0, $a0, 0x59A0
    ctx->r4 = ADD32(ctx->r4, 0X59A0);
    // 0x8004C558: jal         0x8003BDA4
    // 0x8004C55C: addiu       $a1, $a0, 0x117C
    ctx->r5 = ADD32(ctx->r4, 0X117C);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_1;
    // 0x8004C55C: addiu       $a1, $a0, 0x117C
    ctx->r5 = ADD32(ctx->r4, 0X117C);
    after_1:
    // 0x8004C560: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8004C564: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004C568: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004C56C: sw          $zero, -0x3FB0($at)
    MEM_W(-0X3FB0, ctx->r1) = 0;
    // 0x8004C570: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004C574: sw          $zero, 0xA9C($at)
    MEM_W(0XA9C, ctx->r1) = 0;
L_8004C578:
    // 0x8004C578: or          $v0, $s0, $v1
    ctx->r2 = ctx->r16 | ctx->r3;
    // 0x8004C57C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C580: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004C584: sb          $v0, 0x59A1($at)
    MEM_B(0X59A1, ctx->r1) = ctx->r2;
    // 0x8004C588: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004C58C: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x8004C590: bne         $v0, $zero, L_8004C578
    if (ctx->r2 != 0) {
        // 0x8004C594: addiu       $a0, $a0, 0x118
        ctx->r4 = ADD32(ctx->r4, 0X118);
            goto L_8004C578;
    }
    // 0x8004C594: addiu       $a0, $a0, 0x118
    ctx->r4 = ADD32(ctx->r4, 0X118);
    // 0x8004C598: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x8004C59C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004C5A0: addiu       $a0, $a0, -0x420
    ctx->r4 = ADD32(ctx->r4, -0X420);
    // 0x8004C5A4: jal         0x8003BDA4
    // 0x8004C5A8: addiu       $a1, $a0, 0x440C
    ctx->r5 = ADD32(ctx->r4, 0X440C);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_2;
    // 0x8004C5A8: addiu       $a1, $a0, 0x440C
    ctx->r5 = ADD32(ctx->r4, 0X440C);
    after_2:
    // 0x8004C5AC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8004C5B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004C5B4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004C5B8: sw          $zero, -0x714C($at)
    MEM_W(-0X714C, ctx->r1) = 0;
    // 0x8004C5BC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004C5C0: sw          $zero, 0x5214($at)
    MEM_W(0X5214, ctx->r1) = 0;
L_8004C5C4:
    // 0x8004C5C4: or          $v0, $s0, $v1
    ctx->r2 = ctx->r16 | ctx->r3;
    // 0x8004C5C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C5CC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004C5D0: sb          $v0, -0x41F($at)
    MEM_B(-0X41F, ctx->r1) = ctx->r2;
    // 0x8004C5D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004C5D8: sltiu       $v0, $v1, 0x12
    ctx->r2 = ctx->r3 < 0X12 ? 1 : 0;
    // 0x8004C5DC: bne         $v0, $zero, L_8004C5C4
    if (ctx->r2 != 0) {
        // 0x8004C5E0: addiu       $a0, $a0, 0x3C8
        ctx->r4 = ADD32(ctx->r4, 0X3C8);
            goto L_8004C5C4;
    }
    // 0x8004C5E0: addiu       $a0, $a0, 0x3C8
    ctx->r4 = ADD32(ctx->r4, 0X3C8);
    // 0x8004C5E4: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
    // 0x8004C5E8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8004C5EC: addiu       $a0, $a0, -0x5F40
    ctx->r4 = ADD32(ctx->r4, -0X5F40);
    // 0x8004C5F0: jal         0x8003BDA4
    // 0x8004C5F4: addiu       $a1, $a0, 0x16AC
    ctx->r5 = ADD32(ctx->r4, 0X16AC);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_3;
    // 0x8004C5F4: addiu       $a1, $a0, 0x16AC
    ctx->r5 = ADD32(ctx->r4, 0X16AC);
    after_3:
    // 0x8004C5F8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8004C5FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004C600: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004C604: sw          $zero, -0x7798($at)
    MEM_W(-0X7798, ctx->r1) = 0;
    // 0x8004C608: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004C60C: sw          $zero, -0x2408($at)
    MEM_W(-0X2408, ctx->r1) = 0;
L_8004C610:
    // 0x8004C610: or          $v0, $s0, $v1
    ctx->r2 = ctx->r16 | ctx->r3;
    // 0x8004C614: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004C618: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004C61C: sb          $v0, -0x5F3F($at)
    MEM_B(-0X5F3F, ctx->r1) = ctx->r2;
    // 0x8004C620: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004C624: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x8004C628: bne         $v0, $zero, L_8004C610
    if (ctx->r2 != 0) {
        // 0x8004C62C: addiu       $a0, $a0, 0x5AC
        ctx->r4 = ADD32(ctx->r4, 0X5AC);
            goto L_8004C610;
    }
    // 0x8004C62C: addiu       $a0, $a0, 0x5AC
    ctx->r4 = ADD32(ctx->r4, 0X5AC);
    // 0x8004C630: addiu       $s0, $zero, 0x60
    ctx->r16 = ADD32(0, 0X60);
    // 0x8004C634: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8004C638: addiu       $a0, $a0, -0x2100
    ctx->r4 = ADD32(ctx->r4, -0X2100);
    // 0x8004C63C: jal         0x8003BDA4
    // 0x8004C640: addiu       $a1, $a0, 0x22FC
    ctx->r5 = ADD32(ctx->r4, 0X22FC);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_4;
    // 0x8004C640: addiu       $a1, $a0, 0x22FC
    ctx->r5 = ADD32(ctx->r4, 0X22FC);
    after_4:
    // 0x8004C644: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8004C648: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004C64C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004C650: sw          $zero, -0x781C($at)
    MEM_W(-0X781C, ctx->r1) = 0;
    // 0x8004C654: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C658: sw          $zero, 0x5708($at)
    MEM_W(0X5708, ctx->r1) = 0;
L_8004C65C:
    // 0x8004C65C: or          $v0, $s0, $v1
    ctx->r2 = ctx->r16 | ctx->r3;
    // 0x8004C660: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004C664: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004C668: sb          $v0, -0x20FF($at)
    MEM_B(-0X20FF, ctx->r1) = ctx->r2;
    // 0x8004C66C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004C670: sltiu       $v0, $v1, 0x20
    ctx->r2 = ctx->r3 < 0X20 ? 1 : 0;
    // 0x8004C674: bne         $v0, $zero, L_8004C65C
    if (ctx->r2 != 0) {
        // 0x8004C678: addiu       $a0, $a0, 0x118
        ctx->r4 = ADD32(ctx->r4, 0X118);
            goto L_8004C65C;
    }
    // 0x8004C678: addiu       $a0, $a0, 0x118
    ctx->r4 = ADD32(ctx->r4, 0X118);
    // 0x8004C67C: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
    // 0x8004C680: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8004C684: addiu       $a0, $a0, -0x2290
    ctx->r4 = ADD32(ctx->r4, -0X2290);
    // 0x8004C688: jal         0x8003BDA4
    // 0x8004C68C: addiu       $a1, $a0, 0x15FC
    ctx->r5 = ADD32(ctx->r4, 0X15FC);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_5;
    // 0x8004C68C: addiu       $a1, $a0, 0x15FC
    ctx->r5 = ADD32(ctx->r4, 0X15FC);
    after_5:
    // 0x8004C690: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8004C694: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004C698: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004C69C: sw          $zero, -0x3F64($at)
    MEM_W(-0X3F64, ctx->r1) = 0;
    // 0x8004C6A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004C6A4: sw          $zero, -0x3F60($at)
    MEM_W(-0X3F60, ctx->r1) = 0;
    // 0x8004C6A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C6AC: sw          $zero, -0x139C($at)
    MEM_W(-0X139C, ctx->r1) = 0;
    // 0x8004C6B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C6B4: sw          $zero, -0x1398($at)
    MEM_W(-0X1398, ctx->r1) = 0;
L_8004C6B8:
    // 0x8004C6B8: or          $v0, $s0, $v1
    ctx->r2 = ctx->r16 | ctx->r3;
    // 0x8004C6BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004C6C0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004C6C4: sb          $v0, -0x228F($at)
    MEM_B(-0X228F, ctx->r1) = ctx->r2;
    // 0x8004C6C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004C6CC: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8004C6D0: bne         $v0, $zero, L_8004C6B8
    if (ctx->r2 != 0) {
        // 0x8004C6D4: addiu       $a0, $a0, 0x58
        ctx->r4 = ADD32(ctx->r4, 0X58);
            goto L_8004C6B8;
    }
    // 0x8004C6D4: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    // 0x8004C6D8: addiu       $s0, $zero, 0xC0
    ctx->r16 = ADD32(0, 0XC0);
    // 0x8004C6DC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8004C6E0: addiu       $a0, $a0, -0x3050
    ctx->r4 = ADD32(ctx->r4, -0X3050);
    // 0x8004C6E4: jal         0x8003BDA4
    // 0x8004C6E8: addiu       $a1, $a0, 0x23C
    ctx->r5 = ADD32(ctx->r4, 0X23C);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_6;
    // 0x8004C6E8: addiu       $a1, $a0, 0x23C
    ctx->r5 = ADD32(ctx->r4, 0X23C);
    after_6:
    // 0x8004C6EC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8004C6F0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004C6F4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004C6F8: sw          $zero, 0x5210($at)
    MEM_W(0X5210, ctx->r1) = 0;
    // 0x8004C6FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C700: sw          $zero, 0x6B20($at)
    MEM_W(0X6B20, ctx->r1) = 0;
L_8004C704:
    // 0x8004C704: or          $v0, $s0, $v1
    ctx->r2 = ctx->r16 | ctx->r3;
    // 0x8004C708: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004C70C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004C710: sb          $v0, -0x304F($at)
    MEM_B(-0X304F, ctx->r1) = ctx->r2;
    // 0x8004C714: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004C718: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x8004C71C: bne         $v0, $zero, L_8004C704
    if (ctx->r2 != 0) {
        // 0x8004C720: addiu       $a0, $a0, 0x24
        ctx->r4 = ADD32(ctx->r4, 0X24);
            goto L_8004C704;
    }
    // 0x8004C720: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    // 0x8004C724: addiu       $s0, $zero, 0xE0
    ctx->r16 = ADD32(0, 0XE0);
    // 0x8004C728: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004C72C: addiu       $a0, $a0, 0x6B70
    ctx->r4 = ADD32(ctx->r4, 0X6B70);
    // 0x8004C730: jal         0x8003BDA4
    // 0x8004C734: addiu       $a1, $a0, 0xB7C
    ctx->r5 = ADD32(ctx->r4, 0XB7C);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_7;
    // 0x8004C734: addiu       $a1, $a0, 0xB7C
    ctx->r5 = ADD32(ctx->r4, 0XB7C);
    after_7:
    // 0x8004C738: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8004C73C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004C740: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004C744: sw          $zero, -0x72C8($at)
    MEM_W(-0X72C8, ctx->r1) = 0;
    // 0x8004C748: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004C74C: sw          $zero, 0xB1C($at)
    MEM_W(0XB1C, ctx->r1) = 0;
L_8004C750:
    // 0x8004C750: or          $v0, $s0, $v1
    ctx->r2 = ctx->r16 | ctx->r3;
    // 0x8004C754: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C758: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004C75C: sb          $v0, 0x6B71($at)
    MEM_B(0X6B71, ctx->r1) = ctx->r2;
    // 0x8004C760: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004C764: sltiu       $v0, $v1, 0x20
    ctx->r2 = ctx->r3 < 0X20 ? 1 : 0;
    // 0x8004C768: bne         $v0, $zero, L_8004C750
    if (ctx->r2 != 0) {
        // 0x8004C76C: addiu       $a0, $a0, 0x5C
        ctx->r4 = ADD32(ctx->r4, 0X5C);
            goto L_8004C750;
    }
    // 0x8004C76C: addiu       $a0, $a0, 0x5C
    ctx->r4 = ADD32(ctx->r4, 0X5C);
    // 0x8004C770: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004C774: addiu       $a0, $a0, 0x4430
    ctx->r4 = ADD32(ctx->r4, 0X4430);
    // 0x8004C778: jal         0x8003BDA4
    // 0x8004C77C: addiu       $a1, $a0, 0x264
    ctx->r5 = ADD32(ctx->r4, 0X264);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_8;
    // 0x8004C77C: addiu       $a1, $a0, 0x264
    ctx->r5 = ADD32(ctx->r4, 0X264);
    after_8:
    // 0x8004C780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C784: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004C788: jr          $ra
    // 0x8004C78C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004C78C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006FAF0_4AEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FAF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006FAF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006FAF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006FAFC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8006FB00: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8006FB04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006FB08: jal         0x8009A3B4
    // 0x8006FB0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8006FB0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8006FB10: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8006FB14: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8006FB18: lbu         $a1, 0x74($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X74);
    // 0x8006FB1C: lbu         $a2, 0x76($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X76);
    // 0x8006FB20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006FB24: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8006FB28: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8006FB2C: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    // 0x8006FB30: jal         0x80040F30
    // 0x8006FB34: sb          $a2, 0x77($s0)
    MEM_B(0X77, ctx->r16) = ctx->r6;
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8006FB34: sb          $a2, 0x77($s0)
    MEM_B(0X77, ctx->r16) = ctx->r6;
    after_1:
    // 0x8006FB38: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8006FB3C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8006FB40: jal         0x8009A3B4
    // 0x8006FB44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8006FB44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8006FB48: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8006FB4C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8006FB50: jal         0x8009A3B4
    // 0x8006FB54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8006FB54: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8006FB58: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8006FB5C: bne         $v0, $zero, L_8006FB80
    if (ctx->r2 != 0) {
        // 0x8006FB60: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8006FB80;
    }
    // 0x8006FB60: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8006FB64: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006FB68: sb          $v0, -0x3C18($at)
    MEM_B(-0X3C18, ctx->r1) = ctx->r2;
    // 0x8006FB6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006FB70: sb          $zero, -0x3C17($at)
    MEM_B(-0X3C17, ctx->r1) = 0;
    // 0x8006FB74: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8006FB78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006FB7C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8006FB80:
    // 0x8006FB80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006FB84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006FB88: jr          $ra
    // 0x8006FB8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006FB8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80061EEC_3D2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061EEC: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80061EF0: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80061EF4: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80061EF8: jr          $ra
    // 0x80061EFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80061EFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8004D4C0_288C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D4C0: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8004D4C4: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8004D4C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D4CC: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8004D4D0: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8004D4D4: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8004D4D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D4DC: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8004D4E0: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8004D4E4: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8004D4E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004D4EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004D4F0: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x8004D4F4: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8004D4F8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8004D4FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004D500: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004D504: lhu         $v0, 0x2C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2C);
    // 0x8004D508: sw          $v1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r3;
    // 0x8004D50C: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8004D510: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D514: sh          $v0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r2;
    // 0x8004D518: lhu         $v0, 0x30($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X30);
    // 0x8004D51C: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8004D520: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004D524: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x8004D528: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8004D52C: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x8004D530: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004D534: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004D538: sw          $v1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r3;
    // 0x8004D53C: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8004D540: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x8004D544: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004D548: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004D54C: jr          $ra
    // 0x8004D550: sw          $v1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8004D550: sw          $v1, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8007996C_54D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007996C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079970: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80079974: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80079978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007997C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80079980: beq         $v0, $zero, L_8007998C
    if (ctx->r2 == 0) {
        // 0x80079984: addiu       $a0, $zero, 0x9D
        ctx->r4 = ADD32(0, 0X9D);
            goto L_8007998C;
    }
    // 0x80079984: addiu       $a0, $zero, 0x9D
    ctx->r4 = ADD32(0, 0X9D);
    // 0x80079988: addiu       $a0, $zero, 0x9E
    ctx->r4 = ADD32(0, 0X9E);
L_8007998C:
    // 0x8007998C: jal         0x8002A33C
    // 0x80079990: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80079990: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_0:
    // 0x80079994: jal         0x8004F5C4
    // 0x80079998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80079998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8007999C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800799A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800799A4: jr          $ra
    // 0x800799A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800799A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void _Genld(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A2BD4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A2BD8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800A2BDC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x800A2BE0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800A2BE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800A2BE8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800A2BEC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800A2BF0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x800A2BF4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800A2BF8: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x800A2BFC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x800A2C00: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800A2C04: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800A2C08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800A2C0C: bgtz        $a3, L_800A2C20
    if (SIGNED(ctx->r7) > 0) {
        // 0x800A2C10: addu        $s4, $a2, $zero
        ctx->r20 = ADD32(ctx->r6, 0);
            goto L_800A2C20;
    }
    // 0x800A2C10: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x800A2C14: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x800A2C18: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x800A2C1C: addiu       $s2, $s2, 0x34C0
    ctx->r18 = ADD32(ctx->r18, 0X34C0);
L_800A2C20:
    // 0x800A2C20: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x800A2C24: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800A2C28: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    // 0x800A2C2C: beq         $a0, $a1, L_800A2C6C
    if (ctx->r4 == ctx->r5) {
        // 0x800A2C30: xori        $v1, $a0, 0x67
        ctx->r3 = ctx->r4 ^ 0X67;
            goto L_800A2C6C;
    }
    // 0x800A2C30: xori        $v1, $a0, 0x67
    ctx->r3 = ctx->r4 ^ 0X67;
    // 0x800A2C34: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A2C38: xori        $v0, $a0, 0x47
    ctx->r2 = ctx->r4 ^ 0X47;
    // 0x800A2C3C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A2C40: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800A2C44: beq         $v1, $zero, L_800A2F18
    if (ctx->r3 == 0) {
        // 0x800A2C48: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_800A2F18;
    }
    // 0x800A2C48: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x800A2C4C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2C50: slti        $v0, $v1, -0x4
    ctx->r2 = SIGNED(ctx->r3) < -0X4 ? 1 : 0;
    // 0x800A2C54: bne         $v0, $zero, L_800A2EC4
    if (ctx->r2 != 0) {
        // 0x800A2C58: sll         $v0, $s3, 24
        ctx->r2 = S32(ctx->r19 << 24);
            goto L_800A2EC4;
    }
    // 0x800A2C58: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x800A2C5C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2C60: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A2C64: beq         $v0, $zero, L_800A2EC4
    if (ctx->r2 == 0) {
        // 0x800A2C68: sll         $v0, $s3, 24
        ctx->r2 = S32(ctx->r19 << 24);
            goto L_800A2EC4;
    }
    // 0x800A2C68: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
L_800A2C6C:
    // 0x800A2C6C: beq         $a0, $a1, L_800A2CB4
    if (ctx->r4 == ctx->r5) {
        // 0x800A2C70: addiu       $s4, $a2, 0x1
        ctx->r20 = ADD32(ctx->r6, 0X1);
            goto L_800A2CB4;
    }
    // 0x800A2C70: addiu       $s4, $a2, 0x1
    ctx->r20 = ADD32(ctx->r6, 0X1);
    // 0x800A2C74: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x800A2C78: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x800A2C7C: bne         $v0, $zero, L_800A2C98
    if (ctx->r2 != 0) {
        // 0x800A2C80: sll         $v1, $s5, 16
        ctx->r3 = S32(ctx->r21 << 16);
            goto L_800A2C98;
    }
    // 0x800A2C80: sll         $v1, $s5, 16
    ctx->r3 = S32(ctx->r21 << 16);
    // 0x800A2C84: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2C88: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800A2C8C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A2C90: bnel        $v0, $zero, L_800A2C98
    if (ctx->r2 != 0) {
        // 0x800A2C94: sw          $v1, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r3;
            goto L_800A2C98;
    }
    goto skip_0;
    // 0x800A2C94: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    skip_0:
L_800A2C98:
    // 0x800A2C98: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x800A2C9C: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x800A2CA0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2CA4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800A2CA8: bgez        $v1, L_800A2CB4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800A2CAC: sw          $v1, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r3;
            goto L_800A2CB4;
    }
    // 0x800A2CAC: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x800A2CB0: sw          $zero, 0x24($s1)
    MEM_W(0X24, ctx->r17) = 0;
L_800A2CB4:
    // 0x800A2CB4: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x800A2CB8: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2CBC: bgtz        $s3, L_800A2D98
    if (SIGNED(ctx->r19) > 0) {
        // 0x800A2CC0: sll         $v0, $s5, 16
        ctx->r2 = S32(ctx->r21 << 16);
            goto L_800A2D98;
    }
    // 0x800A2CC0: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x800A2CC4: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2CC8: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x800A2CCC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x800A2CD0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800A2CD4: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x800A2CD8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x800A2CDC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x800A2CE0: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2CE4: bgtz        $v0, L_800A2CFC
    if (SIGNED(ctx->r2) > 0) {
        // 0x800A2CE8: nop
    
            goto L_800A2CFC;
    }
    // 0x800A2CE8: nop

    // 0x800A2CEC: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x800A2CF0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x800A2CF4: beq         $v0, $zero, L_800A2D1C
    if (ctx->r2 == 0) {
        // 0x800A2CF8: sll         $v0, $s4, 16
        ctx->r2 = S32(ctx->r20 << 16);
            goto L_800A2D1C;
    }
    // 0x800A2CF8: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
L_800A2CFC:
    // 0x800A2CFC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2D00: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x800A2D04: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x800A2D08: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800A2D0C: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x800A2D10: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x800A2D14: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x800A2D18: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
L_800A2D1C:
    // 0x800A2D1C: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x800A2D20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2D24: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800A2D28: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A2D2C: bnel        $v0, $zero, L_800A2D34
    if (ctx->r2 != 0) {
        // 0x800A2D30: negu        $s4, $v1
        ctx->r20 = SUB32(0, ctx->r3);
            goto L_800A2D34;
    }
    goto skip_1;
    // 0x800A2D30: negu        $s4, $v1
    ctx->r20 = SUB32(0, ctx->r3);
    skip_1:
L_800A2D34:
    // 0x800A2D34: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x800A2D38: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x800A2D3C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2D40: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x800A2D44: sw          $v1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r3;
    // 0x800A2D48: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800A2D4C: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x800A2D50: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2D54: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A2D58: beq         $v0, $zero, L_800A2D64
    if (ctx->r2 == 0) {
        // 0x800A2D5C: sw          $a0, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r4;
            goto L_800A2D64;
    }
    // 0x800A2D5C: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x800A2D60: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
L_800A2D64:
    // 0x800A2D64: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800A2D68: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A2D6C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2D70: sll         $s0, $s5, 16
    ctx->r16 = S32(ctx->r21 << 16);
    // 0x800A2D74: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800A2D78: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x800A2D7C: sw          $s0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r16;
    // 0x800A2D80: jal         0x8009A3B4
    // 0x800A2D84: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800A2D84: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x800A2D88: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2D8C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x800A2D90: j           L_800A310C
    // 0x800A2D94: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
        goto L_800A310C;
    // 0x800A2D94: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_800A2D98:
    // 0x800A2D98: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2D9C: slt         $v0, $s0, $s3
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800A2DA0: beq         $v0, $zero, L_800A2E14
    if (ctx->r2 == 0) {
        // 0x800A2DA4: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_800A2E14;
    }
    // 0x800A2DA4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800A2DA8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A2DAC: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2DB0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x800A2DB4: jal         0x8009A3B4
    // 0x800A2DB8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800A2DB8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
    // 0x800A2DBC: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x800A2DC0: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x800A2DC4: subu        $v0, $s3, $s0
    ctx->r2 = SUB32(ctx->r19, ctx->r16);
    // 0x800A2DC8: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x800A2DCC: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x800A2DD0: bgtz        $a0, L_800A2DE8
    if (SIGNED(ctx->r4) > 0) {
        // 0x800A2DD4: sw          $v1, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->r3;
            goto L_800A2DE8;
    }
    // 0x800A2DD4: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x800A2DD8: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x800A2DDC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x800A2DE0: beq         $v0, $zero, L_800A2E08
    if (ctx->r2 == 0) {
        // 0x800A2DE4: nop
    
            goto L_800A2E08;
    }
    // 0x800A2DE4: nop

L_800A2DE8:
    // 0x800A2DE8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A2DEC: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x800A2DF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A2DF4: addiu       $v1, $zero, 0x2E
    ctx->r3 = ADD32(0, 0X2E);
    // 0x800A2DF8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x800A2DFC: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x800A2E00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800A2E04: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_800A2E08:
    // 0x800A2E08: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2E0C: j           L_800A310C
    // 0x800A2E10: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
        goto L_800A310C;
    // 0x800A2E10: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_800A2E14:
    // 0x800A2E14: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A2E18: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2E1C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x800A2E20: jal         0x8009A3B4
    // 0x800A2E24: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x800A2E24: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x800A2E28: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x800A2E2C: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x800A2E30: subu        $s5, $s5, $s4
    ctx->r21 = SUB32(ctx->r21, ctx->r20);
    // 0x800A2E34: addu        $a2, $v0, $s3
    ctx->r6 = ADD32(ctx->r2, ctx->r19);
    // 0x800A2E38: bgtz        $v1, L_800A2E50
    if (SIGNED(ctx->r3) > 0) {
        // 0x800A2E3C: sw          $a2, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->r6;
            goto L_800A2E50;
    }
    // 0x800A2E3C: sw          $a2, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r6;
    // 0x800A2E40: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x800A2E44: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x800A2E48: beq         $v0, $zero, L_800A2E68
    if (ctx->r2 == 0) {
        // 0x800A2E4C: nop
    
            goto L_800A2E68;
    }
    // 0x800A2E4C: nop

L_800A2E50:
    // 0x800A2E50: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A2E54: addiu       $v1, $a2, 0x1
    ctx->r3 = ADD32(ctx->r6, 0X1);
    // 0x800A2E58: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x800A2E5C: addiu       $v1, $zero, 0x2E
    ctx->r3 = ADD32(0, 0X2E);
    // 0x800A2E60: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800A2E64: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_800A2E68:
    // 0x800A2E68: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x800A2E6C: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x800A2E70: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2E74: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A2E78: bnel        $v0, $zero, L_800A2E80
    if (ctx->r2 != 0) {
        // 0x800A2E7C: addu        $s5, $v1, $zero
        ctx->r21 = ADD32(ctx->r3, 0);
            goto L_800A2E80;
    }
    goto skip_2;
    // 0x800A2E7C: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    skip_2:
L_800A2E80:
    // 0x800A2E80: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x800A2E84: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800A2E88: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x800A2E8C: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A2E90: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2E94: sll         $s0, $s5, 16
    ctx->r16 = S32(ctx->r21 << 16);
    // 0x800A2E98: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800A2E9C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x800A2EA0: jal         0x8009A3B4
    // 0x800A2EA4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x800A2EA4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_3:
    // 0x800A2EA8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x800A2EAC: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x800A2EB0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800A2EB4: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x800A2EB8: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x800A2EBC: j           L_800A310C
    // 0x800A2EC0: sw          $v1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r3;
        goto L_800A310C;
    // 0x800A2EC0: sw          $v1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r3;
L_800A2EC4:
    // 0x800A2EC4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800A2EC8: xori        $v1, $v0, 0x67
    ctx->r3 = ctx->r2 ^ 0X67;
    // 0x800A2ECC: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A2ED0: xori        $v0, $v0, 0x47
    ctx->r2 = ctx->r2 ^ 0X47;
    // 0x800A2ED4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A2ED8: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x800A2EDC: beq         $v0, $zero, L_800A2F18
    if (ctx->r2 == 0) {
        // 0x800A2EE0: sll         $v1, $s5, 16
        ctx->r3 = S32(ctx->r21 << 16);
            goto L_800A2F18;
    }
    // 0x800A2EE0: sll         $v1, $s5, 16
    ctx->r3 = S32(ctx->r21 << 16);
    // 0x800A2EE4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2EE8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800A2EEC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A2EF0: bnel        $v0, $zero, L_800A2EF8
    if (ctx->r2 != 0) {
        // 0x800A2EF4: sw          $v1, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r3;
            goto L_800A2EF8;
    }
    goto skip_3;
    // 0x800A2EF4: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    skip_3:
L_800A2EF8:
    // 0x800A2EF8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2EFC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800A2F00: bgez        $v0, L_800A2F0C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A2F04: sw          $v0, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r2;
            goto L_800A2F0C;
    }
    // 0x800A2F04: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x800A2F08: sw          $zero, 0x24($s1)
    MEM_W(0X24, ctx->r17) = 0;
L_800A2F0C:
    // 0x800A2F0C: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x800A2F10: andi        $v0, $v0, 0x65
    ctx->r2 = ctx->r2 & 0X65;
    // 0x800A2F14: ori         $s3, $v0, 0x45
    ctx->r19 = ctx->r2 | 0X45;
L_800A2F18:
    // 0x800A2F18: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2F1C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x800A2F20: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x800A2F24: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A2F28: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x800A2F2C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800A2F30: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x800A2F34: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800A2F38: bgtz        $v0, L_800A2F50
    if (SIGNED(ctx->r2) > 0) {
        // 0x800A2F3C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800A2F50;
    }
    // 0x800A2F3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A2F40: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x800A2F44: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x800A2F48: beq         $v0, $zero, L_800A2F6C
    if (ctx->r2 == 0) {
        // 0x800A2F4C: nop
    
            goto L_800A2F6C;
    }
    // 0x800A2F4C: nop

L_800A2F50:
    // 0x800A2F50: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2F54: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x800A2F58: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x800A2F5C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800A2F60: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x800A2F64: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x800A2F68: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_800A2F6C:
    // 0x800A2F6C: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x800A2F70: blez        $v1, L_800A2FC8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800A2F74: addiu       $v0, $s5, -0x1
        ctx->r2 = ADD32(ctx->r21, -0X1);
            goto L_800A2FC8;
    }
    // 0x800A2F74: addiu       $v0, $s5, -0x1
    ctx->r2 = ADD32(ctx->r21, -0X1);
    // 0x800A2F78: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x800A2F7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800A2F80: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2F84: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A2F88: bnel        $v0, $zero, L_800A2F90
    if (ctx->r2 != 0) {
        // 0x800A2F8C: addu        $s5, $v1, $zero
        ctx->r21 = ADD32(ctx->r3, 0);
            goto L_800A2F90;
    }
    goto skip_4;
    // 0x800A2F8C: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    skip_4:
L_800A2F90:
    // 0x800A2F90: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800A2F94: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A2F98: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800A2F9C: sll         $s0, $s5, 16
    ctx->r16 = S32(ctx->r21 << 16);
    // 0x800A2FA0: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800A2FA4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x800A2FA8: jal         0x8009A3B4
    // 0x800A2FAC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x800A2FAC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x800A2FB0: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x800A2FB4: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x800A2FB8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800A2FBC: subu        $v1, $v1, $s0
    ctx->r3 = SUB32(ctx->r3, ctx->r16);
    // 0x800A2FC0: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x800A2FC4: sw          $v1, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r3;
L_800A2FC8:
    // 0x800A2FC8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A2FCC: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x800A2FD0: addu        $s2, $v0, $v1
    ctx->r18 = ADD32(ctx->r2, ctx->r3);
    // 0x800A2FD4: sb          $s3, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r19;
    // 0x800A2FD8: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x800A2FDC: bltz        $v0, L_800A2FF4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800A2FE0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800A2FF4;
    }
    // 0x800A2FE0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A2FE4: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
    // 0x800A2FE8: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x800A2FEC: j           L_800A3004
    // 0x800A2FF0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_800A3004;
    // 0x800A2FF0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800A2FF4:
    // 0x800A2FF4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x800A2FF8: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x800A2FFC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A3000: negu        $s4, $s4
    ctx->r20 = SUB32(0, ctx->r20);
L_800A3004:
    // 0x800A3004: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x800A3008: sra         $a0, $a1, 16
    ctx->r4 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800A300C: slti        $v0, $a0, 0x64
    ctx->r2 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    // 0x800A3010: bne         $v0, $zero, L_800A30B0
    if (ctx->r2 != 0) {
        // 0x800A3014: lui         $v1, 0x6666
        ctx->r3 = S32(0X6666 << 16);
            goto L_800A30B0;
    }
    // 0x800A3014: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x800A3018: slti        $v0, $a0, 0x3E8
    ctx->r2 = SIGNED(ctx->r4) < 0X3E8 ? 1 : 0;
    // 0x800A301C: bne         $v0, $zero, L_800A3068
    if (ctx->r2 != 0) {
        // 0x800A3020: lui         $v1, 0x51EB
        ctx->r3 = S32(0X51EB << 16);
            goto L_800A3068;
    }
    // 0x800A3020: lui         $v1, 0x51EB
    ctx->r3 = S32(0X51EB << 16);
    // 0x800A3024: lui         $v0, 0x1062
    ctx->r2 = S32(0X1062 << 16);
    // 0x800A3028: ori         $v0, $v0, 0x4DD3
    ctx->r2 = ctx->r2 | 0X4DD3;
    // 0x800A302C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3030: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x800A3034: mfhi        $t0
    ctx->r8 = hi;
    // 0x800A3038: sra         $v1, $t0, 6
    ctx->r3 = S32(SIGNED(ctx->r8) >> 6);
    // 0x800A303C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800A3040: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x800A3044: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x800A3048: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A304C: sll         $v0, $v1, 5
    ctx->r2 = S32(ctx->r3 << 5);
    // 0x800A3050: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800A3054: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800A3058: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A305C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800A3060: subu        $s4, $a0, $v0
    ctx->r20 = SUB32(ctx->r4, ctx->r2);
    // 0x800A3064: lui         $v1, 0x51EB
    ctx->r3 = S32(0X51EB << 16);
L_800A3068:
    // 0x800A3068: ori         $v1, $v1, 0x851F
    ctx->r3 = ctx->r3 | 0X851F;
    // 0x800A306C: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x800A3070: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A3074: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3078: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x800A307C: mfhi        $t0
    ctx->r8 = hi;
    // 0x800A3080: sra         $v1, $t0, 5
    ctx->r3 = S32(SIGNED(ctx->r8) >> 5);
    // 0x800A3084: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800A3088: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x800A308C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x800A3090: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A3094: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800A3098: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A309C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800A30A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A30A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800A30A8: subu        $s4, $a0, $v0
    ctx->r20 = SUB32(ctx->r4, ctx->r2);
    // 0x800A30AC: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
L_800A30B0:
    // 0x800A30B0: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x800A30B4: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x800A30B8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A30BC: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A30C0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x800A30C4: mfhi        $t0
    ctx->r8 = hi;
    // 0x800A30C8: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x800A30CC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800A30D0: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x800A30D4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x800A30D8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A30DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800A30E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A30E4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800A30E8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x800A30EC: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x800A30F0: sb          $a0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r4;
    // 0x800A30F4: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x800A30F8: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x800A30FC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A3100: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A3104: subu        $v0, $s2, $v0
    ctx->r2 = SUB32(ctx->r18, ctx->r2);
    // 0x800A3108: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_800A310C:
    // 0x800A310C: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x800A3110: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x800A3114: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x800A3118: bne         $v0, $v1, L_800A3158
    if (ctx->r2 != ctx->r3) {
        // 0x800A311C: nop
    
            goto L_800A3158;
    }
    // 0x800A311C: nop

    // 0x800A3120: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x800A3124: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x800A3128: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x800A312C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A3130: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800A3134: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x800A3138: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x800A313C: lw          $a1, 0x28($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X28);
    // 0x800A3140: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A3144: addu        $v1, $v0, $a0
    ctx->r3 = ADD32(ctx->r2, ctx->r4);
    // 0x800A3148: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800A314C: beq         $v0, $zero, L_800A3158
    if (ctx->r2 == 0) {
        // 0x800A3150: subu        $v0, $a1, $v1
        ctx->r2 = SUB32(ctx->r5, ctx->r3);
            goto L_800A3158;
    }
    // 0x800A3150: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x800A3154: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
L_800A3158:
    // 0x800A3158: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x800A315C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x800A3160: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800A3164: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800A3168: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800A316C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800A3170: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800A3174: jr          $ra
    // 0x800A3178: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800A3178: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
