#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8005BF8C_3738C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005BF8C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005BF90: lbu         $v1, -0x3E3D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3D);
    // 0x8005BF94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005BF98: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8005BF9C: beq         $v0, $zero, L_8005C0E4
    if (ctx->r2 == 0) {
        // 0x8005BFA0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8005C0E4;
    }
    // 0x8005BFA0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005BFA4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005BFA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005BFAC: addu        $at, $at, $v0
    gpr jr_addend_8005BFB4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005BFB0: lw          $v0, 0x2678($at)
    ctx->r2 = ADD32(ctx->r1, 0X2678);
    // 0x8005BFB4: jr          $v0
    // 0x8005BFB8: nop

    switch (jr_addend_8005BFB4 >> 2) {
        case 0: goto L_8005BFBC; break;
        case 1: goto L_8005BFCC; break;
        case 2: goto L_8005BFFC; break;
        case 3: goto L_8005C024; break;
        case 4: goto L_8005C054; break;
        case 5: goto L_8005C06C; break;
        case 6: goto L_8005C0B0; break;
        case 7: goto L_8005C0D8; break;
        default: switch_error(__func__, 0x8005BFB4, 0x800D2678);
    }
    // 0x8005BFB8: nop

L_8005BFBC:
    // 0x8005BFBC: jal         0x80036E48
    // 0x8005BFC0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8005BFC0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_0:
    // 0x8005BFC4: j           L_8005C0C0
    // 0x8005BFC8: nop

        goto L_8005C0C0;
    // 0x8005BFC8: nop

L_8005BFCC:
    // 0x8005BFCC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005BFD0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005BFD4: bne         $v0, $zero, L_8005C0E4
    if (ctx->r2 != 0) {
        // 0x8005BFD8: addiu       $a0, $zero, 0x3C
        ctx->r4 = ADD32(0, 0X3C);
            goto L_8005C0E4;
    }
    // 0x8005BFD8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x8005BFDC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005BFE0: addiu       $v0, $v0, -0x3E3D
    ctx->r2 = ADD32(ctx->r2, -0X3E3D);
    // 0x8005BFE4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8005BFE8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005BFEC: sb          $a0, -0x3D9F($at)
    MEM_B(-0X3D9F, ctx->r1) = ctx->r4;
    // 0x8005BFF0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005BFF4: j           L_8005C0E4
    // 0x8005BFF8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
        goto L_8005C0E4;
    // 0x8005BFF8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_8005BFFC:
    // 0x8005BFFC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C000: addiu       $v1, $v1, -0x3D9F
    ctx->r3 = ADD32(ctx->r3, -0X3D9F);
    // 0x8005C004: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8005C008: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005C00C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8005C010: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8005C014: beq         $v0, $zero, L_8005C03C
    if (ctx->r2 == 0) {
        // 0x8005C018: nop
    
            goto L_8005C03C;
    }
    // 0x8005C018: nop

    // 0x8005C01C: j           L_8005C0E4
    // 0x8005C020: nop

        goto L_8005C0E4;
    // 0x8005C020: nop

L_8005C024:
    // 0x8005C024: jal         0x8005C0F0
    // 0x8005C028: nop

    func_8005C0F0_374F0(rdram, ctx);
        goto after_1;
    // 0x8005C028: nop

    after_1:
    // 0x8005C02C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C030: sb          $v0, -0x3D9E($at)
    MEM_B(-0X3D9E, ctx->r1) = ctx->r2;
    // 0x8005C034: jal         0x80036E48
    // 0x8005C038: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x8005C038: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
L_8005C03C:
    // 0x8005C03C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005C040: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005C044: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005C048: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C04C: j           L_8005C0E4
    // 0x8005C050: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
        goto L_8005C0E4;
    // 0x8005C050: sb          $v0, -0x3E3D($at)
    MEM_B(-0X3E3D, ctx->r1) = ctx->r2;
L_8005C054:
    // 0x8005C054: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005C058: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005C05C: beq         $v0, $zero, L_8005C0C0
    if (ctx->r2 == 0) {
        // 0x8005C060: nop
    
            goto L_8005C0C0;
    }
    // 0x8005C060: nop

    // 0x8005C064: j           L_8005C0E4
    // 0x8005C068: nop

        goto L_8005C0E4;
    // 0x8005C068: nop

L_8005C06C:
    // 0x8005C06C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005C070: lb          $v0, -0x3D9E($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3D9E);
    // 0x8005C074: beq         $v0, $zero, L_8005C08C
    if (ctx->r2 == 0) {
        // 0x8005C078: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005C08C;
    }
    // 0x8005C078: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005C07C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005C080: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005C084: j           L_8005C098
    // 0x8005C088: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
        goto L_8005C098;
    // 0x8005C088: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
L_8005C08C:
    // 0x8005C08C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005C090: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005C094: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
L_8005C098:
    // 0x8005C098: jal         0x80061510
    // 0x8005C09C: nop

    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x8005C09C: nop

    after_3:
    // 0x8005C0A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005C0A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C0A8: j           L_8005C0C0
    // 0x8005C0AC: sh          $v0, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r2;
        goto L_8005C0C0;
    // 0x8005C0AC: sh          $v0, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r2;
L_8005C0B0:
    // 0x8005C0B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005C0B4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005C0B8: bltz        $v0, L_8005C0E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005C0BC: nop
    
            goto L_8005C0E4;
    }
    // 0x8005C0BC: nop

L_8005C0C0:
    // 0x8005C0C0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005C0C4: addiu       $v1, $v1, -0x3E3D
    ctx->r3 = ADD32(ctx->r3, -0X3E3D);
    // 0x8005C0C8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8005C0CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005C0D0: j           L_8005C0E4
    // 0x8005C0D4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_8005C0E4;
    // 0x8005C0D4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8005C0D8:
    // 0x8005C0D8: lui         $v0, 0x302
    ctx->r2 = S32(0X302 << 16);
    // 0x8005C0DC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C0E0: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
L_8005C0E4:
    // 0x8005C0E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005C0E8: jr          $ra
    // 0x8005C0EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005C0EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80079FA8_553A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80079FA8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80079FAC: lhu         $a0, -0x730C($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X730C);
    // 0x80079FB0: lui         $t2, 0x8018
    ctx->r10 = S32(0X8018 << 16);
    // 0x80079FB4: addiu       $t2, $t2, -0x45C0
    ctx->r10 = ADD32(ctx->r10, -0X45C0);
    // 0x80079FB8: andi        $t1, $a0, 0x1F
    ctx->r9 = ctx->r4 & 0X1F;
    // 0x80079FBC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80079FC0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80079FC4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80079FC8: lw          $v0, -0x31A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X31A0);
    // 0x80079FCC: addiu       $t0, $a0, 0xA
    ctx->r8 = ADD32(ctx->r4, 0XA);
    // 0x80079FD0: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x80079FD4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80079FD8: addiu       $a3, $a0, 0x14
    ctx->r7 = ADD32(ctx->r4, 0X14);
    // 0x80079FDC: andi        $a3, $a3, 0x1F
    ctx->r7 = ctx->r7 & 0X1F;
    // 0x80079FE0: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x80079FE4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80079FE8: sw          $a0, -0x4510($at)
    MEM_W(-0X4510, ctx->r1) = ctx->r4;
    // 0x80079FEC: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x80079FF0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80079FF4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80079FF8: lw          $v0, -0x31A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X31A0);
    // 0x80079FFC: addiu       $a2, $a0, 0x1E
    ctx->r6 = ADD32(ctx->r4, 0X1E);
    // 0x8007A000: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8007A004: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A008: sw          $v0, -0x45BC($at)
    MEM_W(-0X45BC, ctx->r1) = ctx->r2;
    // 0x8007A00C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007A010: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8007A014: lw          $v0, -0x31A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X31A0);
    // 0x8007A018: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8007A01C: addiu       $a0, $a0, 0x28
    ctx->r4 = ADD32(ctx->r4, 0X28);
    // 0x8007A020: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A024: sw          $v0, -0x45B8($at)
    MEM_W(-0X45B8, ctx->r1) = ctx->r2;
    // 0x8007A028: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007A02C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8007A030: lw          $v0, -0x31A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X31A0);
    // 0x8007A034: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8007A038: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8007A03C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A040: sw          $v0, -0x45B4($at)
    MEM_W(-0X45B4, ctx->r1) = ctx->r2;
    // 0x8007A044: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007A048: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8007A04C: lw          $v0, -0x31A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X31A0);
    // 0x8007A050: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x8007A054: addiu       $a1, $a1, -0x31A0
    ctx->r5 = ADD32(ctx->r5, -0X31A0);
    // 0x8007A058: addiu       $v1, $a1, 0x80
    ctx->r3 = ADD32(ctx->r5, 0X80);
    // 0x8007A05C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A060: sw          $v0, -0x45B0($at)
    MEM_W(-0X45B0, ctx->r1) = ctx->r2;
    // 0x8007A064: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x8007A068: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007A06C: addiu       $t2, $t2, 0x14
    ctx->r10 = ADD32(ctx->r10, 0X14);
    // 0x8007A070: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x8007A074: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x8007A078: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007A07C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A080: sw          $v0, -0x45A8($at)
    MEM_W(-0X45A8, ctx->r1) = ctx->r2;
    // 0x8007A084: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x8007A088: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007A08C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A090: sw          $v0, -0x45A4($at)
    MEM_W(-0X45A4, ctx->r1) = ctx->r2;
    // 0x8007A094: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8007A098: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007A09C: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x8007A0A0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A0A4: sw          $v0, -0x45A0($at)
    MEM_W(-0X45A0, ctx->r1) = ctx->r2;
    // 0x8007A0A8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8007A0AC: addiu       $v1, $a1, 0x100
    ctx->r3 = ADD32(ctx->r5, 0X100);
    // 0x8007A0B0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A0B4: sw          $v0, -0x459C($at)
    MEM_W(-0X459C, ctx->r1) = ctx->r2;
    // 0x8007A0B8: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x8007A0BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007A0C0: addiu       $t2, $t2, 0x14
    ctx->r10 = ADD32(ctx->r10, 0X14);
    // 0x8007A0C4: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x8007A0C8: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x8007A0CC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007A0D0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A0D4: sw          $v0, -0x4594($at)
    MEM_W(-0X4594, ctx->r1) = ctx->r2;
    // 0x8007A0D8: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x8007A0DC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007A0E0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A0E4: sw          $v0, -0x4590($at)
    MEM_W(-0X4590, ctx->r1) = ctx->r2;
    // 0x8007A0E8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8007A0EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007A0F0: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x8007A0F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A0F8: sw          $v0, -0x458C($at)
    MEM_W(-0X458C, ctx->r1) = ctx->r2;
    // 0x8007A0FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8007A100: addiu       $a1, $a1, 0x180
    ctx->r5 = ADD32(ctx->r5, 0X180);
    // 0x8007A104: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x8007A108: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A10C: sw          $v0, -0x4588($at)
    MEM_W(-0X4588, ctx->r1) = ctx->r2;
    // 0x8007A110: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x8007A114: addu        $t0, $t0, $a1
    ctx->r8 = ADD32(ctx->r8, ctx->r5);
    // 0x8007A118: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8007A11C: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x8007A120: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007A124: addu        $a3, $a3, $a1
    ctx->r7 = ADD32(ctx->r7, ctx->r5);
    // 0x8007A128: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A12C: sw          $v0, -0x4580($at)
    MEM_W(-0X4580, ctx->r1) = ctx->r2;
    // 0x8007A130: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8007A134: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x8007A138: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8007A13C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A140: sw          $v0, -0x457C($at)
    MEM_W(-0X457C, ctx->r1) = ctx->r2;
    // 0x8007A144: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8007A148: lui         $t2, 0x8018
    ctx->r10 = S32(0X8018 << 16);
    // 0x8007A14C: addiu       $t2, $t2, -0x4570
    ctx->r10 = ADD32(ctx->r10, -0X4570);
    // 0x8007A150: addiu       $v1, $t2, 0xC
    ctx->r3 = ADD32(ctx->r10, 0XC);
    // 0x8007A154: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A158: sw          $v0, -0x4578($at)
    MEM_W(-0X4578, ctx->r1) = ctx->r2;
    // 0x8007A15C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8007A160: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8007A164: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x8007A168: addiu       $a2, $a2, -0x2FA0
    ctx->r6 = ADD32(ctx->r6, -0X2FA0);
    // 0x8007A16C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007A170: sw          $v0, -0x4574($at)
    MEM_W(-0X4574, ctx->r1) = ctx->r2;
L_8007A174:
    // 0x8007A174: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8007A178: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x8007A17C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8007A180: sw          $v0, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r2;
    // 0x8007A184: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8007A188: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8007A18C: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x8007A190: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8007A194: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x8007A198: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8007A19C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007A1A0: sltiu       $v0, $a3, 0x6
    ctx->r2 = ctx->r7 < 0X6 ? 1 : 0;
    // 0x8007A1A4: bne         $v0, $zero, L_8007A174
    if (ctx->r2 != 0) {
        // 0x8007A1A8: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_8007A174;
    }
    // 0x8007A1A8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8007A1AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8007A1B0: jr          $ra
    // 0x8007A1B4: nop

    TRACE_RETURN()
    return;
    // 0x8007A1B4: nop

;}
RECOMP_FUNC void func_8008A238_65638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A238: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008A23C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008A240: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8008A244: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008A248: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8008A24C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_8008A250:
    // 0x8008A250: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8008A254: addiu       $a0, $a0, 0x4008
    ctx->r4 = ADD32(ctx->r4, 0X4008);
    // 0x8008A258: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8008A25C: jal         0x8009A5E0
    // 0x8008A260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8008A260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8008A264: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8008A268: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8008A26C: beq         $v0, $s1, L_8008A2B4
    if (ctx->r2 == ctx->r17) {
        // 0x8008A270: nop
    
            goto L_8008A2B4;
    }
    // 0x8008A270: nop

    // 0x8008A274: bne         $v0, $s0, L_8008A250
    if (ctx->r2 != ctx->r16) {
        // 0x8008A278: nop
    
            goto L_8008A250;
    }
    // 0x8008A278: nop

    // 0x8008A27C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008A280: lw          $v0, -0x14AC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X14AC);
    // 0x8008A284: beq         $v0, $zero, L_8008A29C
    if (ctx->r2 == 0) {
        // 0x8008A288: nop
    
            goto L_8008A29C;
    }
    // 0x8008A288: nop

    // 0x8008A28C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8008A290: lbu         $a1, -0x14AF($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X14AF);
    // 0x8008A294: jalr        $v0
    // 0x8008A298: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8008A298: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
L_8008A29C:
    // 0x8008A29C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008A2A0: lbu         $v0, -0x14AF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14AF);
    // 0x8008A2A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008A2A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008A2AC: j           L_8008A250
    // 0x8008A2B0: sb          $v0, -0x14AF($at)
    MEM_B(-0X14AF, ctx->r1) = ctx->r2;
        goto L_8008A250;
    // 0x8008A2B0: sb          $v0, -0x14AF($at)
    MEM_B(-0X14AF, ctx->r1) = ctx->r2;
L_8008A2B4:
    // 0x8008A2B4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8008A2B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A2BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008A2C0: jr          $ra
    // 0x8008A2C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8008A2C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800490F4_244F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800490F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800490F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800490FC: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80049100: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80049104: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80049108: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8004910C: lw          $v0, -0x2F1C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2F1C);
    // 0x80049110: jalr        $v0
    // 0x80049114: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80049114: nop

    after_0:
    // 0x80049118: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004911C: jr          $ra
    // 0x80049120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80049120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80046174_21574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046174: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80046178: lh          $v1, -0x35B6($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X35B6);
    // 0x8004617C: beq         $v1, $zero, L_800461B8
    if (ctx->r3 == 0) {
        // 0x80046180: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_800461B8;
    }
    // 0x80046180: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80046184: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80046188: bltzl       $v1, L_80046190
    if (SIGNED(ctx->r3) < 0) {
        // 0x8004618C: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_80046190;
    }
    goto skip_0;
    // 0x8004618C: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_80046190:
    // 0x80046190: bltzl       $v0, L_800461AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80046194: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800461AC;
    }
    goto skip_1;
    // 0x80046194: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x80046198: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004619C: bnel        $v0, $zero, L_800461BC
    if (ctx->r2 != 0) {
        // 0x800461A0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_800461BC;
    }
    goto skip_2;
    // 0x800461A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_2:
    // 0x800461A4: j           L_800461C0
    // 0x800461A8: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
        goto L_800461C0;
    // 0x800461A8: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
L_800461AC:
    // 0x800461AC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800461B0: beq         $v0, $zero, L_800461C0
    if (ctx->r2 == 0) {
        // 0x800461B4: xori        $v1, $a1, 0x1
        ctx->r3 = ctx->r5 ^ 0X1;
            goto L_800461C0;
    }
    // 0x800461B4: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
L_800461B8:
    // 0x800461B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_800461BC:
    // 0x800461BC: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
L_800461C0:
    // 0x800461C0: beq         $v1, $zero, L_80046208
    if (ctx->r3 == 0) {
        // 0x800461C4: nop
    
            goto L_80046208;
    }
    // 0x800461C4: nop

    // 0x800461C8: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x800461CC: blez        $v0, L_800461F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800461D0: nop
    
            goto L_800461F0;
    }
    // 0x800461D0: nop

    // 0x800461D4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800461D8: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x800461DC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x800461E0: beq         $v0, $zero, L_80046208
    if (ctx->r2 == 0) {
        // 0x800461E4: andi        $v1, $v1, 0x1
        ctx->r3 = ctx->r3 & 0X1;
            goto L_80046208;
    }
    // 0x800461E4: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x800461E8: j           L_80046208
    // 0x800461EC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_80046208;
    // 0x800461EC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_800461F0:
    // 0x800461F0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800461F4: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x800461F8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x800461FC: bnel        $v0, $zero, L_80046208
    if (ctx->r2 != 0) {
        // 0x80046200: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80046208;
    }
    goto skip_3;
    // 0x80046200: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_3:
    // 0x80046204: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
