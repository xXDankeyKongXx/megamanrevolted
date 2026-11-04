#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802397D8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802397D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802397DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802397E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802397E4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802397E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802397EC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802397F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802397F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802397F8: jal         0x8009A3B4
    // 0x802397FC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802397FC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80239800: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80239804: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80239808: jal         0x8009A3B4
    // 0x8023980C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023980C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80239810: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80239814: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80239818: jal         0x8009A3B4
    // 0x8023981C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023981C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80239820: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80239824: jal         0x800A3450
    // 0x80239828: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80239828: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023982C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80239830: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x80239834: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80239838: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023983C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239840: lw          $v0, 0x169C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X169C);
    // 0x80239844: jalr        $v0
    // 0x80239848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80239848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023984C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80239850: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80239854: beq         $v0, $zero, L_80239870
    if (ctx->r2 == 0) {
        // 0x80239858: nop
    
            goto L_80239870;
    }
    // 0x80239858: nop

    // 0x8023985C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80239860: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80239864: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80239868: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8023986C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80239870:
    // 0x80239870: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80239874: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80239878: beq         $v0, $a1, L_80239890
    if (ctx->r2 == ctx->r5) {
        // 0x8023987C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239890;
    }
    // 0x8023987C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239880: jal         0x800502EC
    // 0x80239884: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_5;
    // 0x80239884: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80239888: j           L_80239898
    // 0x8023988C: nop

        goto L_80239898;
    // 0x8023988C: nop

L_80239890:
    // 0x80239890: jal         0x800504EC
    // 0x80239894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_6;
    // 0x80239894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80239898:
    // 0x80239898: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x8023989C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802398A0: sh          $v0, -0x3D86($at)
    MEM_H(-0X3D86, ctx->r1) = ctx->r2;
    // 0x802398A4: jal         0x80051248
    // 0x802398A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_7;
    // 0x802398A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802398AC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802398B0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802398B4: beq         $v0, $zero, L_802398CC
    if (ctx->r2 == 0) {
        // 0x802398B8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802398CC;
    }
    // 0x802398B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802398BC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802398C0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802398C4: jal         0x8003B564
    // 0x802398C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x802398C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
L_802398CC:
    // 0x802398CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802398D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802398D4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802398D8: jal         0x80047284
    // 0x802398DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x802398DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x802398E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802398E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802398E8: jr          $ra
    // 0x802398EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802398EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023157C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023157C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231580: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231584: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023158C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80231590: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231594: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80231598: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023159C: bne         $v0, $zero, L_802315C4
    if (ctx->r2 != 0) {
        // 0x802315A0: nop
    
            goto L_802315C4;
    }
    // 0x802315A0: nop

    // 0x802315A4: jal         0x80233200
    // 0x802315A8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80233200_ovl10(rdram, ctx);
        goto after_0;
    // 0x802315A8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x802315AC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802315B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802315B4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802315B8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802315BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802315C0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802315C4:
    // 0x802315C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802315C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802315CC: jr          $ra
    // 0x802315D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802315D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233910_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233914: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233918: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023391C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233920: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233928: jal         0x8009A3B4
    // 0x8023392C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023392C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80233930: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233934: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233938: jal         0x8009A3B4
    // 0x8023393C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023393C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233940: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80233944: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80233948: jal         0x8009A3B4
    // 0x8023394C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023394C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233950: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233958: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023395C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80233960: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233964: lw          $v0, 0x11C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X11C0);
    // 0x80233968: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8023396C: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80233970: jalr        $v0
    // 0x80233974: addiu       $a2, $s0, 0x348
    ctx->r6 = ADD32(ctx->r16, 0X348);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80233974: addiu       $a2, $s0, 0x348
    ctx->r6 = ADD32(ctx->r16, 0X348);
    after_3:
    // 0x80233978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023397C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80233980: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80233984: jal         0x8003B564
    // 0x80233988: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80233988: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8023398C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233990: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233994: jr          $ra
    // 0x80233998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235730_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235730: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235734: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235738: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023573C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235740: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235744: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80235748: beq         $v1, $zero, L_80235764
    if (ctx->r3 == 0) {
        // 0x8023574C: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80235764;
    }
    // 0x8023574C: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80235750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235754: beq         $v1, $v0, L_802357AC
    if (ctx->r3 == ctx->r2) {
        // 0x80235758: nop
    
            goto L_802357AC;
    }
    // 0x80235758: nop

    // 0x8023575C: j           L_8023592C
    // 0x80235760: nop

        goto L_8023592C;
    // 0x80235760: nop

L_80235764:
    // 0x80235764: lw          $v1, 0x35C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X35C);
    // 0x80235768: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023576C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80235770: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235774: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80235778: lhu         $a1, 0x56($v1)
    ctx->r5 = MEM_HU(ctx->r3, 0X56);
    // 0x8023577C: lhu         $v1, 0x328($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X328);
    // 0x80235780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235784: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80235788: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8023578C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x80235790: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80235794: sh          $v1, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r3;
    // 0x80235798: jal         0x80047B3C
    // 0x8023579C: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
    func_80047B3C_22F3C(rdram, ctx);
        goto after_0;
    // 0x8023579C: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
    after_0:
    // 0x802357A0: lw          $v1, 0x36C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X36C);
    // 0x802357A4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802357A8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_802357AC:
    // 0x802357AC: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x802357B0: addiu       $v0, $zero, 0x2B
    ctx->r2 = ADD32(0, 0X2B);
    // 0x802357B4: bne         $v1, $v0, L_80235854
    if (ctx->r3 != ctx->r2) {
        // 0x802357B8: addiu       $a2, $zero, 0x8
        ctx->r6 = ADD32(0, 0X8);
            goto L_80235854;
    }
    // 0x802357B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802357BC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802357C0: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x802357C4: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
    // 0x802357C8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802357CC: sb          $zero, 0x8($v1)
    MEM_B(0X8, ctx->r3) = 0;
    // 0x802357D0: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x802357D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802357D8: sb          $v1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r3;
    // 0x802357DC: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x802357E0: sb          $v1, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r3;
    // 0x802357E4: lw          $v0, 0x34($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X34);
    // 0x802357E8: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x802357EC: lhu         $v0, 0x56($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X56);
    // 0x802357F0: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802357F4: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x802357F8: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x802357FC: jal         0x8009A3B4
    // 0x80235800: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235800: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    after_1:
    // 0x80235804: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80235808: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8023580C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235810: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80235814: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80235818: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8023581C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235820: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80235824: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80235828: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x8023582C: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x80235830: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235834: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80235838: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x8023583C: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x80235840: jal         0x8004DA90
    // 0x80235844: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80235844: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80235848: addiu       $a0, $zero, 0xE4
    ctx->r4 = ADD32(0, 0XE4);
    // 0x8023584C: jal         0x8002A33C
    // 0x80235850: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80235850: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80235854:
    // 0x80235854: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80235858: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023585C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80235860: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235864: bgez        $v0, L_8023592C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235868: nop
    
            goto L_8023592C;
    }
    // 0x80235868: nop

    // 0x8023586C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80235870: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80235874: beq         $v0, $zero, L_802358BC
    if (ctx->r2 == 0) {
        // 0x80235878: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802358BC;
    }
    // 0x80235878: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023587C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80235880: lw          $v1, 0x5638($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5638);
    // 0x80235884: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80235888: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023588C: lw          $v0, 0x5638($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5638);
    // 0x80235890: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235894: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80235898: addiu       $a0, $v0, 0x14
    ctx->r4 = ADD32(ctx->r2, 0X14);
    // 0x8023589C: jal         0x8009A3B4
    // 0x802358A0: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802358A0: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    after_4:
    // 0x802358A4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x802358A8: lw          $a0, 0x5638($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5638);
    // 0x802358AC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802358B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802358B4: jal         0x8009A3B4
    // 0x802358B8: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802358B8: addiu       $a0, $a0, 0x1C
    ctx->r4 = ADD32(ctx->r4, 0X1C);
    after_5:
L_802358BC:
    // 0x802358BC: jal         0x8004F144
    // 0x802358C0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_6;
    // 0x802358C0: nop

    after_6:
    // 0x802358C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802358C8: beq         $v1, $zero, L_80235904
    if (ctx->r3 == 0) {
        // 0x802358CC: sw          $v1, 0x4C($s1)
        MEM_W(0X4C, ctx->r17) = ctx->r3;
            goto L_80235904;
    }
    // 0x802358CC: sw          $v1, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r3;
    // 0x802358D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802358D4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802358D8: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x802358DC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802358E0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802358E4: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x802358E8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x802358EC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802358F0: lw          $a0, 0x4C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4C);
    // 0x802358F4: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x802358F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802358FC: jal         0x8009A3B4
    // 0x80235900: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80235900: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_7:
L_80235904:
    // 0x80235904: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80235908: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8023590C: beq         $v0, $zero, L_8023591C
    if (ctx->r2 == 0) {
        // 0x80235910: nop
    
            goto L_8023591C;
    }
    // 0x80235910: nop

    // 0x80235914: jal         0x8004F418
    // 0x80235918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_8;
    // 0x80235918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8023591C:
    // 0x8023591C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235920: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80235924: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80235928: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8023592C:
    // 0x8023592C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235930: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235934: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235938: jr          $ra
    // 0x8023593C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023593C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80242260_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242260: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80242264: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80242268: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8024226C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80242270: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80242274: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80242278: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8024227C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80242280: addiu       $s4, $zero, 0xB
    ctx->r20 = ADD32(0, 0XB);
    // 0x80242284: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80242288: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8024228C:
    // 0x8024228C: jal         0x8004F144
    // 0x80242290: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80242290: nop

    after_0:
    // 0x80242294: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80242298: beql        $s0, $zero, L_8024231C
    if (ctx->r16 == 0) {
        // 0x8024229C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8024231C;
    }
    goto skip_0;
    // 0x8024229C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x802422A0: sb          $s3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r19;
    // 0x802422A4: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    // 0x802422A8: sb          $s3, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r19;
    // 0x802422AC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802422B0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802422B4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802422B8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802422BC: lbu         $v0, 0x1B70($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1B70);
    // 0x802422C0: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x802422C4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802422C8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802422CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802422D0: jal         0x800A3450
    // 0x802422D4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802422D4: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x802422D8: lhu         $v1, 0x16($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X16);
    // 0x802422DC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802422E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802422E4: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    // 0x802422E8: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x802422EC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802422F0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802422F4: lbu         $v0, 0x1B78($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1B78);
    // 0x802422F8: lhu         $v1, 0x18($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X18);
    // 0x802422FC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80242300: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80242304: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242308: jal         0x800A3450
    // 0x8024230C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024230C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80242310: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80242314: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80242318: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8024231C:
    // 0x8024231C: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x80242320: bne         $v0, $zero, L_8024228C
    if (ctx->r2 != 0) {
        // 0x80242324: nop
    
            goto L_8024228C;
    }
    // 0x80242324: nop

    // 0x80242328: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024232C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80242330: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80242334: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80242338: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024233C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80242340: jr          $ra
    // 0x80242344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80242344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023DEBC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DEBC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023DEC0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023DEC4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023DEC8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023DECC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8023DED0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023DED4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023DED8: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x8023DEDC: bne         $v0, $zero, L_8023DF50
    if (ctx->r2 != 0) {
        // 0x8023DEE0: addiu       $s3, $s2, 0x440
        ctx->r19 = ADD32(ctx->r18, 0X440);
            goto L_8023DF50;
    }
    // 0x8023DEE0: addiu       $s3, $s2, 0x440
    ctx->r19 = ADD32(ctx->r18, 0X440);
    // 0x8023DEE4: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DEE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DEEC: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x8023DEF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DEF4: beq         $v1, $v0, L_8023DF2C
    if (ctx->r3 == ctx->r2) {
        // 0x8023DEF8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023DF2C;
    }
    // 0x8023DEF8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023DEFC: beql        $v0, $zero, L_8023DF14
    if (ctx->r2 == 0) {
        // 0x8023DF00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023DF14;
    }
    goto skip_0;
    // 0x8023DF00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023DF04: beq         $v1, $zero, L_8023DF24
    if (ctx->r3 == 0) {
        // 0x8023DF08: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8023DF24;
    }
    // 0x8023DF08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023DF0C: j           L_8023DFFC
    // 0x8023DF10: nop

        goto L_8023DFFC;
    // 0x8023DF10: nop

L_8023DF14:
    // 0x8023DF14: beq         $v1, $v0, L_8023DF48
    if (ctx->r3 == ctx->r2) {
        // 0x8023DF18: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8023DF48;
    }
    // 0x8023DF18: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8023DF1C: j           L_8023DFFC
    // 0x8023DF20: nop

        goto L_8023DFFC;
    // 0x8023DF20: nop

L_8023DF24:
    // 0x8023DF24: j           L_8023DFFC
    // 0x8023DF28: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
        goto L_8023DFFC;
    // 0x8023DF28: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
L_8023DF2C:
    // 0x8023DF2C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8023DF30: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    // 0x8023DF34: addiu       $a0, $zero, 0xC9
    ctx->r4 = ADD32(0, 0XC9);
    // 0x8023DF38: jal         0x8002A33C
    // 0x8023DF3C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8023DF3C: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_0:
    // 0x8023DF40: j           L_8023DFFC
    // 0x8023DF44: nop

        goto L_8023DFFC;
    // 0x8023DF44: nop

L_8023DF48:
    // 0x8023DF48: j           L_8023DFFC
    // 0x8023DF4C: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
        goto L_8023DFFC;
    // 0x8023DF4C: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
L_8023DF50:
    // 0x8023DF50: lbu         $a0, 0xA($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XA);
    // 0x8023DF54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023DF58: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023DF5C: beq         $v1, $v0, L_8023DFC8
    if (ctx->r3 == ctx->r2) {
        // 0x8023DF60: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023DFC8;
    }
    // 0x8023DF60: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023DF64: beql        $v0, $zero, L_8023DF7C
    if (ctx->r2 == 0) {
        // 0x8023DF68: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023DF7C;
    }
    goto skip_1;
    // 0x8023DF68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_1:
    // 0x8023DF6C: beq         $v1, $zero, L_8023DF8C
    if (ctx->r3 == 0) {
        // 0x8023DF70: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023DF8C;
    }
    // 0x8023DF70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023DF74: j           L_8023DFFC
    // 0x8023DF78: nop

        goto L_8023DFFC;
    // 0x8023DF78: nop

L_8023DF7C:
    // 0x8023DF7C: beq         $v1, $v0, L_8023DFE4
    if (ctx->r3 == ctx->r2) {
        // 0x8023DF80: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023DFE4;
    }
    // 0x8023DF80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023DF84: j           L_8023DFFC
    // 0x8023DF88: nop

        goto L_8023DFFC;
    // 0x8023DF88: nop

L_8023DF8C:
    // 0x8023DF8C: lb          $v1, 0xA7($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XA7);
    // 0x8023DF90: bne         $v1, $v0, L_8023DFFC
    if (ctx->r3 != ctx->r2) {
        // 0x8023DF94: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_8023DFFC;
    }
    // 0x8023DF94: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x8023DF98: lbu         $v0, 0x528($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X528);
    // 0x8023DF9C: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    // 0x8023DFA0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023DFA4: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
    // 0x8023DFA8: bne         $v0, $zero, L_8023DFB8
    if (ctx->r2 != 0) {
        // 0x8023DFAC: sb          $v1, 0x74($s2)
        MEM_B(0X74, ctx->r18) = ctx->r3;
            goto L_8023DFB8;
    }
    // 0x8023DFAC: sb          $v1, 0x74($s2)
    MEM_B(0X74, ctx->r18) = ctx->r3;
    // 0x8023DFB0: j           L_8023DFBC
    // 0x8023DFB4: addiu       $v0, $zero, -0x700
    ctx->r2 = ADD32(0, -0X700);
        goto L_8023DFBC;
    // 0x8023DFB4: addiu       $v0, $zero, -0x700
    ctx->r2 = ADD32(0, -0X700);
L_8023DFB8:
    // 0x8023DFB8: addiu       $v0, $zero, -0xE00
    ctx->r2 = ADD32(0, -0XE00);
L_8023DFBC:
    // 0x8023DFBC: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8023DFC0: j           L_8023DFFC
    // 0x8023DFC4: sh          $zero, 0x4($s3)
    MEM_H(0X4, ctx->r19) = 0;
        goto L_8023DFFC;
    // 0x8023DFC4: sh          $zero, 0x4($s3)
    MEM_H(0X4, ctx->r19) = 0;
L_8023DFC8:
    // 0x8023DFC8: lb          $v1, 0xA7($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XA7);
    // 0x8023DFCC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023DFD0: bne         $v1, $v0, L_8023DFFC
    if (ctx->r3 != ctx->r2) {
        // 0x8023DFD4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023DFFC;
    }
    // 0x8023DFD4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023DFD8: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8023DFDC: j           L_8023DFFC
    // 0x8023DFE0: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
        goto L_8023DFFC;
    // 0x8023DFE0: sb          $zero, 0xB($s2)
    MEM_B(0XB, ctx->r18) = 0;
L_8023DFE4:
    // 0x8023DFE4: lb          $v1, 0xA7($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XA7);
    // 0x8023DFE8: bne         $v1, $v0, L_8023DFFC
    if (ctx->r3 != ctx->r2) {
        // 0x8023DFEC: nop
    
            goto L_8023DFFC;
    }
    // 0x8023DFEC: nop

    // 0x8023DFF0: lhu         $v0, 0x440($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X440);
    // 0x8023DFF4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023DFF8: sh          $v0, 0x440($s2)
    MEM_H(0X440, ctx->r18) = ctx->r2;
L_8023DFFC:
    // 0x8023DFFC: lb          $v0, 0x74($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X74);
    // 0x8023E000: beq         $v0, $zero, L_8023E23C
    if (ctx->r2 == 0) {
        // 0x8023E004: nop
    
            goto L_8023E23C;
    }
    // 0x8023E004: nop

    // 0x8023E008: lbu         $v0, 0xE8($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XE8);
    // 0x8023E00C: bne         $v0, $zero, L_8023E018
    if (ctx->r2 != 0) {
        // 0x8023E010: addiu       $s0, $zero, 0x38
        ctx->r16 = ADD32(0, 0X38);
            goto L_8023E018;
    }
    // 0x8023E010: addiu       $s0, $zero, 0x38
    ctx->r16 = ADD32(0, 0X38);
    // 0x8023E014: addiu       $s0, $zero, 0x1C
    ctx->r16 = ADD32(0, 0X1C);
L_8023E018:
    // 0x8023E018: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023E01C: lhu         $v0, 0x46($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X46);
    // 0x8023E020: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023E024: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023E028: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8023E02C: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8023E030: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8023E034: jal         0x8004DA90
    // 0x8023E038: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023E038: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    after_1:
    // 0x8023E03C: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x8023E040: lh          $v0, 0xC0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC0);
    // 0x8023E044: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E048: mflo        $v0
    ctx->r2 = lo;
    // 0x8023E04C: lh          $a1, 0xB8($s3)
    ctx->r5 = MEM_H(ctx->r19, 0XB8);
    // 0x8023E050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E054: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8023E058: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E05C: mflo        $v1
    ctx->r3 = lo;
    // 0x8023E060: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E064: nop

    // 0x8023E068: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8023E06C: bne         $a0, $zero, L_8023E078
    if (ctx->r4 != 0) {
        // 0x8023E070: nop
    
            goto L_8023E078;
    }
    // 0x8023E070: nop

    // 0x8023E074: break       7
    do_break(2149834868);
L_8023E078:
    // 0x8023E078: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023E07C: bne         $a0, $at, L_8023E090
    if (ctx->r4 != ctx->r1) {
        // 0x8023E080: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023E090;
    }
    // 0x8023E080: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023E084: bne         $v0, $at, L_8023E090
    if (ctx->r2 != ctx->r1) {
        // 0x8023E088: nop
    
            goto L_8023E090;
    }
    // 0x8023E088: nop

    // 0x8023E08C: break       6
    do_break(2149834892);
L_8023E090:
    // 0x8023E090: mflo        $v0
    ctx->r2 = lo;
    // 0x8023E094: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8023E098: lh          $v1, 0x4($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X4);
    // 0x8023E09C: lh          $v0, 0xC4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0XC4);
    // 0x8023E0A0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E0A4: mflo        $v0
    ctx->r2 = lo;
    // 0x8023E0A8: lh          $a1, 0xBC($s3)
    ctx->r5 = MEM_H(ctx->r19, 0XBC);
    // 0x8023E0AC: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8023E0B0: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E0B4: mflo        $v1
    ctx->r3 = lo;
    // 0x8023E0B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E0BC: nop

    // 0x8023E0C0: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8023E0C4: bne         $a0, $zero, L_8023E0D0
    if (ctx->r4 != 0) {
        // 0x8023E0C8: nop
    
            goto L_8023E0D0;
    }
    // 0x8023E0C8: nop

    // 0x8023E0CC: break       7
    do_break(2149834956);
L_8023E0D0:
    // 0x8023E0D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023E0D4: bne         $a0, $at, L_8023E0E8
    if (ctx->r4 != ctx->r1) {
        // 0x8023E0D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023E0E8;
    }
    // 0x8023E0D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023E0DC: bne         $v0, $at, L_8023E0E8
    if (ctx->r2 != ctx->r1) {
        // 0x8023E0E0: nop
    
            goto L_8023E0E8;
    }
    // 0x8023E0E0: nop

    // 0x8023E0E4: break       6
    do_break(2149834980);
L_8023E0E8:
    // 0x8023E0E8: mflo        $v0
    ctx->r2 = lo;
    // 0x8023E0EC: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x8023E0F0: lh          $a1, 0xC6($s3)
    ctx->r5 = MEM_H(ctx->r19, 0XC6);
    // 0x8023E0F4: lh          $a0, 0xBE($s3)
    ctx->r4 = MEM_H(ctx->r19, 0XBE);
    // 0x8023E0F8: lhu         $a2, 0xBE($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0XBE);
    // 0x8023E0FC: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8023E100: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8023E104: bne         $v0, $zero, L_8023E114
    if (ctx->r2 != 0) {
        // 0x8023E108: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8023E114;
    }
    // 0x8023E108: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x8023E10C: j           L_8023E124
    // 0x8023E110: addiu       $a2, $a2, 0x1000
    ctx->r6 = ADD32(ctx->r6, 0X1000);
        goto L_8023E124;
    // 0x8023E110: addiu       $a2, $a2, 0x1000
    ctx->r6 = ADD32(ctx->r6, 0X1000);
L_8023E114:
    // 0x8023E114: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x8023E118: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8023E11C: beql        $v0, $zero, L_8023E124
    if (ctx->r2 == 0) {
        // 0x8023E120: addiu       $v1, $v1, 0x1000
        ctx->r3 = ADD32(ctx->r3, 0X1000);
            goto L_8023E124;
    }
    goto skip_2;
    // 0x8023E120: addiu       $v1, $v1, 0x1000
    ctx->r3 = ADD32(ctx->r3, 0X1000);
    skip_2:
L_8023E124:
    // 0x8023E124: lh          $a0, 0x4($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X4);
    // 0x8023E128: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023E12C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023E130: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E134: mflo        $v1
    ctx->r3 = lo;
    // 0x8023E138: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023E13C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023E140: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023E144: subu        $a0, $a1, $a0
    ctx->r4 = SUB32(ctx->r5, ctx->r4);
    // 0x8023E148: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023E14C: mflo        $a0
    ctx->r4 = lo;
    // 0x8023E150: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023E154: nop

    // 0x8023E158: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8023E15C: bne         $a1, $zero, L_8023E168
    if (ctx->r5 != 0) {
        // 0x8023E160: nop
    
            goto L_8023E168;
    }
    // 0x8023E160: nop

    // 0x8023E164: break       7
    do_break(2149835108);
L_8023E168:
    // 0x8023E168: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023E16C: bne         $a1, $at, L_8023E180
    if (ctx->r5 != ctx->r1) {
        // 0x8023E170: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023E180;
    }
    // 0x8023E170: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023E174: bne         $v1, $at, L_8023E180
    if (ctx->r3 != ctx->r1) {
        // 0x8023E178: nop
    
            goto L_8023E180;
    }
    // 0x8023E178: nop

    // 0x8023E17C: break       6
    do_break(2149835132);
L_8023E180:
    // 0x8023E180: mflo        $v1
    ctx->r3 = lo;
    // 0x8023E184: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    // 0x8023E188: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8023E18C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E190: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8023E194: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8023E198: bltz        $v0, L_8023E218
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023E19C: addiu       $s0, $s3, 0xC0
        ctx->r16 = ADD32(ctx->r19, 0XC0);
            goto L_8023E218;
    }
    // 0x8023E19C: addiu       $s0, $s3, 0xC0
    ctx->r16 = ADD32(ctx->r19, 0XC0);
    // 0x8023E1A0: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8023E1A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E1A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023E1AC: jal         0x8009A3B4
    // 0x8023E1B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023E1B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023E1B4: addiu       $a0, $s3, 0xB8
    ctx->r4 = ADD32(ctx->r19, 0XB8);
    // 0x8023E1B8: sh          $zero, 0x1A($s2)
    MEM_H(0X1A, ctx->r18) = 0;
    // 0x8023E1BC: lhu         $v0, 0xC6($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0XC6);
    // 0x8023E1C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023E1C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023E1C8: jal         0x8009A3B4
    // 0x8023E1CC: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023E1CC: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    after_3:
    // 0x8023E1D0: addiu       $a0, $zero, 0xCA
    ctx->r4 = ADD32(0, 0XCA);
    // 0x8023E1D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023E1D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023E1DC: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8023E1E0: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8023E1E4: sh          $zero, 0x48($s2)
    MEM_H(0X48, ctx->r18) = 0;
    // 0x8023E1E8: sh          $zero, 0x46($s2)
    MEM_H(0X46, ctx->r18) = 0;
    // 0x8023E1EC: sh          $zero, 0x44($s2)
    MEM_H(0X44, ctx->r18) = 0;
    // 0x8023E1F0: sb          $zero, 0x74($s2)
    MEM_B(0X74, ctx->r18) = 0;
    // 0x8023E1F4: jal         0x8002A33C
    // 0x8023E1F8: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8023E1F8: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x8023E1FC: jal         0x8023F2F4
    // 0x8023E200: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8023F2F4_ovl10(rdram, ctx);
        goto after_5;
    // 0x8023E200: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
    // 0x8023E204: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8023E208: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    // 0x8023E20C: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    // 0x8023E210: jal         0x8003491C
    // 0x8023E214: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_6;
    // 0x8023E214: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_6:
L_8023E218:
    // 0x8023E218: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8023E21C: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8023E220: lh          $a0, 0x18($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X18);
    // 0x8023E224: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E228: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023E22C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023E230: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8023E234: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8023E238: sw          $a0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r4;
L_8023E23C:
    // 0x8023E23C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023E240: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E244: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023E248: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023E24C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023E250: jr          $ra
    // 0x8023E254: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023E254: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022AC5C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AC60: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022AC64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC68: bne         $v0, $zero, L_8022AC7C
    if (ctx->r2 != 0) {
        // 0x8022AC6C: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8022AC7C;
    }
    // 0x8022AC6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AC70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC74: jal         0x800600F8
    // 0x8022AC78: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x8022AC78: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    after_0:
L_8022AC7C:
    // 0x8022AC7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AC80: jr          $ra
    // 0x8022AC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AC84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80248D50_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248D50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80248D54: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80248D58: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248D5C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80248D60: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80248D64: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80248D68: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80248D6C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80248D70: bne         $v1, $zero, L_80248D84
    if (ctx->r3 != 0) {
        // 0x80248D74: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_80248D84;
    }
    // 0x80248D74: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80248D78: lh          $v0, 0x3E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3E);
    // 0x80248D7C: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x80248D80: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
L_80248D84:
    // 0x80248D84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80248D88: jal         0x8004D5D4
    // 0x80248D8C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80248D8C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    after_0:
    // 0x80248D90: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80248D94: jal         0x8002C654
    // 0x80248D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80248D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80248D9C: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80248DA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80248DA4: jal         0x800319B4
    // 0x80248DA8: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80248DA8: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x80248DAC: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80248DB0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80248DB4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80248DB8: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80248DBC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80248DC0: addiu       $v0, $v0, 0x2364
    ctx->r2 = ADD32(ctx->r2, 0X2364);
    // 0x80248DC4: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80248DC8: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x80248DCC: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x80248DD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80248DD4: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80248DD8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80248DDC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80248DE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80248DE4: jr          $ra
    // 0x80248DE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80248DE8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802465F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802465F0: jr          $ra
    // 0x802465F4: nop

    TRACE_RETURN()
    return;
    // 0x802465F4: nop

;}
RECOMP_FUNC void func_8023AA4C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AA4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AA50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AA54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AA58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023AA5C: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8023AA60: beq         $v1, $zero, L_8023AA78
    if (ctx->r3 == 0) {
        // 0x8023AA64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023AA78;
    }
    // 0x8023AA64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AA68: beq         $v1, $v0, L_8023AAC8
    if (ctx->r3 == ctx->r2) {
        // 0x8023AA6C: nop
    
            goto L_8023AAC8;
    }
    // 0x8023AA6C: nop

    // 0x8023AA70: j           L_8023AAF4
    // 0x8023AA74: nop

        goto L_8023AAF4;
    // 0x8023AA74: nop

L_8023AA78:
    // 0x8023AA78: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023AA7C: jal         0x8006FF84
    // 0x8023AA80: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8023AA80: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8023AA84: beq         $v0, $zero, L_8023AAF4
    if (ctx->r2 == 0) {
        // 0x8023AA88: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023AAF4;
    }
    // 0x8023AA88: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023AA8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AA90: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8023AA94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AA98: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8023AA9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023AAA0: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x8023AAA4: jal         0x80036B58
    // 0x8023AAA8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8023AAA8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8023AAAC: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8023AAB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023AAB4: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x8023AAB8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023AABC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AAC0: j           L_8023AAF4
    // 0x8023AAC4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023AAF4;
    // 0x8023AAC4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023AAC8:
    // 0x8023AAC8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023AACC: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8023AAD0: bne         $v0, $zero, L_8023AAF4
    if (ctx->r2 != 0) {
        // 0x8023AAD4: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_8023AAF4;
    }
    // 0x8023AAD4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x8023AAD8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023AADC: jal         0x8002A2F8
    // 0x8023AAE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8023AAE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023AAE4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023AAE8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8023AAEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AAF0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023AAF4:
    // 0x8023AAF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023AAF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AAFC: jr          $ra
    // 0x8023AB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x2790
    ctx->r2 = ADD32(ctx->r2, -0X2790);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x2650
    ctx->r2 = ADD32(ctx->r2, -0X2650);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x2628
    ctx->r2 = ADD32(ctx->r2, -0X2628);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x2568
    ctx->r2 = ADD32(ctx->r2, -0X2568);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x2538
    ctx->r2 = ADD32(ctx->r2, -0X2538);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x2524
    ctx->r2 = ADD32(ctx->r2, -0X2524);
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
RECOMP_FUNC void func_802479F0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802479F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802479F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802479F8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802479FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80247A00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80247A04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80247A08: lw          $v0, 0x22B0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X22B0);
    // 0x80247A0C: jalr        $v0
    // 0x80247A10: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80247A10: nop

    after_0:
    // 0x80247A14: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80247A18: jr          $ra
    // 0x80247A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247A1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232898_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232898: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023289C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802328A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802328A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802328A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802328AC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x802328B0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802328B4: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x802328B8: jal         0x8004FA7C
    // 0x802328BC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802328BC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x802328C0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802328C4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802328C8: beq         $v0, $zero, L_8023295C
    if (ctx->r2 == 0) {
        // 0x802328CC: nop
    
            goto L_8023295C;
    }
    // 0x802328CC: nop

    // 0x802328D0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802328D4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802328D8: bne         $v0, $zero, L_8023295C
    if (ctx->r2 != 0) {
        // 0x802328DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023295C;
    }
    // 0x802328DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802328E0: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x802328E4: beq         $v1, $v0, L_802328FC
    if (ctx->r3 == ctx->r2) {
        // 0x802328E8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802328FC;
    }
    // 0x802328E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802328EC: beq         $v1, $v0, L_8023292C
    if (ctx->r3 == ctx->r2) {
        // 0x802328F0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023292C;
    }
    // 0x802328F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802328F4: j           L_80232950
    // 0x802328F8: nop

        goto L_80232950;
    // 0x802328F8: nop

L_802328FC:
    // 0x802328FC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232900: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80232904: bne         $v0, $zero, L_80232950
    if (ctx->r2 != 0) {
        // 0x80232908: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80232950;
    }
    // 0x80232908: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023290C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80232910: bne         $v0, $zero, L_80232950
    if (ctx->r2 != 0) {
        // 0x80232914: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232950;
    }
    // 0x80232914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232918: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023291C: bne         $v1, $v0, L_80232950
    if (ctx->r3 != ctx->r2) {
        // 0x80232920: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80232950;
    }
    // 0x80232920: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80232924: j           L_80232950
    // 0x80232928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80232950;
    // 0x80232928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023292C:
    // 0x8023292C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232930: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80232934: beq         $v0, $zero, L_8023294C
    if (ctx->r2 == 0) {
        // 0x80232938: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8023294C;
    }
    // 0x80232938: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8023293C: bne         $v0, $zero, L_80232950
    if (ctx->r2 != 0) {
        // 0x80232940: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80232950;
    }
    // 0x80232940: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80232944: j           L_80232950
    // 0x80232948: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80232950;
    // 0x80232948: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023294C:
    // 0x8023294C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80232950:
    // 0x80232950: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80232954: beq         $v0, $zero, L_80232980
    if (ctx->r2 == 0) {
        // 0x80232958: nop
    
            goto L_80232980;
    }
    // 0x80232958: nop

L_8023295C:
    // 0x8023295C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80232960: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232964: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80232968: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023296C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80232970: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80232974: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80232978: j           L_80232990
    // 0x8023297C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80232990;
    // 0x8023297C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232980:
    // 0x80232980: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80232984: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80232988: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023298C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80232990:
    // 0x80232990: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232994: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232998: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023299C: jr          $ra
    // 0x802329A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802329A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80246DB8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246DB8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80246DBC: lb          $v1, 0x49BC($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X49BC);
    // 0x80246DC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80246DC4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80246DC8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80246DCC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80246DD0: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80246DD4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80246DD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246DDC: sh          $zero, -0xCBA($at)
    MEM_H(-0XCBA, ctx->r1) = 0;
    // 0x80246DE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246DE4: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x80246DE8: sltiu       $v0, $v1, 0x16
    ctx->r2 = ctx->r3 < 0X16 ? 1 : 0;
    // 0x80246DEC: beq         $v0, $zero, L_80246EEC
    if (ctx->r2 == 0) {
        // 0x80246DF0: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_80246EEC;
    }
    // 0x80246DF0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80246DF4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80246DF8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246DFC: addu        $at, $at, $v0
    gpr jr_addend_80246E04 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246E00: lw          $v0, 0x3120($at)
    ctx->r2 = ADD32(ctx->r1, 0X3120);
    // 0x80246E04: jr          $v0
    // 0x80246E08: nop

    switch (jr_addend_80246E04 >> 2) {
        case 0: goto L_80246E0C; break;
        case 1: goto L_80246E28; break;
        case 2: goto L_80246E44; break;
        case 3: goto L_80246EEC; break;
        case 4: goto L_80246EEC; break;
        case 5: goto L_80246EEC; break;
        case 6: goto L_80246EEC; break;
        case 7: goto L_80246EEC; break;
        case 8: goto L_80246EEC; break;
        case 9: goto L_80246EEC; break;
        case 10: goto L_80246EB0; break;
        case 11: goto L_80246EE0; break;
        case 12: goto L_80246EEC; break;
        case 13: goto L_80246EEC; break;
        case 14: goto L_80246EEC; break;
        case 15: goto L_80246EEC; break;
        case 16: goto L_80246EEC; break;
        case 17: goto L_80246EEC; break;
        case 18: goto L_80246EEC; break;
        case 19: goto L_80246EEC; break;
        case 20: goto L_80246EB8; break;
        case 21: goto L_80246EE0; break;
        default: switch_error(__func__, 0x80246E04, 0x80253120);
    }
    // 0x80246E08: nop

L_80246E0C:
    // 0x80246E0C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80246E10: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80246E14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246E18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80246E1C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80246E20: j           L_80246EEC
    // 0x80246E24: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
        goto L_80246EEC;
    // 0x80246E24: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_80246E28:
    // 0x80246E28: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80246E2C: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x80246E30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80246E34: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80246E38: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
    // 0x80246E3C: j           L_80246EEC
    // 0x80246E40: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
        goto L_80246EEC;
    // 0x80246E40: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_80246E44:
    // 0x80246E44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80246E48: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80246E4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80246E50: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80246E54: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80246E58: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x80246E5C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80246E60: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80246E64: jal         0x8004E130
    // 0x80246E68: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8004E130_29530(rdram, ctx);
        goto after_0;
    // 0x80246E68: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x80246E6C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80246E70: beq         $v0, $zero, L_80246E88
    if (ctx->r2 == 0) {
        // 0x80246E74: addiu       $v1, $zero, 0xA
        ctx->r3 = ADD32(0, 0XA);
            goto L_80246E88;
    }
    // 0x80246E74: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x80246E78: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x80246E7C: lhu         $a0, 0x138($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X138);
    // 0x80246E80: j           L_80246E98
    // 0x80246E84: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
        goto L_80246E98;
    // 0x80246E84: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_80246E88:
    // 0x80246E88: lhu         $v0, 0x12A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12A);
    // 0x80246E8C: lhu         $a0, 0x138($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X138);
    // 0x80246E90: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80246E94: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_80246E98:
    // 0x80246E98: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80246E9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246EA0: sh          $v0, -0xCBA($at)
    MEM_H(-0XCBA, ctx->r1) = ctx->r2;
    // 0x80246EA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246EA8: j           L_80246EEC
    // 0x80246EAC: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
        goto L_80246EEC;
    // 0x80246EAC: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
L_80246EB0:
    // 0x80246EB0: j           L_80246EBC
    // 0x80246EB4: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
        goto L_80246EBC;
    // 0x80246EB4: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