L_80046208:
    // 0x80046208: jr          $ra
    // 0x8004620C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x8004620C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void sprintf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009A3E0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8009A3E4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8009A3E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8009A3EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009A3F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009A3F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8009A3F8: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8009A3FC: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8009A400: addiu       $a0, $a0, -0x5BC8
    ctx->r4 = ADD32(ctx->r4, -0X5BC8);
    // 0x8009A404: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8009A408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009A40C: jal         0x800A0B30
    // 0x8009A410: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    _Printf(rdram, ctx);
        goto after_0;
    // 0x8009A410: addiu       $a3, $sp, 0x20
    ctx->r7 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x8009A414: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8009A418: bltz        $v1, L_8009A424
    if (SIGNED(ctx->r3) < 0) {
        // 0x8009A41C: addu        $v0, $s0, $v1
        ctx->r2 = ADD32(ctx->r16, ctx->r3);
            goto L_8009A424;
    }
    // 0x8009A41C: addu        $v0, $s0, $v1
    ctx->r2 = ADD32(ctx->r16, ctx->r3);
    // 0x8009A420: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
L_8009A424:
    // 0x8009A424: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8009A428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009A42C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009A430: jr          $ra
    // 0x8009A434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8009A434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008D84C_68C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D84C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008D850: sb          $v0, 0xD2($a0)
    MEM_B(0XD2, ctx->r4) = ctx->r2;
    // 0x8008D854: jr          $ra
    // 0x8008D858: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D858: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_8007570C_50B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007570C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075710: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80075714: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80075718: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007571C: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x80075720: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80075724: jal         0x8004B5E8
    // 0x80075728: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    func_8004B5E8_269E8(rdram, ctx);
        goto after_0;
    // 0x80075728: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    after_0:
    // 0x8007572C: jal         0x8004B5E8
    // 0x80075730: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_1;
    // 0x80075730: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80075734: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80075738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007573C: jr          $ra
    // 0x80075740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80075740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800595D0_349D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800595D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800595D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800595D8: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x800595DC: addiu       $s0, $s0, -0x3E3F
    ctx->r16 = ADD32(ctx->r16, -0X3E3F);
    // 0x800595E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800595E4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x800595E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800595EC: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x800595F0: beq         $v1, $v0, L_80059640
    if (ctx->r3 == ctx->r2) {
        // 0x800595F4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80059640;
    }
    // 0x800595F4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800595F8: beql        $v0, $zero, L_80059610
    if (ctx->r2 == 0) {
        // 0x800595FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80059610;
    }
    goto skip_0;
    // 0x800595FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80059600: beq         $v1, $zero, L_80059620
    if (ctx->r3 == 0) {
        // 0x80059604: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80059620;
    }
    // 0x80059604: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80059608: j           L_80059660
    // 0x8005960C: nop

        goto L_80059660;
    // 0x8005960C: nop

L_80059610:
    // 0x80059610: beq         $v1, $v0, L_80059658
    if (ctx->r3 == ctx->r2) {
        // 0x80059614: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80059658;
    }
    // 0x80059614: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80059618: j           L_80059660
    // 0x8005961C: nop

        goto L_80059660;
    // 0x8005961C: nop

L_80059620:
    // 0x80059620: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80059624: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80059628: jal         0x80061510
    // 0x8005962C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x8005962C: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    after_0:
    // 0x80059630: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80059634: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80059638: j           L_80059660
    // 0x8005963C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_80059660;
    // 0x8005963C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80059640:
    // 0x80059640: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80059644: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80059648: bltz        $v0, L_80059660
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005964C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80059660;
    }
    // 0x8005964C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80059650: j           L_80059660
    // 0x80059654: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_80059660;
    // 0x80059654: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80059658:
    // 0x80059658: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005965C: sh          $v0, -0x3E38($at)
    MEM_H(-0X3E38, ctx->r1) = ctx->r2;
L_80059660:
    // 0x80059660: jal         0x800596DC
    // 0x80059664: nop

    func_800596DC_34ADC(rdram, ctx);
        goto after_1;
    // 0x80059664: nop

    after_1:
    // 0x80059668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005966C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80059670: jr          $ra
    // 0x80059674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80059674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80091CA4_6D0A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091CA4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80091CA8: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x80091CAC: lw          $v0, 0x2C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X2C);
    // 0x80091CB0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80091CB4: jr          $ra
    // 0x80091CB8: sw          $a0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80091CB8: sw          $a0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r4;
;}
RECOMP_FUNC void func_80064F40_40340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064F44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80064F48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80064F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80064F50: jal         0x8006033C
    // 0x80064F54: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80064F54: addiu       $a0, $zero, 0x2EE
    ctx->r4 = ADD32(0, 0X2EE);
    after_0:
    // 0x80064F58: beq         $v0, $zero, L_80064FE8
    if (ctx->r2 == 0) {
        // 0x80064F5C: nop
    
            goto L_80064FE8;
    }
    // 0x80064F5C: nop

    // 0x80064F60: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80064F64: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
    // 0x80064F68: bne         $v0, $zero, L_80064FAC
    if (ctx->r2 != 0) {
        // 0x80064F6C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80064FAC;
    }
    // 0x80064F6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80064F70: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064F74: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80064F78: lb          $v1, 0x73($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X73);
    // 0x80064F7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80064F80: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80064F84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064F88: lbu         $v0, -0x6F91($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F91);
    // 0x80064F8C: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x80064F90: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80064F94: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80064F98: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80064F9C: lhu         $a1, -0x1DE0($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1DE0);
    // 0x80064FA0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80064FA4: j           L_80065060
    // 0x80064FA8: srl         $a1, $a1, 2
    ctx->r5 = S32(U32(ctx->r5) >> 2);
        goto L_80065060;
    // 0x80064FA8: srl         $a1, $a1, 2
    ctx->r5 = S32(U32(ctx->r5) >> 2);
L_80064FAC:
    // 0x80064FAC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064FB0: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80064FB4: lb          $v1, 0x73($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X73);
    // 0x80064FB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80064FBC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80064FC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064FC4: lbu         $v0, -0x6F91($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F91);
    // 0x80064FC8: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x80064FCC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80064FD0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80064FD4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80064FD8: lhu         $a1, -0x1DA0($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1DA0);
    // 0x80064FDC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80064FE0: j           L_80065060
    // 0x80064FE4: srl         $a1, $a1, 2
    ctx->r5 = S32(U32(ctx->r5) >> 2);
        goto L_80065060;
    // 0x80064FE4: srl         $a1, $a1, 2
    ctx->r5 = S32(U32(ctx->r5) >> 2);
L_80064FE8:
    // 0x80064FE8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80064FEC: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
    // 0x80064FF0: bne         $v0, $zero, L_8006502C
    if (ctx->r2 != 0) {
        // 0x80064FF4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006502C;
    }
    // 0x80064FF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80064FF8: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80064FFC: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80065000: lb          $v1, 0x73($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X73);
    // 0x80065004: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80065008: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8006500C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80065010: lbu         $v0, -0x6F91($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F91);
    // 0x80065014: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x80065018: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8006501C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80065020: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80065024: j           L_8006505C
    // 0x80065028: lhu         $a1, -0x1DE0($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1DE0);
        goto L_8006505C;
    // 0x80065028: lhu         $a1, -0x1DE0($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1DE0);
L_8006502C:
    // 0x8006502C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80065030: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80065034: lb          $v1, 0x73($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X73);
    // 0x80065038: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006503C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80065040: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80065044: lbu         $v0, -0x6F91($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F91);
    // 0x80065048: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x8006504C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80065050: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80065054: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80065058: lhu         $a1, -0x1DA0($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X1DA0);
L_8006505C:
    // 0x8006505C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80065060:
    // 0x80065060: jal         0x80069518
    // 0x80065064: nop

    func_80069518_44918(rdram, ctx);
        goto after_1;
    // 0x80065064: nop

    after_1:
    // 0x80065068: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x8006506C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80065070: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80065074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065078: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006507C: jr          $ra
    // 0x80065080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80065080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80060634_3BA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060634: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80060638: lw          $v0, -0x73B8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X73B8);
    // 0x8006063C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80060640: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80060644: addiu       $a0, $a0, -0x4840
    ctx->r4 = ADD32(ctx->r4, -0X4840);
    // 0x80060648: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8006064C: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80060650: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80060654: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80060658: sw          $v0, -0x73B8($at)
    MEM_W(-0X73B8, ctx->r1) = ctx->r2;
    // 0x8006065C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80060660: sb          $v1, -0x483F($at)
    MEM_B(-0X483F, ctx->r1) = ctx->r3;
    // 0x80060664: jr          $ra
    // 0x80060668: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    TRACE_RETURN()
    return;
    // 0x80060668: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
;}
RECOMP_FUNC void func_8007B814_56C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B814: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8007B818: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8007B81C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8007B820: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x8007B824: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8007B828: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8007B82C: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x8007B830: ori         $v0, $v0, 0x2A
    ctx->r2 = ctx->r2 | 0X2A;
    // 0x8007B834: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8007B838: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8007B83C: jal         0x8004A360
    // 0x8007B840: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    func_8004A360_25760(rdram, ctx);
        goto after_0;
    // 0x8007B840: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    after_0:
    // 0x8007B844: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007B848: addiu       $v0, $v0, -0x2D10
    ctx->r2 = ADD32(ctx->r2, -0X2D10);
    // 0x8007B84C: sw          $zero, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = 0;
    // 0x8007B850: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x8007B854: jal         0x80034B34
    // 0x8007B858: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x8007B858: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    after_1:
    // 0x8007B85C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8007B860: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8007B864: lhu         $v0, 0x64($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X64);
    // 0x8007B868: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8007B86C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007B870: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x8007B874: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8007B878: jal         0x80031600
    // 0x8007B87C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x8007B87C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x8007B880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007B884: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8007B888: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8007B88C: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8007B890: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8007B894: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8007B898: jal         0x800308E8
    // 0x8007B89C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_3;
    // 0x8007B89C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x8007B8A0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8007B8A4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8007B8A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8007B8AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8007B8B0: lb          $a1, 0x4EAE($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4EAE);
    // 0x8007B8B4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8007B8B8: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8007B8BC: sh          $a0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r4;
    // 0x8007B8C0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8007B8C4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8007B8C8: lbu         $v1, -0x2CDC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2CDC);
    // 0x8007B8CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8007B8D0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007B8D4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007B8D8: mflo        $v0
    ctx->r2 = lo;
    // 0x8007B8DC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8007B8E0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8007B8E4: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8007B8E8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007B8EC: mflo        $v0
    ctx->r2 = lo;
    // 0x8007B8F0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8007B8F4: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8007B8F8: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8007B8FC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007B900: mflo        $v0
    ctx->r2 = lo;
    // 0x8007B904: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8007B908: addiu       $a0, $s1, 0xA4
    ctx->r4 = ADD32(ctx->r17, 0XA4);
    // 0x8007B90C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8007B910: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8007B914: jal         0x8009A3B4
    // 0x8007B918: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8007B918: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    after_4:
    // 0x8007B91C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8007B920: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x8007B924: lui         $t1, 0x2E80
    ctx->r9 = S32(0X2E80 << 16);
    // 0x8007B928: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x8007B92C: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x8007B930: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
    // 0x8007B934: sw          $v0, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r2;
    // 0x8007B938: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007B93C: lb          $v0, 0x4EAC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EAC);
    // 0x8007B940: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x8007B944: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8007B948: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x8007B94C: lhu         $a3, 0x24($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X24);
    // 0x8007B950: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007B954: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x8007B958: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8007B95C: lw          $t0, -0x2D04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2D04);
    // 0x8007B960: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8007B964: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8007B968: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8007B96C: sw          $t1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r9;
    // 0x8007B970: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x8007B974: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    // 0x8007B978: sh          $a3, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r7;
    // 0x8007B97C: sh          $a3, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r7;
    // 0x8007B980: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8007B984: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x8007B988: jal         0x8009A3B4
    // 0x8007B98C: sw          $t0, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8007B98C: sw          $t0, 0x88($s1)
    MEM_W(0X88, ctx->r17) = ctx->r8;
    after_5:
    // 0x8007B990: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8007B994: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8007B998: jal         0x8009A3B4
    // 0x8007B99C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8007B99C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8007B9A0: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8007B9A4: sb          $v0, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r2;
    // 0x8007B9A8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8007B9AC: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
    // 0x8007B9B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007B9B4: lb          $v0, 0x4EAC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EAC);
    // 0x8007B9B8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B9BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B9C0: lbu         $v0, -0x2CE4($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X2CE4);
    // 0x8007B9C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007B9C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007B9CC: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x8007B9D0: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8007B9D4: jal         0x8007BD74
    // 0x8007B9D8: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    func_8007BD74_57174(rdram, ctx);
        goto after_7;
    // 0x8007B9D8: sh          $v0, 0x98($s1)
    MEM_H(0X98, ctx->r17) = ctx->r2;
    after_7:
    // 0x8007B9DC: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8007B9E0: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8007B9E4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8007B9E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007B9EC: beq         $v1, $zero, L_8007B9FC
    if (ctx->r3 == 0) {
        // 0x8007B9F0: sb          $v0, 0x8($s1)
        MEM_B(0X8, ctx->r17) = ctx->r2;
            goto L_8007B9FC;
    }
    // 0x8007B9F0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8007B9F4: j           L_8007BA00
    // 0x8007B9F8: addiu       $v0, $zero, 0x6208
    ctx->r2 = ADD32(0, 0X6208);
        goto L_8007BA00;
    // 0x8007B9F8: addiu       $v0, $zero, 0x6208
    ctx->r2 = ADD32(0, 0X6208);
L_8007B9FC:
    // 0x8007B9FC: addiu       $v0, $zero, 0x4208
    ctx->r2 = ADD32(0, 0X4208);
L_8007BA00:
    // 0x8007BA00: sh          $v0, 0x1A($s1)
    MEM_H(0X1A, ctx->r17) = ctx->r2;
    // 0x8007BA04: sh          $v0, 0x32($s1)
    MEM_H(0X32, ctx->r17) = ctx->r2;
    // 0x8007BA08: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8007BA0C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8007BA10: bne         $v0, $zero, L_8007BA38
    if (ctx->r2 != 0) {
        // 0x8007BA14: nop
    
            goto L_8007BA38;
    }
    // 0x8007BA14: nop

    // 0x8007BA18: lw          $v0, 0xC0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC0);
    // 0x8007BA1C: lw          $v1, 0xC4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XC4);
    // 0x8007BA20: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007BA24: bne         $v0, $zero, L_8007BA38
    if (ctx->r2 != 0) {
        // 0x8007BA28: nop
    
            goto L_8007BA38;
    }
    // 0x8007BA28: nop

    // 0x8007BA2C: jal         0x800530E8
    // 0x8007BA30: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_8;
    // 0x8007BA30: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    after_8:
    // 0x8007BA34: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_8007BA38:
    // 0x8007BA38: jal         0x8007BDE8
    // 0x8007BA3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8007BDE8_571E8(rdram, ctx);
        goto after_9;
    // 0x8007BA3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8007BA40: addiu       $a0, $zero, 0x9A
    ctx->r4 = ADD32(0, 0X9A);
    // 0x8007BA44: jal         0x8002A33C
    // 0x8007BA48: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8007BA48: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_10:
    // 0x8007BA4C: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8007BA50: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8007BA54: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8007BA58: jr          $ra
    // 0x8007BA5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8007BA5C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8008EE04_6A204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EE04: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008EE08: jr          $ra
    // 0x8008EE0C: addiu       $v0, $v0, 0x51F0
    ctx->r2 = ADD32(ctx->r2, 0X51F0);
    TRACE_RETURN()
    return;
    // 0x8008EE0C: addiu       $v0, $v0, 0x51F0
    ctx->r2 = ADD32(ctx->r2, 0X51F0);
;}
RECOMP_FUNC void func_8008A390_65790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A390: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008A394: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008A398: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008A39C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A3A0: jal         0x80094460
    // 0x8008A3A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8008A3A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8008A3A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008A3AC: sw          $s0, -0x14AC($at)
    MEM_W(-0X14AC, ctx->r1) = ctx->r16;
    // 0x8008A3B0: jal         0x80094460
    // 0x8008A3B4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8008A3B4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8008A3B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008A3BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008A3C0: jr          $ra
    // 0x8008A3C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008A3C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008A3C8: nop

    // 0x8008A3CC: nop

;}
RECOMP_FUNC void func_8005F8FC_3ACFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005F8FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005F900: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8005F904: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8005F908: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8005F90C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8005F910: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005F914: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x8005F918: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005F91C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8005F920: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8005F924: beq         $a2, $v0, L_8005F974
    if (ctx->r6 == ctx->r2) {
        // 0x8005F928: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_8005F974;
    }
    // 0x8005F928: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8005F92C: slti        $v0, $a2, 0x41
    ctx->r2 = SIGNED(ctx->r6) < 0X41 ? 1 : 0;
    // 0x8005F930: beq         $v0, $zero, L_8005F948
    if (ctx->r2 == 0) {
        // 0x8005F934: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8005F948;
    }
    // 0x8005F934: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8005F938: beq         $a2, $v0, L_8005F964
    if (ctx->r6 == ctx->r2) {
        // 0x8005F93C: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_8005F964;
    }
    // 0x8005F93C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8005F940: j           L_8005FA60
    // 0x8005F944: nop

        goto L_8005FA60;
    // 0x8005F944: nop

L_8005F948:
    // 0x8005F948: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8005F94C: beq         $a2, $v0, L_8005F9D4
    if (ctx->r6 == ctx->r2) {
        // 0x8005F950: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8005F9D4;
    }
    // 0x8005F950: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8005F954: beq         $a2, $v0, L_8005F984
    if (ctx->r6 == ctx->r2) {
        // 0x8005F958: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_8005F984;
    }
    // 0x8005F958: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8005F95C: j           L_8005FA60
    // 0x8005F960: nop

        goto L_8005FA60;
    // 0x8005F960: nop