L_80246EB8:
    // 0x80246EB8: lhu         $v0, 0x12A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12A);
L_80246EBC:
    // 0x80246EBC: lhu         $a0, 0x138($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X138);
    // 0x80246EC0: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80246EC4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80246EC8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80246ECC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246ED0: sh          $v0, -0xCBA($at)
    MEM_H(-0XCBA, ctx->r1) = ctx->r2;
    // 0x80246ED4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80246ED8: sh          $v0, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = ctx->r2;
    // 0x80246EDC: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
L_80246EE0:
    // 0x80246EE0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80246EE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246EE8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80246EEC:
    // 0x80246EEC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80246EF0: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80246EF4: bne         $v0, $zero, L_80246F0C
    if (ctx->r2 != 0) {
        // 0x80246EF8: nop
    
            goto L_80246F0C;
    }
    // 0x80246EF8: nop

    // 0x80246EFC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80246F00: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80246F04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80246F08: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_80246F0C:
    // 0x80246F0C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80246F10: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80246F14: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80246F18: jr          $ra
    // 0x80246F1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80246F1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802377E4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802377E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802377E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802377EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802377F0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802377F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802377F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802377FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237800: beq         $v1, $v0, L_80237848
    if (ctx->r3 == ctx->r2) {
        // 0x80237804: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_80237848;
    }
    // 0x80237804: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80237808: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023780C: beql        $v0, $zero, L_80237824
    if (ctx->r2 == 0) {
        // 0x80237810: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237824;
    }
    goto skip_0;
    // 0x80237810: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237814: beq         $v1, $zero, L_80237834
    if (ctx->r3 == 0) {
        // 0x80237818: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237834;
    }
    // 0x80237818: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023781C: j           L_80237974
    // 0x80237820: nop

        goto L_80237974;
    // 0x80237820: nop

L_80237824:
    // 0x80237824: beq         $v1, $v0, L_80237900
    if (ctx->r3 == ctx->r2) {
        // 0x80237828: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80237900;
    }
    // 0x80237828: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023782C: j           L_80237974
    // 0x80237830: nop

        goto L_80237974;
    // 0x80237830: nop

L_80237834:
    // 0x80237834: lhu         $v1, 0x308($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X308);
    // 0x80237838: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023783C: sh          $zero, 0x310($s0)
    MEM_H(0X310, ctx->r16) = 0;
    // 0x80237840: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x80237844: sh          $v1, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r3;
L_80237848:
    // 0x80237848: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x8023784C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x80237850: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x80237854: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x80237858: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8023785C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237860: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80237864: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80237868: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023786C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80237870: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x80237874: lh          $v1, 0x6($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X6);
    // 0x80237878: sltu        $a1, $a1, $a3
    ctx->r5 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x8023787C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237880: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80237884: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80237888: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023788C: beq         $a1, $zero, L_802378A8
    if (ctx->r5 == 0) {
        // 0x80237890: subu        $v0, $a2, $v1
        ctx->r2 = SUB32(ctx->r6, ctx->r3);
            goto L_802378A8;
    }
    // 0x80237890: subu        $v0, $a2, $v1
    ctx->r2 = SUB32(ctx->r6, ctx->r3);
    // 0x80237894: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80237898: beq         $v0, $zero, L_802378A8
    if (ctx->r2 == 0) {
        // 0x8023789C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802378A8;
    }
    // 0x8023789C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802378A0: j           L_802378FC
    // 0x802378A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802378FC;
    // 0x802378A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802378A8:
    // 0x802378A8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802378AC: lhu         $v0, 0x1630($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1630);
    // 0x802378B0: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x802378B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802378B8: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x802378BC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802378C0: beq         $v0, $zero, L_802378D4
    if (ctx->r2 == 0) {
        // 0x802378C4: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802378D4;
    }
    // 0x802378C4: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x802378C8: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x802378CC: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x802378D0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_802378D4:
    // 0x802378D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802378D8: lhu         $a1, 0x44($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X44);
    // 0x802378DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802378E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802378E4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x802378E8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802378EC: jal         0x8004DA90
    // 0x802378F0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802378F0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x802378F4: j           L_80237974
    // 0x802378F8: nop

        goto L_80237974;
    // 0x802378F8: nop

L_802378FC:
    // 0x802378FC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80237900:
    // 0x80237900: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80237904: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x80237908: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8023790C: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x80237910: jal         0x8004F820
    // 0x80237914: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80237914: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x80237918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023791C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237920: lhu         $a1, 0x44($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X44);
    // 0x80237924: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80237928: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x8023792C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80237930: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80237934: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80237938: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8023793C: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80237940: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80237944: jal         0x8004DA90
    // 0x80237948: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80237948: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_2:
    // 0x8023794C: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80237950: bne         $s0, $zero, L_80237974
    if (ctx->r16 != 0) {
        // 0x80237954: nop
    
            goto L_80237974;
    }
    // 0x80237954: nop

    // 0x80237958: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023795C: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80237960: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237964: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80237968: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8023796C: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x80237970: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_80237974:
    // 0x80237974: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80237978: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023797C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80237980: jr          $ra
    // 0x80237984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80237984: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023A100_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A104: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A108: jal         0x8004F418
    // 0x8023A10C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8023A10C: nop

    after_0:
    // 0x8023A110: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A114: jr          $ra
    // 0x8023A118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80249B90_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249B90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80249B94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249B98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80249B9C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80249BA0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80249BA4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80249BA8: addiu       $a0, $a0, -0x3C18
    ctx->r4 = ADD32(ctx->r4, -0X3C18);
    // 0x80249BAC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80249BB0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80249BB4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80249BB8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80249BBC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80249BC0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80249BC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80249BC8: beq         $v1, $v0, L_80249C40
    if (ctx->r3 == ctx->r2) {
        // 0x80249BCC: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_80249C40;
    }
    // 0x80249BCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80249BD0: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x80249BD4: beq         $v0, $zero, L_80249BEC
    if (ctx->r2 == 0) {
        // 0x80249BD8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80249BEC;
    }
    // 0x80249BD8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80249BDC: beq         $v1, $v0, L_80249C08
    if (ctx->r3 == ctx->r2) {
        // 0x80249BE0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80249C08;
    }
    // 0x80249BE0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80249BE4: j           L_80249C8C
    // 0x80249BE8: nop

        goto L_80249C8C;
    // 0x80249BE8: nop

L_80249BEC:
    // 0x80249BEC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80249BF0: beq         $v1, $v0, L_80249C74
    if (ctx->r3 == ctx->r2) {
        // 0x80249BF4: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_80249C74;
    }
    // 0x80249BF4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80249BF8: beq         $v1, $v0, L_80249C8C
    if (ctx->r3 == ctx->r2) {
        // 0x80249BFC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80249C8C;
    }
    // 0x80249BFC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80249C00: j           L_80249C8C
    // 0x80249C04: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_80249C8C;
    // 0x80249C04: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80249C08:
    // 0x80249C08: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80249C0C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80249C10: bne         $v1, $zero, L_80249C20
    if (ctx->r3 != 0) {
        // 0x80249C14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80249C20;
    }
    // 0x80249C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249C18: j           L_80249C90
    // 0x80249C1C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
        goto L_80249C90;
    // 0x80249C1C: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
L_80249C20:
    // 0x80249C20: bne         $v1, $v0, L_80249C30
    if (ctx->r3 != ctx->r2) {
        // 0x80249C24: slti        $v0, $v1, 0x8
        ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_80249C30;
    }
    // 0x80249C24: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x80249C28: j           L_80249C8C
    // 0x80249C2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80249C8C;
    // 0x80249C2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80249C30:
    // 0x80249C30: bne         $v0, $zero, L_80249C8C
    if (ctx->r2 != 0) {
        // 0x80249C34: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80249C8C;
    }
    // 0x80249C34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80249C38: j           L_80249C8C
    // 0x80249C3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80249C8C;
    // 0x80249C3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80249C40:
    // 0x80249C40: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80249C44: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80249C48: bne         $v1, $zero, L_80249C58
    if (ctx->r3 != 0) {
        // 0x80249C4C: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_80249C58;
    }
    // 0x80249C4C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80249C50: j           L_80249C8C
    // 0x80249C54: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80249C8C;
    // 0x80249C54: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80249C58:
    // 0x80249C58: bne         $v0, $zero, L_80249C8C
    if (ctx->r2 != 0) {
        // 0x80249C5C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80249C8C;
    }
    // 0x80249C5C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80249C60: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x80249C64: bne         $v0, $zero, L_80249C8C
    if (ctx->r2 != 0) {
        // 0x80249C68: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80249C8C;
    }
    // 0x80249C68: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80249C6C: j           L_80249C8C
    // 0x80249C70: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80249C8C;
    // 0x80249C70: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80249C74:
    // 0x80249C74: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80249C78: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x80249C7C: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80249C80: bne         $v0, $zero, L_80249C8C
    if (ctx->r2 != 0) {
        // 0x80249C84: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80249C8C;
    }
    // 0x80249C84: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80249C88: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80249C8C:
    // 0x80249C8C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_80249C90:
    // 0x80249C90: lb          $v0, 0x51($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X51);
    // 0x80249C94: beq         $v0, $zero, L_80249CA0
    if (ctx->r2 == 0) {
        // 0x80249C98: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80249CA0;
    }
    // 0x80249C98: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80249C9C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_80249CA0:
    // 0x80249CA0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80249CA4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80249CA8: bne         $v1, $v0, L_80249CC0
    if (ctx->r3 != ctx->r2) {
        // 0x80249CAC: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_80249CC0;
    }
    // 0x80249CAC: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80249CB0: jal         0x8004F684
    // 0x80249CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80249CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80249CB8: j           L_80249D84
    // 0x80249CBC: nop

        goto L_80249D84;
    // 0x80249CBC: nop

L_80249CC0:
    // 0x80249CC0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249CC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249CC8: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x80249CCC: blez        $v0, L_80249D78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80249CD0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80249D78;
    }
    // 0x80249CD0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80249CD4: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x80249CD8: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80249CDC: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x80249CE0: addiu       $s4, $s4, -0x2100
    ctx->r20 = ADD32(ctx->r20, -0X2100);
    // 0x80249CE4: lui         $s2, 0xEA0
    ctx->r18 = S32(0XEA0 << 16);
    // 0x80249CE8: ori         $s2, $s2, 0xEA0F
    ctx->r18 = ctx->r18 | 0XEA0F;
    // 0x80249CEC: lui         $s3, 0x8025
    ctx->r19 = S32(0X8025 << 16);
    // 0x80249CF0: addiu       $s3, $s3, 0x3580
    ctx->r19 = ADD32(ctx->r19, 0X3580);
L_80249CF4:
    // 0x80249CF4: jal         0x8004EFE4
    // 0x80249CF8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x80249CF8: nop

    after_1:
    // 0x80249CFC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80249D00: beq         $a1, $zero, L_80249D48
    if (ctx->r5 == 0) {
        // 0x80249D04: subu        $v0, $a1, $s4
        ctx->r2 = SUB32(ctx->r5, ctx->r20);
            goto L_80249D48;
    }
    // 0x80249D04: subu        $v0, $a1, $s4
    ctx->r2 = SUB32(ctx->r5, ctx->r20);
    // 0x80249D08: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80249D0C: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80249D10: sb          $s6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r22;
    // 0x80249D14: sb          $s5, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r21;
    // 0x80249D18: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80249D1C: sb          $s1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r17;
    // 0x80249D20: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80249D24: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80249D28: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80249D2C: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80249D30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80249D34: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80249D38: mfhi        $a2
    ctx->r6 = hi;
    // 0x80249D3C: srl         $v1, $a2, 1
    ctx->r3 = S32(U32(ctx->r6) >> 1);
    // 0x80249D40: sb          $v1, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r3;
    // 0x80249D44: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
L_80249D48:
    // 0x80249D48: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80249D4C: addiu       $v1, $s1, 0x1
    ctx->r3 = ADD32(ctx->r17, 0X1);
    // 0x80249D50: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x80249D54: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80249D58: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249D5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249D60: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x80249D64: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80249D68: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80249D6C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80249D70: bne         $v1, $zero, L_80249CF4
    if (ctx->r3 != 0) {
        // 0x80249D74: nop
    
            goto L_80249CF4;
    }
    // 0x80249D74: nop

L_80249D78:
    // 0x80249D78: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80249D7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80249D80: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80249D84:
    // 0x80249D84: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80249D88: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80249D8C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80249D90: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80249D94: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80249D98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80249D9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80249DA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249DA4: jr          $ra
    // 0x80249DA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80249DA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80248DEC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248DEC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80248DF0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80248DF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80248DF8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80248DFC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80248E00: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80248E04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248E08: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248E0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80248E10: lw          $v0, 0x234C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X234C);
    // 0x80248E14: jalr        $v0
    // 0x80248E18: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80248E18: nop

    after_0:
    // 0x80248E1C: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80248E20: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80248E24: beq         $v1, $v0, L_80248E98
    if (ctx->r3 == ctx->r2) {
        // 0x80248E28: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80248E98;
    }
    // 0x80248E28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80248E2C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80248E30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80248E34: jal         0x80047284
    // 0x80248E38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x80248E38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80248E3C: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x80248E40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80248E44: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x80248E48: jal         0x8009A3B4
    // 0x80248E4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80248E4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80248E50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80248E54: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80248E58: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80248E5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80248E60: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x80248E64: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80248E68: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80248E6C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80248E70: addiu       $v0, $s1, 0x4C
    ctx->r2 = ADD32(ctx->r17, 0X4C);
    // 0x80248E74: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80248E78: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80248E7C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80248E80: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80248E84: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80248E88: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80248E8C: jal         0x80051E18
    // 0x80248E90: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80248E90: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80248E94: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_80248E98:
    // 0x80248E98: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80248E9C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80248EA0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80248EA4: jr          $ra
    // 0x80248EA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80248EA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023B1F4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B1F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B1F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B1FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B204: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B20C: beq         $v1, $v0, L_8023B260
    if (ctx->r3 == ctx->r2) {
        // 0x8023B210: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023B260;
    }
    // 0x8023B210: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023B214: beql        $v0, $zero, L_8023B22C
    if (ctx->r2 == 0) {
        // 0x8023B218: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023B22C;
    }
    goto skip_0;
    // 0x8023B218: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023B21C: beq         $v1, $zero, L_8023B23C
    if (ctx->r3 == 0) {
        // 0x8023B220: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023B23C;
    }
    // 0x8023B220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B224: j           L_8023B2C4
    // 0x8023B228: nop

        goto L_8023B2C4;
    // 0x8023B228: nop

L_8023B22C:
    // 0x8023B22C: beq         $v1, $v0, L_8023B29C
    if (ctx->r3 == ctx->r2) {
        // 0x8023B230: nop
    
            goto L_8023B29C;
    }
    // 0x8023B230: nop

    // 0x8023B234: j           L_8023B2C4
    // 0x8023B238: nop

        goto L_8023B2C4;
    // 0x8023B238: nop

L_8023B23C:
    // 0x8023B23C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8023B240: jal         0x80050294
    // 0x8023B244: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023B244: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023B248: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B24C: addiu       $v1, $zero, -0x80
    ctx->r3 = ADD32(0, -0X80);
    // 0x8023B250: sh          $v1, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r3;
    // 0x8023B254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B258: j           L_8023B2C4
    // 0x8023B25C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023B2C4;
    // 0x8023B25C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023B260:
    // 0x8023B260: jal         0x8005044C
    // 0x8023B264: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023B264: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023B268: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023B26C: lhu         $v1, 0xB4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB4);
    // 0x8023B270: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B274: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023B278: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023B27C: bgtz        $v0, L_8023B2C4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023B280: addiu       $v0, $zero, -0x719
        ctx->r2 = ADD32(0, -0X719);
            goto L_8023B2C4;
    }
    // 0x8023B280: addiu       $v0, $zero, -0x719
    ctx->r2 = ADD32(0, -0X719);
    // 0x8023B284: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B288: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8023B28C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8023B290: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023B294: j           L_8023B2C4
    // 0x8023B298: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8023B2C4;
    // 0x8023B298: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8023B29C:
    // 0x8023B29C: jal         0x8005044C
    // 0x8023B2A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8023B2A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023B2A4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023B2A8: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x8023B2AC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8023B2B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023B2B4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023B2B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023B2BC: jal         0x8004DD04
    // 0x8023B2C0: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x8023B2C0: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    after_3:
L_8023B2C4:
    // 0x8023B2C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B2C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B2CC: jr          $ra
    // 0x8023B2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227420_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227424: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022742C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227430: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80227434: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80227438: beq         $v1, $a0, L_80227478
    if (ctx->r3 == ctx->r4) {
        // 0x8022743C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227478;
    }
    // 0x8022743C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227440: beql        $v0, $zero, L_80227458
    if (ctx->r2 == 0) {
        // 0x80227444: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227458;
    }
    goto skip_0;
    // 0x80227444: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227448: beq         $v1, $zero, L_80227468
    if (ctx->r3 == 0) {
        // 0x8022744C: nop
    
            goto L_80227468;
    }
    // 0x8022744C: nop

    // 0x80227450: j           L_802275C8
    // 0x80227454: nop

        goto L_802275C8;
    // 0x80227454: nop

L_80227458:
    // 0x80227458: beq         $v1, $v0, L_80227544
    if (ctx->r3 == ctx->r2) {
        // 0x8022745C: nop
    
            goto L_80227544;
    }
    // 0x8022745C: nop

    // 0x80227460: j           L_802275C8
    // 0x80227464: nop

        goto L_802275C8;
    // 0x80227464: nop

L_80227468:
    // 0x80227468: jal         0x8004F418
    // 0x8022746C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022746C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_0:
    // 0x80227470: j           L_802275A8
    // 0x80227474: nop

        goto L_802275A8;
    // 0x80227474: nop

L_80227478:
    // 0x80227478: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022747C: bne         $v0, $zero, L_80227550
    if (ctx->r2 != 0) {
        // 0x80227480: nop
    
            goto L_80227550;
    }
    // 0x80227480: nop

    // 0x80227484: jal         0x80054578
    // 0x80227488: nop

    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x80227488: nop

    after_1:
    // 0x8022748C: addiu       $a0, $zero, 0x76
    ctx->r4 = ADD32(0, 0X76);
    // 0x80227490: jal         0x8004CB2C
    // 0x80227494: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x80227494: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
    // 0x80227498: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022749C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802274A0: jal         0x80036B00
    // 0x802274A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_3;
    // 0x802274A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802274A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802274AC: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x802274B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802274B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802274B8: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x802274BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802274C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802274C4: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x802274C8: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x802274CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802274D0: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x802274D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802274D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802274DC: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x802274E0: addiu       $v0, $zero, 0x1900
    ctx->r2 = ADD32(0, 0X1900);
    // 0x802274E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802274E8: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x802274EC: lui         $v0, 0xFE00
    ctx->r2 = S32(0XFE00 << 16);
    // 0x802274F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802274F4: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x802274F8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802274FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227500: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80227504: lui         $v0, 0x1900
    ctx->r2 = S32(0X1900 << 16);
    // 0x80227508: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022750C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80227510: addiu       $v0, $zero, 0x940
    ctx->r2 = ADD32(0, 0X940);
    // 0x80227514: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227518: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8022751C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227520: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80227524: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227528: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022752C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227530: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80227534: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80227538: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022753C: j           L_80227598
    // 0x80227540: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
        goto L_80227598;
    // 0x80227540: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
L_80227544:
    // 0x80227544: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227548: beq         $v0, $zero, L_80227560
    if (ctx->r2 == 0) {
        // 0x8022754C: nop
    
            goto L_80227560;
    }
    // 0x8022754C: nop

L_80227550:
    // 0x80227550: beq         $v0, $a0, L_802275A8
    if (ctx->r2 == ctx->r4) {
        // 0x80227554: nop
    
            goto L_802275A8;
    }
    // 0x80227554: nop

    // 0x80227558: j           L_802275C8
    // 0x8022755C: nop

        goto L_802275C8;
    // 0x8022755C: nop

L_80227560:
    // 0x80227560: jal         0x80054578
    // 0x80227564: nop

    func_80054578_2F978(rdram, ctx);
        goto after_4;
    // 0x80227564: nop

    after_4:
    // 0x80227568: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x8022756C: jal         0x8004CB2C
    // 0x80227570: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x80227570: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_5:
    // 0x80227574: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022757C: jal         0x80036B00
    // 0x80227580: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_6;
    // 0x80227580: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80227584: jal         0x80227CC0
    // 0x80227588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80227CC0_ovl10(rdram, ctx);
        goto after_7;
    // 0x80227588: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
    // 0x8022758C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227590: jal         0x80227D20
    // 0x80227594: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80227D20_ovl10(rdram, ctx);
        goto after_8;
    // 0x80227594: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_8:
L_80227598:
    // 0x80227598: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022759C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802275A0: j           L_802275C8
    // 0x802275A4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_802275C8;
    // 0x802275A4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_802275A8:
    // 0x802275A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802275AC: jal         0x80070050
    // 0x802275B0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_9;
    // 0x802275B0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_9:
    // 0x802275B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802275B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802275BC: jal         0x80034844
    // 0x802275C0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_10;
    // 0x802275C0: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_10:
    // 0x802275C4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_802275C8:
    // 0x802275C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802275CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802275D0: jr          $ra
    // 0x802275D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802275D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80245094_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245098: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024509C: jal         0x8004F4F8
    // 0x802450A0: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802450A0: nop

    after_0:
    // 0x802450A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802450A8: jr          $ra
    // 0x802450AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802450AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233DDC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233DDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233DE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233DE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233DEC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233DF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233DF4: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x80233DF8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233DFC: jal         0x8004D5D4
    // 0x80233E00: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80233E00: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80233E04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233E08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80233E0C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80233E10: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80233E14: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80233E18: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80233E1C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80233E20: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80233E24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233E28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233E2C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80233E30: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80233E34: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80233E38: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80233E3C: jal         0x80050294
    // 0x80233E40: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80233E40: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    after_1:
    // 0x80233E44: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233E48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233E4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233E54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233E58: jr          $ra
    // 0x80233E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80248B84_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80248B88: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x80248B8C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80248B90: lbu         $a1, 0x3($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X3);
    // 0x80248B94: lh          $v1, 0x56($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X56);
    // 0x80248B98: addiu       $v0, $zero, 0x1FF
    ctx->r2 = ADD32(0, 0X1FF);
    // 0x80248B9C: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x80248BA0: addiu       $a2, $zero, 0x1FF
    ctx->r6 = ADD32(0, 0X1FF);
    // 0x80248BA4: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
    // 0x80248BA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80248BAC: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80248BB0: addiu       $a1, $a1, -0x400
    ctx->r5 = ADD32(ctx->r5, -0X400);
    // 0x80248BB4: andi        $a1, $a1, 0xC00
    ctx->r5 = ctx->r5 & 0XC00;
    // 0x80248BB8: jal         0x8004FD60
    // 0x80248BBC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FD60_2B160(rdram, ctx);
        goto after_0;
    // 0x80248BBC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80248BC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80248BC4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80248BC8: jr          $ra
    // 0x80248BCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80248BCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231208_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023120C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231210: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231218: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023121C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231220: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80231224: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231228: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8023122C: jal         0x802332E8
    // 0x80231230: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_802332E8_ovl10(rdram, ctx);
        goto after_0;
    // 0x80231230: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231234: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80231238: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023123C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231240: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80231244: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231248: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8023124C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231250: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231254: jr          $ra
    // 0x80231258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802311D8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802311D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802311DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802311E0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802311E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802311E8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802311EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802311F0: lw          $v0, 0xFCC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XFCC);
    // 0x802311F4: jalr        $v0
    // 0x802311F8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802311F8: nop

    after_0:
    // 0x802311FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231200: jr          $ra
    // 0x80231204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80248030_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248030: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80248034: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80248038: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024803C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80248040: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80248044: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80248048: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8024804C: addiu       $s2, $s1, 0x3
    ctx->r18 = ADD32(ctx->r17, 0X3);
    // 0x80248050: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80248054: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80248058: jal         0x8004D5D4
    // 0x8024805C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8024805C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x80248060: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80248064: jal         0x8002C654
    // 0x80248068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80248068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024806C: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x80248070: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80248074: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x80248078: jal         0x800319B4
    // 0x8024807C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8024807C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x80248080: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80248084: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80248088: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8024808C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80248090: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80248094: addiu       $v0, $v0, 0x231C
    ctx->r2 = ADD32(ctx->r2, 0X231C);
    // 0x80248098: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x8024809C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802480A0: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x802480A4: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x802480A8: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x802480AC: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x802480B0: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x802480B4: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x802480B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802480BC: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x802480C0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802480C4: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x802480C8: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802480CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802480D0: lui         $v1, 0x501
    ctx->r3 = S32(0X501 << 16);
    // 0x802480D4: bne         $v0, $v1, L_80248158
    if (ctx->r2 != ctx->r3) {
        // 0x802480D8: nop
    
            goto L_80248158;
    }
    // 0x802480D8: nop

    // 0x802480DC: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x802480E0: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x802480E4: jal         0x8006033C
    // 0x802480E8: addiu       $a0, $s0, 0x681
    ctx->r4 = ADD32(ctx->r16, 0X681);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x802480E8: addiu       $a0, $s0, 0x681
    ctx->r4 = ADD32(ctx->r16, 0X681);
    after_3:
    // 0x802480EC: beq         $v0, $zero, L_80248104
    if (ctx->r2 == 0) {
        // 0x802480F0: nop
    
            goto L_80248104;
    }
    // 0x802480F0: nop

    // 0x802480F4: jal         0x8004F684
    // 0x802480F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x802480F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802480FC: j           L_80248158
    // 0x80248100: nop

        goto L_80248158;
    // 0x80248100: nop

L_80248104:
    // 0x80248104: jal         0x8006033C
    // 0x80248108: addiu       $a0, $s0, 0x682
    ctx->r4 = ADD32(ctx->r16, 0X682);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80248108: addiu       $a0, $s0, 0x682
    ctx->r4 = ADD32(ctx->r16, 0X682);
    after_5:
    // 0x8024810C: beq         $v0, $zero, L_8024813C
    if (ctx->r2 == 0) {
        // 0x80248110: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8024813C;
    }
    // 0x80248110: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80248114: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80248118: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8024811C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80248120: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80248124: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80248128: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8024812C: jal         0x8004D5D4
    // 0x80248130: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_6;
    // 0x80248130: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    after_6:
    // 0x80248134: j           L_80248158
    // 0x80248138: nop

        goto L_80248158;
    // 0x80248138: nop

L_8024813C:
    // 0x8024813C: jal         0x8006033C
    // 0x80248140: addiu       $a0, $s0, 0x683
    ctx->r4 = ADD32(ctx->r16, 0X683);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80248140: addiu       $a0, $s0, 0x683
    ctx->r4 = ADD32(ctx->r16, 0X683);
    after_7:
    // 0x80248144: beq         $v0, $zero, L_80248158
    if (ctx->r2 == 0) {
        // 0x80248148: nop
    
            goto L_80248158;
    }
    // 0x80248148: nop

    // 0x8024814C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80248150: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80248154: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_80248158:
    // 0x80248158: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8024815C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80248160: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80248164: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80248168: jr          $ra
    // 0x8024816C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024816C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80231508_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231508: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023150C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231510: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231514: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231518: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023151C: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80231520: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80231524: jal         0x8004FA7C
    // 0x80231528: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80231528: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8023152C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80231530: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80231534: bne         $v0, $zero, L_80231558
    if (ctx->r2 != 0) {
        // 0x80231538: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80231558;
    }
    // 0x80231538: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023153C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80231540: jal         0x80233298
    // 0x80231544: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_80233298_ovl10(rdram, ctx);
        goto after_1;
    // 0x80231544: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x80231548: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023154C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80231550: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231554: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80231558:
    // 0x80231558: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023155C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80231560: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231564: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80231568: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023156C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231570: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231574: jr          $ra
    // 0x80231578: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231578: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230D50_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230D54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230D58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230D5C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230D60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230D64: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230D68: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230D6C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80230D70: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230D74: beq         $v1, $zero, L_80230D84
    if (ctx->r3 == 0) {
        // 0x80230D78: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80230D84;
    }
    // 0x80230D78: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230D7C: j           L_80230D8C
    // 0x80230D80: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_80230D8C;
    // 0x80230D80: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80230D84:
    // 0x80230D84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230D88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80230D8C:
    // 0x80230D8C: jal         0x8004D5D4
    // 0x80230D90: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230D90: nop

    after_0:
    // 0x80230D94: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80230D98: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80230D9C: bne         $a0, $v0, L_80230DAC
    if (ctx->r4 != ctx->r2) {
        // 0x80230DA0: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_80230DAC;
    }
    // 0x80230DA0: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80230DA4: j           L_80230E20
    // 0x80230DA8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_80230E20;
    // 0x80230DA8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_80230DAC:
    // 0x80230DAC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80230DB0: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80230DB4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80230DB8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230DBC: bne         $v1, $zero, L_80230E20
    if (ctx->r3 != 0) {
        // 0x80230DC0: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80230E20;
    }
    // 0x80230DC0: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80230DC4: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80230DC8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80230DCC: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80230DD0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80230DD4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230DD8: bne         $v1, $zero, L_80230E20
    if (ctx->r3 != 0) {
        // 0x80230DDC: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80230E20;
    }
    // 0x80230DDC: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80230DE0: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80230DE4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80230DE8: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x80230DEC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80230DF0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230DF4: bne         $v1, $zero, L_80230E20
    if (ctx->r3 != 0) {
        // 0x80230DF8: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80230E20;
    }
    // 0x80230DF8: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80230DFC: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x80230E00: bnel        $a0, $v0, L_80230E20
    if (ctx->r4 != ctx->r2) {
        // 0x80230E04: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80230E20;
    }
    goto skip_0;
    // 0x80230E04: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x80230E08: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x80230E0C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230E10: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230E14: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230E18: j           L_80230E28
    // 0x80230E1C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_80230E28;
    // 0x80230E1C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_80230E20:
    // 0x80230E20: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230E24: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_80230E28:
    // 0x80230E28: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230E2C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230E30: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230E34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230E38: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80230E3C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80230E40: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80230E44: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80230E48: bne         $v0, $zero, L_80230E54
    if (ctx->r2 != 0) {
        // 0x80230E4C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80230E54;
    }
    // 0x80230E4C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80230E50: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80230E54:
    // 0x80230E54: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80230E58: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x80230E5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230E60: jal         0x8009A3B4
    // 0x80230E64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230E64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80230E68: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80230E6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230E74: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80230E78: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80230E7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230E80: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80230E84: addiu       $v0, $v0, 0xF40
    ctx->r2 = ADD32(ctx->r2, 0XF40);
    // 0x80230E88: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80230E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230E90: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80230E94: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80230E98: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80230E9C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80230EA0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80230EA4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80230EA8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80230EAC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80230EB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230EB4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230EB8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80230EBC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80230EC0: jal         0x80050294
    // 0x80230EC4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80230EC4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80230EC8: jal         0x80230EE4
    // 0x80230ECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230EE4_ovl10(rdram, ctx);
        goto after_3;
    // 0x80230ECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80230ED0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230ED4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230ED8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230EDC: jr          $ra
    // 0x80230EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230EE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80249E88_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249E88: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80249E8C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80249E90: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249E94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80249E98: lh          $v0, 0x23A0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X23A0);
    // 0x80249E9C: blez        $v0, L_80249EF0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80249EA0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80249EF0;
    }
    // 0x80249EA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80249EA4: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_80249EA8:
    // 0x80249EA8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80249EAC: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x80249EB0: lbu         $v0, 0x14($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X14);
    // 0x80249EB4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249EB8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80249EBC: sb          $v0, 0x35C0($at)
    MEM_B(0X35C0, ctx->r1) = ctx->r2;
    // 0x80249EC0: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80249EC4: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80249EC8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80249ECC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80249ED0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80249ED4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80249ED8: lh          $v1, 0x23A0($at)
    ctx->r3 = MEM_H(ctx->r1, 0X23A0);
    // 0x80249EDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80249EE0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80249EE4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80249EE8: bne         $v0, $zero, L_80249EA8
    if (ctx->r2 != 0) {
        // 0x80249EEC: sll         $v1, $a1, 16
        ctx->r3 = S32(ctx->r5 << 16);
            goto L_80249EA8;
    }
    // 0x80249EEC: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_80249EF0:
    // 0x80249EF0: jr          $ra
    // 0x80249EF4: nop

    TRACE_RETURN()
    return;
    // 0x80249EF4: nop

;}
RECOMP_FUNC void func_8022B354_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B358: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B35C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B364: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B368: bne         $v0, $zero, L_8022B380
    if (ctx->r2 != 0) {
        // 0x8022B36C: nop
    
            goto L_8022B380;
    }
    // 0x8022B36C: nop

    // 0x8022B370: jal         0x80229F50
    // 0x8022B374: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80229F50_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B374: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
    // 0x8022B378: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B37C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B380:
    // 0x8022B380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B384: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B388: jr          $ra
    // 0x8022B38C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B38C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802363D0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802363D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802363D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802363D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802363DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802363E0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802363E4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802363E8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802363EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802363F0: beq         $v1, $a0, L_8023644C
    if (ctx->r3 == ctx->r4) {
        // 0x802363F4: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_8023644C;
    }
    // 0x802363F4: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x802363F8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802363FC: beql        $v0, $zero, L_80236414
    if (ctx->r2 == 0) {
        // 0x80236400: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236414;
    }
    goto skip_0;
    // 0x80236400: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236404: beq         $v1, $zero, L_8023642C
    if (ctx->r3 == 0) {
        // 0x80236408: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023642C;
    }
    // 0x80236408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023640C: j           L_802365AC
    // 0x80236410: nop

        goto L_802365AC;
    // 0x80236410: nop

L_80236414:
    // 0x80236414: beq         $v1, $v0, L_8023653C
    if (ctx->r3 == ctx->r2) {
        // 0x80236418: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023653C;
    }
    // 0x80236418: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023641C: beq         $v1, $v0, L_8023656C
    if (ctx->r3 == ctx->r2) {
        // 0x80236420: nop
    
            goto L_8023656C;
    }
    // 0x80236420: nop

    // 0x80236424: j           L_802365AC
    // 0x80236428: nop

        goto L_802365AC;
    // 0x80236428: nop

L_8023642C:
    // 0x8023642C: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80236430: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236434: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236438: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023643C: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x80236440: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80236444: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80236448: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_8023644C:
    // 0x8023644C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80236450: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80236454: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236458: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8023645C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80236460: lw          $a1, 0x5644($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5644);
    // 0x80236464: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80236468: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8023646C: jal         0x8004F820
    // 0x80236470: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80236470: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80236474: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80236478: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023647C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80236480: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80236484: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80236488: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023648C: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x80236490: addiu       $s2, $s2, 0x5644
    ctx->r18 = ADD32(ctx->r18, 0X5644);
    // 0x80236494: bne         $v0, $zero, L_80236530
    if (ctx->r2 != 0) {
        // 0x80236498: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80236530;
    }
    // 0x80236498: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023649C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802364A0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802364A4: bltz        $v0, L_802365AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x802364A8: nop
    
            goto L_802365AC;
    }
    // 0x802364A8: nop

    // 0x802364AC: bne         $v0, $zero, L_802365AC
    if (ctx->r2 != 0) {
        // 0x802364B0: nop
    
            goto L_802365AC;
    }
    // 0x802364B0: nop

    // 0x802364B4: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802364B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802364BC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802364C0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802364C4: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x802364C8: andi        $v0, $v0, 0x50
    ctx->r2 = ctx->r2 & 0X50;
    // 0x802364CC: beq         $v0, $zero, L_802365AC
    if (ctx->r2 == 0) {
        // 0x802364D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802365AC;
    }
    // 0x802364D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802364D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802364D8: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x802364DC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802364E0: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x802364E4: lw          $a0, 0x44($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X44);
    // 0x802364E8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802364EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802364F0: jal         0x8009A3B4
    // 0x802364F4: addiu       $a0, $a0, 0x54
    ctx->r4 = ADD32(ctx->r4, 0X54);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802364F4: addiu       $a0, $a0, 0x54
    ctx->r4 = ADD32(ctx->r4, 0X54);
    after_1:
    // 0x802364F8: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x802364FC: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80236500: addiu       $v0, $v0, -0xD0
    ctx->r2 = ADD32(ctx->r2, -0XD0);
    // 0x80236504: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x80236508: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023650C: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80236510: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236514: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80236518: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023651C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80236520: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80236524: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x80236528: j           L_802365AC
    // 0x8023652C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
        goto L_802365AC;
    // 0x8023652C: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_80236530:
    // 0x80236530: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80236534: j           L_802365AC
    // 0x80236538: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_802365AC;
    // 0x80236538: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023653C:
    // 0x8023653C: lw          $v0, 0x36C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X36C);
    // 0x80236540: lb          $v0, 0xD($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XD);
    // 0x80236544: bne         $v0, $a0, L_802365AC
    if (ctx->r2 != ctx->r4) {
        // 0x80236548: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802365AC;
    }
    // 0x80236548: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023654C: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80236550: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236554: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236558: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023655C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80236560: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80236564: j           L_802365A8
    // 0x80236568: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
        goto L_802365A8;
    // 0x80236568: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
L_8023656C:
    // 0x8023656C: lhu         $v0, 0x32C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X32C);
    // 0x80236570: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236574: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80236578: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023657C: bgez        $v0, L_802365AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80236580: nop
    
            goto L_802365AC;
    }
    // 0x80236580: nop

    // 0x80236584: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80236588: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8023658C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80236590: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80236594: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80236598: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023659C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802365A0: andi        $v1, $v1, 0xED
    ctx->r3 = ctx->r3 & 0XED;
    // 0x802365A4: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