L_8005F964:
    // 0x8005F964: jal         0x8004EEAC
    // 0x8005F968: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8005F968: nop

    after_0:
    // 0x8005F96C: j           L_8005F9E0
    // 0x8005F970: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_8005F9E0;
    // 0x8005F970: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_8005F974:
    // 0x8005F974: jal         0x8004EF48
    // 0x8005F978: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_1;
    // 0x8005F978: nop

    after_1:
    // 0x8005F97C: j           L_8005F9E0
    // 0x8005F980: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
        goto L_8005F9E0;
    // 0x8005F980: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_8005F984:
    // 0x8005F984: jal         0x8004F2C4
    // 0x8005F988: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_2;
    // 0x8005F988: nop

    after_2:
    // 0x8005F98C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8005F990: beq         $a0, $zero, L_8005FA5C
    if (ctx->r4 == 0) {
        // 0x8005F994: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005FA5C;
    }
    // 0x8005F994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005F998: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8005F99C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8005F9A0: sb          $s2, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r18;
    // 0x8005F9A4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8005F9A8: sb          $v1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r3;
    // 0x8005F9AC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8005F9B0: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8005F9B4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8005F9B8: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x8005F9BC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8005F9C0: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x8005F9C4: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8005F9C8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8005F9CC: j           L_8005FA4C
    // 0x8005F9D0: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
        goto L_8005FA4C;
    // 0x8005F9D0: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_8005F9D4:
    // 0x8005F9D4: jal         0x8004EFE4
    // 0x8005F9D8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_3;
    // 0x8005F9D8: nop

    after_3:
    // 0x8005F9DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_8005F9E0:
    // 0x8005F9E0: beq         $a0, $zero, L_8005FA5C
    if (ctx->r4 == 0) {
        // 0x8005F9E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005FA5C;
    }
    // 0x8005F9E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005F9E8: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8005F9EC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8005F9F0: sb          $s2, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r18;
    // 0x8005F9F4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8005F9F8: sb          $v1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r3;
    // 0x8005F9FC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8005FA00: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8005FA04: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8005FA08: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8005FA0C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8005FA10: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x8005FA14: sh          $zero, 0x58($a0)
    MEM_H(0X58, ctx->r4) = 0;
    // 0x8005FA18: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8005FA1C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8005FA20: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8005FA24: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x8005FA28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005FA2C: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x8005FA30: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x8005FA34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005FA38: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x8005FA3C: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8005FA40: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8005FA44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005FA48: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
L_8005FA4C:
    // 0x8005FA4C: sll         $v0, $s3, 2
    ctx->r2 = S32(ctx->r19 << 2);
    // 0x8005FA50: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005FA54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005FA58: sw          $s1, -0x3A2C($at)
    MEM_W(-0X3A2C, ctx->r1) = ctx->r17;
L_8005FA5C:
    // 0x8005FA5C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_8005FA60:
    // 0x8005FA60: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8005FA64: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8005FA68: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8005FA6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005FA70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005FA74: jr          $ra
    // 0x8005FA78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8005FA78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80066F44_42344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066F44: lhu         $v0, 0xBE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XBE);
    // 0x80066F48: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80066F4C: sh          $v1, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r3;
    // 0x80066F50: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80066F54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80066F58: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80066F5C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80066F60: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80066F64: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80066F68: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80066F6C: beql        $v0, $zero, L_80066F98
    if (ctx->r2 == 0) {
        // 0x80066F70: sb          $zero, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = 0;
            goto L_80066F98;
    }
    goto skip_0;
    // 0x80066F70: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    skip_0:
    // 0x80066F74: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80066F78: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80066F7C: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80066F80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80066F84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066F88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066F8C: lb          $v0, 0x4E04($at)
    ctx->r2 = MEM_B(ctx->r1, 0X4E04);
    // 0x80066F90: j           L_80066FE0
    // 0x80066F94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80066FE0;
    // 0x80066F94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80066F98:
    // 0x80066F98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80066F9C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80066FA0: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80066FA4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80066FA8: beq         $v0, $zero, L_80066FC8
    if (ctx->r2 == 0) {
        // 0x80066FAC: nop
    
            goto L_80066FC8;
    }
    // 0x80066FAC: nop

    // 0x80066FB0: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x80066FB4: lb          $v0, 0x71($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X71);
    // 0x80066FB8: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x80066FBC: bne         $v1, $v0, L_80066FC8
    if (ctx->r3 != ctx->r2) {
        // 0x80066FC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80066FC8;
    }
    // 0x80066FC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80066FC4: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
L_80066FC8:
    // 0x80066FC8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80066FCC: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80066FD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066FD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066FD8: lb          $v0, 0x4E00($at)
    ctx->r2 = MEM_B(ctx->r1, 0X4E00);
    // 0x80066FDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80066FE0:
    // 0x80066FE0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80066FE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066FE8: lw          $v0, 0x28C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X28C0);
    // 0x80066FEC: jr          $ra
    // 0x80066FF0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80066FF0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80093460_6E860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093464: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093468: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8009346C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80093470: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80093474:
    // 0x80093474: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093478: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8009347C: sb          $a1, -0x3C3A($at)
    MEM_B(-0X3C3A, ctx->r1) = ctx->r5;
    // 0x80093480: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093484: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80093488: sb          $zero, -0x3C39($at)
    MEM_B(-0X3C39, ctx->r1) = 0;
    // 0x8009348C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093490: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80093494: sh          $a0, -0x3C3C($at)
    MEM_H(-0X3C3C, ctx->r1) = ctx->r4;
    // 0x80093498: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8009349C: sltiu       $v0, $a0, 0x4
    ctx->r2 = ctx->r4 < 0X4 ? 1 : 0;
    // 0x800934A0: bne         $v0, $zero, L_80093474
    if (ctx->r2 != 0) {
        // 0x800934A4: addiu       $v1, $v1, 0xA
        ctx->r3 = ADD32(ctx->r3, 0XA);
            goto L_80093474;
    }
    // 0x800934A4: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x800934A8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800934AC: jal         0x80093F20
    // 0x800934B0: addiu       $a0, $a0, -0xE30
    ctx->r4 = ADD32(ctx->r4, -0XE30);
    func_80093F20_6F320(rdram, ctx);
        goto after_0;
    // 0x800934B0: addiu       $a0, $a0, -0xE30
    ctx->r4 = ADD32(ctx->r4, -0XE30);
    after_0:
    // 0x800934B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800934B8: jr          $ra
    // 0x800934BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800934BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80073F88_4F388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073F88: jr          $ra
    // 0x80073F8C: nop

    TRACE_RETURN()
    return;
    // 0x80073F8C: nop

;}
RECOMP_FUNC void func_8002A02C_542C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A02C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002A030: lbu         $v0, 0x47CE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X47CE);
    // 0x8002A034: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A038: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8002A03C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002A040: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A044: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002A048: lw          $v0, 0x70E8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X70E8);
    // 0x8002A04C: beq         $v0, $zero, L_8002A05C
    if (ctx->r2 == 0) {
        // 0x8002A050: nop
    
            goto L_8002A05C;
    }
    // 0x8002A050: nop

    // 0x8002A054: jalr        $v0
    // 0x8002A058: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8002A058: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
L_8002A05C:
    // 0x8002A05C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002A060: lbu         $v0, 0x47CE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X47CE);
    // 0x8002A064: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002A068: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8002A06C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8002A070: lw          $v1, 0x7068($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7068);
    // 0x8002A074: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8002A078: addiu       $a1, $a1, 0x7068
    ctx->r5 = ADD32(ctx->r5, 0X7068);
    // 0x8002A07C: beq         $v1, $zero, L_8002A0DC
    if (ctx->r3 == 0) {
        // 0x8002A080: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8002A0DC;
    }
    // 0x8002A080: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8002A084: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002A088: lbu         $v0, 0x47CF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X47CF);
    // 0x8002A08C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8002A090: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002A094: lhu         $a2, 0x0($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X0);
    // 0x8002A098: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8002A09C: beql        $a2, $v0, L_8002A0E0
    if (ctx->r6 == ctx->r2) {
        // 0x8002A0A0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8002A0E0;
    }
    goto skip_0;
    // 0x8002A0A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
    // 0x8002A0A4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002A0A8: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8002A0AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002A0B0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8002A0B4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8002A0B8: beql        $v1, $zero, L_8002A0E0
    if (ctx->r3 == 0) {
        // 0x8002A0BC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8002A0E0;
    }
    goto skip_1;
    // 0x8002A0BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_1:
    // 0x8002A0C0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002A0C4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8002A0C8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8002A0CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002A0D0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8002A0D4: beq         $v0, $a2, L_8002A0E0
    if (ctx->r2 == ctx->r6) {
        // 0x8002A0D8: nop
    
            goto L_8002A0E0;
    }
    // 0x8002A0D8: nop

L_8002A0DC:
    // 0x8002A0DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8002A0E0:
    // 0x8002A0E0: beq         $a0, $zero, L_8002A104
    if (ctx->r4 == 0) {
        // 0x8002A0E4: nop
    
            goto L_8002A104;
    }
    // 0x8002A0E4: nop

    // 0x8002A0E8: jal         0x80036B58
    // 0x8002A0EC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8002A0EC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8002A0F0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002A0F4: lw          $v0, -0x7814($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7814);
    // 0x8002A0F8: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
    // 0x8002A0FC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002A100: sw          $v0, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = ctx->r2;
L_8002A104:
    // 0x8002A104: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8002A108: jr          $ra
    // 0x8002A10C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002A10C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80032068_D468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003206C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80032070: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80032074: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80032078: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003207C: addiu       $a0, $a0, -0x22C0
    ctx->r4 = ADD32(ctx->r4, -0X22C0);
    // 0x80032080: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80032084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80032088: jal         0x800308E8
    // 0x8003208C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_800308E8_BCE8(rdram, ctx);
        goto after_0;
    // 0x8003208C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80032090: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80032094: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80032098: lw          $v1, 0x46A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46A0);
    // 0x8003209C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800320A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800320A4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800320A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800320AC: lw          $v1, 0x46A4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46A4);
    // 0x800320B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800320B4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x800320B8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800320BC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800320C0: lw          $v1, 0x46A8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46A8);
    // 0x800320C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800320C8: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x800320CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800320D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800320D4: jr          $ra
    // 0x800320D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800320D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80092EB0_6E2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
L_80092EB0:
    // 0x80092EB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80092EB4: lw          $v0, -0x450($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X450);
    // 0x80092EB8: bne         $v0, $zero, L_80092EB0
    if (ctx->r2 != 0) {
        // 0x80092EBC: nop
    
            goto L_80092EB0;
    }
    // 0x80092EBC: nop

    // 0x80092EC0: jr          $ra
    // 0x80092EC4: nop

    TRACE_RETURN()
    return;
    // 0x80092EC4: nop

    // 0x80092EC8: nop

    // 0x80092ECC: nop

;}
RECOMP_FUNC void Overlay_Loader(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80027388: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8002738C: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80027390: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80027394: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80027398: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8002739C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x800273A0: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x800273A4: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x800273A8: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x800273AC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x800273B0: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x800273B4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x800273B8: lw          $s3, 0x78($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X78);
    // 0x800273BC: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x800273C0: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x800273C4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x800273C8: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x800273CC: beq         $a1, $a0, L_800273DC
    if (ctx->r5 == ctx->r4) {
        // 0x800273D0: sw          $ra, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r31;
            goto L_800273DC;
    }
    // 0x800273D0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800273D4: jal         0x8009A2B0
    // 0x800273D8: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x800273D8: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    after_0:
L_800273DC:
    // 0x800273DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800273E0: jal         0x800994F0
    // 0x800273E4: subu        $a1, $s6, $a0
    ctx->r5 = SUB32(ctx->r22, ctx->r4);
    osInvalICache_recomp(rdram, ctx);
        goto after_1;
    // 0x800273E4: subu        $a1, $s6, $a0
    ctx->r5 = SUB32(ctx->r22, ctx->r4);
    after_1:
    // 0x800273E8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x800273EC: jal         0x80099440
    // 0x800273F0: subu        $a1, $s3, $a0
    ctx->r5 = SUB32(ctx->r19, ctx->r4);
    osInvalDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x800273F0: subu        $a1, $s3, $a0
    ctx->r5 = SUB32(ctx->r19, ctx->r4);
    after_2:
    // 0x800273F4: subu        $v0, $s1, $s2
    ctx->r2 = SUB32(ctx->r17, ctx->r18);
    // 0x800273F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800273FC: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x80027400: and         $s1, $v0, $v1
    ctx->r17 = ctx->r2 & ctx->r3;
    recomp_load_overlays(rdram, ctx);
    // 0x80027404: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x80027408: beq         $s1, $zero, L_80027468
    if (ctx->r17 == 0) {
        // 0x8002740C: addu        $s2, $s4, $zero
        ctx->r18 = ADD32(ctx->r20, 0);
            goto L_80027468;
    }
    // 0x8002740C: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
    // 0x80027410: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x80027414: addiu       $s4, $s4, 0x3A18
    ctx->r20 = ADD32(ctx->r20, 0X3A18);
L_80027418:
    // 0x80027418: sltiu       $v0, $s1, 0x1001
    ctx->r2 = ctx->r17 < 0X1001 ? 1 : 0;
    // 0x8002741C: bne         $v0, $zero, L_80027428
    if (ctx->r2 != 0) {
        // 0x80027420: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_80027428;
    }
    // 0x80027420: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x80027424: addiu       $s0, $zero, 0x1000
    ctx->r16 = ADD32(0, 0X1000);
L_80027428:
    // 0x80027428: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8002742C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80027430: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80027434: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x80027438: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8002743C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80027440: jal         0x80094F50
    // 0x80027444: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    osPiStartDma_recomp(rdram, ctx);
        goto after_3;
    // 0x80027444: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    after_3:
    // 0x80027448: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8002744C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80027450: jal         0x8009A5E0
    // 0x80027454: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80027454: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80027458: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x8002745C: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80027460: bne         $s1, $zero, L_80027418
    if (ctx->r17 != 0) {
        // 0x80027464: addu        $s2, $s2, $s0
        ctx->r18 = ADD32(ctx->r18, ctx->r16);
            goto L_80027418;
    }
    // 0x80027464: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_80027468:
    // 0x80027468: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8002746C: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80027470: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80027474: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80027478: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8002747C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80027480: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80027484: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80027488: jr          $ra
    // 0x8002748C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8002748C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80065380_40780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065380: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80065384: lbu         $v0, -0x3B9B($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9B);
    // 0x80065388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006538C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80065390: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x80065394: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80065398: lbu         $v1, -0x3B9C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B9C);
    // 0x8006539C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800653A0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800653A4: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x800653A8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800653AC: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    // 0x800653B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800653B4: jal         0x80069518
    // 0x800653B8: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    func_80069518_44918(rdram, ctx);
        goto after_0;
    // 0x800653B8: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    after_0:
    // 0x800653BC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800653C0: jr          $ra
    // 0x800653C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800653C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800353F0_107F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800353F0: jr          $ra
    // 0x800353F4: nop

    TRACE_RETURN()
    return;
    // 0x800353F4: nop

;}
RECOMP_FUNC void func_8002B9F8_6DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002B9F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B9FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002BA00: bne         $a0, $v0, L_8002BA10
    if (ctx->r4 != ctx->r2) {
        // 0x8002BA04: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8002BA10;
    }
    // 0x8002BA04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002BA08: jal         0x8002BF38
    // 0x8002BA0C: nop

    func_8002BF38_7338(rdram, ctx);
        goto after_0;
    // 0x8002BA0C: nop

    after_0:
L_8002BA10:
    // 0x8002BA10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002BA14: jr          $ra
    // 0x8002BA18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002BA18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80061EB4_3D2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061EB4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80061EB8: addiu       $v0, $v0, 0xB
    ctx->r2 = ADD32(ctx->r2, 0XB);
    // 0x80061EBC: jr          $ra
    // 0x80061EC0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80061EC0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8007B240_56640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B244: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007B248: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8007B24C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007B250: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B254: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B258: lw          $v0, -0x2D34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2D34);
    // 0x8007B25C: jalr        $v0
    // 0x8007B260: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8007B260: nop

    after_0:
    // 0x8007B264: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007B268: jr          $ra
    // 0x8007B26C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007B26C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006BC04_47004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006BC04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006BC08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006BC0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006BC10: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006BC14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006BC18: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006BC1C: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006BC20: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8006BC24: beq         $v0, $zero, L_8006BF50
    if (ctx->r2 == 0) {
        // 0x8006BC28: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006BF50;
    }
    // 0x8006BC28: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006BC2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006BC30: addu        $at, $at, $v0
    gpr jr_addend_8006BC38 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006BC34: lw          $v0, 0x28B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X28B8);
    // 0x8006BC38: jr          $v0
    // 0x8006BC3C: nop

    switch (jr_addend_8006BC38 >> 2) {
        case 0: goto L_8006BC40; break;
        case 1: goto L_8006BC80; break;
        case 2: goto L_8006BCA8; break;
        case 3: goto L_8006BE14; break;
        case 4: goto L_8006BE40; break;
        case 5: goto L_8006BE78; break;
        case 6: goto L_8006BEF0; break;
        default: switch_error(__func__, 0x8006BC38, 0x800D28B8);
    }
    // 0x8006BC3C: nop

L_8006BC40:
    // 0x8006BC40: jal         0x800700D8
    // 0x8006BC44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_0;
    // 0x8006BC44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8006BC48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BC4C: addiu       $a1, $zero, 0x1D
    ctx->r5 = ADD32(0, 0X1D);
    // 0x8006BC50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006BC54: jal         0x8006FB90
    // 0x8006BC58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_1;
    // 0x8006BC58: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8006BC5C: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    // 0x8006BC60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006BC64: jal         0x8002A2F8
    // 0x8006BC68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8006BC68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8006BC6C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006BC70: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    // 0x8006BC74: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    // 0x8006BC78: j           L_8006BE6C
    // 0x8006BC7C: sb          $zero, 0x44D($s0)
    MEM_B(0X44D, ctx->r16) = 0;
        goto L_8006BE6C;
    // 0x8006BC7C: sb          $zero, 0x44D($s0)
    MEM_B(0X44D, ctx->r16) = 0;
L_8006BC80:
    // 0x8006BC80: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006BC84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006BC88: bne         $v1, $v0, L_8006BF50
    if (ctx->r3 != ctx->r2) {
        // 0x8006BC8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006BF50;
    }
    // 0x8006BC8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BC90: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8006BC94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006BC98: jal         0x8006FB90
    // 0x8006BC9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_3;
    // 0x8006BC9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8006BCA0: j           L_8006BE68
    // 0x8006BCA4: nop

        goto L_8006BE68;
    // 0x8006BCA4: nop

L_8006BCA8:
    // 0x8006BCA8: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006BCAC: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006BCB0: beq         $v0, $zero, L_8006BCC0
    if (ctx->r2 == 0) {
        // 0x8006BCB4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8006BCC0;
    }
    // 0x8006BCB4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8006BCB8: j           L_8006BF50
    // 0x8006BCBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006BF50;
    // 0x8006BCBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006BCC0:
    // 0x8006BCC0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8006BCC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8006BCC8: jal         0x8009A3B4
    // 0x8006BCCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8006BCCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8006BCD0: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x8006BCD4: lh          $v1, 0x116($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X116);
    // 0x8006BCD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8006BCDC: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8006BCE0: sra         $v1, $v0, 10
    ctx->r3 = S32(SIGNED(ctx->r2) >> 10);
    // 0x8006BCE4: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8006BCE8: beq         $v0, $zero, L_8006BD28
    if (ctx->r2 == 0) {
        // 0x8006BCEC: andi        $v0, $v1, 0x2
        ctx->r2 = ctx->r3 & 0X2;
            goto L_8006BD28;
    }
    // 0x8006BCEC: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8006BCF0: beq         $v0, $zero, L_8006BD0C
    if (ctx->r2 == 0) {
        // 0x8006BCF4: nop
    
            goto L_8006BD0C;
    }
    // 0x8006BCF4: nop

    // 0x8006BCF8: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    // 0x8006BCFC: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8006BD00: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8006BD04: j           L_8006BD1C
    // 0x8006BD08: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_8006BD1C;
    // 0x8006BD08: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8006BD0C:
    // 0x8006BD0C: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    // 0x8006BD10: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8006BD14: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8006BD18: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_8006BD1C:
    // 0x8006BD1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006BD20: j           L_8006BD5C
    // 0x8006BD24: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
        goto L_8006BD5C;
    // 0x8006BD24: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_8006BD28:
    // 0x8006BD28: beq         $v0, $zero, L_8006BD44
    if (ctx->r2 == 0) {
        // 0x8006BD2C: nop
    
            goto L_8006BD44;
    }
    // 0x8006BD2C: nop

    // 0x8006BD30: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    // 0x8006BD34: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8006BD38: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x8006BD3C: j           L_8006BD54
    // 0x8006BD40: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_8006BD54;
    // 0x8006BD40: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_8006BD44:
    // 0x8006BD44: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    // 0x8006BD48: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8006BD4C: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x8006BD50: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_8006BD54:
    // 0x8006BD54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006BD58: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
L_8006BD5C:
    // 0x8006BD5C: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x8006BD60: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8006BD64: addiu       $v0, $v0, -0x98
    ctx->r2 = ADD32(ctx->r2, -0X98);
    // 0x8006BD68: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8006BD6C: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x8006BD70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006BD74: jal         0x8003E964
    // 0x8006BD78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8003E964_19D64(rdram, ctx);
        goto after_5;
    // 0x8006BD78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8006BD7C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8006BD80: addiu       $v1, $v0, 0x98
    ctx->r3 = ADD32(ctx->r2, 0X98);
    // 0x8006BD84: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8006BD88: bltz        $v0, L_8006BDA0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006BD8C: slti        $v0, $v0, 0x20
        ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
            goto L_8006BDA0;
    }
    // 0x8006BD8C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8006BD90: bne         $v0, $zero, L_8006BDB0
    if (ctx->r2 != 0) {
        // 0x8006BD94: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8006BDB0;
    }
    // 0x8006BD94: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8006BD98: j           L_8006BF18
    // 0x8006BD9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8006BF18;
    // 0x8006BD9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006BDA0:
    // 0x8006BDA0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8006BDA4: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8006BDA8: beq         $v0, $zero, L_8006BF14
    if (ctx->r2 == 0) {
        // 0x8006BDAC: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8006BF14;
    }
    // 0x8006BDAC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8006BDB0:
    // 0x8006BDB0: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8006BDB4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8006BDB8: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006BDBC: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006BDC0: beq         $v0, $zero, L_8006BF50
    if (ctx->r2 == 0) {
        // 0x8006BDC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006BF50;
    }
    // 0x8006BDC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BDC8: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    // 0x8006BDCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006BDD0: lbu         $t0, 0xA($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0XA);
    // 0x8006BDD4: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x8006BDD8: lhu         $t1, 0x2E($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X2E);
    // 0x8006BDDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8006BDE0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006BDE4: sb          $v1, 0x75($a0)
    MEM_B(0X75, ctx->r4) = ctx->r3;
    // 0x8006BDE8: sb          $v1, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r3;
    // 0x8006BDEC: sb          $zero, 0x76($a0)
    MEM_B(0X76, ctx->r4) = 0;
    // 0x8006BDF0: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x8006BDF4: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x8006BDF8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8006BDFC: subu        $v0, $v0, $t1
    ctx->r2 = SUB32(ctx->r2, ctx->r9);
    // 0x8006BE00: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8006BE04: addiu       $v0, $v0, -0x90
    ctx->r2 = ADD32(ctx->r2, -0X90);
    // 0x8006BE08: sb          $t0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r8;
    // 0x8006BE0C: j           L_8006BF48
    // 0x8006BE10: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
        goto L_8006BF48;
    // 0x8006BE10: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
L_8006BE14:
    // 0x8006BE14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BE18: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8006BE1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006BE20: jal         0x8006FC34
    // 0x8006BE24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_6;
    // 0x8006BE24: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8006BE28: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8006BE2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006BE30: beq         $v1, $v0, L_8006BE68
    if (ctx->r3 == ctx->r2) {
        // 0x8006BE34: nop
    
            goto L_8006BE68;
    }
    // 0x8006BE34: nop

    // 0x8006BE38: j           L_8006BF50
    // 0x8006BE3C: nop

        goto L_8006BF50;
    // 0x8006BE3C: nop

L_8006BE40:
    // 0x8006BE40: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8006BE44: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006BE48: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006BE4C: addiu       $v0, $zero, -0x1B0
    ctx->r2 = ADD32(0, -0X1B0);
    // 0x8006BE50: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8006BE54: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8006BE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BE5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8006BE60: jal         0x8006FC34
    // 0x8006BE64: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_8006FC34_4B034(rdram, ctx);
        goto after_7;
    // 0x8006BE64: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_7:
L_8006BE68:
    // 0x8006BE68: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
L_8006BE6C:
    // 0x8006BE6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006BE70: j           L_8006BF50
    // 0x8006BE74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006BF50;
    // 0x8006BE74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006BE78:
    // 0x8006BE78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BE7C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8006BE80: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006BE84: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8006BE88: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8006BE8C: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8006BE90: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8006BE94: jal         0x8006FC34
    // 0x8006BE98: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8006FC34_4B034(rdram, ctx);
        goto after_8;
    // 0x8006BE98: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_8:
    // 0x8006BE9C: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8006BEA0: bne         $v0, $zero, L_8006BED8
    if (ctx->r2 != 0) {
        // 0x8006BEA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006BED8;
    }
    // 0x8006BEA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BEA8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8006BEAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006BEB0: jal         0x8006FB90
    // 0x8006BEB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_9;
    // 0x8006BEB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x8006BEB8: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    // 0x8006BEBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006BEC0: jal         0x8002A2F8
    // 0x8006BEC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x8006BEC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8006BEC8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006BECC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006BED0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8006BED4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006BED8:
    // 0x8006BED8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006BEDC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006BEE0: bne         $v1, $v0, L_8006BF50
    if (ctx->r3 != ctx->r2) {
        // 0x8006BEE4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006BF50;
    }
    // 0x8006BEE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BEE8: j           L_8006BF18
    // 0x8006BEEC: nop

        goto L_8006BF18;
    // 0x8006BEEC: nop

L_8006BEF0:
    // 0x8006BEF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BEF4: addiu       $v0, $zero, -0x2A
    ctx->r2 = ADD32(0, -0X2A);
    // 0x8006BEF8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006BEFC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006BF00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006BF04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8006BF08: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8006BF0C: jal         0x8006FC34
    // 0x8006BF10: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_8006FC34_4B034(rdram, ctx);
        goto after_11;
    // 0x8006BF10: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_11:
L_8006BF14:
    // 0x8006BF14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006BF18:
    // 0x8006BF18: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006BF1C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006BF20: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8006BF24: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8006BF28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006BF2C: sb          $v0, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r2;
    // 0x8006BF30: jal         0x80070100
    // 0x8006BF34: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_80070100_4B500(rdram, ctx);
        goto after_12;
    // 0x8006BF34: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_12:
    // 0x8006BF38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006BF3C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8006BF40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006BF44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8006BF48:
    // 0x8006BF48: jal         0x8006FB90
    // 0x8006BF4C: nop

    func_8006FB90_4AF90(rdram, ctx);
        goto after_13;
    // 0x8006BF4C: nop

    after_13:
L_8006BF50:
    // 0x8006BF50: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8006BF54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BF58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006BF5C: jr          $ra
    // 0x8006BF60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8006BF60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007957C_5497C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007957C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80079580: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80079584: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80079588: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007958C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80079590: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80079594: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80079598: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007959C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x800795A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800795A4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x800795A8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800795AC: bne         $v0, $zero, L_800795D4
    if (ctx->r2 != 0) {
        // 0x800795B0: addiu       $s2, $s1, 0x38
        ctx->r18 = ADD32(ctx->r17, 0X38);
            goto L_800795D4;
    }
    // 0x800795B0: addiu       $s2, $s1, 0x38
    ctx->r18 = ADD32(ctx->r17, 0X38);
    // 0x800795B4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x800795B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800795BC: jal         0x800A3450
    // 0x800795C0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x800795C0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_0:
    // 0x800795C4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x800795C8: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x800795CC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x800795D0: addiu       $s2, $s1, 0x38
    ctx->r18 = ADD32(ctx->r17, 0X38);
L_800795D4:
    // 0x800795D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800795D8: lbu         $a1, 0x3($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X3);
    // 0x800795DC: lh          $a2, 0x2E($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2E);
    // 0x800795E0: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x800795E4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x800795E8: lui         $s4, 0x800C
    ctx->r20 = S32(0X800C << 16);
    // 0x800795EC: addiu       $s4, $s4, -0x2ED4
    ctx->r20 = ADD32(ctx->r20, -0X2ED4);
    // 0x800795F0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800795F4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800795F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800795FC: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x80079600: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80079604: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80079608: addu        $a1, $a1, $s4
    ctx->r5 = ADD32(ctx->r5, ctx->r20);
    // 0x8007960C: jal         0x8003E964
    // 0x80079610: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    func_8003E964_19D64(rdram, ctx);
        goto after_1;
    // 0x80079610: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_1:
    // 0x80079614: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80079618: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x8007961C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80079620: lbu         $a2, 0x3($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X3);
    // 0x80079624: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x80079628: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8007962C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80079630: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x80079634: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80079638: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8007963C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80079640: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80079644: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80079648: lh          $v1, -0x2ECA($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2ECA);
    // 0x8007964C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80079650: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80079654: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80079658: jal         0x8009A3B4
    // 0x8007965C: subu        $s0, $v0, $v1
    ctx->r16 = SUB32(ctx->r2, ctx->r3);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8007965C: subu        $s0, $v0, $v1
    ctx->r16 = SUB32(ctx->r2, ctx->r3);
    after_2:
    // 0x80079660: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x80079664: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80079668: beql        $v0, $zero, L_80079690
    if (ctx->r2 == 0) {
        // 0x8007966C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80079690;
    }
    goto skip_0;
    // 0x8007966C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x80079670: lhu         $v0, 0x2E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2E);
    // 0x80079674: lhu         $a0, 0x34($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X34);
    // 0x80079678: lhu         $v1, 0x3A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3A);
    // 0x8007967C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80079680: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80079684: sh          $v0, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r2;
    // 0x80079688: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    // 0x8007968C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80079690:
    // 0x80079690: lbu         $a3, 0x3($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X3);
    // 0x80079694: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80079698: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8007969C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x800796A0: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x800796A4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x800796A8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800796AC: sll         $a3, $v1, 1
    ctx->r7 = S32(ctx->r3 << 1);
    // 0x800796B0: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x800796B4: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x800796B8: addu        $a3, $a3, $s4
    ctx->r7 = ADD32(ctx->r7, ctx->r20);
    // 0x800796BC: jal         0x800410F0
    // 0x800796C0: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    func_800410F0_1C4F0(rdram, ctx);
        goto after_3;
    // 0x800796C0: addu        $a3, $v0, $a3
    ctx->r7 = ADD32(ctx->r2, ctx->r7);
    after_3:
    // 0x800796C4: jal         0x80079AC8
    // 0x800796C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80079AC8_54EC8(rdram, ctx);
        goto after_4;
    // 0x800796C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x800796CC: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x800796D0: bne         $v0, $zero, L_800796E0
    if (ctx->r2 != 0) {
        // 0x800796D4: nop
    
            goto L_800796E0;
    }
    // 0x800796D4: nop

    // 0x800796D8: jal         0x80079A68
    // 0x800796DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80079A68_54E68(rdram, ctx);
        goto after_5;
    // 0x800796DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
L_800796E0:
    // 0x800796E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800796E4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800796E8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800796EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800796F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800796F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800796F8: jr          $ra
    // 0x800796FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800796FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80067ED8_432D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80067ED8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80067EDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80067EE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80067EE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80067EE8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80067EEC: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x80067EF0: and         $v0, $a1, $a2
    ctx->r2 = ctx->r5 & ctx->r6;
    // 0x80067EF4: bne         $v0, $zero, L_80067F30
    if (ctx->r2 != 0) {
        // 0x80067EF8: lui         $v0, 0xFFBF
        ctx->r2 = S32(0XFFBF << 16);
            goto L_80067F30;
    }
    // 0x80067EF8: lui         $v0, 0xFFBF
    ctx->r2 = S32(0XFFBF << 16);
    // 0x80067EFC: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80067F00: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x80067F04: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x80067F08: or          $v0, $a1, $a2
    ctx->r2 = ctx->r5 | ctx->r6;
    // 0x80067F0C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80067F10: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80067F14: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80067F18: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80067F1C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80067F20: sb          $a0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r4;
    // 0x80067F24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80067F28: sb          $v0, 0x5990($at)
    MEM_B(0X5990, ctx->r1) = ctx->r2;
    // 0x80067F2C: lui         $v0, 0xFFBF
    ctx->r2 = S32(0XFFBF << 16);