L_802365A8:
    // 0x802365A8: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_802365AC:
    // 0x802365AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802365B0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802365B4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802365B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802365BC: jr          $ra
    // 0x802365C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802365C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023F814_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F814: lhu         $v0, 0x442($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X442);
    // 0x8023F818: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023F81C: lbu         $a1, 0x52D($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X52D);
    // 0x8023F820: lbu         $v1, 0x52C($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X52C);
    // 0x8023F824: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    // 0x8023F828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F82C: beq         $a1, $v0, L_8023F898
    if (ctx->r5 == ctx->r2) {
        // 0x8023F830: addiu       $t0, $a0, 0x440
        ctx->r8 = ADD32(ctx->r4, 0X440);
            goto L_8023F898;
    }
    // 0x8023F830: addiu       $t0, $a0, 0x440
    ctx->r8 = ADD32(ctx->r4, 0X440);
    // 0x8023F834: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8023F838: beql        $v0, $zero, L_8023F850
    if (ctx->r2 == 0) {
        // 0x8023F83C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023F850;
    }
    goto skip_0;
    // 0x8023F83C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023F840: beq         $a1, $zero, L_8023F868
    if (ctx->r5 == 0) {
        // 0x8023F844: andi        $a0, $v1, 0xFF
        ctx->r4 = ctx->r3 & 0XFF;
            goto L_8023F868;
    }
    // 0x8023F844: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8023F848: j           L_8023F9A0
    // 0x8023F84C: nop

        goto L_8023F9A0;
    // 0x8023F84C: nop

L_8023F850:
    // 0x8023F850: beq         $a1, $v0, L_8023F920
    if (ctx->r5 == ctx->r2) {
        // 0x8023F854: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023F920;
    }
    // 0x8023F854: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023F858: beq         $a1, $v0, L_8023F954
    if (ctx->r5 == ctx->r2) {
        // 0x8023F85C: andi        $a0, $v1, 0xFF
        ctx->r4 = ctx->r3 & 0XFF;
            goto L_8023F954;
    }
    // 0x8023F85C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8023F860: j           L_8023F9A0
    // 0x8023F864: nop

        goto L_8023F9A0;
    // 0x8023F864: nop

L_8023F868:
    // 0x8023F868: xori        $v1, $a0, 0x1
    ctx->r3 = ctx->r4 ^ 0X1;
    // 0x8023F86C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023F870: xori        $v0, $a0, 0x5
    ctx->r2 = ctx->r4 ^ 0X5;
    // 0x8023F874: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023F878: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023F87C: bne         $v1, $zero, L_8023F998
    if (ctx->r3 != 0) {
        // 0x8023F880: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F998;
    }
    // 0x8023F880: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F884: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023F888: beq         $a0, $v0, L_8023F998
    if (ctx->r4 == ctx->r2) {
        // 0x8023F88C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F998;
    }
    // 0x8023F88C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F890: j           L_8023F980
    // 0x8023F894: xori        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 ^ 0X4;
        goto L_8023F980;
    // 0x8023F894: xori        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 ^ 0X4;
L_8023F898:
    // 0x8023F898: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x8023F89C: beq         $a1, $zero, L_8023F8B8
    if (ctx->r5 == 0) {
        // 0x8023F8A0: sltiu       $a2, $a2, 0x1
        ctx->r6 = ctx->r6 < 0X1 ? 1 : 0;
            goto L_8023F8B8;
    }
    // 0x8023F8A0: sltiu       $a2, $a2, 0x1
    ctx->r6 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x8023F8A4: xori        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 ^ 0X4;
    // 0x8023F8A8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023F8AC: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8023F8B0: beql        $v0, $zero, L_8023F8C0
    if (ctx->r2 == 0) {
        // 0x8023F8B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023F8C0;
    }
    goto skip_1;
    // 0x8023F8B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
L_8023F8B8:
    // 0x8023F8B8: j           L_8023F99C
    // 0x8023F8BC: sb          $zero, 0x52E($a0)
    MEM_B(0X52E, ctx->r4) = 0;
        goto L_8023F99C;
    // 0x8023F8BC: sb          $zero, 0x52E($a0)
    MEM_B(0X52E, ctx->r4) = 0;
L_8023F8C0:
    // 0x8023F8C0: beq         $a1, $v0, L_8023F8DC
    if (ctx->r5 == ctx->r2) {
        // 0x8023F8C4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023F8DC;
    }
    // 0x8023F8C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023F8C8: xori        $v0, $a1, 0x5
    ctx->r2 = ctx->r5 ^ 0X5;
    // 0x8023F8CC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023F8D0: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8023F8D4: beq         $v0, $zero, L_8023F8E4
    if (ctx->r2 == 0) {
        // 0x8023F8D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023F8E4;
    }
    // 0x8023F8D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023F8DC:
    // 0x8023F8DC: j           L_8023F99C
    // 0x8023F8E0: sb          $v0, 0x52E($a0)
    MEM_B(0X52E, ctx->r4) = ctx->r2;
        goto L_8023F99C;
    // 0x8023F8E0: sb          $v0, 0x52E($a0)
    MEM_B(0X52E, ctx->r4) = ctx->r2;
L_8023F8E4:
    // 0x8023F8E4: xori        $v1, $a1, 0x3
    ctx->r3 = ctx->r5 ^ 0X3;
    // 0x8023F8E8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023F8EC: xori        $v0, $a1, 0xE
    ctx->r2 = ctx->r5 ^ 0XE;
    // 0x8023F8F0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023F8F4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023F8F8: bne         $v1, $zero, L_8023F918
    if (ctx->r3 != 0) {
        // 0x8023F8FC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023F918;
    }
    // 0x8023F8FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023F900: xori        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 ^ 0X8;
    // 0x8023F904: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023F908: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8023F90C: beq         $v0, $zero, L_8023F9A0
    if (ctx->r2 == 0) {
        // 0x8023F910: nop
    
            goto L_8023F9A0;
    }
    // 0x8023F910: nop

    // 0x8023F914: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023F918:
    // 0x8023F918: j           L_8023F99C
    // 0x8023F91C: sb          $v0, 0x52E($a0)
    MEM_B(0X52E, ctx->r4) = ctx->r2;
        goto L_8023F99C;
    // 0x8023F91C: sb          $v0, 0x52E($a0)
    MEM_B(0X52E, ctx->r4) = ctx->r2;
L_8023F920:
    // 0x8023F920: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8023F924: xori        $v1, $a0, 0x1
    ctx->r3 = ctx->r4 ^ 0X1;
    // 0x8023F928: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023F92C: xori        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 ^ 0X4;
    // 0x8023F930: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023F934: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023F938: bne         $v1, $zero, L_8023F998
    if (ctx->r3 != 0) {
        // 0x8023F93C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F998;
    }
    // 0x8023F93C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F940: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023F944: beq         $a0, $v0, L_8023F998
    if (ctx->r4 == ctx->r2) {
        // 0x8023F948: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F998;
    }
    // 0x8023F948: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F94C: j           L_8023F980
    // 0x8023F950: xori        $v0, $a0, 0x5
    ctx->r2 = ctx->r4 ^ 0X5;
        goto L_8023F980;
    // 0x8023F950: xori        $v0, $a0, 0x5
    ctx->r2 = ctx->r4 ^ 0X5;
L_8023F954:
    // 0x8023F954: xori        $v1, $a0, 0x1
    ctx->r3 = ctx->r4 ^ 0X1;
    // 0x8023F958: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8023F95C: xori        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 ^ 0X4;
    // 0x8023F960: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023F964: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023F968: bne         $v1, $zero, L_8023F998
    if (ctx->r3 != 0) {
        // 0x8023F96C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F998;
    }
    // 0x8023F96C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F970: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023F974: beq         $a0, $v0, L_8023F998
    if (ctx->r4 == ctx->r2) {
        // 0x8023F978: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F998;
    }
    // 0x8023F978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F97C: xori        $v0, $a0, 0x8
    ctx->r2 = ctx->r4 ^ 0X8;
L_8023F980:
    // 0x8023F980: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023F984: sltiu       $v1, $a2, 0x1
    ctx->r3 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x8023F988: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023F98C: beq         $v0, $zero, L_8023F9A0
    if (ctx->r2 == 0) {
        // 0x8023F990: nop
    
            goto L_8023F9A0;
    }
    // 0x8023F990: nop

    // 0x8023F994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023F998:
    // 0x8023F998: sb          $v0, 0xEE($t0)
    MEM_B(0XEE, ctx->r8) = ctx->r2;
L_8023F99C:
    // 0x8023F99C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8023F9A0:
    // 0x8023F9A0: jr          $ra
    // 0x8023F9A4: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    TRACE_RETURN()
    return;
    // 0x8023F9A4: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
;}
RECOMP_FUNC void func_80249678_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249678: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024967C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80249680: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80249684: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80249688: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8024968C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80249690: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80249694: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80249698: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x8024969C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802496A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_802496A4:
    // 0x802496A4: jal         0x8004EEAC
    // 0x802496A8: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x802496A8: nop

    after_0:
    // 0x802496AC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802496B0: beq         $s0, $zero, L_80249708
    if (ctx->r16 == 0) {
        // 0x802496B4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80249708;
    }
    // 0x802496B4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802496B8: addiu       $a1, $s3, 0x38
    ctx->r5 = ADD32(ctx->r19, 0X38);
    // 0x802496BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802496C0: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x802496C4: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    // 0x802496C8: jal         0x8009A3B4
    // 0x802496CC: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802496CC: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    after_1:
    // 0x802496D0: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x802496D4: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x802496D8: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x802496DC: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x802496E0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802496E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802496E8: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x802496EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802496F0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802496F4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802496F8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802496FC: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x80249700: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x80249704: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
L_80249708:
    // 0x80249708: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8024970C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80249710: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80249714: bne         $v0, $zero, L_802496A4
    if (ctx->r2 != 0) {
        // 0x80249718: nop
    
            goto L_802496A4;
    }
    // 0x80249718: nop

    // 0x8024971C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80249720: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80249724: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80249728: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8024972C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80249730: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249734: jr          $ra
    // 0x80249738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80249738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8024973C: nop

;}
RECOMP_FUNC void func_80247690_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247690: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80247694: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80247698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024769C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802476A0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802476A4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802476A8: jal         0x80071060
    // 0x802476AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x802476AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802476B0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x802476B4: lhu         $a0, 0x2C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2C);
    // 0x802476B8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802476BC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802476C0: sh          $v1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r3;
    // 0x802476C4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802476C8: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x802476CC: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x802476D0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802476D4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x802476D8: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x802476DC: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x802476E0: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x802476E4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802476E8: lb          $a0, 0x4B21($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4B21);
    // 0x802476EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802476F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802476F4: bne         $a0, $zero, L_80247700
    if (ctx->r4 != 0) {
        // 0x802476F8: sh          $v0, 0x34($sp)
        MEM_H(0X34, ctx->r29) = ctx->r2;
            goto L_80247700;
    }
    // 0x802476F8: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x802476FC: addiu       $t0, $zero, 0x1000
    ctx->r8 = ADD32(0, 0X1000);
L_80247700:
    // 0x80247700: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80247704: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80247708: beq         $v0, $zero, L_8024774C
    if (ctx->r2 == 0) {
        // 0x8024770C: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_8024774C;
    }
    // 0x8024770C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80247710: lui         $t0, 0x800
    ctx->r8 = S32(0X800 << 16);
    // 0x80247714: ori         $t0, $t0, 0x5
    ctx->r8 = ctx->r8 | 0X5;
    // 0x80247718: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8024771C: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80247720: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80247724: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80247728: ori         $v0, $zero, 0xA000
    ctx->r2 = 0 | 0XA000;
    // 0x8024772C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80247730: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80247734: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80247738: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8024773C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80247740: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80247744: j           L_802477A4
    // 0x80247748: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
        goto L_802477A4;
    // 0x80247748: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
L_8024774C:
    // 0x8024774C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80247750: beq         $v0, $zero, L_8024776C
    if (ctx->r2 == 0) {
        // 0x80247754: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_8024776C;
    }
    // 0x80247754: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80247758: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x8024775C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80247760: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80247764: j           L_80247780
    // 0x80247768: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_80247780;
    // 0x80247768: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8024776C:
    // 0x8024776C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80247770: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x80247774: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80247778: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8024777C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_80247780:
    // 0x80247780: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80247784: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80247788: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8024778C: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80247790: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80247794: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80247798: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x8024779C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802477A0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_802477A4:
    // 0x802477A4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x802477A8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x802477AC: jal         0x80051F9C
    // 0x802477B0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x802477B0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x802477B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x802477B8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802477BC: jr          $ra
    // 0x802477C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x802477C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80239280_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239284: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239288: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023928C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80239290: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80239294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239298: jal         0x8009A3B4
    // 0x8023929C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023929C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802392A0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802392A4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802392A8: jal         0x8009A3B4
    // 0x802392AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802392AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802392B0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802392B4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802392B8: jal         0x8009A3B4
    // 0x802392BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802392BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802392C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802392C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802392C8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802392CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802392D0: lw          $v0, 0x1670($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1670);
    // 0x802392D4: jalr        $v0
    // 0x802392D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802392D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802392DC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802392E0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802392E4: beq         $v0, $zero, L_802392FC
    if (ctx->r2 == 0) {
        // 0x802392E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802392FC;
    }
    // 0x802392E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802392EC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x802392F0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802392F4: jal         0x8003B564
    // 0x802392F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x802392F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_802392FC:
    // 0x802392FC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80239300: beq         $v0, $zero, L_80239318
    if (ctx->r2 == 0) {
        // 0x80239304: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80239318;
    }
    // 0x80239304: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239308: jal         0x8005044C
    // 0x8023930C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8023930C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80239310: j           L_8023931C
    // 0x80239314: nop

        goto L_8023931C;
    // 0x80239314: nop

L_80239318:
    // 0x80239318: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023931C:
    // 0x8023931C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239324: jr          $ra
    // 0x80239328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802450B0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802450B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802450B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802450B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802450BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802450C0: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x802450C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802450C8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802450CC: jal         0x800540D0
    // 0x802450D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x802450D0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802450D4: beq         $v0, $zero, L_802450EC
    if (ctx->r2 == 0) {
        // 0x802450D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802450EC;
    }
    // 0x802450D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802450DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802450E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802450E4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802450E8: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_802450EC:
    // 0x802450EC: lhu         $v0, 0xE0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE0);
    // 0x802450F0: addiu       $v0, $v0, 0x22
    ctx->r2 = ADD32(ctx->r2, 0X22);
    // 0x802450F4: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x802450F8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x802450FC: jal         0x800324B4
    // 0x80245100: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80245100: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80245104: lh          $a0, 0xE2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XE2);
    // 0x80245108: lh          $v1, 0xE4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XE4);
    // 0x8024510C: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x80245110: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80245114: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80245118: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8024511C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245120: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80245124: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245128: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8024512C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80245130: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80245134: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80245138: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8024513C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x80245140: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
    // 0x80245144: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80245148: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8024514C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80245150: bltzl       $v0, L_80245158
    if (SIGNED(ctx->r2) < 0) {
        // 0x80245154: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80245158;
    }
    goto skip_0;
    // 0x80245154: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_80245158:
    // 0x80245158: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x8024515C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80245160: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80245164: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80245168: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8024516C: jal         0x8004DBA0
    // 0x80245170: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x80245170: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x80245174: jal         0x80040F30
    // 0x80245178: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x80245178: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8024517C: bne         $v0, $zero, L_80245234
    if (ctx->r2 != 0) {
        // 0x80245180: nop
    
            goto L_80245234;
    }
    // 0x80245180: nop

    // 0x80245184: jal         0x8003E934
    // 0x80245188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x80245188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8024518C: lhu         $v1, 0xE2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE2);
    // 0x80245190: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80245194: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80245198: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024519C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802451A0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802451A4: bltzl       $v0, L_802451C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x802451A8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802451C0;
    }
    goto skip_1;
    // 0x802451A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x802451AC: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802451B0: beq         $v0, $zero, L_802451D0
    if (ctx->r2 == 0) {
        // 0x802451B4: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_802451D0;
    }
    // 0x802451B4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802451B8: j           L_802451F4
    // 0x802451BC: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
        goto L_802451F4;
    // 0x802451BC: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
L_802451C0:
    // 0x802451C0: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802451C4: bnel        $v0, $zero, L_802451F4
    if (ctx->r2 != 0) {
        // 0x802451C8: sh          $a0, 0x12($s1)
        MEM_H(0X12, ctx->r17) = ctx->r4;
            goto L_802451F4;
    }
    goto skip_2;
    // 0x802451C8: sh          $a0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r4;
    skip_2:
    // 0x802451CC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_802451D0:
    // 0x802451D0: bltz        $v0, L_802451E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802451D4: nop
    
            goto L_802451E8;
    }
    // 0x802451D4: nop

    // 0x802451D8: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x802451DC: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x802451E0: j           L_802451F4
    // 0x802451E4: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
        goto L_802451F4;
    // 0x802451E4: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_802451E8:
    // 0x802451E8: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x802451EC: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x802451F0: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
L_802451F4:
    // 0x802451F4: jal         0x800324B4
    // 0x802451F8: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x802451F8: lh          $a0, 0x10($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X10);
    after_5:
    // 0x802451FC: lh          $a2, 0x12($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X12);
    // 0x80245200: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x80245204: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80245208: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8024520C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80245210: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80245214: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80245218: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024521C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80245220: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80245224: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80245228: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8024522C: jal         0x8004DD04
    // 0x80245230: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x80245230: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_6:
L_80245234:
    // 0x80245234: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80245238: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024523C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80245240: jr          $ra
    // 0x80245244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80245244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80244120_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244120: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80244124: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80244128: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8024412C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80244130: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80244134: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80244138: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8024413C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80244140: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x80244144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80244148: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8024414C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x80244150: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80244154: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80244158: sw          $v1, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r3;
    // 0x8024415C: sw          $v0, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->r2;
    // 0x80244160: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x80244164: jal         0x8004DD04
    // 0x80244168: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80244168: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    after_0:
    // 0x8024416C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80244170: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x80244174: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80244178: lhu         $a3, 0x18($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X18);
    // 0x8024417C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80244180: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80244184: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80244188: sh          $v1, 0x90($s2)
    MEM_H(0X90, ctx->r18) = ctx->r3;
    // 0x8024418C: sh          $v0, 0x92($s2)
    MEM_H(0X92, ctx->r18) = ctx->r2;
    // 0x80244190: jal         0x8009A3B4
    // 0x80244194: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80244194: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    after_1:
    // 0x80244198: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8024419C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802441A0: jal         0x8009A3B4
    // 0x802441A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802441A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802441A8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x802441AC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802441B0: beq         $v0, $zero, L_802441EC
    if (ctx->r2 == 0) {
        // 0x802441B4: nop
    
            goto L_802441EC;
    }
    // 0x802441B4: nop

    // 0x802441B8: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x802441BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802441C0: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802441C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802441C8: lhu         $v1, 0x2048($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2048);
    // 0x802441CC: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x802441D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802441D4: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x802441D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802441DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802441E0: lhu         $v0, 0x204A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X204A);
    // 0x802441E4: j           L_8024421C
    // 0x802441E8: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
        goto L_8024421C;
    // 0x802441E8: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_802441EC:
    // 0x802441EC: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x802441F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802441F4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802441F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802441FC: lhu         $v1, 0x2030($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2030);
    // 0x80244200: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80244204: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80244208: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x8024420C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80244210: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80244214: lhu         $v0, 0x2032($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2032);
    // 0x80244218: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_8024421C:
    // 0x8024421C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80244220: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80244224: sh          $v1, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r3;
    // 0x80244228: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8024422C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80244230: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80244234: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80244238: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8024423C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80244240: jr          $ra
    // 0x80244244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80244244: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022CCF4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CCF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CCF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CCFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CD00: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022CD04: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CD08: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CD0C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CD10: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CD14: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022CD18: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022CD1C: beq         $v1, $zero, L_8022CD38
    if (ctx->r3 == 0) {
        // 0x8022CD20: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022CD38;
    }
    // 0x8022CD20: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022CD24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD28: beq         $v1, $v0, L_8022CD70
    if (ctx->r3 == ctx->r2) {
        // 0x8022CD2C: nop
    
            goto L_8022CD70;
    }
    // 0x8022CD2C: nop

    // 0x8022CD30: j           L_8022CED8
    // 0x8022CD34: nop

        goto L_8022CED8;
    // 0x8022CD34: nop