L_80067F30:
    // 0x80067F30: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80067F34: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80067F38: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80067F3C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80067F40: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80067F44: bgtz        $a0, L_800680E4
    if (SIGNED(ctx->r4) > 0) {
        // 0x80067F48: sw          $v1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r3;
            goto L_800680E4;
    }
    // 0x80067F48: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80067F4C: jal         0x8004B5E8
    // 0x80067F50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_0;
    // 0x80067F50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80067F54: jal         0x8004B5E8
    // 0x80067F58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_1;
    // 0x80067F58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80067F5C: lw          $v0, 0xB8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8);
    // 0x80067F60: andi        $v0, $v0, 0x8008
    ctx->r2 = ctx->r2 & 0X8008;
    // 0x80067F64: beq         $v0, $zero, L_80067FB0
    if (ctx->r2 == 0) {
        // 0x80067F68: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_80067FB0;
    }
    // 0x80067F68: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80067F6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067F70: jal         0x8002A2F8
    // 0x80067F74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80067F74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80067F78: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80067F7C: lbu         $a0, 0x71($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X71);
    // 0x80067F80: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80067F84: lw          $a2, 0x6C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X6C);
    // 0x80067F88: lui         $v1, 0xFEFF
    ctx->r3 = S32(0XFEFF << 16);
    // 0x80067F8C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80067F90: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80067F94: sb          $a0, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r4;
    // 0x80067F98: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80067F9C: lbu         $a0, 0x1($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X1);
    // 0x80067FA0: jal         0x80061510
    // 0x80067FA4: lbu         $a2, 0x2($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X2);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x80067FA4: lbu         $a2, 0x2($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X2);
    after_3:
    // 0x80067FA8: j           L_80068034
    // 0x80067FAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80068034;
    // 0x80067FAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80067FB0:
    // 0x80067FB0: lhu         $v0, 0xBA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XBA);
    // 0x80067FB4: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x80067FB8: beq         $v0, $zero, L_80068064
    if (ctx->r2 == 0) {
        // 0x80067FBC: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80068064;
    }
    // 0x80067FBC: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80067FC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067FC4: jal         0x8002A2F8
    // 0x80067FC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x80067FC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80067FCC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80067FD0: lbu         $a1, 0x5990($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X5990);
    // 0x80067FD4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80067FD8: beq         $a1, $v0, L_80068044
    if (ctx->r5 == ctx->r2) {
        // 0x80067FDC: nop
    
            goto L_80068044;
    }
    // 0x80067FDC: nop

    // 0x80067FE0: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80067FE4: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80067FE8: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80067FEC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80067FF0: addiu       $a0, $a0, 0x4E04
    ctx->r4 = ADD32(ctx->r4, 0X4E04);
    // 0x80067FF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80067FF8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80067FFC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80068000: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80068004: lbu         $v1, 0x4E04($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4E04);
    // 0x80068008: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8006800C: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80068010: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80068014: lbu         $v0, 0x5990($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5990);
    // 0x80068018: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006801C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80068020: jal         0x800570AC
    // 0x80068024: sb          $a0, 0x4E04($at)
    MEM_B(0X4E04, ctx->r1) = ctx->r4;
    func_800570AC_324AC(rdram, ctx);
        goto after_5;
    // 0x80068024: sb          $a0, 0x4E04($at)
    MEM_B(0X4E04, ctx->r1) = ctx->r4;
    after_5:
    // 0x80068028: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    // 0x8006802C: sb          $v0, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r2;
    // 0x80068030: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80068034:
    // 0x80068034: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80068038: sb          $v0, 0x5990($at)
    MEM_B(0X5990, ctx->r1) = ctx->r2;
    // 0x8006803C: j           L_800680F0
    // 0x80068040: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800680F0;
    // 0x80068040: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80068044:
    // 0x80068044: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    // 0x80068048: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8006804C: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80068050: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068054: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80068058: sb          $v0, 0x5990($at)
    MEM_B(0X5990, ctx->r1) = ctx->r2;
    // 0x8006805C: j           L_800680F0
    // 0x80068060: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800680F0;
    // 0x80068060: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80068064:
    // 0x80068064: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80068068: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x8006806C: beq         $v1, $zero, L_800680B4
    if (ctx->r3 == 0) {
        // 0x80068070: nop
    
            goto L_800680B4;
    }
    // 0x80068070: nop

    // 0x80068074: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80068078: lbu         $v0, -0x11D0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X11D0);
    // 0x8006807C: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80068080: beq         $v0, $zero, L_8006809C
    if (ctx->r2 == 0) {
        // 0x80068084: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006809C;
    }
    // 0x80068084: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80068088: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8006808C: jal         0x8004B6A0
    // 0x80068090: ori         $a1, $a1, 0x18
    ctx->r5 = ctx->r5 | 0X18;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_6;
    // 0x80068090: ori         $a1, $a1, 0x18
    ctx->r5 = ctx->r5 | 0X18;
    after_6:
    // 0x80068094: j           L_800680D0
    // 0x80068098: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_800680D0;
    // 0x80068098: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8006809C:
    // 0x8006809C: beq         $v1, $zero, L_800680B4
    if (ctx->r3 == 0) {
        // 0x800680A0: lui         $a1, 0x2
        ctx->r5 = S32(0X2 << 16);
            goto L_800680B4;
    }
    // 0x800680A0: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800680A4: jal         0x8004B6A0
    // 0x800680A8: ori         $a1, $a1, 0x18
    ctx->r5 = ctx->r5 | 0X18;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_7;
    // 0x800680A8: ori         $a1, $a1, 0x18
    ctx->r5 = ctx->r5 | 0X18;
    after_7:
    // 0x800680AC: j           L_800680F0
    // 0x800680B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800680F0;
    // 0x800680B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800680B4:
    // 0x800680B4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800680B8: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x800680BC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800680C0: lbu         $v1, -0x11D0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X11D0);
    // 0x800680C4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800680C8: beq         $v0, $zero, L_800680EC
    if (ctx->r2 == 0) {
        // 0x800680CC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800680EC;
    }
    // 0x800680CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_800680D0:
    // 0x800680D0: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800680D4: jal         0x8004B6A0
    // 0x800680D8: ori         $a1, $a1, 0x19
    ctx->r5 = ctx->r5 | 0X19;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_8;
    // 0x800680D8: ori         $a1, $a1, 0x19
    ctx->r5 = ctx->r5 | 0X19;
    after_8:
    // 0x800680DC: j           L_800680F0
    // 0x800680E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800680F0;
    // 0x800680E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800680E4:
    // 0x800680E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800680E8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_800680EC:
    // 0x800680EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800680F0:
    // 0x800680F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800680F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800680F8: jr          $ra
    // 0x800680FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800680FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80092C6C_6E06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092C70: lui         $t0, 0x8019
    ctx->r8 = S32(0X8019 << 16);
    // 0x80092C74: lw          $t0, -0x2DD0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2DD0);
    // 0x80092C78: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80092C7C: lw          $v1, -0x71E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X71E0);
    // 0x80092C80: srl         $v0, $a3, 16
    ctx->r2 = S32(U32(ctx->r7) >> 16);
    // 0x80092C84: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x80092C88: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80092C8C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80092C90: sw          $a0, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r4;
    // 0x80092C94: sw          $a1, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->r5;
    // 0x80092C98: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x80092C9C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80092CA0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80092CA4: lw          $v1, -0xEA8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEA8);
    // 0x80092CA8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80092CAC: lw          $a0, 0x980($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X980);
    // 0x80092CB0: sw          $v0, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r2;
    // 0x80092CB4: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x80092CB8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80092CBC: lw          $v0, -0xEAC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEAC);
    // 0x80092CC0: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x80092CC4: lhu         $a2, -0xE9C($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0XE9C);
    // 0x80092CC8: sw          $v1, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r3;
    // 0x80092CCC: sw          $a0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r4;
    // 0x80092CD0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80092CD4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80092CD8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80092CDC: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x80092CE0: sw          $v0, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r2;
    // 0x80092CE4: andi        $v0, $a2, 0x4
    ctx->r2 = ctx->r6 & 0X4;
    // 0x80092CE8: sw          $v1, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->r3;
    // 0x80092CEC: beq         $v0, $zero, L_80092D0C
    if (ctx->r2 == 0) {
        // 0x80092CF0: sw          $a1, 0x28($t0)
        MEM_W(0X28, ctx->r8) = ctx->r5;
            goto L_80092D0C;
    }
    // 0x80092CF0: sw          $a1, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r5;
    // 0x80092CF4: lw          $v0, 0x14($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X14);
    // 0x80092CF8: xori        $v1, $a2, 0x4
    ctx->r3 = ctx->r6 ^ 0X4;
    // 0x80092CFC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80092D00: sh          $v1, -0xE9C($at)
    MEM_H(-0XE9C, ctx->r1) = ctx->r3;
    // 0x80092D04: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80092D08: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
L_80092D0C:
    // 0x80092D0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80092D10: sh          $a3, -0xE9C($at)
    MEM_H(-0XE9C, ctx->r1) = ctx->r7;
    // 0x80092D14: andi        $v0, $a3, 0x1
    ctx->r2 = ctx->r7 & 0X1;
    // 0x80092D18: beq         $v0, $zero, L_80092D84
    if (ctx->r2 == 0) {
        // 0x80092D1C: nop
    
            goto L_80092D84;
    }
    // 0x80092D1C: nop

    // 0x80092D20: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80092D24: lw          $v0, -0xB8C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XB8C);
    // 0x80092D28: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80092D2C: lw          $v1, -0xEB0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEB0);
    // 0x80092D30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80092D34: divu        $zero, $v0, $v1
    lo = S32(U32(ctx->r2) / U32(ctx->r3)); hi = S32(U32(ctx->r2) % U32(ctx->r3));
    // 0x80092D38: bne         $v1, $zero, L_80092D44
    if (ctx->r3 != 0) {
        // 0x80092D3C: nop
    
            goto L_80092D44;
    }
    // 0x80092D3C: nop

    // 0x80092D40: break       7
    do_break(2148085056);
L_80092D44:
    // 0x80092D44: mfhi        $a1
    ctx->r5 = hi;
    // 0x80092D48: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80092D4C: lw          $a0, 0xB20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XB20);
    // 0x80092D50: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80092D54: lw          $v1, -0x2DD0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2DD0);
    // 0x80092D58: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80092D5C: addiu       $v0, $v0, -0x2DCA
    ctx->r2 = ADD32(ctx->r2, -0X2DCA);
    // 0x80092D60: sw          $v0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r2;
    // 0x80092D64: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80092D68: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80092D6C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80092D70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80092D74: sw          $a1, -0xB8C($at)
    MEM_W(-0XB8C, ctx->r1) = ctx->r5;
    // 0x80092D78: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092D7C: j           L_80092D98
    // 0x80092D80: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
        goto L_80092D98;
    // 0x80092D80: sw          $v0, 0x980($at)
    MEM_W(0X980, ctx->r1) = ctx->r2;
L_80092D84:
    // 0x80092D84: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80092D88: lw          $v1, -0x2DD0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2DD0);
    // 0x80092D8C: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80092D90: addiu       $v0, $v0, -0x2DCC
    ctx->r2 = ADD32(ctx->r2, -0X2DCC);
    // 0x80092D94: sw          $v0, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r2;
L_80092D98:
    // 0x80092D98: jal         0x80094460
    // 0x80092D9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80092D9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80092DA0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80092DA4: lw          $v1, -0x450($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X450);
    // 0x80092DA8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80092DAC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80092DB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80092DB4: sw          $v1, -0x450($at)
    MEM_W(-0X450, ctx->r1) = ctx->r3;
    // 0x80092DB8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80092DBC: jal         0x80094460
    // 0x80092DC0: lw          $v0, -0x450($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X450);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80092DC0: lw          $v0, -0x450($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X450);
    after_1:
    // 0x80092DC4: jal         0x800995F0
    // 0x80092DC8: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_2;
    // 0x80092DC8: nop

    after_2:
    // 0x80092DCC: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80092DD0: lw          $a1, -0x2DD0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2DD0);
    // 0x80092DD4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80092DD8: addiu       $a0, $a0, 0x50EC
    ctx->r4 = ADD32(ctx->r4, 0X50EC);
    // 0x80092DDC: jal         0x8009A710
    // 0x80092DE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80092DE0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80092DE4: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80092DE8: lw          $v0, -0x2DD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2DD0);
    // 0x80092DEC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80092DF0: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80092DF4: sw          $v0, -0x2DD0($at)
    MEM_W(-0X2DD0, ctx->r1) = ctx->r2;
    // 0x80092DF8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80092DFC: jr          $ra
    // 0x80092E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80092E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092E04: nop

    // 0x80092E08: nop

    // 0x80092E0C: nop

;}
RECOMP_FUNC void func_8002A33C_573C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A33C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002A340: lw          $v1, -0x2374($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2374);
    // 0x8002A344: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8002A348: addiu       $v0, $v0, 0x480
    ctx->r2 = ADD32(ctx->r2, 0X480);
    // 0x8002A34C: beq         $v1, $v0, L_8002A390
    if (ctx->r3 == ctx->r2) {
        // 0x8002A350: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002A390;
    }
    // 0x8002A350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A354: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8002A358: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002A35C: lw          $v1, -0x2374($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2374);
    // 0x8002A360: sh          $a0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r4;
    // 0x8002A364: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8002A368: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x8002A36C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8002A370: sh          $v0, 0x6($v1)
    MEM_H(0X6, ctx->r3) = ctx->r2;
    // 0x8002A374: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8002A378: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    // 0x8002A37C: lhu         $a0, 0x6($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6);
    // 0x8002A380: addiu       $v0, $v1, 0x14
    ctx->r2 = ADD32(ctx->r3, 0X14);
    // 0x8002A384: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002A388: sw          $v0, -0x2374($at)
    MEM_W(-0X2374, ctx->r1) = ctx->r2;
    // 0x8002A38C: sh          $a0, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r4;
L_8002A390:
    // 0x8002A390: jr          $ra
    // 0x8002A394: nop

    TRACE_RETURN()
    return;
    // 0x8002A394: nop

;}
RECOMP_FUNC void func_8008D6D8_68AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D6D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008D6DC: sb          $v0, 0xD6($a0)
    MEM_B(0XD6, ctx->r4) = ctx->r2;
    // 0x8008D6E0: jr          $ra
    // 0x8008D6E4: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D6E4: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_8008D610_68A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D610: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8008D614: sb          $zero, 0xD5($a0)
    MEM_B(0XD5, ctx->r4) = 0;
    // 0x8008D618: jr          $ra
    // 0x8008D61C: sw          $zero, 0x68($a0)
    MEM_W(0X68, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8008D61C: sw          $zero, 0x68($a0)
    MEM_W(0X68, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80053528_2E928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80053528: jr          $ra
    // 0x8005352C: nop

    TRACE_RETURN()
    return;
    // 0x8005352C: nop

;}
RECOMP_FUNC void func_80034A00_FE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034A00: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80034A04: lw          $a1, -0x7218($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7218);
    // 0x80034A08: sltiu       $v0, $a1, 0x8
    ctx->r2 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x80034A0C: beq         $v0, $zero, L_80034A48
    if (ctx->r2 == 0) {
        // 0x80034A10: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_80034A48;
    }
    // 0x80034A10: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80034A14: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80034A18: lw          $v1, -0x721C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X721C);
    // 0x80034A1C: addiu       $a0, $a1, 0x1
    ctx->r4 = ADD32(ctx->r5, 0X1);
    // 0x80034A20: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034A24: sw          $a0, -0x7218($at)
    MEM_W(-0X7218, ctx->r1) = ctx->r4;
    // 0x80034A28: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80034A2C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80034A30: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80034A34: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80034A38: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80034A3C: sw          $a2, 0x2898($at)
    MEM_W(0X2898, ctx->r1) = ctx->r6;
    // 0x80034A40: j           L_80034A4C
    // 0x80034A44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80034A4C;
    // 0x80034A44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80034A48:
    // 0x80034A48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80034A4C:
    // 0x80034A4C: jr          $ra
    // 0x80034A50: nop

    TRACE_RETURN()
    return;
    // 0x80034A50: nop

;}
RECOMP_FUNC void func_80069A64_44E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069A64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069A68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80069A6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80069A70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069A74: lb          $v1, 0x74($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X74);
    // 0x80069A78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069A7C: bne         $v1, $v0, L_80069AD4
    if (ctx->r3 != ctx->r2) {
        // 0x80069A80: nop
    
            goto L_80069AD4;
    }
    // 0x80069A80: nop

    // 0x80069A84: lhu         $v0, 0x7C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X7C);
    // 0x80069A88: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x80069A8C: beq         $v0, $zero, L_80069AD4
    if (ctx->r2 == 0) {
        // 0x80069A90: nop
    
            goto L_80069AD4;
    }
    // 0x80069A90: nop

    // 0x80069A94: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80069A98: addiu       $v0, $v0, -0x7
    ctx->r2 = ADD32(ctx->r2, -0X7);
    // 0x80069A9C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80069AA0: beq         $v0, $zero, L_80069AD4
    if (ctx->r2 == 0) {
        // 0x80069AA4: nop
    
            goto L_80069AD4;
    }
    // 0x80069AA4: nop

    // 0x80069AA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80069AAC: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x80069AB0: beq         $v0, $zero, L_80069AD4
    if (ctx->r2 == 0) {
        // 0x80069AB4: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_80069AD4;
    }
    // 0x80069AB4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x80069AB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80069ABC: jal         0x8006FB90
    // 0x80069AC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x80069AC0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80069AC4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80069AC8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80069ACC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80069AD0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
L_80069AD4:
    // 0x80069AD4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80069AD8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80069ADC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80069AE0: beq         $v0, $zero, L_80069B00
    if (ctx->r2 == 0) {
        // 0x80069AE4: nop
    
            goto L_80069B00;
    }
    // 0x80069AE4: nop

    // 0x80069AE8: lb          $v0, 0x76($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X76);
    // 0x80069AEC: beq         $v0, $zero, L_80069B00
    if (ctx->r2 == 0) {
        // 0x80069AF0: nop
    
            goto L_80069B00;
    }
    // 0x80069AF0: nop

    // 0x80069AF4: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x80069AF8: jal         0x80048694
    // 0x80069AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80048694_23A94(rdram, ctx);
        goto after_1;
    // 0x80069AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80069B00:
    // 0x80069B00: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80069B04: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80069B08: bne         $v1, $v0, L_80069B28
    if (ctx->r3 != ctx->r2) {
        // 0x80069B0C: nop
    
            goto L_80069B28;
    }
    // 0x80069B0C: nop

    // 0x80069B10: lb          $v0, 0x76($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X76);
    // 0x80069B14: beq         $v0, $zero, L_80069B28
    if (ctx->r2 == 0) {
        // 0x80069B18: nop
    
            goto L_80069B28;
    }
    // 0x80069B18: nop

    // 0x80069B1C: lw          $a1, 0xC0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC0);
    // 0x80069B20: jal         0x80048814
    // 0x80069B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80048814_23C14(rdram, ctx);
        goto after_2;
    // 0x80069B24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80069B28:
    // 0x80069B28: jal         0x8006033C
    // 0x80069B2C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80069B2C: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_3:
    // 0x80069B30: bne         $v0, $zero, L_80069B40
    if (ctx->r2 != 0) {
        // 0x80069B34: nop
    
            goto L_80069B40;
    }
    // 0x80069B34: nop

    // 0x80069B38: jal         0x80046470
    // 0x80069B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80046470_21870(rdram, ctx);
        goto after_4;
    // 0x80069B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80069B40:
    // 0x80069B40: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80069B44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80069B48: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80069B4C: beq         $v0, $zero, L_80069C38
    if (ctx->r2 == 0) {
        // 0x80069B50: lui         $v1, 0xFF00
        ctx->r3 = S32(0XFF00 << 16);
            goto L_80069C38;
    }
    // 0x80069B50: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
    // 0x80069B54: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x80069B58: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x80069B5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80069B60: bne         $v0, $zero, L_80069C38
    if (ctx->r2 != 0) {
        // 0x80069B64: nop
    
            goto L_80069C38;
    }
    // 0x80069B64: nop

    // 0x80069B68: jal         0x8003E934
    // 0x80069B6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x80069B6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80069B70: lw          $v1, 0x78($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X78);
    // 0x80069B74: lh          $v1, 0xA($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XA);
    // 0x80069B78: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80069B7C: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80069B80: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
    // 0x80069B84: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80069B88: beq         $v0, $zero, L_80069C28
    if (ctx->r2 == 0) {
        // 0x80069B8C: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80069C28;
    }
    // 0x80069B8C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80069B90: lb          $v0, 0x75($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X75);
    // 0x80069B94: bne         $v0, $zero, L_80069C20
    if (ctx->r2 != 0) {
        // 0x80069B98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80069C20;
    }
    // 0x80069B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069B9C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80069BA0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80069BA4: bne         $v1, $v0, L_80069BC0
    if (ctx->r3 != ctx->r2) {
        // 0x80069BA8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80069BC0;
    }
    // 0x80069BA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80069BAC: jal         0x80034518
    // 0x80069BB0: nop

    func_80034518_F918(rdram, ctx);
        goto after_6;
    // 0x80069BB0: nop

    after_6:
    // 0x80069BB4: sh          $zero, 0x108($s0)
    MEM_H(0X108, ctx->r16) = 0;
    // 0x80069BB8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80069BBC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80069BC0:
    // 0x80069BC0: bne         $v1, $v0, L_80069BF8
    if (ctx->r3 != ctx->r2) {
        // 0x80069BC4: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80069BF8;
    }
    // 0x80069BC4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80069BC8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80069BCC: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80069BD0: beq         $v0, $zero, L_80069BF4
    if (ctx->r2 == 0) {
        // 0x80069BD4: addiu       $a0, $zero, 0x8E
        ctx->r4 = ADD32(0, 0X8E);
            goto L_80069BF4;
    }
    // 0x80069BD4: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    // 0x80069BD8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80069BDC: jal         0x8002A2F8
    // 0x80069BE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_7;
    // 0x80069BE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80069BE4: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    // 0x80069BE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80069BEC: jal         0x8002A2F8
    // 0x80069BF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_8;
    // 0x80069BF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