L_8022CD38:
    // 0x8022CD38: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022CD3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CD44: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022CD48: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022CD4C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022CD50: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022CD54: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022CD58: beq         $v1, $zero, L_8022CD68
    if (ctx->r3 == 0) {
        // 0x8022CD5C: sb          $v0, 0xAC($s0)
        MEM_B(0XAC, ctx->r16) = ctx->r2;
            goto L_8022CD68;
    }
    // 0x8022CD5C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CD60: j           L_8022CD6C
    // 0x8022CD64: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
        goto L_8022CD6C;
    // 0x8022CD64: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
L_8022CD68:
    // 0x8022CD68: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
L_8022CD6C:
    // 0x8022CD6C: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
L_8022CD70:
    // 0x8022CD70: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8022CD74: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022CD78: bne         $v0, $zero, L_8022CD8C
    if (ctx->r2 != 0) {
        // 0x8022CD7C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022CD8C;
    }
    // 0x8022CD7C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CD80: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022CD84: j           L_8022CED8
    // 0x8022CD88: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_8022CED8;
    // 0x8022CD88: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022CD8C:
    // 0x8022CD8C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CD90: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022CD94: jal         0x8004F820
    // 0x8022CD98: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022CD98: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x8022CD9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CDA0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CDA4: bltzl       $v0, L_8022CDAC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022CDA8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022CDAC;
    }
    goto skip_0;
    // 0x8022CDA8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022CDAC:
    // 0x8022CDAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CDB0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CDB4: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022CDB8: beq         $v0, $zero, L_8022CDF8
    if (ctx->r2 == 0) {
        // 0x8022CDBC: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022CDF8;
    }
    // 0x8022CDBC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022CDC0: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x8022CDC4: lw          $v1, 0x34($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X34);
    // 0x8022CDC8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022CDCC: beq         $v0, $zero, L_8022CDF8
    if (ctx->r2 == 0) {
        // 0x8022CDD0: nop
    
            goto L_8022CDF8;
    }
    // 0x8022CDD0: nop

    // 0x8022CDD4: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022CDD8: bne         $v0, $zero, L_8022CDE4
    if (ctx->r2 != 0) {
        // 0x8022CDDC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022CDE4;
    }
    // 0x8022CDDC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CDE0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022CDE4:
    // 0x8022CDE4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CDE8: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022CDEC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022CDF0: j           L_8022CED8
    // 0x8022CDF4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022CED8;
    // 0x8022CDF4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022CDF8:
    // 0x8022CDF8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CDFC: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022CE00: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x8022CE04: jal         0x8004F820
    // 0x8022CE08: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022CE08: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x8022CE0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CE14: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022CE18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CE1C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CE20: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022CE24: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022CE28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CE2C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CE30: jal         0x8004DA90
    // 0x8022CE34: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022CE34: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022CE38: jal         0x80040F30
    // 0x8022CE3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022CE3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CE40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CE44: jal         0x8003E934
    // 0x8022CE48: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022CE48: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x8022CE4C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CE50: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022CE54: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022CE58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CE5C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022CE60: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022CE64: bne         $v1, $zero, L_8022CEA0
    if (ctx->r3 != 0) {
        // 0x8022CE68: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022CEA0;
    }
    // 0x8022CE68: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022CE6C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022CE70: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022CE74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CE78: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022CE7C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CE80: jal         0x8009A3B4
    // 0x8022CE84: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022CE84: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_5:
    // 0x8022CE88: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022CE8C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022CE90: jal         0x8009A3B4
    // 0x8022CE94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022CE94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022CE98: j           L_8022CED8
    // 0x8022CE9C: nop

        goto L_8022CED8;
    // 0x8022CE9C: nop

L_8022CEA0:
    // 0x8022CEA0: andi        $v0, $s1, 0xF00
    ctx->r2 = ctx->r17 & 0XF00;
    // 0x8022CEA4: beq         $v0, $zero, L_8022CEC0
    if (ctx->r2 == 0) {
        // 0x8022CEA8: nop
    
            goto L_8022CEC0;
    }
    // 0x8022CEA8: nop

    // 0x8022CEAC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CEB0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CEB4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CEB8: j           L_8022CED8
    // 0x8022CEBC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022CED8;
    // 0x8022CEBC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022CEC0:
    // 0x8022CEC0: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x8022CEC4: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8022CEC8: bne         $v0, $zero, L_8022CED8
    if (ctx->r2 != 0) {
        // 0x8022CECC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022CED8;
    }
    // 0x8022CECC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022CED0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CED4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022CED8:
    // 0x8022CED8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022CEDC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CEE0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CEE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CEE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CEEC: jr          $ra
    // 0x8022CEF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CEF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80244248_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244248: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024424C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80244250: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80244254: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80244258: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8024425C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80244260: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80244264: jal         0x80040F30
    // 0x80244268: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80244268: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8024426C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80244270: beq         $s2, $zero, L_802443E0
    if (ctx->r18 == 0) {
        // 0x80244274: andi        $v0, $s2, 0x1000
        ctx->r2 = ctx->r18 & 0X1000;
            goto L_802443E0;
    }
    // 0x80244274: andi        $v0, $s2, 0x1000
    ctx->r2 = ctx->r18 & 0X1000;
    // 0x80244278: beq         $v0, $zero, L_80244378
    if (ctx->r2 == 0) {
        // 0x8024427C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80244378;
    }
    // 0x8024427C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80244280: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80244284: bltzl       $v0, L_802442A0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80244288: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802442A0;
    }
    goto skip_0;
    // 0x80244288: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8024428C: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x80244290: bnel        $v0, $zero, L_802442B0
    if (ctx->r2 != 0) {
        // 0x80244294: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_802442B0;
    }
    goto skip_1;
    // 0x80244294: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x80244298: j           L_802442CC
    // 0x8024429C: nop

        goto L_802442CC;
    // 0x8024429C: nop

L_802442A0:
    // 0x802442A0: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x802442A4: beq         $v0, $zero, L_802442CC
    if (ctx->r2 == 0) {
        // 0x802442A8: nop
    
            goto L_802442CC;
    }
    // 0x802442A8: nop

    // 0x802442AC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_802442B0:
    // 0x802442B0: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x802442B4: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x802442B8: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x802442BC: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x802442C0: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x802442C4: j           L_8024430C
    // 0x802442C8: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
        goto L_8024430C;
    // 0x802442C8: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_802442CC:
    // 0x802442CC: lh          $v1, 0x46($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X46);
    // 0x802442D0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802442D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802442D8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x802442DC: bltzl       $v0, L_802442E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x802442E0: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_802442E4;
    }
    goto skip_2;
    // 0x802442E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_802442E4:
    // 0x802442E4: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x802442E8: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x802442EC: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x802442F0: lhu         $v1, 0x48($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X48);
    // 0x802442F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802442F8: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x802442FC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80244300: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80244304: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80244308: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
L_8024430C:
    // 0x8024430C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80244310: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80244314: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80244318: bne         $v1, $v0, L_80244398
    if (ctx->r3 != ctx->r2) {
        // 0x8024431C: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80244398;
    }
    // 0x8024431C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x80244320: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80244324: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80244328: bne         $v1, $v0, L_80244398
    if (ctx->r3 != ctx->r2) {
        // 0x8024432C: nop
    
            goto L_80244398;
    }
    // 0x8024432C: nop

    // 0x80244330: jal         0x8004F568
    // 0x80244334: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x80244334: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80244338: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x8024433C: jal         0x8002A33C
    // 0x80244340: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80244340: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80244344: jal         0x8004F144
    // 0x80244348: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80244348: nop

    after_3:
    // 0x8024434C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80244350: beq         $s0, $zero, L_80244364
    if (ctx->r16 == 0) {
        // 0x80244354: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80244364;
    }
    // 0x80244354: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80244358: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x8024435C: jal         0x8009A3B4
    // 0x80244360: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80244360: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
L_80244364:
    // 0x80244364: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80244368: jal         0x8024453C
    // 0x8024436C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8024453C_ovl10(rdram, ctx);
        goto after_5;
    // 0x8024436C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80244370: j           L_802443D8
    // 0x80244374: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
        goto L_802443D8;
    // 0x80244374: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_80244378:
    // 0x80244378: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8024437C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80244380: bne         $v1, $v0, L_80244398
    if (ctx->r3 != ctx->r2) {
        // 0x80244384: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_80244398;
    }
    // 0x80244384: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x80244388: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8024438C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80244390: beq         $v1, $v0, L_802443A0
    if (ctx->r3 == ctx->r2) {
        // 0x80244394: nop
    
            goto L_802443A0;
    }
    // 0x80244394: nop

L_80244398:
    // 0x80244398: jal         0x8002A33C
    // 0x8024439C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8024439C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_802443A0:
    // 0x802443A0: jal         0x8004F144
    // 0x802443A4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x802443A4: nop

    after_7:
    // 0x802443A8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802443AC: beq         $s0, $zero, L_802443D4
    if (ctx->r16 == 0) {
        // 0x802443B0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802443D4;
    }
    // 0x802443B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802443B4: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x802443B8: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x802443BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802443C0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802443C4: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x802443C8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802443CC: jal         0x8009A3B4
    // 0x802443D0: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802443D0: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_8:
L_802443D4:
    // 0x802443D4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_802443D8:
    // 0x802443D8: jal         0x80040834
    // 0x802443DC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_9;
    // 0x802443DC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
L_802443E0:
    // 0x802443E0: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x802443E4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802443E8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802443EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802443F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802443F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802443F8: jr          $ra
    // 0x802443FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802443FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230428_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230428: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023042C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80230430: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230434: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80230438: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023043C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80230440: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80230444: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80230448: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023044C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80230450: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80230454: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80230458: beq         $v0, $zero, L_80230734
    if (ctx->r2 == 0) {
        // 0x8023045C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80230734;
    }
    // 0x8023045C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80230460: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230464: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230468: addu        $at, $at, $v0
    gpr jr_addend_80230470 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023046C: lw          $v0, 0x2E68($at)
    ctx->r2 = ADD32(ctx->r1, 0X2E68);
    // 0x80230470: jr          $v0
    // 0x80230474: nop

    switch (jr_addend_80230470 >> 2) {
        case 0: goto L_802305C8; break;
        case 1: goto L_80230634; break;
        case 2: goto L_80230634; break;
        case 3: goto L_80230714; break;
        case 4: goto L_80230478; break;
        default: switch_error(__func__, 0x80230470, 0x80252E68);
    }
    // 0x80230474: nop

L_80230478:
    // 0x80230478: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8023047C: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80230480: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230484: bne         $v0, $zero, L_80230590
    if (ctx->r2 != 0) {
        // 0x80230488: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80230590;
    }
    // 0x80230488: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023048C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80230490: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x80230494: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230498: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023049C: lbu         $v0, 0x9D0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X9D0);
    // 0x802304A0: bne         $v1, $v0, L_8023057C
    if (ctx->r3 != ctx->r2) {
        // 0x802304A4: nop
    
            goto L_8023057C;
    }
    // 0x802304A4: nop

    // 0x802304A8: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x802304AC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802304B0: beq         $v0, $zero, L_8023057C
    if (ctx->r2 == 0) {
        // 0x802304B4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8023057C;
    }
    // 0x802304B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802304B8: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x802304BC: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x802304C0: lui         $s4, 0x8025
    ctx->r20 = S32(0X8025 << 16);
    // 0x802304C4: addiu       $s4, $s4, 0x9D4
    ctx->r20 = ADD32(ctx->r20, 0X9D4);
    // 0x802304C8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_802304CC:
    // 0x802304CC: jal         0x8004F144
    // 0x802304D0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802304D0: nop

    after_0:
    // 0x802304D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802304D8: beq         $v1, $zero, L_8023056C
    if (ctx->r3 == 0) {
        // 0x802304DC: nop
    
            goto L_8023056C;
    }
    // 0x802304DC: nop

    // 0x802304E0: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x802304E4: sb          $s5, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r21;
    // 0x802304E8: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x802304EC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802304F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802304F4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802304F8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802304FC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80230500: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230504: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80230508: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x8023050C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80230510: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80230514: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230518: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8023051C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80230520: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80230524: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230528: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023052C: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x80230530: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x80230534: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80230538: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023053C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230540: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80230544: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80230548: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8023054C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230550: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80230554: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x80230558: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023055C: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80230560: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80230564: bne         $v0, $zero, L_802304CC
    if (ctx->r2 != 0) {
        // 0x80230568: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_802304CC;
    }
    // 0x80230568: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_8023056C:
    // 0x8023056C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80230570: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230574: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80230578: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023057C:
    // 0x8023057C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x80230580: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230584: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80230588: j           L_80230734
    // 0x8023058C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_80230734;
    // 0x8023058C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_80230590:
    // 0x80230590: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230594: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80230598: jal         0x8004FEA0
    // 0x8023059C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x8023059C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802305A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802305A4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x802305A8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802305AC: beq         $v0, $zero, L_802305C0
    if (ctx->r2 == 0) {
        // 0x802305B0: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_802305C0;
    }
    // 0x802305B0: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x802305B4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802305B8: j           L_802305C4
    // 0x802305BC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_802305C4;
    // 0x802305BC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802305C0:
    // 0x802305C0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802305C4:
    // 0x802305C4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802305C8:
    // 0x802305C8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802305CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802305D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802305D4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x802305D8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802305DC: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x802305E0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802305E4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802305E8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x802305EC: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x802305F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802305F4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802305F8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802305FC: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80230600: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230604: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x80230608: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x8023060C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80230610: andi        $v0, $v0, 0xFFB3
    ctx->r2 = ctx->r2 & 0XFFB3;
    // 0x80230614: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80230618: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8023061C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230620: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80230624: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80230628: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023062C: jal         0x8002A33C
    // 0x80230630: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80230630: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_2:
L_80230634:
    // 0x80230634: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80230638: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023063C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230640: jal         0x8004DA90
    // 0x80230644: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80230644: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80230648: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023064C: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80230650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230654: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230658: jal         0x80040F30
    // 0x8023065C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x8023065C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_4:
    // 0x80230660: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230664: beq         $v1, $zero, L_80230734
    if (ctx->r3 == 0) {
        // 0x80230668: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80230734;
    }
    // 0x80230668: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8023066C: beq         $v0, $zero, L_80230688
    if (ctx->r2 == 0) {
        // 0x80230670: andi        $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 & 0X1000;
            goto L_80230688;
    }
    // 0x80230670: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80230674: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80230678: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8023067C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230680: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80230684: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
L_80230688:
    // 0x80230688: beq         $v0, $zero, L_80230734
    if (ctx->r2 == 0) {
        // 0x8023068C: nop
    
            goto L_80230734;
    }
    // 0x8023068C: nop

    // 0x80230690: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80230694: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80230698: bne         $v0, $zero, L_802306EC
    if (ctx->r2 != 0) {
        // 0x8023069C: addiu       $a0, $zero, 0xDA
        ctx->r4 = ADD32(0, 0XDA);
            goto L_802306EC;
    }
    // 0x8023069C: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    // 0x802306A0: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x802306A4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x802306A8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802306AC: beq         $v0, $zero, L_802306DC
    if (ctx->r2 == 0) {
        // 0x802306B0: nop
    
            goto L_802306DC;
    }
    // 0x802306B0: nop

    // 0x802306B4: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x802306B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802306BC: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802306C0: beq         $v0, $zero, L_802306DC
    if (ctx->r2 == 0) {
        // 0x802306C4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802306DC;
    }
    // 0x802306C4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802306C8: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
    // 0x802306CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802306D0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802306D4: jal         0x8007A290
    // 0x802306D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8007A290_55690(rdram, ctx);
        goto after_5;
    // 0x802306D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_802306DC:
    // 0x802306DC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802306E0: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802306E4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x802306E8: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
L_802306EC:
    // 0x802306EC: jal         0x8002A33C
    // 0x802306F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802306F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x802306F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802306F8: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x802306FC: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80230700: addiu       $v1, $zero, -0x200
    ctx->r3 = ADD32(0, -0X200);
    // 0x80230704: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80230708: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023070C: j           L_80230734
    // 0x80230710: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80230734;
    // 0x80230710: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230714:
    // 0x80230714: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80230718: bne         $v0, $zero, L_80230734
    if (ctx->r2 != 0) {
        // 0x8023071C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80230734;
    }
    // 0x8023071C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230720: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80230724: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80230728: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023072C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230730: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80230734:
    // 0x80230734: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80230738: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8023073C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230740: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230744: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80230748: beq         $v0, $zero, L_80230768
    if (ctx->r2 == 0) {
        // 0x8023074C: nop
    
            goto L_80230768;
    }
    // 0x8023074C: nop

    // 0x80230750: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80230754: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80230758: bne         $v0, $zero, L_80230768
    if (ctx->r2 != 0) {
        // 0x8023075C: nop
    
            goto L_80230768;
    }
    // 0x8023075C: nop

    // 0x80230760: jal         0x8004F418
    // 0x80230764: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x80230764: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80230768:
    // 0x80230768: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023076C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80230770: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80230774: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80230778: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023077C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80230780: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230784: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230788: jr          $ra
    // 0x8023078C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023078C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023B790_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B790: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023B794: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023B798: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B79C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023B7A0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023B7A4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8023B7A8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023B7AC: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023B7B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023B7B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023B7B8: jal         0x8009A3B4
    // 0x8023B7BC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023B7BC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B7C0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023B7C4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023B7C8: jal         0x8009A3B4
    // 0x8023B7CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023B7CC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023B7D0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023B7D4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023B7D8: jal         0x8009A3B4
    // 0x8023B7DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023B7DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023B7E0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023B7E4: jal         0x800A3450
    // 0x8023B7E8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023B7E8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023B7EC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023B7F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B7F4: sh          $v0, 0x32A($s0)
    MEM_H(0X32A, ctx->r16) = ctx->r2;
    // 0x8023B7F8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023B7FC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B800: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B804: lw          $v0, 0x17A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X17A0);
    // 0x8023B808: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8023B80C: jalr        $v0
    // 0x8023B810: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8023B810: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8023B814: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8023B818: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8023B81C: bne         $v0, $zero, L_8023B830
    if (ctx->r2 != 0) {
        // 0x8023B820: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B830;
    }
    // 0x8023B820: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B824: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023B828: bne         $a1, $v0, L_8023B860
    if (ctx->r5 != ctx->r2) {
        // 0x8023B82C: nop
    
            goto L_8023B860;
    }
    // 0x8023B82C: nop