L_80069BF4:
    // 0x80069BF4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80069BF8:
    // 0x80069BF8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80069BFC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80069C00: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x80069C04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069C08: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80069C0C: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
    // 0x80069C10: sb          $zero, 0x169($s0)
    MEM_B(0X169, ctx->r16) = 0;
    // 0x80069C14: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80069C18: sb          $zero, 0x111($s0)
    MEM_B(0X111, ctx->r16) = 0;
    // 0x80069C1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80069C20:
    // 0x80069C20: j           L_80069C38
    // 0x80069C24: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
        goto L_80069C38;
    // 0x80069C24: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
L_80069C28:
    // 0x80069C28: beq         $v0, $zero, L_80069C38
    if (ctx->r2 == 0) {
        // 0x80069C2C: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_80069C38;
    }
    // 0x80069C2C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80069C30: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80069C34: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80069C38:
    // 0x80069C38: jal         0x80040F30
    // 0x80069C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_9;
    // 0x80069C3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80069C40: bgez        $v0, L_80069C90
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80069C44: nop
    
            goto L_80069C90;
    }
    // 0x80069C44: nop

    // 0x80069C48: lhu         $v0, 0x2C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2C);
    // 0x80069C4C: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x80069C50: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80069C54: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x80069C58: lb          $a2, 0x74($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X74);
    // 0x80069C5C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80069C60: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80069C64: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80069C68: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x80069C6C: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x80069C70: beq         $a2, $zero, L_80069C90
    if (ctx->r6 == 0) {
        // 0x80069C74: sw          $a1, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r5;
            goto L_80069C90;
    }
    // 0x80069C74: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x80069C78: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80069C7C: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80069C80: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80069C84: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80069C88: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80069C8C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
L_80069C90:
    // 0x80069C90: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80069C94: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80069C98: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80069C9C: bne         $v1, $v0, L_80069CF4
    if (ctx->r3 != ctx->r2) {
        // 0x80069CA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80069CF4;
    }
    // 0x80069CA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069CA4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80069CA8: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x80069CAC: bne         $v1, $v0, L_80069CF4
    if (ctx->r3 != ctx->r2) {
        // 0x80069CB0: nop
    
            goto L_80069CF4;
    }
    // 0x80069CB0: nop

    // 0x80069CB4: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80069CB8: slti        $v0, $v0, -0x7D0
    ctx->r2 = SIGNED(ctx->r2) < -0X7D0 ? 1 : 0;
    // 0x80069CBC: beq         $v0, $zero, L_80069CF4
    if (ctx->r2 == 0) {
        // 0x80069CC0: nop
    
            goto L_80069CF4;
    }
    // 0x80069CC0: nop

    // 0x80069CC4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80069CC8: slti        $v0, $v0, -0x1388
    ctx->r2 = SIGNED(ctx->r2) < -0X1388 ? 1 : 0;
    // 0x80069CCC: beq         $v0, $zero, L_80069CF4
    if (ctx->r2 == 0) {
        // 0x80069CD0: nop
    
            goto L_80069CF4;
    }
    // 0x80069CD0: nop

    // 0x80069CD4: lhu         $v0, 0x2C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2C);
    // 0x80069CD8: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x80069CDC: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80069CE0: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x80069CE4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80069CE8: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x80069CEC: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x80069CF0: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
L_80069CF4:
    // 0x80069CF4: lb          $a1, 0x168($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X168);
    // 0x80069CF8: lb          $a2, 0x169($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X169);
    // 0x80069CFC: jal         0x8003B810
    // 0x80069D00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B810_16C10(rdram, ctx);
        goto after_10;
    // 0x80069D00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x80069D04: jal         0x800508D4
    // 0x80069D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800508D4_2BCD4(rdram, ctx);
        goto after_11;
    // 0x80069D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x80069D0C: jal         0x80050578
    // 0x80069D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050578_2B978(rdram, ctx);
        goto after_12;
    // 0x80069D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80069D14: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80069D18: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80069D1C: beq         $v0, $zero, L_80069D34
    if (ctx->r2 == 0) {
        // 0x80069D20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80069D34;
    }
    // 0x80069D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80069D24: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80069D28: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x80069D2C: jal         0x8003B2B4
    // 0x80069D30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B2B4_166B4(rdram, ctx);
        goto after_13;
    // 0x80069D30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
L_80069D34:
    // 0x80069D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069D38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80069D3C: jr          $ra
    // 0x80069D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80069D40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void _collectPVoices(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80099210: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80099214: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80099218: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009921C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80099220: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80099224: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x80099228: beq         $s0, $zero, L_80099250
    if (ctx->r16 == 0) {
        // 0x8009922C: nop
    
            goto L_80099250;
    }
    // 0x8009922C: nop

L_80099230:
    // 0x80099230: jal         0x80098C4C
    // 0x80099234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80099234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80099238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8009923C: jal         0x80098C2C
    // 0x80099240: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    alLink(rdram, ctx);
        goto after_1;
    // 0x80099240: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    after_1:
    // 0x80099244: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x80099248: bne         $s0, $zero, L_80099230
    if (ctx->r16 != 0) {
        // 0x8009924C: nop
    
            goto L_80099230;
    }
    // 0x8009924C: nop

L_80099250:
    // 0x80099250: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80099254: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80099258: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009925C: jr          $ra
    // 0x80099260: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80099260: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008C984_67D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C984: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008C988: lui         $a3, 0x4800
    ctx->r7 = S32(0X4800 << 16);
    // 0x8008C98C: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
L_8008C990:
    // 0x8008C990: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008C994: lw          $v0, 0x4FA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FA4);
    // 0x8008C998: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x8008C99C: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x8008C9A0: xor         $v1, $v0, $a3
    ctx->r3 = ctx->r2 ^ ctx->r7;
    // 0x8008C9A4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8008C9A8: xor         $v0, $v0, $t0
    ctx->r2 = ctx->r2 ^ ctx->r8;
    // 0x8008C9AC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008C9B0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8008C9B4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008C9B8: sw          $a1, 0x4FA4($at)
    MEM_W(0X4FA4, ctx->r1) = ctx->r5;
    // 0x8008C9BC: beq         $v1, $zero, L_8008C9D0
    if (ctx->r3 == 0) {
        // 0x8008C9C0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008C9D0;
    }
    // 0x8008C9C0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008C9C4: ori         $v0, $a1, 0x1
    ctx->r2 = ctx->r5 | 0X1;
    // 0x8008C9C8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008C9CC: sw          $v0, 0x4FA4($at)
    MEM_W(0X4FA4, ctx->r1) = ctx->r2;
L_8008C9D0:
    // 0x8008C9D0: slti        $v0, $a2, 0x8
    ctx->r2 = SIGNED(ctx->r6) < 0X8 ? 1 : 0;
    // 0x8008C9D4: bne         $v0, $zero, L_8008C990
    if (ctx->r2 != 0) {
        // 0x8008C9D8: nop
    
            goto L_8008C990;
    }
    // 0x8008C9D8: nop

    // 0x8008C9DC: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8008C9E0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8008C9E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008C9E8: lwc1        $f2, 0x4FA4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X4FA4);
    // 0x8008C9EC: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008C9F0: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8008C9F4: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8008C9F8: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x8008C9FC: nop

    // 0x8008CA00: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008CA04: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008CA08: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8008CA0C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x8008CA10: jr          $ra
    // 0x8008CA14: nop

    TRACE_RETURN()
    return;
    // 0x8008CA14: nop

;}
RECOMP_FUNC void func_8008E970_69D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E970: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008E974: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008E978: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8008E97C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8008E980:
    // 0x8008E980: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008E984: lw          $a0, 0x5024($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5024);
    // 0x8008E988: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8008E98C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008E990: jal         0x8009A5E0
    // 0x8008E994: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8008E994: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_0:
    // 0x8008E998: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008E99C: lw          $a0, 0x5024($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5024);
    // 0x8008E9A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008E9A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008E9A8: jal         0x8009A5E0
    // 0x8008E9AC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8008E9AC: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_1:
    // 0x8008E9B0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8008E9B4: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8008E9B8: bne         $v0, $s0, L_8008E980
    if (ctx->r2 != ctx->r16) {
        // 0x8008E9BC: nop
    
            goto L_8008E980;
    }
    // 0x8008E9BC: nop

    // 0x8008E9C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E9C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008E9C8: jr          $ra
    // 0x8008E9CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008E9CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80071F9C_4D39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071F9C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80071FA0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80071FA4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80071FA8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80071FAC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80071FB0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80071FB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80071FB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80071FBC: jal         0x80072BCC
    // 0x80071FC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80072BCC_4DFCC(rdram, ctx);
        goto after_0;
    // 0x80071FC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80071FC4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80071FC8: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x80071FCC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80071FD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80071FD4: lb          $v1, 0x3580($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3580);
    // 0x80071FD8: bltz        $v1, L_800720E8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80071FDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800720E8;
    }
    // 0x80071FDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80071FE0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071FE4: sw          $v0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r2;
    // 0x80071FE8: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80071FEC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071FF0: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x80071FF4: addu        $s5, $v1, $v0
    ctx->r21 = ADD32(ctx->r3, ctx->r2);
    // 0x80071FF8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80071FFC: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80072000: sra         $v0, $s3, 4
    ctx->r2 = S32(SIGNED(ctx->r19) >> 4);
L_80072004:
    // 0x80072004: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80072008: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8007200C: lw          $s1, 0x0($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X0);
    // 0x80072010: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80072014: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    // 0x80072018: addiu       $s4, $s3, 0x10
    ctx->r20 = ADD32(ctx->r19, 0X10);
L_8007201C:
    // 0x8007201C: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80072020: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80072024: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80072028: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007202C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80072030: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    // 0x80072034: beq         $a0, $zero, L_800720E8
    if (ctx->r4 == 0) {
        // 0x80072038: nop
    
            goto L_800720E8;
    }
    // 0x80072038: nop

    // 0x8007203C: beql        $s0, $zero, L_800720B4
    if (ctx->r16 == 0) {
        // 0x80072040: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800720B4;
    }
    goto skip_0;
    // 0x80072040: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80072044: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072048: lw          $v0, -0xBD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XBD0);
    // 0x8007204C: beq         $v0, $zero, L_80072064
    if (ctx->r2 == 0) {
        // 0x80072050: nop
    
            goto L_80072064;
    }
    // 0x80072050: nop

    // 0x80072054: jal         0x80039F18
    // 0x80072058: nop

    func_80039F18_15318(rdram, ctx);
        goto after_1;
    // 0x80072058: nop

    after_1:
    // 0x8007205C: j           L_80072070
    // 0x80072060: andi        $v0, $v0, 0xF000
    ctx->r2 = ctx->r2 & 0XF000;
        goto L_80072070;
    // 0x80072060: andi        $v0, $v0, 0xF000
    ctx->r2 = ctx->r2 & 0XF000;
L_80072064:
    // 0x80072064: jal         0x80039FBC
    // 0x80072068: nop

    func_80039FBC_153BC(rdram, ctx);
        goto after_2;
    // 0x80072068: nop

    after_2:
    // 0x8007206C: andi        $v0, $v0, 0xF000
    ctx->r2 = ctx->r2 & 0XF000;
L_80072070:
    // 0x80072070: bne         $v0, $zero, L_80072084
    if (ctx->r2 != 0) {
        // 0x80072074: sll         $v0, $s0, 1
        ctx->r2 = S32(ctx->r16 << 1);
            goto L_80072084;
    }
    // 0x80072074: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80072078: sllv        $v0, $s6, $s2
    ctx->r2 = S32(ctx->r22 << (ctx->r18 & 31));
    // 0x8007207C: j           L_800720B0
    // 0x80072080: or          $s1, $s1, $v0
    ctx->r17 = ctx->r17 | ctx->r2;
        goto L_800720B0;
    // 0x80072080: or          $s1, $s1, $v0
    ctx->r17 = ctx->r17 | ctx->r2;
L_80072084:
    // 0x80072084: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80072088: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007208C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072090: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80072094: lhu         $v0, 0x5086($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5086);
    // 0x80072098: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8007209C: bnel        $v0, $zero, L_800720B4
    if (ctx->r2 != 0) {
        // 0x800720A0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800720B4;
    }
    goto skip_1;
    // 0x800720A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x800720A4: sllv        $v0, $s6, $s2
    ctx->r2 = S32(ctx->r22 << (ctx->r18 & 31));
    // 0x800720A8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x800720AC: and         $s1, $s1, $v0
    ctx->r17 = ctx->r17 & ctx->r2;
L_800720B0:
    // 0x800720B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800720B4:
    // 0x800720B4: slt         $v0, $s0, $s4
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800720B8: bne         $v0, $zero, L_8007201C
    if (ctx->r2 != 0) {
        // 0x800720BC: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_8007201C;
    }
    // 0x800720BC: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x800720C0: sra         $v0, $s3, 4
    ctx->r2 = S32(SIGNED(ctx->r19) >> 4);
    // 0x800720C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800720C8: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x800720CC: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
    // 0x800720D0: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x800720D4: slti        $v0, $s3, 0x6B0
    ctx->r2 = SIGNED(ctx->r19) < 0X6B0 ? 1 : 0;
    // 0x800720D8: bne         $v0, $zero, L_80072004
    if (ctx->r2 != 0) {
        // 0x800720DC: sra         $v0, $s3, 4
        ctx->r2 = S32(SIGNED(ctx->r19) >> 4);
            goto L_80072004;
    }
    // 0x800720DC: sra         $v0, $s3, 4
    ctx->r2 = S32(SIGNED(ctx->r19) >> 4);
    // 0x800720E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800720E4: sw          $zero, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = 0;
L_800720E8:
    // 0x800720E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800720EC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x800720F0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x800720F4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800720F8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800720FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80072100: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80072104: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80072108: jr          $ra
    // 0x8007210C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8007210C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80060D38_3C138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060D38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80060D3C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80060D40: addiu       $a1, $a1, -0x3BB8
    ctx->r5 = ADD32(ctx->r5, -0X3BB8);
    // 0x80060D44: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80060D48: sra         $a0, $a0, 15
    ctx->r4 = S32(SIGNED(ctx->r4) >> 15);
    // 0x80060D4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80060D50: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80060D54: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80060D58: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80060D5C: lhu         $v1, 0x6FC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6FC);
    // 0x80060D60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060D64: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80060D68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80060D6C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80060D70: bgez        $v0, L_80060D80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80060D74: slti        $v0, $v0, 0x100
        ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
            goto L_80060D80;
    }
    // 0x80060D74: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80060D78: j           L_80060D8C
    // 0x80060D7C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
        goto L_80060D8C;
    // 0x80060D7C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_80060D80:
    // 0x80060D80: bne         $v0, $zero, L_80060D8C
    if (ctx->r2 != 0) {
        // 0x80060D84: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80060D8C;
    }
    // 0x80060D84: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80060D88: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80060D8C:
    // 0x80060D8C: jal         0x80036BCC
    // 0x80060D90: nop

    func_80036BCC_11FCC(rdram, ctx);
        goto after_0;
    // 0x80060D90: nop

    after_0:
    // 0x80060D94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80060D98: jr          $ra
    // 0x80060D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80060D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BDA4_171A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BDA4: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x8003BDA8: bne         $v0, $zero, L_8003BDC4
    if (ctx->r2 != 0) {
        // 0x8003BDAC: nop
    
            goto L_8003BDC4;
    }
    // 0x8003BDAC: nop

    // 0x8003BDB0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_8003BDB4:
    // 0x8003BDB4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8003BDB8: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x8003BDBC: beql        $v0, $zero, L_8003BDB4
    if (ctx->r2 == 0) {
        // 0x8003BDC0: sw          $zero, 0x0($a0)
        MEM_W(0X0, ctx->r4) = 0;
            goto L_8003BDB4;
    }
    goto skip_0;
    // 0x8003BDC0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    skip_0:
L_8003BDC4:
    // 0x8003BDC4: jr          $ra
    // 0x8003BDC8: nop

    TRACE_RETURN()
    return;
    // 0x8003BDC8: nop

;}
RECOMP_FUNC void func_80032958_DD58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032958: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003295C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80032960: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80032964: jal         0x80032E88
    // 0x80032968: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80032E88_E288(rdram, ctx);
        goto after_0;
    // 0x80032968: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003296C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80032970: lbu         $v0, 0x559C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X559C);
    // 0x80032974: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80032978: addiu       $s1, $zero, 0x70
    ctx->r17 = ADD32(0, 0X70);
    // 0x8003297C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80032980: sb          $v0, -0x2348($at)
    MEM_B(-0X2348, ctx->r1) = ctx->r2;
    // 0x80032984: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80032988: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8003298C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80032990: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80032994: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80032998: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8003299C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800329A0: addiu       $v0, $v0, -0x25D8
    ctx->r2 = ADD32(ctx->r2, -0X25D8);
    // 0x800329A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800329A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800329AC: sw          $v1, 0x497C($at)
    MEM_W(0X497C, ctx->r1) = ctx->r3;