L_8023B830:
    // 0x8023B830: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023B834: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023B838: beq         $v0, $a1, L_8023B850
    if (ctx->r2 == ctx->r5) {
        // 0x8023B83C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023B850;
    }
    // 0x8023B83C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B840: jal         0x80050294
    // 0x8023B844: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8023B844: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8023B848: j           L_8023B8B4
    // 0x8023B84C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8023B8B4;
    // 0x8023B84C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023B850:
    // 0x8023B850: jal         0x8005044C
    // 0x8023B854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023B854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023B858: j           L_8023B8B4
    // 0x8023B85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8023B8B4;
    // 0x8023B85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023B860:
    // 0x8023B860: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023B864: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x8023B868: addiu       $s2, $s2, -0x3D90
    ctx->r18 = ADD32(ctx->r18, -0X3D90);
    // 0x8023B86C: beq         $v0, $a1, L_8023B884
    if (ctx->r2 == ctx->r5) {
        // 0x8023B870: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023B884;
    }
    // 0x8023B870: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B874: jal         0x800502EC
    // 0x8023B878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_7;
    // 0x8023B878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8023B87C: j           L_8023B88C
    // 0x8023B880: nop

        goto L_8023B88C;
    // 0x8023B880: nop

L_8023B884:
    // 0x8023B884: jal         0x800504EC
    // 0x8023B888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_8;
    // 0x8023B888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8023B88C:
    // 0x8023B88C: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8023B890: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8023B894: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x8023B898: bne         $v0, $zero, L_8023B8A4
    if (ctx->r2 != 0) {
        // 0x8023B89C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8023B8A4;
    }
    // 0x8023B89C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8023B8A0: lhu         $v1, 0x58($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X58);
L_8023B8A4:
    // 0x8023B8A4: sh          $v1, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r3;
    // 0x8023B8A8: jal         0x80051248
    // 0x8023B8AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_9;
    // 0x8023B8AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8023B8B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023B8B4:
    // 0x8023B8B4: jal         0x80040F30
    // 0x8023B8B8: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_10;
    // 0x8023B8B8: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    after_10:
    // 0x8023B8BC: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x8023B8C0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8023B8C4: bne         $v0, $zero, L_8023B8F0
    if (ctx->r2 != 0) {
        // 0x8023B8C8: addiu       $a0, $s0, 0x180
        ctx->r4 = ADD32(ctx->r16, 0X180);
            goto L_8023B8F0;
    }
    // 0x8023B8C8: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
    // 0x8023B8CC: jal         0x8003E934
    // 0x8023B8D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_11;
    // 0x8023B8D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8023B8D4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023B8D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023B8DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023B8E0: bne         $v1, $v0, L_8023B8F0
    if (ctx->r3 != ctx->r2) {
        // 0x8023B8E4: addiu       $a0, $s0, 0x180
        ctx->r4 = ADD32(ctx->r16, 0X180);
            goto L_8023B8F0;
    }
    // 0x8023B8E4: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
    // 0x8023B8E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B8EC: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
L_8023B8F0:
    // 0x8023B8F0: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8023B8F4: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x8023B8F8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x8023B8FC: addiu       $v0, $s1, 0x20
    ctx->r2 = ADD32(ctx->r17, 0X20);
    // 0x8023B900: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023B904: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023B908: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x8023B90C: lhu         $a3, 0x10($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X10);
    // 0x8023B910: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B914: srl         $v1, $v1, 2
    ctx->r3 = S32(U32(ctx->r3) >> 2);
    // 0x8023B918: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x8023B91C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8023B920: lui         $v0, 0x588
    ctx->r2 = S32(0X588 << 16);
    // 0x8023B924: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8023B928: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8023B92C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8023B930: jal         0x80051E18
    // 0x8023B934: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x8023B934: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    after_12:
    // 0x8023B938: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
    // 0x8023B93C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023B940: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023B944: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023B948: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023B94C: jr          $ra
    // 0x8023B950: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023B950: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80228B8C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228B90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B98: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228B9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228BA0: lb          $v1, 0x2($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X2);
    // 0x80228BA4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80228BA8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80228BAC: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x80228BB0: beq         $v0, $zero, L_80228FA8
    if (ctx->r2 == 0) {
        // 0x80228BB4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228FA8;
    }
    // 0x80228BB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228BB8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228BBC: addu        $at, $at, $v0
    gpr jr_addend_80228BC4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228BC0: lw          $v0, 0x2BF8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2BF8);
    // 0x80228BC4: jr          $v0
    // 0x80228BC8: nop

    switch (jr_addend_80228BC4 >> 2) {
        case 0: goto L_80228BCC; break;
        case 1: goto L_80228BD8; break;
        case 2: goto L_80228C34; break;
        case 3: goto L_80228C64; break;
        case 4: goto L_80228CB0; break;
        case 5: goto L_80228D00; break;
        case 6: goto L_80228D44; break;
        case 7: goto L_80228D70; break;
        case 8: goto L_80228DB4; break;
        case 9: goto L_80228DE0; break;
        case 10: goto L_80228E24; break;
        case 11: goto L_80228E50; break;
        case 12: goto L_80228E94; break;
        case 13: goto L_80228EC0; break;
        case 14: goto L_80228F20; break;
        case 15: goto L_80228F5C; break;
        case 16: goto L_80228FA8; break;
        default: switch_error(__func__, 0x80228BC4, 0x80252BF8);
    }
    // 0x80228BC8: nop

L_80228BCC:
    // 0x80228BCC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228BD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228BD4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80228BD8:
    // 0x80228BD8: addiu       $a0, $s1, 0x428
    ctx->r4 = ADD32(ctx->r17, 0X428);
    // 0x80228BDC: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x80228BE0: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    // 0x80228BE4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228BE8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80228BEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228BF0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80228BF4: lui         $v0, 0x1602
    ctx->r2 = S32(0X1602 << 16);
    // 0x80228BF8: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x80228BFC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228C00: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x80228C04: lui         $v0, 0xF9C1
    ctx->r2 = S32(0XF9C1 << 16);
    // 0x80228C08: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    // 0x80228C0C: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80228C10: jal         0x8004DD04
    // 0x80228C14: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80228C14: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    after_0:
    // 0x80228C18: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80228C1C: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x80228C20: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228C24: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x80228C28: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x80228C2C: j           L_80228F74
    // 0x80228C30: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_80228F74;
    // 0x80228C30: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80228C34:
    // 0x80228C34: jal         0x8006033C
    // 0x80228C38: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80228C38: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_1:
    // 0x80228C3C: beq         $v0, $zero, L_80228FA8
    if (ctx->r2 == 0) {
        // 0x80228C40: nop
    
            goto L_80228FA8;
    }
    // 0x80228C40: nop

    // 0x80228C44: jal         0x80060590
    // 0x80228C48: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80228C48: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_2:
    // 0x80228C4C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80228C50: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80228C54: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228C58: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80228C5C: j           L_80228F78
    // 0x80228C60: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
        goto L_80228F78;
    // 0x80228C60: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
L_80228C64:
    // 0x80228C64: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80228C68: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228C6C: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80228C70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228C74: bne         $v0, $zero, L_80228CA0
    if (ctx->r2 != 0) {
        // 0x80228C78: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228CA0;
    }
    // 0x80228C78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228C7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228C80: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80228C84: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228C88: jal         0x800616FC
    // 0x80228C8C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80228C8C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_3:
    // 0x80228C90: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228C94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C98: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80228C9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80228CA0:
    // 0x80228CA0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80228CA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228CA8: j           L_80228FA0
    // 0x80228CAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
        goto L_80228FA0;
    // 0x80228CAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80228CB0:
    // 0x80228CB0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228CB4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228CB8: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80228CBC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228CC0: beq         $v0, $zero, L_80228CCC
    if (ctx->r2 == 0) {
        // 0x80228CC4: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80228CCC;
    }
    // 0x80228CC4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80228CC8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80228CCC:
    // 0x80228CCC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228CD0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228CD4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228CD8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228CDC: bne         $v0, $zero, L_80228FA8
    if (ctx->r2 != 0) {
        // 0x80228CE0: nop
    
            goto L_80228FA8;
    }
    // 0x80228CE0: nop

    // 0x80228CE4: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x80228CE8: bgez        $v0, L_80228FA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228CEC: nop
    
            goto L_80228FA8;
    }
    // 0x80228CEC: nop

    // 0x80228CF0: jal         0x800600F8
    // 0x80228CF4: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_4;
    // 0x80228CF4: nop

    after_4:
    // 0x80228CF8: j           L_80228F74
    // 0x80228CFC: nop

        goto L_80228F74;
    // 0x80228CFC: nop

L_80228D00:
    // 0x80228D00: addiu       $a0, $s1, 0x428
    ctx->r4 = ADD32(ctx->r17, 0X428);
    // 0x80228D04: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    // 0x80228D08: lui         $v0, 0x1602
    ctx->r2 = S32(0X1602 << 16);
    // 0x80228D0C: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x80228D10: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80228D14: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x80228D18: lui         $v0, 0xFA61
    ctx->r2 = S32(0XFA61 << 16);
    // 0x80228D1C: jal         0x8004DD04
    // 0x80228D20: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80228D20: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    after_5:
    // 0x80228D24: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    // 0x80228D28: addiu       $v0, $zero, 0x6D0
    ctx->r2 = ADD32(0, 0X6D0);
    // 0x80228D2C: jal         0x8006036C
    // 0x80228D30: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80228D30: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    after_6:
    // 0x80228D34: jal         0x8006036C
    // 0x80228D38: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80228D38: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_7:
    // 0x80228D3C: j           L_80228F74
    // 0x80228D40: nop

        goto L_80228F74;
    // 0x80228D40: nop

L_80228D44:
    // 0x80228D44: jal         0x8006033C
    // 0x80228D48: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80228D48: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_8:
    // 0x80228D4C: beq         $v0, $zero, L_80228FA8
    if (ctx->r2 == 0) {
        // 0x80228D50: nop
    
            goto L_80228FA8;
    }
    // 0x80228D50: nop

    // 0x80228D54: jal         0x80060590
    // 0x80228D58: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x80228D58: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_9:
    // 0x80228D5C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228D60: jal         0x800616FC
    // 0x80228D64: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x80228D64: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_10:
    // 0x80228D68: j           L_80228F74
    // 0x80228D6C: nop

        goto L_80228F74;
    // 0x80228D6C: nop

L_80228D70:
    // 0x80228D70: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228D74: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228D78: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80228D7C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228D80: beq         $v0, $zero, L_80228D8C
    if (ctx->r2 == 0) {
        // 0x80228D84: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80228D8C;
    }
    // 0x80228D84: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80228D88: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80228D8C:
    // 0x80228D8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228D90: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228D94: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228D98: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228D9C: bne         $v0, $zero, L_80228FA8
    if (ctx->r2 != 0) {
        // 0x80228DA0: nop
    
            goto L_80228FA8;
    }
    // 0x80228DA0: nop

    // 0x80228DA4: jal         0x8006036C
    // 0x80228DA8: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x80228DA8: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_11:
    // 0x80228DAC: j           L_80228F74
    // 0x80228DB0: nop

        goto L_80228F74;
    // 0x80228DB0: nop

L_80228DB4:
    // 0x80228DB4: jal         0x8006033C
    // 0x80228DB8: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_12;
    // 0x80228DB8: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_12:
    // 0x80228DBC: beq         $v0, $zero, L_80228FA8
    if (ctx->r2 == 0) {
        // 0x80228DC0: nop
    
            goto L_80228FA8;
    }
    // 0x80228DC0: nop

    // 0x80228DC4: jal         0x80060590
    // 0x80228DC8: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_80060590_3B990(rdram, ctx);
        goto after_13;
    // 0x80228DC8: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_13:
    // 0x80228DCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228DD0: jal         0x800616FC
    // 0x80228DD4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_14;
    // 0x80228DD4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_14:
    // 0x80228DD8: j           L_80228F74
    // 0x80228DDC: nop

        goto L_80228F74;
    // 0x80228DDC: nop

L_80228DE0:
    // 0x80228DE0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228DE4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228DE8: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80228DEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228DF0: beq         $v0, $zero, L_80228DFC
    if (ctx->r2 == 0) {
        // 0x80228DF4: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80228DFC;
    }
    // 0x80228DF4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80228DF8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80228DFC:
    // 0x80228DFC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228E00: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228E04: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228E08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228E0C: bne         $v0, $zero, L_80228FA8
    if (ctx->r2 != 0) {
        // 0x80228E10: nop
    
            goto L_80228FA8;
    }
    // 0x80228E10: nop

    // 0x80228E14: jal         0x8006036C
    // 0x80228E18: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x80228E18: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_15:
    // 0x80228E1C: j           L_80228F74
    // 0x80228E20: nop

        goto L_80228F74;
    // 0x80228E20: nop

L_80228E24:
    // 0x80228E24: jal         0x8006033C
    // 0x80228E28: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_16;
    // 0x80228E28: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_16:
    // 0x80228E2C: beq         $v0, $zero, L_80228FA8
    if (ctx->r2 == 0) {
        // 0x80228E30: nop
    
            goto L_80228FA8;
    }
    // 0x80228E30: nop

    // 0x80228E34: jal         0x80060590
    // 0x80228E38: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_80060590_3B990(rdram, ctx);
        goto after_17;
    // 0x80228E38: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_17:
    // 0x80228E3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228E40: jal         0x800616FC
    // 0x80228E44: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_18;
    // 0x80228E44: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_18:
    // 0x80228E48: j           L_80228F74
    // 0x80228E4C: nop

        goto L_80228F74;
    // 0x80228E4C: nop

L_80228E50:
    // 0x80228E50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228E54: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228E58: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80228E5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228E60: beq         $v0, $zero, L_80228E6C
    if (ctx->r2 == 0) {
        // 0x80228E64: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80228E6C;
    }
    // 0x80228E64: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80228E68: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80228E6C:
    // 0x80228E6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228E70: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228E74: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228E78: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228E7C: bne         $v0, $zero, L_80228FA8
    if (ctx->r2 != 0) {
        // 0x80228E80: nop
    
            goto L_80228FA8;
    }
    // 0x80228E80: nop

    // 0x80228E84: jal         0x8006036C
    // 0x80228E88: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x80228E88: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_19:
    // 0x80228E8C: j           L_80228F74
    // 0x80228E90: nop

        goto L_80228F74;
    // 0x80228E90: nop

L_80228E94:
    // 0x80228E94: jal         0x8006033C
    // 0x80228E98: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_20;
    // 0x80228E98: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_20:
    // 0x80228E9C: beq         $v0, $zero, L_80228FA8
    if (ctx->r2 == 0) {
        // 0x80228EA0: addiu       $a0, $zero, 0x60A
        ctx->r4 = ADD32(0, 0X60A);
            goto L_80228FA8;
    }
    // 0x80228EA0: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    // 0x80228EA4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80228EA8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80228EAC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80228EB0: jal         0x80060590
    // 0x80228EB4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    func_80060590_3B990(rdram, ctx);
        goto after_21;
    // 0x80228EB4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    after_21:
    // 0x80228EB8: j           L_80228F74
    // 0x80228EBC: nop

        goto L_80228F74;
    // 0x80228EBC: nop

L_80228EC0:
    // 0x80228EC0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80228EC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228EC8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80228ECC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228ED0: beq         $v0, $zero, L_80228EEC
    if (ctx->r2 == 0) {
        // 0x80228ED4: nop
    
            goto L_80228EEC;
    }
    // 0x80228ED4: nop

    // 0x80228ED8: lhu         $v0, 0x442($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X442);
    // 0x80228EDC: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x80228EE0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228EE4: j           L_80228FA8
    // 0x80228EE8: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
        goto L_80228FA8;
    // 0x80228EE8: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
L_80228EEC:
    // 0x80228EEC: jal         0x8006036C
    // 0x80228EF0: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_22;
    // 0x80228EF0: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_22:
    // 0x80228EF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228EF8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80228EFC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80228F00: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x80228F04: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x80228F08: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80228F0C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228F10: jal         0x8006036C
    // 0x80228F14: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    func_8006036C_3B76C(rdram, ctx);
        goto after_23;
    // 0x80228F14: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    after_23:
    // 0x80228F18: jal         0x8006036C
    // 0x80228F1C: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    func_8006036C_3B76C(rdram, ctx);
        goto after_24;
    // 0x80228F1C: addiu       $a0, $zero, 0x60D
    ctx->r4 = ADD32(0, 0X60D);
    after_24:
L_80228F20:
    // 0x80228F20: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80228F24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228F28: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80228F2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F30: beq         $v0, $zero, L_80228F48
    if (ctx->r2 == 0) {
        // 0x80228F34: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228F48;
    }
    // 0x80228F34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228F38: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80228F3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228F40: j           L_80228FA0
    // 0x80228F44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
        goto L_80228FA0;
    // 0x80228F44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80228F48:
    // 0x80228F48: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228F4C: addiu       $v1, $zero, 0x5A
    ctx->r3 = ADD32(0, 0X5A);
    // 0x80228F50: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x80228F54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228F58: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80228F5C:
    // 0x80228F5C: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80228F60: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228F64: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80228F68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F6C: bne         $v0, $zero, L_80228F84
    if (ctx->r2 != 0) {
        // 0x80228F70: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228F84;
    }
    // 0x80228F70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80228F74:
    // 0x80228F74: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
L_80228F78:
    // 0x80228F78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228F7C: j           L_80228FA8
    // 0x80228F80: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
        goto L_80228FA8;
    // 0x80228F80: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80228F84:
    // 0x80228F84: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x80228F88: lhu         $v0, 0x442($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X442);
    // 0x80228F8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228F90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228F94: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80228F98: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228F9C: sh          $v0, 0x442($a0)
    MEM_H(0X442, ctx->r4) = ctx->r2;
L_80228FA0:
    // 0x80228FA0: jal         0x8004DB18
    // 0x80228FA4: nop

    func_8004DB18_28F18(rdram, ctx);
        goto after_25;
    // 0x80228FA4: nop

    after_25:
L_80228FA8:
    // 0x80228FA8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228FAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228FB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228FB4: jr          $ra
    // 0x80228FB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228FB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B5A4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B5A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B5A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B5AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B5B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B5B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B5B8: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8023B5BC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8023B5C0: bne         $v1, $v0, L_8023B5CC
    if (ctx->r3 != ctx->r2) {
        // 0x8023B5C4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8023B5CC;
    }
    // 0x8023B5C4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023B5C8: sh          $v0, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = ctx->r2;
L_8023B5CC:
    // 0x8023B5CC: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x8023B5D0: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x8023B5D4: beql        $v0, $zero, L_8023B5DC
    if (ctx->r2 == 0) {
        // 0x8023B5D8: sh          $zero, 0xB4($s0)
        MEM_H(0XB4, ctx->r16) = 0;
            goto L_8023B5DC;
    }
    goto skip_0;
    // 0x8023B5D8: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    skip_0:
L_8023B5DC:
    // 0x8023B5DC: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023B5E0: bne         $v0, $zero, L_8023B624
    if (ctx->r2 != 0) {
        // 0x8023B5E4: slti        $v0, $v0, 0xA
        ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
            goto L_8023B624;
    }
    // 0x8023B5E4: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x8023B5E8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8023B5EC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023B5F0: lui         $v0, 0x543
    ctx->r2 = S32(0X543 << 16);
    // 0x8023B5F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023B5F8: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8023B5FC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023B600: lui         $v0, 0x11A0
    ctx->r2 = S32(0X11A0 << 16);
    // 0x8023B604: jal         0x8004DD04
    // 0x8023B608: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x8023B608: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B60C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023B610: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8023B614: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    // 0x8023B618: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B61C: j           L_8023B6B4
    // 0x8023B620: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
        goto L_8023B6B4;
    // 0x8023B620: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_8023B624:
    // 0x8023B624: bne         $v0, $zero, L_8023B6B4
    if (ctx->r2 != 0) {
        // 0x8023B628: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023B6B4;
    }
    // 0x8023B628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B62C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023B630: lhu         $v1, 0xB4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB4);
    // 0x8023B634: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    // 0x8023B638: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B63C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023B640: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B644: jal         0x8004DA90
    // 0x8023B648: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023B648: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023B64C: jal         0x8004F144
    // 0x8023B650: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8023B650: nop

    after_2:
    // 0x8023B654: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023B658: beq         $s1, $zero, L_8023B6B4
    if (ctx->r17 == 0) {
        // 0x8023B65C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B6B4;
    }
    // 0x8023B65C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B660: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023B664: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8023B668: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8023B66C: jal         0x800A3450
    // 0x8023B670: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023B670: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_3:
    // 0x8023B674: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8023B678: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023B67C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023B680: addiu       $v1, $v1, -0xF
    ctx->r3 = ADD32(ctx->r3, -0XF);
    // 0x8023B684: jal         0x800A3450
    // 0x8023B688: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8023B688: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    after_4:
    // 0x8023B68C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8023B690: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023B694: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023B698: jal         0x800A3450
    // 0x8023B69C: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8023B69C: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    after_5:
    // 0x8023B6A0: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x8023B6A4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023B6A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023B6AC: addiu       $v1, $v1, -0xF
    ctx->r3 = ADD32(ctx->r3, -0XF);
    // 0x8023B6B0: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
L_8023B6B4:
    // 0x8023B6B4: jal         0x8005044C
    // 0x8023B6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8023B6B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023B6BC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023B6C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B6C4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8023B6C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B6CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B6D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B6D4: jr          $ra
    // 0x8023B6D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B6D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024CB04_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CB04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024CB08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024CB0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024CB10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024CB14: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8024CB18: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x8024CB1C: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8024CB20: blez        $a0, L_8024CC14
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8024CB24: lui         $v0, 0x5555
        ctx->r2 = S32(0X5555 << 16);
            goto L_8024CC14;
    }
    // 0x8024CB24: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x8024CB28: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x8024CB2C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8024CB30: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8024CB34: mfhi        $a1
    ctx->r5 = hi;
    // 0x8024CB38: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x8024CB3C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8024CB40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024CB44: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8024CB48: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024CB4C: bne         $v0, $zero, L_8024CB6C
    if (ctx->r2 != 0) {
        // 0x8024CB50: nop
    
            goto L_8024CB6C;
    }
    // 0x8024CB50: nop

    // 0x8024CB54: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x8024CB58: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8024CB5C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8024CB60: beq         $v0, $zero, L_8024CB6C
    if (ctx->r2 == 0) {
        // 0x8024CB64: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_8024CB6C;
    }
    // 0x8024CB64: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x8024CB68: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_8024CB6C:
    // 0x8024CB6C: jal         0x800A3450
    // 0x8024CB70: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8024CB70: nop

    after_0:
    // 0x8024CB74: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024CB78: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CB7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CB80: jal         0x800A3450
    // 0x8024CB84: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024CB84: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024CB88: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8024CB8C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8024CB90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CB94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CB98: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x8024CB9C: bne         $a0, $zero, L_8024CBBC
    if (ctx->r4 != 0) {
        // 0x8024CBA0: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_8024CBBC;
    }
    // 0x8024CBA0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8024CBA4: jal         0x800A3450
    // 0x8024CBA8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024CBA8: nop

    after_2:
    // 0x8024CBAC: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CBB0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CBB4: j           L_8024CBD0
    // 0x8024CBB8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_8024CBD0;
    // 0x8024CBB8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_8024CBBC:
    // 0x8024CBBC: jal         0x800A3450
    // 0x8024CBC0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8024CBC0: nop

    after_3:
    // 0x8024CBC4: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024CBC8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CBCC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_8024CBD0:
    // 0x8024CBD0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024CBD4: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x8024CBD8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8024CBDC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CBE0: bne         $v0, $zero, L_8024CBF4
    if (ctx->r2 != 0) {
        // 0x8024CBE4: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_8024CBF4;
    }
    // 0x8024CBE4: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x8024CBE8: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x8024CBEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024CBF0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8024CBF4:
    // 0x8024CBF4: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8024CBF8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x8024CBFC: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x8024CC00: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8024CC04: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8024CC08: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x8024CC0C: j           L_8024CC1C
    // 0x8024CC10: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_8024CC1C;
    // 0x8024CC10: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_8024CC14:
    // 0x8024CC14: jal         0x8004F5C4
    // 0x8024CC18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x8024CC18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8024CC1C:
    // 0x8024CC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024CC20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024CC24: jr          $ra
    // 0x8024CC28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024CC28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230790_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230790: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80230794: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230798: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023079C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802307A0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802307A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802307A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802307AC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802307B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802307B4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802307B8: beq         $v1, $zero, L_802307D4
    if (ctx->r3 == 0) {
        // 0x802307BC: addiu       $s3, $s1, 0x348
        ctx->r19 = ADD32(ctx->r17, 0X348);
            goto L_802307D4;
    }
    // 0x802307BC: addiu       $s3, $s1, 0x348
    ctx->r19 = ADD32(ctx->r17, 0X348);
    // 0x802307C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802307C4: beq         $v1, $v0, L_802307F8
    if (ctx->r3 == ctx->r2) {
        // 0x802307C8: addiu       $a0, $a0, 0x14
        ctx->r4 = ADD32(ctx->r4, 0X14);
            goto L_802307F8;
    }
    // 0x802307C8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x802307CC: j           L_802308B8
    // 0x802307D0: nop

        goto L_802308B8;
    // 0x802307D0: nop

L_802307D4:
    // 0x802307D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802307D8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802307DC: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x802307E0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x802307E4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802307E8: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x802307EC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802307F0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802307F4: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
L_802307F8:
    // 0x802307F8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802307FC: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x80230800: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80230804: jal         0x8004F820
    // 0x80230808: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80230808: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_0:
    // 0x8023080C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230810: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80230814: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80230818: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023081C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230820: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230824: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230828: jal         0x8004DA90
    // 0x8023082C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8023082C: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x80230830: jal         0x80040F30
    // 0x80230834: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80230834: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80230838: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023083C: jal         0x8003E934
    // 0x80230840: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80230840: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80230844: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80230848: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023084C: andi        $s0, $s0, 0xF00
    ctx->r16 = ctx->r16 & 0XF00;
    // 0x80230850: bne         $s0, $zero, L_80230870
    if (ctx->r16 != 0) {
        // 0x80230854: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_80230870;
    }
    // 0x80230854: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80230858: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8023085C: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x80230860: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80230864: slti        $v0, $v0, 0x11
    ctx->r2 = SIGNED(ctx->r2) < 0X11 ? 1 : 0;
    // 0x80230868: bne         $v0, $zero, L_802308A0
    if (ctx->r2 != 0) {
        // 0x8023086C: nop
    
            goto L_802308A0;
    }
    // 0x8023086C: nop

L_80230870:
    // 0x80230870: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230874: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x80230878: jal         0x8009A3B4
    // 0x8023087C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023087C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80230880: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80230884: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x80230888: jal         0x8009A3B4
    // 0x8023088C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023088C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80230890: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80230894: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80230898: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023089C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_802308A0:
    // 0x802308A0: lhu         $v0, 0x2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X2);
    // 0x802308A4: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x802308A8: bne         $v0, $zero, L_802308B8
    if (ctx->r2 != 0) {
        // 0x802308AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802308B8;
    }
    // 0x802308AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802308B0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x802308B4: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
L_802308B8:
    // 0x802308B8: lbu         $v0, 0xA4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA4);
    // 0x802308BC: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802308C0: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x802308C4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802308C8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802308CC: beq         $v1, $zero, L_802308DC
    if (ctx->r3 == 0) {
        // 0x802308D0: addiu       $a0, $zero, 0xD7
        ctx->r4 = ADD32(0, 0XD7);
            goto L_802308DC;
    }
    // 0x802308D0: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    // 0x802308D4: jal         0x8002A33C
    // 0x802308D8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802308D8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_802308DC:
    // 0x802308DC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802308E0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802308E4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802308E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802308EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802308F0: jr          $ra
    // 0x802308F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802308F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802417C8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802417C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802417CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802417D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802417D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802417D8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802417DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802417E0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802417E4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802417E8: beq         $v1, $s2, L_802418B8
    if (ctx->r3 == ctx->r18) {
        // 0x802417EC: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_802418B8;
    }
    // 0x802417EC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802417F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802417F4: beql        $v0, $zero, L_8024180C
    if (ctx->r2 == 0) {
        // 0x802417F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024180C;
    }
    goto skip_0;
    // 0x802417F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802417FC: beq         $v1, $zero, L_80241824
    if (ctx->r3 == 0) {
        // 0x80241800: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80241824;
    }
    // 0x80241800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241804: j           L_802419D8
    // 0x80241808: nop

        goto L_802419D8;
    // 0x80241808: nop

L_8024180C:
    // 0x8024180C: beq         $v1, $v0, L_80241908
    if (ctx->r3 == ctx->r2) {
        // 0x80241810: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80241908;
    }
    // 0x80241810: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80241814: beq         $v1, $v0, L_80241944
    if (ctx->r3 == ctx->r2) {
        // 0x80241818: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80241944;
    }
    // 0x80241818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024181C: j           L_802419D8
    // 0x80241820: nop

        goto L_802419D8;
    // 0x80241820: nop

L_80241824:
    // 0x80241824: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80241828: bne         $v0, $zero, L_802418E0
    if (ctx->r2 != 0) {
        // 0x8024182C: nop
    
            goto L_802418E0;
    }
    // 0x8024182C: nop

    // 0x80241830: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80241834: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80241838: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8024183C: jal         0x8004D5D4
    // 0x80241840: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80241840: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80241844: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241848: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8024184C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80241850: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80241854: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80241858: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8024185C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80241860: jal         0x8003E934
    // 0x80241864: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80241864: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80241868: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8024186C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80241870: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80241874: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241878: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8024187C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80241880: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80241884: jal         0x802420E4
    // 0x80241888: sb          $zero, 0x15($a0)
    MEM_B(0X15, ctx->r4) = 0;
    func_802420E4_ovl10(rdram, ctx);
        goto after_2;
    // 0x80241888: sb          $zero, 0x15($a0)
    MEM_B(0X15, ctx->r4) = 0;
    after_2:
    // 0x8024188C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80241890: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80241894: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80241898: lbu         $a1, 0x1A70($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1A70);
    // 0x8024189C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802418A0: jal         0x80050294
    // 0x802418A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802418A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802418A8: jal         0x80242260
    // 0x802418AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80242260_ovl10(rdram, ctx);
        goto after_4;
    // 0x802418AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802418B0: j           L_80241960
    // 0x802418B4: nop

        goto L_80241960;
    // 0x802418B4: nop

L_802418B8:
    // 0x802418B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802418BC: bne         $v0, $zero, L_802418E0
    if (ctx->r2 != 0) {
        // 0x802418C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802418E0;
    }
    // 0x802418C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802418C4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x802418C8: jal         0x80050294
    // 0x802418CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802418CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802418D0: jal         0x80242260
    // 0x802418D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80242260_ovl10(rdram, ctx);
        goto after_6;
    // 0x802418D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802418D8: j           L_80241960
    // 0x802418DC: nop

        goto L_80241960;
    // 0x802418DC: nop

L_802418E0:
    // 0x802418E0: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802418E4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802418E8: bne         $v0, $zero, L_802418F8
    if (ctx->r2 != 0) {
        // 0x802418EC: nop
    
            goto L_802418F8;
    }
    // 0x802418EC: nop

    // 0x802418F0: jal         0x80242260
    // 0x802418F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80242260_ovl10(rdram, ctx);
        goto after_7;
    // 0x802418F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_802418F8:
    // 0x802418F8: jal         0x8005044C
    // 0x802418FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x802418FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80241900: j           L_802419D8
    // 0x80241904: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802419D8;
    // 0x80241904: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80241908:
    // 0x80241908: lbu         $v0, 0x15($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X15);
    // 0x8024190C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241910: beq         $v0, $zero, L_80241924
    if (ctx->r2 == 0) {
        // 0x80241914: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80241924;
    }
    // 0x80241914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241918: jal         0x80242260
    // 0x8024191C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80242260_ovl10(rdram, ctx);
        goto after_9;
    // 0x8024191C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80241920: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80241924:
    // 0x80241924: lbu         $v0, 0x15($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X15);
    // 0x80241928: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x8024192C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80241930: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241934: jal         0x80050294
    // 0x80241938: sb          $v0, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x80241938: sb          $v0, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r2;
    after_10:
    // 0x8024193C: j           L_802419D8
    // 0x80241940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802419D8;
    // 0x80241940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80241944:
    // 0x80241944: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80241948: bne         $v0, $zero, L_80241970
    if (ctx->r2 != 0) {
        // 0x8024194C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80241970;
    }
    // 0x8024194C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80241950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80241954: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x80241958: jal         0x80050294
    // 0x8024195C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x8024195C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
L_80241960:
    // 0x80241960: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80241964: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241968: j           L_802419D4
    // 0x8024196C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802419D4;
    // 0x8024196C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80241970:
    // 0x80241970: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80241974: bne         $v1, $v0, L_80241984
    if (ctx->r3 != ctx->r2) {
        // 0x80241978: nop
    
            goto L_80241984;
    }
    // 0x80241978: nop

    // 0x8024197C: jal         0x80242348
    // 0x80241980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80242348_ovl10(rdram, ctx);
        goto after_12;
    // 0x80241980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
L_80241984:
    // 0x80241984: jal         0x8005044C
    // 0x80241988: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_13;
    // 0x80241988: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x8024198C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80241990: lbu         $v1, -0x3A4B($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4B);
    // 0x80241994: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80241998: bne         $v1, $v0, L_802419D8
    if (ctx->r3 != ctx->r2) {
        // 0x8024199C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802419D8;
    }
    // 0x8024199C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802419A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802419A4: lbu         $v0, -0x3A47($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A47);
    // 0x802419A8: bne         $v0, $zero, L_802419D8
    if (ctx->r2 != 0) {
        // 0x802419AC: nop
    
            goto L_802419D8;
    }
    // 0x802419AC: nop

    // 0x802419B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802419B4: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x802419B8: bne         $v0, $s2, L_802419DC
    if (ctx->r2 != ctx->r18) {
        // 0x802419BC: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_802419DC;
    }
    // 0x802419BC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802419C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802419C4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802419C8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802419CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802419D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802419D4:
    // 0x802419D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802419D8:
    // 0x802419D8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_802419DC:
    // 0x802419DC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802419E0: jal         0x8003B564
    // 0x802419E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_14;
    // 0x802419E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x802419E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802419EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802419F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802419F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802419F8: jr          $ra
    // 0x802419FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802419FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B128_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B12C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B134: jal         0x8005044C
    // 0x8023B138: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8023B138: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023B13C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023B140: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B144: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023B148: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B14C: lw          $v0, 0x1780($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1780);
    // 0x8023B150: jalr        $v0
    // 0x8023B154: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023B154: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023B158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B15C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B160: jr          $ra
    // 0x8023B164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802322F8_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802322F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802322FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232300: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232308: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023230C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80232310: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80232314: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80232318: jal         0x802332A8
    // 0x8023231C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_802332A8_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023231C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232320: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232328: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8023232C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232330: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232338: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023233C: jr          $ra
    // 0x80232340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AE50_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AE50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AE54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AE58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023AE5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023AE60: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023AE64: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8023AE68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AE6C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8023AE70: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023AE74: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023AE78: bne         $v0, $v1, L_8023AEA0
    if (ctx->r2 != ctx->r3) {
        // 0x8023AE7C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023AEA0;
    }
    // 0x8023AE7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023AE80: jal         0x800616FC
    // 0x8023AE84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8023AE84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8023AE88: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023AE8C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8023AE90: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8023AE94: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8023AE98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AE9C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023AEA0:
    // 0x8023AEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023AEA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AEA8: jr          $ra
    // 0x8023AEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AEAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802329D4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802329D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802329DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802329E0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802329E4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802329E8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802329EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802329F0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802329F4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x802329F8: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x802329FC: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x80232A00: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80232A04: jal         0x80233334
    // 0x80232A08: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_80233334_ovl10(rdram, ctx);
        goto after_0;
    // 0x80232A08: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x80232A0C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80232A10: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80232A14: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80232A18: beq         $v0, $zero, L_80232AAC
    if (ctx->r2 == 0) {
        // 0x80232A1C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80232AAC;
    }
    // 0x80232A1C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80232A20: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80232A24: jal         0x80233298
    // 0x80232A28: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_80233298_ovl10(rdram, ctx);
        goto after_1;
    // 0x80232A28: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80232A2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232A30: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232A34: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x80232A38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232A3C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80232A40: jal         0x8004F820
    // 0x80232A44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80232A44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80232A48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232A4C: bgez        $v0, L_80232A78
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232A50: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80232A78;
    }
    // 0x80232A50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232A54: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232A58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232A5C: jal         0x8004F820
    // 0x80232A60: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80232A60: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80232A64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232A68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232A6C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232A70: j           L_80232A90
    // 0x80232A74: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80232A90;
    // 0x80232A74: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80232A78:
    // 0x80232A78: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232A7C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232A80: jal         0x8004F820
    // 0x80232A84: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80232A84: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x80232A88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232A8C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80232A90:
    // 0x80232A90: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80232A94: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x80232A98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232A9C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80232AA0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80232AA4: j           L_80232AF4
    // 0x80232AA8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_80232AF4;
    // 0x80232AA8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80232AAC:
    // 0x80232AAC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232AB0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232AB4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80232AB8: jal         0x8004F820
    // 0x80232ABC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80232ABC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80232AC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232AC4: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80232AC8: beq         $v0, $zero, L_80232AD8
    if (ctx->r2 == 0) {
        // 0x80232ACC: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_80232AD8;
    }
    // 0x80232ACC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x80232AD0: j           L_80232ADC
    // 0x80232AD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80232ADC;
    // 0x80232AD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80232AD8:
    // 0x80232AD8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80232ADC:
    // 0x80232ADC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232AE0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232AE4: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80232AE8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80232AEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232AF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80232AF4:
    // 0x80232AF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232AF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232AFC: jal         0x800610AC
    // 0x80232B00: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x80232B00: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x80232B04: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232B08: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80232B0C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232B10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232B14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232B18: jr          $ra
    // 0x80232B1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232B1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