L_800329B0:
    // 0x800329B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800329B4: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x800329B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800329BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800329C0: jal         0x8003020C
    // 0x800329C4: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    func_8003020C_B60C(rdram, ctx);
        goto after_1;
    // 0x800329C4: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    after_1:
    // 0x800329C8: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x800329CC: bne         $v0, $zero, L_800329B0
    if (ctx->r2 != 0) {
        // 0x800329D0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_800329B0;
    }
    // 0x800329D0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800329D4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800329D8: lbu         $v0, -0x2348($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2348);
    // 0x800329DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800329E0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800329E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800329E8: lw          $v0, -0x7290($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7290);
    // 0x800329EC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800329F0: jal         0x800387F0
    // 0x800329F4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    func_800387F0_13BF0(rdram, ctx);
        goto after_2;
    // 0x800329F4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    after_2:
    // 0x800329F8: jal         0x80028F58
    // 0x800329FC: nop

    func_80028F58_4358(rdram, ctx);
        goto after_3;
    // 0x800329FC: nop

    after_3:
    // 0x80032A00: jal         0x8002A3B4
    // 0x80032A04: nop

    func_8002A3B4_57B4(rdram, ctx);
        goto after_4;
    // 0x80032A04: nop

    after_4:
    // 0x80032A08: jal         0x8004B738
    // 0x80032A0C: nop

    func_8004B738_26B38(rdram, ctx);
        goto after_5;
    // 0x80032A0C: nop

    after_5:
    // 0x80032A10: jal         0x80061838
    // 0x80032A14: nop

    func_80061838_3CC38(rdram, ctx);
        goto after_6;
    // 0x80032A14: nop

    after_6:
    // 0x80032A18: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80032A1C: lhu         $v0, -0x38AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X38AC);
    // 0x80032A20: bne         $v0, $zero, L_80032A60
    if (ctx->r2 != 0) {
        // 0x80032A24: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80032A60;
    }
    // 0x80032A24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80032A28: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80032A2C: addiu       $s1, $zero, 0xF
    ctx->r17 = ADD32(0, 0XF);
L_80032A30:
    // 0x80032A30: subu        $a0, $s1, $s0
    ctx->r4 = SUB32(ctx->r17, ctx->r16);
    // 0x80032A34: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    // 0x80032A38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80032A3C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80032A40: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80032A44: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80032A48: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80032A4C: jal         0x80030354
    // 0x80032A50: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80030354_B754(rdram, ctx);
        goto after_7;
    // 0x80032A50: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_7:
    // 0x80032A54: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x80032A58: bne         $v0, $zero, L_80032A30
    if (ctx->r2 != 0) {
        // 0x80032A5C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80032A30;
    }
    // 0x80032A5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80032A60:
    // 0x80032A60: jal         0x8002FDA8
    // 0x80032A64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002FDA8_B1A8(rdram, ctx);
        goto after_8;
    // 0x80032A64: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x80032A68: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80032A6C: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80032A70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80032A74: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80032A78: sh          $v0, -0x730C($at)
    MEM_H(-0X730C, ctx->r1) = ctx->r2;
    // 0x80032A7C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80032A80: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80032A84: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80032A88: jr          $ra
    // 0x80032A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80032A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80036B40_11F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B40: jr          $ra
    // 0x80036B44: nop

    TRACE_RETURN()
    return;
    // 0x80036B44: nop

;}
RECOMP_FUNC void func_8006CE70_48270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006CE70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006CE74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006CE78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006CE7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006CE80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8006CE84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006CE88: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006CE8C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006CE90: lbu         $v1, -0x3B95($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B95);
    // 0x8006CE94: lhu         $s2, 0x11E($s0)
    ctx->r18 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006CE98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006CE9C: beq         $v1, $v0, L_8006CEC0
    if (ctx->r3 == ctx->r2) {
        // 0x8006CEA0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006CEC0;
    }
    // 0x8006CEA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006CEA4: lhu         $v0, 0x140($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X140);
    // 0x8006CEA8: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006CEAC: bne         $v0, $zero, L_8006CEC0
    if (ctx->r2 != 0) {
        // 0x8006CEB0: nop
    
            goto L_8006CEC0;
    }
    // 0x8006CEB0: nop

    // 0x8006CEB4: andi        $v0, $s1, 0x100
    ctx->r2 = ctx->r17 & 0X100;
    // 0x8006CEB8: beql        $v0, $zero, L_8006CECC
    if (ctx->r2 == 0) {
        // 0x8006CEBC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006CECC;
    }
    goto skip_0;
    // 0x8006CEBC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
L_8006CEC0:
    // 0x8006CEC0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8006CEC4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006CEC8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006CECC:
    // 0x8006CECC: bnel        $v1, $zero, L_8006D580
    if (ctx->r3 != 0) {
        // 0x8006CED0: sb          $zero, 0x44A($s0)
        MEM_B(0X44A, ctx->r16) = 0;
            goto L_8006D580;
    }
    goto skip_1;
    // 0x8006CED0: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    skip_1:
    // 0x8006CED4: jal         0x8006C6D8
    // 0x8006CED8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006C6D8_47AD8(rdram, ctx);
        goto after_0;
    // 0x8006CED8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8006CEDC: bnel        $v0, $zero, L_8006D580
    if (ctx->r2 != 0) {
        // 0x8006CEE0: sb          $zero, 0x44A($s0)
        MEM_B(0X44A, ctx->r16) = 0;
            goto L_8006D580;
    }
    goto skip_2;
    // 0x8006CEE0: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    skip_2:
    // 0x8006CEE4: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006CEE8: lhu         $a1, 0x126($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X126);
    // 0x8006CEEC: lhu         $v1, 0x12C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006CEF0: lhu         $a0, 0x12E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006CEF4: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8006CEF8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8006CEFC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006CF00: and         $v0, $s2, $v0
    ctx->r2 = ctx->r18 & ctx->r2;
    // 0x8006CF04: bnel        $v0, $zero, L_8006CF0C
    if (ctx->r2 != 0) {
        // 0x8006CF08: sb          $zero, 0xB($s0)
        MEM_B(0XB, ctx->r16) = 0;
            goto L_8006CF0C;
    }
    goto skip_3;
    // 0x8006CF08: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    skip_3:
L_8006CF0C:
    // 0x8006CF0C: lhu         $a0, 0x124($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X124);
    // 0x8006CF10: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006CF14: lhu         $v1, 0x12C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006CF18: lhu         $a1, 0x12E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006CF1C: lhu         $a2, 0x12A($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006CF20: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8006CF24: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006CF28: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8006CF2C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8006CF30: lhu         $v1, 0x13A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006CF34: lhu         $a1, 0x13C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006CF38: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006CF3C: lhu         $a0, 0x128($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X128);
    // 0x8006CF40: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8006CF44: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006CF48: or          $a0, $a0, $a2
    ctx->r4 = ctx->r4 | ctx->r6;
    // 0x8006CF4C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006CF50: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006CF54: bne         $v0, $zero, L_8006CF6C
    if (ctx->r2 != 0) {
        // 0x8006CF58: nop
    
            goto L_8006CF6C;
    }
    // 0x8006CF58: nop

    // 0x8006CF5C: lbu         $v0, 0x176($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X176);
    // 0x8006CF60: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006CF64: beq         $v0, $zero, L_8006D52C
    if (ctx->r2 == 0) {
        // 0x8006CF68: nop
    
            goto L_8006D52C;
    }
    // 0x8006CF68: nop

L_8006CF6C:
    // 0x8006CF6C: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006CF70: andi        $a0, $v0, 0xC0
    ctx->r4 = ctx->r2 & 0XC0;
    // 0x8006CF74: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006CF78: bne         $a0, $v0, L_8006CFA4
    if (ctx->r4 != ctx->r2) {
        // 0x8006CF7C: sb          $zero, 0x44A($s0)
        MEM_B(0X44A, ctx->r16) = 0;
            goto L_8006CFA4;
    }
    // 0x8006CF7C: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    // 0x8006CF80: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006CF84: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006CF88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006CF8C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006CF90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006CF94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006CF98: lbu         $v0, 0x30F9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F9);
    // 0x8006CF9C: beq         $v0, $zero, L_8006CFD8
    if (ctx->r2 == 0) {
        // 0x8006CFA0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006CFD8;
    }
    // 0x8006CFA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006CFA4:
    // 0x8006CFA4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8006CFA8: bne         $a0, $v0, L_8006CFD8
    if (ctx->r4 != ctx->r2) {
        // 0x8006CFAC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006CFD8;
    }
    // 0x8006CFAC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006CFB0: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006CFB4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006CFB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006CFBC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006CFC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006CFC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006CFC8: lbu         $v0, 0x30F9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F9);
    // 0x8006CFCC: bne         $v0, $zero, L_8006CFD8
    if (ctx->r2 != 0) {
        // 0x8006CFD0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006CFD8;
    }
    // 0x8006CFD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006CFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006CFD8:
    // 0x8006CFD8: bne         $v0, $zero, L_8006D498
    if (ctx->r2 != 0) {
        // 0x8006CFDC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006D498;
    }
    // 0x8006CFDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CFE0: jal         0x8006CC14
    // 0x8006CFE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8006CC14_48014(rdram, ctx);
        goto after_1;
    // 0x8006CFE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8006CFE8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8006CFEC: lhu         $v1, -0x783A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783A);
    // 0x8006CFF0: addiu       $s2, $zero, 0x4080
    ctx->r18 = ADD32(0, 0X4080);
    // 0x8006CFF4: andi        $s1, $v1, 0x4080
    ctx->r17 = ctx->r3 & 0X4080;
    // 0x8006CFF8: beq         $s1, $s2, L_8006D00C
    if (ctx->r17 == ctx->r18) {
        // 0x8006CFFC: andi        $v1, $v1, 0x4020
        ctx->r3 = ctx->r3 & 0X4020;
            goto L_8006D00C;
    }
    // 0x8006CFFC: andi        $v1, $v1, 0x4020
    ctx->r3 = ctx->r3 & 0X4020;
    // 0x8006D000: addiu       $v0, $zero, 0x4020
    ctx->r2 = ADD32(0, 0X4020);
    // 0x8006D004: bne         $v1, $v0, L_8006D054
    if (ctx->r3 != ctx->r2) {
        // 0x8006D008: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006D054;
    }
    // 0x8006D008: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006D00C:
    // 0x8006D00C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006D010: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006D014: sh          $zero, 0x116($s0)
    MEM_H(0X116, ctx->r16) = 0;
    // 0x8006D018: jal         0x800700D8
    // 0x8006D01C: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    func_800700D8_4B4D8(rdram, ctx);
        goto after_2;
    // 0x8006D01C: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    after_2:
    // 0x8006D020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006D024: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8006D028: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006D02C: jal         0x8006FB90
    // 0x8006D030: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_3;
    // 0x8006D030: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x8006D034: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8006D038: bne         $s1, $s2, L_8006D048
    if (ctx->r17 != ctx->r18) {
        // 0x8006D03C: sb          $v0, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r2;
            goto L_8006D048;
    }
    // 0x8006D03C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D040: j           L_8006D050
    // 0x8006D044: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006D050;
    // 0x8006D044: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D048:
    // 0x8006D048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D04C: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8006D050:
    // 0x8006D050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006D054:
    // 0x8006D054: bne         $v0, $zero, L_8006D580
    if (ctx->r2 != 0) {
        // 0x8006D058: nop
    
            goto L_8006D580;
    }
    // 0x8006D058: nop

    // 0x8006D05C: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006D060: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006D064: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D068: beq         $v0, $zero, L_8006D080
    if (ctx->r2 == 0) {
        // 0x8006D06C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006D080;
    }
    // 0x8006D06C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D070: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006D074: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D078: j           L_8006D084
    // 0x8006D07C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006D084;
    // 0x8006D07C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D080:
    // 0x8006D080: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006D084:
    // 0x8006D084: bne         $v1, $zero, L_8006D580
    if (ctx->r3 != 0) {
        // 0x8006D088: nop
    
            goto L_8006D580;
    }
    // 0x8006D088: nop

    // 0x8006D08C: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D090: lhu         $v0, 0x13C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006D094: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006D098: beq         $v0, $zero, L_8006D0C4
    if (ctx->r2 == 0) {
        // 0x8006D09C: nop
    
            goto L_8006D0C4;
    }
    // 0x8006D09C: nop

    // 0x8006D0A0: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006D0A4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006D0A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006D0AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006D0B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006D0B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006D0B8: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006D0BC: beq         $v0, $zero, L_8006D0FC
    if (ctx->r2 == 0) {
        // 0x8006D0C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006D0FC;
    }
    // 0x8006D0C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006D0C4:
    // 0x8006D0C4: lhu         $v0, 0x13A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006D0C8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006D0CC: beq         $v0, $zero, L_8006D0FC
    if (ctx->r2 == 0) {
        // 0x8006D0D0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006D0FC;
    }
    // 0x8006D0D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006D0D4: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006D0D8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006D0DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006D0E0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006D0E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006D0E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006D0EC: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006D0F0: bne         $v0, $zero, L_8006D0FC
    if (ctx->r2 != 0) {
        // 0x8006D0F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006D0FC;
    }
    // 0x8006D0F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006D0F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006D0FC:
    // 0x8006D0FC: bne         $v0, $zero, L_8006D360
    if (ctx->r2 != 0) {
        // 0x8006D100: nop
    
            goto L_8006D360;
    }
    // 0x8006D100: nop

    // 0x8006D104: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006D108: andi        $a0, $v0, 0xC0
    ctx->r4 = ctx->r2 & 0XC0;
    // 0x8006D10C: beq         $a0, $zero, L_8006D180
    if (ctx->r4 == 0) {
        // 0x8006D110: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8006D180;
    }
    // 0x8006D110: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006D114: bne         $a0, $v0, L_8006D14C
    if (ctx->r4 != ctx->r2) {
        // 0x8006D118: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8006D14C;
    }
    // 0x8006D118: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8006D11C: lb          $v1, 0x170($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X170);
    // 0x8006D120: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8006D124: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006D128: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006D12C: lbu         $v1, 0x100($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X100);
    // 0x8006D130: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006D134: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006D138: lbu         $v0, 0x30F4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F4);
    // 0x8006D13C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8006D140: bne         $v0, $zero, L_8006D184
    if (ctx->r2 != 0) {
        // 0x8006D144: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006D184;
    }
    // 0x8006D144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D148: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8006D14C:
    // 0x8006D14C: bne         $a0, $v0, L_8006D184
    if (ctx->r4 != ctx->r2) {
        // 0x8006D150: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006D184;
    }
    // 0x8006D150: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006D154: lb          $v1, 0x171($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X171);
    // 0x8006D158: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8006D15C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006D160: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006D164: lbu         $v1, 0x100($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X100);
    // 0x8006D168: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006D16C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006D170: lbu         $v0, 0x30F4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F4);
    // 0x8006D174: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8006D178: beq         $v0, $zero, L_8006D184
    if (ctx->r2 == 0) {
        // 0x8006D17C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006D184;
    }
    // 0x8006D17C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006D180:
    // 0x8006D180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006D184:
    // 0x8006D184: beq         $v0, $zero, L_8006D360
    if (ctx->r2 == 0) {
        // 0x8006D188: nop
    
            goto L_8006D360;
    }
    // 0x8006D188: nop

    // 0x8006D18C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006D190: bne         $v0, $zero, L_8006D360
    if (ctx->r2 != 0) {
        // 0x8006D194: nop
    
            goto L_8006D360;
    }
    // 0x8006D194: nop

    // 0x8006D198: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D19C: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006D1A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D1A4: beq         $v0, $zero, L_8006D1D4
    if (ctx->r2 == 0) {
        // 0x8006D1A8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006D1D4;
    }
    // 0x8006D1A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006D1AC: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D1B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D1B4: bne         $v0, $zero, L_8006D1D4
    if (ctx->r2 != 0) {
        // 0x8006D1B8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006D1D4;
    }
    // 0x8006D1B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006D1BC: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006D1C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006D1C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D1C8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006D1CC: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006D1D0: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006D1D4:
    // 0x8006D1D4: bne         $a0, $zero, L_8006D580
    if (ctx->r4 != 0) {
        // 0x8006D1D8: nop
    
            goto L_8006D580;
    }
    // 0x8006D1D8: nop

    // 0x8006D1DC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006D1E0: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x8006D1E4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006D1E8: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8006D1EC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8006D1F0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006D1F4: beq         $v1, $zero, L_8006D204
    if (ctx->r3 == 0) {
        // 0x8006D1F8: nop
    
            goto L_8006D204;
    }
    // 0x8006D1F8: nop

    // 0x8006D1FC: j           L_8006D208
    // 0x8006D200: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
        goto L_8006D208;
    // 0x8006D200: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
L_8006D204:
    // 0x8006D204: lhu         $a0, 0x11E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11E);
L_8006D208:
    // 0x8006D208: lhu         $a1, 0x12C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006D20C: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006D210: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8006D214: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8006D218: beq         $v1, $v0, L_8006D25C
    if (ctx->r3 == ctx->r2) {
        // 0x8006D21C: and         $v0, $a1, $a0
        ctx->r2 = ctx->r5 & ctx->r4;
            goto L_8006D25C;
    }
    // 0x8006D21C: and         $v0, $a1, $a0
    ctx->r2 = ctx->r5 & ctx->r4;
    // 0x8006D220: beql        $v0, $zero, L_8006D260
    if (ctx->r2 == 0) {
        // 0x8006D224: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006D260;
    }
    goto skip_4;
    // 0x8006D224: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_4:
    // 0x8006D228: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D22C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006D230: bne         $v0, $zero, L_8006D260
    if (ctx->r2 != 0) {
        // 0x8006D234: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006D260;
    }
    // 0x8006D234: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006D238: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006D23C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006D240: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006D244: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8006D248: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D24C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006D250: sb          $v1, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r3;
    // 0x8006D254: j           L_8006D260
    // 0x8006D258: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
        goto L_8006D260;
    // 0x8006D258: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
L_8006D25C:
    // 0x8006D25C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006D260:
    // 0x8006D260: bne         $a0, $zero, L_8006D580
    if (ctx->r4 != 0) {
        // 0x8006D264: nop
    
            goto L_8006D580;
    }
    // 0x8006D264: nop

    // 0x8006D268: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006D26C: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x8006D270: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006D274: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8006D278: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8006D27C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006D280: beq         $v1, $zero, L_8006D290
    if (ctx->r3 == 0) {
        // 0x8006D284: nop
    
            goto L_8006D290;
    }
    // 0x8006D284: nop

    // 0x8006D288: j           L_8006D294
    // 0x8006D28C: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
        goto L_8006D294;
    // 0x8006D28C: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
L_8006D290:
    // 0x8006D290: lhu         $a0, 0x11E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11E);
L_8006D294:
    // 0x8006D294: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006D298: lhu         $a1, 0x12E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006D29C: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8006D2A0: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8006D2A4: beq         $v1, $v0, L_8006D2E8
    if (ctx->r3 == ctx->r2) {
        // 0x8006D2A8: and         $v0, $a1, $a0
        ctx->r2 = ctx->r5 & ctx->r4;
            goto L_8006D2E8;
    }
    // 0x8006D2A8: and         $v0, $a1, $a0
    ctx->r2 = ctx->r5 & ctx->r4;
    // 0x8006D2AC: beql        $v0, $zero, L_8006D2EC
    if (ctx->r2 == 0) {
        // 0x8006D2B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006D2EC;
    }
    goto skip_5;
    // 0x8006D2B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_5:
    // 0x8006D2B4: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D2B8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006D2BC: bne         $v0, $zero, L_8006D2EC
    if (ctx->r2 != 0) {
        // 0x8006D2C0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006D2EC;
    }
    // 0x8006D2C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006D2C4: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006D2C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006D2CC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006D2D0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8006D2D4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8006D2D8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006D2DC: sb          $v1, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r3;
    // 0x8006D2E0: j           L_8006D2EC
    // 0x8006D2E4: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
        goto L_8006D2EC;
    // 0x8006D2E4: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
L_8006D2E8:
    // 0x8006D2E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006D2EC:
    // 0x8006D2EC: bne         $a0, $zero, L_8006D580
    if (ctx->r4 != 0) {
        // 0x8006D2F0: nop
    
            goto L_8006D580;
    }
    // 0x8006D2F0: nop

    // 0x8006D2F4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006D2F8: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x8006D2FC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006D300: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8006D304: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8006D308: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006D30C: beq         $v1, $zero, L_8006D31C
    if (ctx->r3 == 0) {
        // 0x8006D310: nop
    
            goto L_8006D31C;
    }
    // 0x8006D310: nop

    // 0x8006D314: j           L_8006D320
    // 0x8006D318: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
        goto L_8006D320;
    // 0x8006D318: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
L_8006D31C:
    // 0x8006D31C: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
L_8006D320:
    // 0x8006D320: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D324: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D328: beq         $v0, $zero, L_8006D358
    if (ctx->r2 == 0) {
        // 0x8006D32C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006D358;
    }
    // 0x8006D32C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006D330: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D334: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D338: bne         $v0, $zero, L_8006D358
    if (ctx->r2 != 0) {
        // 0x8006D33C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006D358;
    }
    // 0x8006D33C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006D340: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006D344: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006D348: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D34C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006D350: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006D354: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006D358:
    // 0x8006D358: bne         $a0, $zero, L_8006D580
    if (ctx->r4 != 0) {
        // 0x8006D35C: nop
    
            goto L_8006D580;
    }
    // 0x8006D35C: nop

L_8006D360:
    // 0x8006D360: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006D364: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x8006D368: bne         $v0, $zero, L_8006D498
    if (ctx->r2 != 0) {
        // 0x8006D36C: nop
    
            goto L_8006D498;
    }
    // 0x8006D36C: nop

    // 0x8006D370: lb          $v0, 0x177($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X177);
    // 0x8006D374: bne         $v0, $zero, L_8006D498
    if (ctx->r2 != 0) {
        // 0x8006D378: nop
    
            goto L_8006D498;
    }
    // 0x8006D378: nop

    // 0x8006D37C: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D380: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006D384: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D388: beql        $v0, $zero, L_8006D3B4
    if (ctx->r2 == 0) {
        // 0x8006D38C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006D3B4;
    }
    goto skip_6;
    // 0x8006D38C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_6:
    // 0x8006D390: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D394: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D398: beq         $v0, $zero, L_8006D3B0
    if (ctx->r2 == 0) {
        // 0x8006D39C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006D3B0;
    }
    // 0x8006D39C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D3A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D3A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D3A8: j           L_8006D3B4
    // 0x8006D3AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006D3B4;
    // 0x8006D3AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D3B0:
    // 0x8006D3B0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006D3B4:
    // 0x8006D3B4: bne         $v1, $zero, L_8006D580
    if (ctx->r3 != 0) {
        // 0x8006D3B8: nop
    
            goto L_8006D580;
    }
    // 0x8006D3B8: nop

    // 0x8006D3BC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006D3C0: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x8006D3C4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006D3C8: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8006D3CC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8006D3D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006D3D4: beq         $v1, $zero, L_8006D3E4
    if (ctx->r3 == 0) {
        // 0x8006D3D8: nop
    
            goto L_8006D3E4;
    }
    // 0x8006D3D8: nop

    // 0x8006D3DC: j           L_8006D3E8
    // 0x8006D3E0: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
        goto L_8006D3E8;
    // 0x8006D3E0: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
L_8006D3E4:
    // 0x8006D3E4: lhu         $a0, 0x11E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11E);
L_8006D3E8:
    // 0x8006D3E8: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D3EC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006D3F0: beq         $v0, $zero, L_8006D424
    if (ctx->r2 == 0) {
        // 0x8006D3F4: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006D424;
    }
    // 0x8006D3F4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8006D3F8: lhu         $v0, 0x130($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X130);
    // 0x8006D3FC: lhu         $v1, 0x132($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X132);
    // 0x8006D400: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006D404: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8006D408: beq         $v0, $zero, L_8006D420
    if (ctx->r2 == 0) {
        // 0x8006D40C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006D420;
    }
    // 0x8006D40C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D410: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8006D414: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D418: j           L_8006D424
    // 0x8006D41C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006D424;
    // 0x8006D41C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D420:
    // 0x8006D420: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006D424:
    // 0x8006D424: bne         $v1, $zero, L_8006D580
    if (ctx->r3 != 0) {
        // 0x8006D428: nop
    
            goto L_8006D580;
    }
    // 0x8006D428: nop

    // 0x8006D42C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006D430: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x8006D434: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006D438: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8006D43C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8006D440: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006D444: beq         $v1, $zero, L_8006D454
    if (ctx->r3 == 0) {
        // 0x8006D448: nop
    
            goto L_8006D454;
    }
    // 0x8006D448: nop

    // 0x8006D44C: j           L_8006D458
    // 0x8006D450: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
        goto L_8006D458;
    // 0x8006D450: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
L_8006D454:
    // 0x8006D454: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
L_8006D458:
    // 0x8006D458: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D45C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D460: beql        $v0, $zero, L_8006D490
    if (ctx->r2 == 0) {
        // 0x8006D464: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006D490;
    }
    goto skip_7;
    // 0x8006D464: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_7:
    // 0x8006D468: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D46C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D470: beq         $v0, $zero, L_8006D48C
    if (ctx->r2 == 0) {
        // 0x8006D474: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006D48C;
    }
    // 0x8006D474: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D47C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D484: j           L_8006D490
    // 0x8006D488: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_8006D490;
    // 0x8006D488: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8006D48C:
    // 0x8006D48C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006D490:
    // 0x8006D490: bne         $v1, $zero, L_8006D580
    if (ctx->r3 != 0) {
        // 0x8006D494: nop
    
            goto L_8006D580;
    }
    // 0x8006D494: nop

L_8006D498:
    // 0x8006D498: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006D49C: andi        $a0, $v0, 0xC0
    ctx->r4 = ctx->r2 & 0XC0;
    // 0x8006D4A0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006D4A4: bne         $a0, $v0, L_8006D4D0
    if (ctx->r4 != ctx->r2) {
        // 0x8006D4A8: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8006D4D0;
    }
    // 0x8006D4A8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8006D4AC: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006D4B0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006D4B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006D4B8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006D4BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006D4C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006D4C4: lbu         $v0, 0x30FA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30FA);
    // 0x8006D4C8: beq         $v0, $zero, L_8006D4FC
    if (ctx->r2 == 0) {
        // 0x8006D4CC: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8006D4FC;
    }
    // 0x8006D4CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8006D4D0:
    // 0x8006D4D0: bne         $a0, $v0, L_8006D500
    if (ctx->r4 != ctx->r2) {
        // 0x8006D4D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006D500;
    }
    // 0x8006D4D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006D4D8: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006D4DC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006D4E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006D4E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006D4E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006D4EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006D4F0: lbu         $v0, 0x30FA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30FA);
    // 0x8006D4F4: bne         $v0, $zero, L_8006D500
    if (ctx->r2 != 0) {
        // 0x8006D4F8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006D500;
    }
    // 0x8006D4F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006D4FC:
    // 0x8006D4FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006D500:
    // 0x8006D500: bne         $v0, $zero, L_8006D52C
    if (ctx->r2 != 0) {
        // 0x8006D504: nop
    
            goto L_8006D52C;
    }
    // 0x8006D504: nop

    // 0x8006D508: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006D50C: lhu         $a0, 0x12A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006D510: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D514: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006D518: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8006D51C: beq         $v1, $zero, L_8006D52C
    if (ctx->r3 == 0) {
        // 0x8006D520: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8006D52C;
    }
    // 0x8006D520: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8006D524: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D528: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D52C:
    // 0x8006D52C: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D530: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D534: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D538: beql        $v0, $zero, L_8006D580
    if (ctx->r2 == 0) {
        // 0x8006D53C: sb          $zero, 0x44A($s0)
        MEM_B(0X44A, ctx->r16) = 0;
            goto L_8006D580;
    }
    goto skip_8;
    // 0x8006D53C: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    skip_8:
    // 0x8006D540: lbu         $v0, 0x16B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16B);
    // 0x8006D544: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8006D548: beql        $v0, $zero, L_8006D580
    if (ctx->r2 == 0) {
        // 0x8006D54C: sb          $zero, 0x44A($s0)
        MEM_B(0X44A, ctx->r16) = 0;
            goto L_8006D580;
    }
    goto skip_9;
    // 0x8006D54C: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    skip_9:
    // 0x8006D550: lbu         $v0, 0x44A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X44A);
    // 0x8006D554: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006D558: sb          $v0, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = ctx->r2;
    // 0x8006D55C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8006D560: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x8006D564: bne         $v0, $zero, L_8006D580
    if (ctx->r2 != 0) {
        // 0x8006D568: nop
    
            goto L_8006D580;
    }
    // 0x8006D568: nop

    // 0x8006D56C: lbu         $v0, 0x44B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X44B);
    // 0x8006D570: bne         $v0, $zero, L_8006D580
    if (ctx->r2 != 0) {
        // 0x8006D574: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006D580;
    }
    // 0x8006D574: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006D578: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D57C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D580:
    // 0x8006D580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D584: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8006D588: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006D58C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006D590: jr          $ra
    // 0x8006D594: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006D594: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002A5A8_59A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A5A8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002A5AC: lb          $v1, -0x3BC5($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC5);
    // 0x8002A5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A5B4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8002A5B8: beq         $v0, $zero, L_8002A5E0
    if (ctx->r2 == 0) {
        // 0x8002A5BC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8002A5E0;
    }
    // 0x8002A5BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A5C0: blez        $v1, L_8002A5E4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8002A5C4: addiu       $v0, $zero, 0x108
        ctx->r2 = ADD32(0, 0X108);
            goto L_8002A5E4;
    }
    // 0x8002A5C4: addiu       $v0, $zero, 0x108
    ctx->r2 = ADD32(0, 0X108);
    // 0x8002A5C8: jal         0x8006033C
    // 0x8002A5CC: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8002A5CC: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_0:
    // 0x8002A5D0: bne         $v0, $zero, L_8002A5E4
    if (ctx->r2 != 0) {
        // 0x8002A5D4: addiu       $v0, $zero, 0x108
        ctx->r2 = ADD32(0, 0X108);
            goto L_8002A5E4;
    }
    // 0x8002A5D4: addiu       $v0, $zero, 0x108
    ctx->r2 = ADD32(0, 0X108);
    // 0x8002A5D8: j           L_8002A5E4
    // 0x8002A5DC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
        goto L_8002A5E4;
    // 0x8002A5DC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_8002A5E0:
    // 0x8002A5E0: addiu       $v0, $zero, 0x108
    ctx->r2 = ADD32(0, 0X108);
L_8002A5E4:
    // 0x8002A5E4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A5E8: sh          $v0, 0x6FC0($at)
    MEM_H(0X6FC0, ctx->r1) = ctx->r2;
    // 0x8002A5EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A5F0: jr          $ra
    // 0x8002A5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008D710_68B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D710: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8008D714: lbu         $a2, 0xDB($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XDB);
    // 0x8008D718: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8008D71C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008D720: addu        $a3, $a0, $a2
    ctx->r7 = ADD32(ctx->r4, ctx->r6);
    // 0x8008D724: sll         $a1, $a2, 2
    ctx->r5 = S32(ctx->r6 << 2);
    // 0x8008D728: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8008D72C: sb          $v1, 0x120($a3)
    MEM_B(0X120, ctx->r7) = ctx->r3;
    // 0x8008D730: sw          $v0, 0xE0($a1)
    MEM_W(0XE0, ctx->r5) = ctx->r2;
    // 0x8008D734: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x8008D738: sw          $v1, 0xF0($a1)
    MEM_W(0XF0, ctx->r5) = ctx->r3;
    // 0x8008D73C: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x8008D740: sw          $v1, 0x100($a1)
    MEM_W(0X100, ctx->r5) = ctx->r3;
    // 0x8008D744: lbu         $v1, 0xBC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XBC);
    // 0x8008D748: sb          $v1, 0x124($a3)
    MEM_B(0X124, ctx->r7) = ctx->r3;
    // 0x8008D74C: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8008D750: swc1        $f0, 0x128($a1)
    MEM_W(0X128, ctx->r5) = ctx->f0.u32l;
    // 0x8008D754: lhu         $v1, 0xA2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA2);
    // 0x8008D758: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8008D75C: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x8008D760: sh          $v1, 0x110($a2)
    MEM_H(0X110, ctx->r6) = ctx->r3;
    // 0x8008D764: lhu         $v1, 0xA4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA4);
    // 0x8008D768: sh          $v1, 0x118($a2)
    MEM_H(0X118, ctx->r6) = ctx->r3;
    // 0x8008D76C: lbu         $v1, 0xDB($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XDB);
    // 0x8008D770: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8008D774: jr          $ra
    // 0x8008D778: sb          $v1, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8008D778: sb          $v1, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80025C60_1060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025C60: addiu       $sp, $sp, -0x820
    ctx->r29 = ADD32(ctx->r29, -0X820);
    // 0x80025C64: sw          $ra, 0x818($sp)
    MEM_W(0X818, ctx->r29) = ctx->r31;
    // 0x80025C68: jal         0x80092EB0
    // 0x80025C6C: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x80025C6C: nop

    after_0:
    // 0x80025C70: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80025C74: addiu       $a0, $a0, 0x6CB8
    ctx->r4 = ADD32(ctx->r4, 0X6CB8);
    // 0x80025C78: jal         0x80092F50
    // 0x80025C7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80092F50_6E350(rdram, ctx);
        goto after_1;
    // 0x80025C7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80025C80: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80025C84: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x80025C88: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80025C8C: addiu       $a0, $a0, 0x2E90
    ctx->r4 = ADD32(ctx->r4, 0X2E90);
    // 0x80025C90: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80025C94: jal         0x80092E50
    // 0x80025C98: sw          $v0, -0x237C($at)
    MEM_W(-0X237C, ctx->r1) = ctx->r2;
    func_80092E50_6E250(rdram, ctx);
        goto after_2;
    // 0x80025C98: sw          $v0, -0x237C($at)
    MEM_W(-0X237C, ctx->r1) = ctx->r2;
    after_2:
    // 0x80025C9C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80025CA0: addiu       $a0, $a0, -0x1420
    ctx->r4 = ADD32(ctx->r4, -0X1420);
    // 0x80025CA4: jal         0x800930A0
    // 0x80025CA8: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    osSetTime_recomp(rdram, ctx);
        goto after_3;
    // 0x80025CA8: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    after_3:
    // 0x80025CAC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80025CB0: addiu       $v0, $v0, 0x6CB0
    ctx->r2 = ADD32(ctx->r2, 0X6CB0);
    // 0x80025CB4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80025CB8: jal         0x80092AE4
    // 0x80025CBC: sw          $v0, -0x71E0($at)
    MEM_W(-0X71E0, ctx->r1) = ctx->r2;
    func_80092AE4_6DEE4(rdram, ctx);
        goto after_4;
    // 0x80025CBC: sw          $v0, -0x71E0($at)
    MEM_W(-0X71E0, ctx->r1) = ctx->r2;
    after_4:
    // 0x80025CC0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80025CC4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80025CC8: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x80025CCC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80025CD0: lui         $v0, 0xA
    ctx->r2 = S32(0XA << 16);
    // 0x80025CD4: addiu       $v0, $v0, 0x6CC0
    ctx->r2 = ADD32(ctx->r2, 0X6CC0);
    // 0x80025CD8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80025CDC: lui         $v0, 0xE900
    ctx->r2 = S32(0XE900 << 16);
    // 0x80025CE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80025CE4: lui         $v0, 0xDF00
    ctx->r2 = S32(0XDF00 << 16);
    // 0x80025CE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80025CEC: lui         $a3, 0x4
    ctx->r7 = S32(0X4 << 16);
    // 0x80025CF0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80025CF4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80025CF8: jal         0x80092C6C
    // 0x80025CFC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80092C6C_6E06C(rdram, ctx);
        goto after_5;
    // 0x80025CFC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_5:
    // 0x80025D00: jal         0x80092EB0
    // 0x80025D04: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_6;
    // 0x80025D04: nop

    after_6:
    // 0x80025D08: lw          $ra, 0x818($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X818);
    // 0x80025D0C: jr          $ra
    // 0x80025D10: addiu       $sp, $sp, 0x820
    ctx->r29 = ADD32(ctx->r29, 0X820);
    TRACE_RETURN()
    return;
    // 0x80025D10: addiu       $sp, $sp, 0x820
    ctx->r29 = ADD32(ctx->r29, 0X820);
;}
