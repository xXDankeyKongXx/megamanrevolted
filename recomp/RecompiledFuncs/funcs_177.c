#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8024B2A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B2A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B2A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024B2A8: jal         0x8004F5C4
    // 0x8024B2AC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024B2AC: nop

    after_0:
    // 0x8024B2B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024B2B4: jr          $ra
    // 0x8024B2B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B2B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235910_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235914: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235918: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023591C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235920: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80235924: beq         $v1, $zero, L_8023593C
    if (ctx->r3 == 0) {
        // 0x80235928: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023593C;
    }
    // 0x80235928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023592C: beq         $v1, $v0, L_802359D4
    if (ctx->r3 == ctx->r2) {
        // 0x80235930: nop
    
            goto L_802359D4;
    }
    // 0x80235930: nop

    // 0x80235934: j           L_802359F0
    // 0x80235938: nop

        goto L_802359F0;
    // 0x80235938: nop

L_8023593C:
    // 0x8023593C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235944: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235948: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023594C: jal         0x8004D5D4
    // 0x80235950: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235950: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235954: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80235958: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8023595C: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x80235960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235964: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235968: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023596C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80235970: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80235974: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80235978: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023597C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80235980: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80235984: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80235988: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8023598C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80235990: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80235994: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80235998: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8023599C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802359A0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802359A4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x802359A8: sw          $a2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r6;
    // 0x802359AC: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    // 0x802359B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802359B4: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x802359B8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x802359BC: sw          $a3, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r7;
    // 0x802359C0: jal         0x80050294
    // 0x802359C4: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802359C4: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    after_1:
    // 0x802359C8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802359CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802359D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802359D4:
    // 0x802359D4: jal         0x80051770
    // 0x802359D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_2;
    // 0x802359D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802359DC: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x802359E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802359E4: sh          $v0, -0x3D8C($at)
    MEM_H(-0X3D8C, ctx->r1) = ctx->r2;
    // 0x802359E8: jal         0x80051248
    // 0x802359EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_3;
    // 0x802359EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802359F0:
    // 0x802359F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802359F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802359F8: jr          $ra
    // 0x802359FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802359FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DDE8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DDEC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DDF0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022DDF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DDF8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022DDFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DE00: lw          $v0, 0x365C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X365C);
    // 0x8022DE04: jalr        $v0
    // 0x8022DE08: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DE08: nop

    after_0:
    // 0x8022DE0C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE10: jr          $ra
    // 0x8022DE14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DE14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80243964_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80243964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80243968: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024396C: jal         0x8004F4F8
    // 0x80243970: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80243970: nop

    after_0:
    // 0x80243974: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80243978: jr          $ra
    // 0x8024397C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024397C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BF90_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BF94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BF98: jal         0x8004F418
    // 0x8022BF9C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022BF9C: nop

    after_0:
    // 0x8022BFA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BFA4: jr          $ra
    // 0x8022BFA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BFA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227CD4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CD4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80227CD8: beq         $v1, $zero, L_80227CF0
    if (ctx->r3 == 0) {
        // 0x80227CDC: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80227CF0;
    }
    // 0x80227CDC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80227CE0: beq         $v1, $v0, L_80227CFC
    if (ctx->r3 == ctx->r2) {
        // 0x80227CE4: nop
    
            goto L_80227CFC;
    }
    // 0x80227CE4: nop

    // 0x80227CE8: j           L_80227D0C
    // 0x80227CEC: nop

        goto L_80227D0C;
    // 0x80227CEC: nop

L_80227CF0:
    // 0x80227CF0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80227CF4: j           L_80227D0C
    // 0x80227CF8: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
        goto L_80227D0C;
    // 0x80227CF8: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
L_80227CFC:
    // 0x80227CFC: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80227D00: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x80227D04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227D08: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_80227D0C:
    // 0x80227D0C: jr          $ra
    // 0x80227D10: nop

    TRACE_RETURN()
    return;
    // 0x80227D10: nop

;}
RECOMP_FUNC void func_80242660_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242660: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80242664: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80242668: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8024266C: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80242670: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80242674: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x80242678: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024267C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80242680: sh          $v1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r3;
    // 0x80242684: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80242688: jr          $ra
    // 0x8024268C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8024268C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80247BD8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247BD8: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80247BDC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80247BE0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80247BE4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80247BE8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80247BEC: jr          $ra
    // 0x80247BF0: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80247BF0: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8022B148_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B14C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022B150: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B154: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x8022B158: bne         $v0, $zero, L_8022B1AC
    if (ctx->r2 != 0) {
        // 0x8022B15C: addiu       $a0, $zero, -0x3
        ctx->r4 = ADD32(0, -0X3);
            goto L_8022B1AC;
    }
    // 0x8022B15C: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8022B160: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022B164: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022B168: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022B16C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022B170: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B174: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x8022B178: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022B17C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022B180: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B184: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x8022B188: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022B18C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B190: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B194: lw          $v1, 0x2C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X2C);
    // 0x8022B198: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022B19C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8022B1A0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B1A4: jal         0x8022B6D0
    // 0x8022B1A8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022B1A8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
L_8022B1AC:
    // 0x8022B1AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B1B0: jr          $ra
    // 0x8022B1B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B1B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B2F0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B2F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023B2F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8023B2F8: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x8023B2FC: addiu       $s3, $s3, -0x3A47
    ctx->r19 = ADD32(ctx->r19, -0X3A47);
    // 0x8023B300: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023B304: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023B308: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023B30C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023B310: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8023B314: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B318: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B31C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023B320: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B324: lw          $v0, 0x4680($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4680);
    // 0x8023B328: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x8023B32C: addiu       $s1, $s1, 0x4680
    ctx->r17 = ADD32(ctx->r17, 0X4680);
    // 0x8023B330: beq         $v0, $zero, L_8023B3A4
    if (ctx->r2 == 0) {
        // 0x8023B334: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_8023B3A4;
    }
    // 0x8023B334: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023B338: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023B33C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023B340: jal         0x8009A3B4
    // 0x8023B344: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023B344: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023B348: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023B34C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023B350: jal         0x8009A3B4
    // 0x8023B354: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023B354: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023B358: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023B35C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023B360: jal         0x8009A3B4
    // 0x8023B364: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023B364: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023B368: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8023B36C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B370: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8023B374: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023B378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B37C: jalr        $v0
    // 0x8023B380: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8023B380: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8023B384: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B388: jal         0x8023AE70
    // 0x8023B38C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8023AE70_ovl28(rdram, ctx);
        goto after_4;
    // 0x8023B38C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8023B390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B394: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x8023B398: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023B39C: jal         0x8003B564
    // 0x8023B3A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x8023B3A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8023B3A4:
    // 0x8023B3A4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023B3A8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8023B3AC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023B3B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023B3B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023B3B8: jr          $ra
    // 0x8023B3BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023B3BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023156C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023156C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80231570: lw          $v1, 0x320($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X320);
    // 0x80231574: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80231578: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023157C: and         $a2, $v1, $v0
    ctx->r6 = ctx->r3 & ctx->r2;
    // 0x80231580: beq         $a2, $zero, L_802315CC
    if (ctx->r6 == 0) {
        // 0x80231584: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_802315CC;
    }
    // 0x80231584: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80231588: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023158C: beq         $v0, $zero, L_802315CC
    if (ctx->r2 == 0) {
        // 0x80231590: nop
    
            goto L_802315CC;
    }
    // 0x80231590: nop

    // 0x80231594: lhu         $v0, 0x6E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6E);
    // 0x80231598: lhu         $a0, 0x6E($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X6E);
    // 0x8023159C: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x802315A0: sh          $v0, 0x6E($a1)
    MEM_H(0X6E, ctx->r5) = ctx->r2;
    // 0x802315A4: lh          $v1, 0x6E($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X6E);
    // 0x802315A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802315AC: sh          $v0, 0x30A($a1)
    MEM_H(0X30A, ctx->r5) = ctx->r2;
    // 0x802315B0: bgtz        $v1, L_802315C4
    if (SIGNED(ctx->r3) > 0) {
        // 0x802315B4: sh          $a0, 0xB2($a1)
        MEM_H(0XB2, ctx->r5) = ctx->r4;
            goto L_802315C4;
    }
    // 0x802315B4: sh          $a0, 0xB2($a1)
    MEM_H(0XB2, ctx->r5) = ctx->r4;
    // 0x802315B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802315BC: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x802315C0: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_802315C4:
    // 0x802315C4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802315C8: sh          $v0, 0x15E($a1)
    MEM_H(0X15E, ctx->r5) = ctx->r2;
L_802315CC:
    // 0x802315CC: jr          $ra
    // 0x802315D0: nop

    TRACE_RETURN()
    return;
    // 0x802315D0: nop

;}
RECOMP_FUNC void func_80229C20_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229C24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229C28: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229C2C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229C30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229C34: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80229C38: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80229C3C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80229C40: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80229C44: beq         $v0, $zero, L_80229DF0
    if (ctx->r2 == 0) {
        // 0x80229C48: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229DF0;
    }
    // 0x80229C48: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229C4C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229C50: addu        $at, $at, $v0
    gpr jr_addend_80229C58 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229C54: lw          $v0, 0x5CB0($at)
    ctx->r2 = ADD32(ctx->r1, 0X5CB0);
    // 0x80229C58: jr          $v0
    // 0x80229C5C: nop

    switch (jr_addend_80229C58 >> 2) {
        case 0: goto L_80229C60; break;
        case 1: goto L_80229C7C; break;
        case 2: goto L_80229CD4; break;
        case 3: goto L_80229CE8; break;
        case 4: goto L_80229DBC; break;
        default: switch_error(__func__, 0x80229C58, 0x80255CB0);
    }
    // 0x80229C5C: nop

L_80229C60:
    // 0x80229C60: jal         0x8006FF84
    // 0x80229C64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80229C64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80229C68: beq         $v0, $zero, L_80229DF0
    if (ctx->r2 == 0) {
        // 0x80229C6C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229DF0;
    }
    // 0x80229C6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229C70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229C74: j           L_80229DAC
    // 0x80229C78: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80229DAC;
    // 0x80229C78: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80229C7C:
    // 0x80229C7C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229C80: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80229C84: bne         $v0, $zero, L_80229DF0
    if (ctx->r2 != 0) {
        // 0x80229C88: nop
    
            goto L_80229DF0;
    }
    // 0x80229C88: nop

    // 0x80229C8C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80229C90: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80229C94: bne         $v0, $zero, L_80229DF0
    if (ctx->r2 != 0) {
        // 0x80229C98: nop
    
            goto L_80229DF0;
    }
    // 0x80229C98: nop

    // 0x80229C9C: jal         0x800736E0
    // 0x80229CA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800736E0_4EAE0(rdram, ctx);
        goto after_1;
    // 0x80229CA0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x80229CA4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80229CA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229CAC: jal         0x800739B0
    // 0x80229CB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800739B0_4EDB0(rdram, ctx);
        goto after_2;
    // 0x80229CB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80229CB4: jal         0x8021D9D0
    // 0x80229CB8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_8021D9D0(rdram, ctx);
        goto after_3;
    // 0x80229CB8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_3:
    // 0x80229CBC: jal         0x8004A1AC
    // 0x80229CC0: nop

    func_8004A1AC_255AC(rdram, ctx);
        goto after_4;
    // 0x80229CC0: nop

    after_4:
    // 0x80229CC4: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80229CC8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80229CCC: j           L_80229DB0
    // 0x80229CD0: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
        goto L_80229DB0;
    // 0x80229CD0: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_80229CD4:
    // 0x80229CD4: lui         $a0, 0x111
    ctx->r4 = S32(0X111 << 16);
    // 0x80229CD8: jal         0x80036B1C
    // 0x80229CDC: ori         $a0, $a0, 0x4302
    ctx->r4 = ctx->r4 | 0X4302;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_5;
    // 0x80229CDC: ori         $a0, $a0, 0x4302
    ctx->r4 = ctx->r4 | 0X4302;
    after_5:
    // 0x80229CE0: j           L_80229DAC
    // 0x80229CE4: nop

        goto L_80229DAC;
    // 0x80229CE4: nop

L_80229CE8:
    // 0x80229CE8: jal         0x80036B7C
    // 0x80229CEC: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_6;
    // 0x80229CEC: nop

    after_6:
    // 0x80229CF0: beq         $v0, $zero, L_80229DF0
    if (ctx->r2 == 0) {
        // 0x80229CF4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80229DF0;
    }
    // 0x80229CF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229CF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229CFC: jal         0x8005F6B4
    // 0x80229D00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_7;
    // 0x80229D00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80229D04: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229D08: addiu       $v0, $v0, 0x20B0
    ctx->r2 = ADD32(ctx->r2, 0X20B0);
    // 0x80229D0C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80229D10: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80229D14: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229D18: addiu       $v0, $v0, 0x2CAC
    ctx->r2 = ADD32(ctx->r2, 0X2CAC);
    // 0x80229D1C: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x80229D20: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x80229D24: lbu         $v1, 0xBD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XBD);
    // 0x80229D28: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229D2C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229D30: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229D34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D38: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229D3C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229D40: sh          $v0, 0x438($s0)
    MEM_H(0X438, ctx->r16) = ctx->r2;
    // 0x80229D44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80229D48: sh          $v0, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r2;
    // 0x80229D4C: addiu       $v0, $zero, 0x580
    ctx->r2 = ADD32(0, 0X580);
    // 0x80229D50: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x80229D54: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80229D58: sw          $v0, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r2;
    // 0x80229D5C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80229D60: sw          $v0, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r2;
    // 0x80229D64: lui         $v0, 0x580
    ctx->r2 = S32(0X580 << 16);
    // 0x80229D68: sw          $v0, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r2;
    // 0x80229D6C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229D70: sh          $v0, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r2;
    // 0x80229D74: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80229D78: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x80229D7C: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x80229D80: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x80229D84: sb          $zero, 0x170($s0)
    MEM_B(0X170, ctx->r16) = 0;
    // 0x80229D88: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80229D8C: jal         0x8022B750
    // 0x80229D90: sb          $v1, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r3;
    func_8022B750_ovl28(rdram, ctx);
        goto after_8;
    // 0x80229D90: sb          $v1, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r3;
    after_8:
    // 0x80229D94: jal         0x8022B784
    // 0x80229D98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022B784_ovl28(rdram, ctx);
        goto after_9;
    // 0x80229D98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
    // 0x80229D9C: jal         0x8005FB90
    // 0x80229DA0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_10;
    // 0x80229DA0: nop

    after_10:
    // 0x80229DA4: jal         0x80060018
    // 0x80229DA8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_11;
    // 0x80229DA8: nop

    after_11:
L_80229DAC:
    // 0x80229DAC: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
L_80229DB0:
    // 0x80229DB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229DB4: j           L_80229DF0
    // 0x80229DB8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80229DF0;
    // 0x80229DB8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80229DBC:
    // 0x80229DBC: jal         0x80036E48
    // 0x80229DC0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80036E48_12248(rdram, ctx);
        goto after_12;
    // 0x80229DC0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_12:
    // 0x80229DC4: jal         0x8022B7B8
    // 0x80229DC8: nop

    func_8022B7B8_ovl28(rdram, ctx);
        goto after_13;
    // 0x80229DC8: nop

    after_13:
    // 0x80229DCC: jal         0x8005FB90
    // 0x80229DD0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_14;
    // 0x80229DD0: nop

    after_14:
    // 0x80229DD4: jal         0x80060018
    // 0x80229DD8: nop

    func_80060018_3B418(rdram, ctx);
        goto after_15;
    // 0x80229DD8: nop

    after_15:
    // 0x80229DDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229DE0: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x80229DE4: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x80229DE8: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x80229DEC: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
L_80229DF0:
    // 0x80229DF0: jal         0x8006072C
    // 0x80229DF4: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_16;
    // 0x80229DF4: nop

    after_16:
    // 0x80229DF8: beq         $v0, $zero, L_80229E0C
    if (ctx->r2 == 0) {
        // 0x80229DFC: nop
    
            goto L_80229E0C;
    }
    // 0x80229DFC: nop

    // 0x80229E00: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80229E04: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229E08: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80229E0C:
    // 0x80229E0C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229E10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229E14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229E18: jr          $ra
    // 0x80229E1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229E1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024A640_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024A644: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8024A648: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024A64C: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x8024A650: bne         $v0, $zero, L_8024A668
    if (ctx->r2 != 0) {
        // 0x8024A654: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_8024A668;
    }
    // 0x8024A654: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x8024A658: jal         0x8004F5C4
    // 0x8024A65C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024A65C: nop

    after_0:
    // 0x8024A660: j           L_8024A69C
    // 0x8024A664: nop

        goto L_8024A69C;
    // 0x8024A664: nop

L_8024A668:
    // 0x8024A668: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x8024A66C: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x8024A670: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x8024A674: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x8024A678: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x8024A67C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8024A680: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8024A684: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8024A688: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8024A68C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8024A690: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x8024A694: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x8024A698: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_8024A69C:
    // 0x8024A69C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024A6A0: jr          $ra
    // 0x8024A6A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024A6A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024A6A8: nop

    // 0x8024A6AC: nop

;}
RECOMP_FUNC void func_802315D4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802315D4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802315D8: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x802315DC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x802315E0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x802315E4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802315E8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802315EC: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x802315F0: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x802315F4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x802315F8: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x802315FC: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80231600: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80231604: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80231608: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8023160C: bgez        $v0, L_80231620
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231610: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_80231620;
    }
    // 0x80231610: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x80231614: negu        $s3, $a2
    ctx->r19 = SUB32(0, ctx->r6);
    // 0x80231618: negu        $s2, $v1
    ctx->r18 = SUB32(0, ctx->r3);
    // 0x8023161C: addiu       $s1, $s1, 0x800
    ctx->r17 = ADD32(ctx->r17, 0X800);
L_80231620:
    // 0x80231620: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80231624: jal         0x8002C654
    // 0x80231628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80231628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023162C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231630: jal         0x800319B4
    // 0x80231634: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80231634: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023163C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80231640: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80231644: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80231648: negu        $v0, $s3
    ctx->r2 = SUB32(0, ctx->r19);
    // 0x8023164C: sh          $s2, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r18;
    // 0x80231650: sh          $s4, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r20;
    // 0x80231654: jal         0x80031270
    // 0x80231658: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x80231658: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8023165C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80231660: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231664: jal         0x8009A3B4
    // 0x80231668: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80231668: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023166C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80231670: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x80231674: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80231678: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8023167C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80231680: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80231684: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80231688: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8023168C: jr          $ra
    // 0x80231690: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80231690: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8022D0E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D0E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D0E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D0EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D0F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022D0F4: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022D0F8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D0FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D100: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D104: jal         0x8004EC38
    // 0x8022D108: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x8022D108: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022D10C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022D110: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x8022D114: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D118: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x8022D11C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D120: beq         $a0, $zero, L_8022D13C
    if (ctx->r4 == 0) {
        // 0x8022D124: sh          $v0, 0x36E($s0)
        MEM_H(0X36E, ctx->r16) = ctx->r2;
            goto L_8022D13C;
    }
    // 0x8022D124: sh          $v0, 0x36E($s0)
    MEM_H(0X36E, ctx->r16) = ctx->r2;
    // 0x8022D128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D12C: beq         $a0, $v0, L_8022D154
    if (ctx->r4 == ctx->r2) {
        // 0x8022D130: nop
    
            goto L_8022D154;
    }
    // 0x8022D130: nop

    // 0x8022D134: j           L_8022D324
    // 0x8022D138: nop

        goto L_8022D324;
    // 0x8022D138: nop

L_8022D13C:
    // 0x8022D13C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D140: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D144: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D148: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022D14C: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x8022D150: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
L_8022D154:
    // 0x8022D154: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022D158: lui         $v0, 0x48
    ctx->r2 = S32(0X48 << 16);
    // 0x8022D15C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022D160: beq         $v0, $zero, L_8022D178
    if (ctx->r2 == 0) {
        // 0x8022D164: addiu       $s2, $s0, 0x14
        ctx->r18 = ADD32(ctx->r16, 0X14);
            goto L_8022D178;
    }
    // 0x8022D164: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022D168: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D16C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022D170: bne         $v0, $zero, L_8022D304
    if (ctx->r2 != 0) {
        // 0x8022D174: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D304;
    }
    // 0x8022D174: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022D178:
    // 0x8022D178: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D17C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D180: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D184: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D188: jal         0x8004F820
    // 0x8022D18C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022D18C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x8022D190: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D194: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    // 0x8022D198: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022D19C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D1A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D1A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022D1A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D1AC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D1B0: jal         0x8004DA90
    // 0x8022D1B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022D1B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022D1B8: jal         0x80040F30
    // 0x8022D1BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022D1BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D1C0: sw          $v0, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r2;
    // 0x8022D1C4: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022D1C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D1CC: bne         $v1, $v0, L_8022D1DC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D1D0: addiu       $a0, $zero, 0xB0
        ctx->r4 = ADD32(0, 0XB0);
            goto L_8022D1DC;
    }
    // 0x8022D1D0: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    // 0x8022D1D4: jal         0x8002A33C
    // 0x8022D1D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022D1D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
L_8022D1DC:
    // 0x8022D1DC: jal         0x8003E934
    // 0x8022D1E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_5;
    // 0x8022D1E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022D1E4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022D1E8: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022D1EC: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022D1F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D1F4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022D1F8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8022D1FC: bltz        $v0, L_8022D214
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D200: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_8022D214;
    }
    // 0x8022D200: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D204: beq         $v0, $zero, L_8022D224
    if (ctx->r2 == 0) {
        // 0x8022D208: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D224;
    }
    // 0x8022D208: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D20C: j           L_8022D248
    // 0x8022D210: nop

        goto L_8022D248;
    // 0x8022D210: nop

L_8022D214:
    // 0x8022D214: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8022D218: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022D21C: bne         $v0, $zero, L_8022D248
    if (ctx->r2 != 0) {
        // 0x8022D220: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D248;
    }
    // 0x8022D220: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022D224:
    // 0x8022D224: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022D228: jal         0x8009A3B4
    // 0x8022D22C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D22C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022D230: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D234: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022D238: jal         0x8009A3B4
    // 0x8022D23C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022D23C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8022D240: j           L_8022D258
    // 0x8022D244: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022D258;
    // 0x8022D244: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D248:
    // 0x8022D248: lw          $v0, 0x48($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X48);
    // 0x8022D24C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022D250: beq         $v0, $zero, L_8022D26C
    if (ctx->r2 == 0) {
        // 0x8022D254: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D26C;
    }
    // 0x8022D254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D258:
    // 0x8022D258: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D25C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D260: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022D264: j           L_8022D324
    // 0x8022D268: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_8022D324;
    // 0x8022D268: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022D26C:
    // 0x8022D26C: lh          $v0, 0x36($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X36);
    // 0x8022D270: bne         $v0, $zero, L_8022D2A0
    if (ctx->r2 != 0) {
        // 0x8022D274: lui         $v0, 0x1
        ctx->r2 = S32(0X1 << 16);
            goto L_8022D2A0;
    }
    // 0x8022D274: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022D278: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022D27C: ori         $v0, $v0, 0x1FFF
    ctx->r2 = ctx->r2 | 0X1FFF;
    // 0x8022D280: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022D284: bne         $v0, $zero, L_8022D2A0
    if (ctx->r2 != 0) {
        // 0x8022D288: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8022D2A0;
    }
    // 0x8022D288: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D28C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D290: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022D294: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D298: j           L_8022D320
    // 0x8022D29C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
        goto L_8022D320;
    // 0x8022D29C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_8022D2A0:
    // 0x8022D2A0: lh          $v0, 0x34($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X34);
    // 0x8022D2A4: bne         $v0, $zero, L_8022D310
    if (ctx->r2 != 0) {
        // 0x8022D2A8: lui         $v0, 0x11
        ctx->r2 = S32(0X11 << 16);
            goto L_8022D310;
    }
    // 0x8022D2A8: lui         $v0, 0x11
    ctx->r2 = S32(0X11 << 16);
    // 0x8022D2AC: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022D2B0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022D2B4: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022D2B8: bne         $v0, $zero, L_8022D310
    if (ctx->r2 != 0) {
        // 0x8022D2BC: nop
    
            goto L_8022D310;
    }
    // 0x8022D2BC: nop

    // 0x8022D2C0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022D2C4: bltzl       $v0, L_8022D2E0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022D2C8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022D2E0;
    }
    goto skip_0;
    // 0x8022D2C8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8022D2CC: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022D2D0: beq         $v0, $zero, L_8022D310
    if (ctx->r2 == 0) {
        // 0x8022D2D4: nop
    
            goto L_8022D310;
    }
    // 0x8022D2D4: nop

    // 0x8022D2D8: j           L_8022D2EC
    // 0x8022D2DC: nop

        goto L_8022D2EC;
    // 0x8022D2DC: nop

L_8022D2E0:
    // 0x8022D2E0: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022D2E4: beq         $v0, $zero, L_8022D310
    if (ctx->r2 == 0) {
        // 0x8022D2E8: nop
    
            goto L_8022D310;
    }
    // 0x8022D2E8: nop

L_8022D2EC:
    // 0x8022D2EC: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x8022D2F0: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022D2F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D2F8: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022D2FC: beq         $v0, $zero, L_8022D310
    if (ctx->r2 == 0) {
        // 0x8022D300: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022D310;
    }
    // 0x8022D300: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022D304:
    // 0x8022D304: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D308: j           L_8022D324
    // 0x8022D30C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022D324;
    // 0x8022D30C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022D310:
    // 0x8022D310: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D314: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022D318: bne         $v0, $zero, L_8022D324
    if (ctx->r2 != 0) {
        // 0x8022D31C: ori         $v0, $v1, 0x1
        ctx->r2 = ctx->r3 | 0X1;
            goto L_8022D324;
    }
    // 0x8022D31C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
L_8022D320:
    // 0x8022D320: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022D324:
    // 0x8022D324: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D328: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D32C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D334: jr          $ra
    // 0x8022D338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80249D2C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249D2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80249D30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80249D34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80249D38: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80249D3C: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80249D40: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80249D44: jal         0x8002C654
    // 0x80249D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80249D48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80249D4C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80249D50: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80249D54: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80249D58: beq         $v0, $zero, L_80249D88
    if (ctx->r2 == 0) {
        // 0x80249D5C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80249D88;
    }
    // 0x80249D5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80249D60: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80249D64: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x80249D68: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80249D6C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80249D70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80249D74: jal         0x80031DA8
    // 0x80249D78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x80249D78: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_1:
    // 0x80249D7C: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    // 0x80249D80: j           L_80249DBC
    // 0x80249D84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
        goto L_80249DBC;
    // 0x80249D84: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
L_80249D88:
    // 0x80249D88: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80249D8C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80249D90: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80249D94: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80249D98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80249D9C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80249DA0: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x80249DA4: jal         0x80031DA8
    // 0x80249DA8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80249DA8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x80249DAC: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80249DB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80249DB4: sltu        $a0, $zero, $a0
    ctx->r4 = 0 < ctx->r4 ? 1 : 0;
    // 0x80249DB8: sll         $a0, $a0, 11
    ctx->r4 = S32(ctx->r4 << 11);
L_80249DBC:
    // 0x80249DBC: jal         0x800319B4
    // 0x80249DC0: nop

    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x80249DC0: nop

    after_3:
    // 0x80249DC4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80249DC8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80249DCC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80249DD0: jr          $ra
    // 0x80249DD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80249DD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802343A4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802343A4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802343A8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802343AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802343B0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802343B4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802343B8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802343BC: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x802343C0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802343C4: bne         $v0, $zero, L_802343D8
    if (ctx->r2 != 0) {
        // 0x802343C8: addiu       $s1, $s0, 0x1D8
        ctx->r17 = ADD32(ctx->r16, 0X1D8);
            goto L_802343D8;
    }
    // 0x802343C8: addiu       $s1, $s0, 0x1D8
    ctx->r17 = ADD32(ctx->r16, 0X1D8);
    // 0x802343CC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802343D0: beql        $v0, $zero, L_80234808
    if (ctx->r2 == 0) {
        // 0x802343D4: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_80234808;
    }
    goto skip_0;
    // 0x802343D4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
L_802343D8:
    // 0x802343D8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802343DC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802343E0: beq         $v0, $zero, L_80234410
    if (ctx->r2 == 0) {
        // 0x802343E4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80234410;
    }
    // 0x802343E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802343E8: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x802343EC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802343F0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802343F4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x802343F8: jal         0x8004F820
    // 0x802343FC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802343FC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x80234400: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80234404: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234408: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023440C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80234410:
    // 0x80234410: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80234414: bne         $v0, $zero, L_8023442C
    if (ctx->r2 != 0) {
        // 0x80234418: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023442C;
    }
    // 0x80234418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023441C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80234420: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234424: jal         0x8004DA90
    // 0x80234428: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80234428: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_8023442C:
    // 0x8023442C: lh          $v0, 0x1D8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1D8);
    // 0x80234430: bne         $v0, $zero, L_802347FC
    if (ctx->r2 != 0) {
        // 0x80234434: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802347FC;
    }
    // 0x80234434: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234438: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023443C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80234440: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234444: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80234448: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023444C: lw          $v0, 0x39B4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X39B4);
    // 0x80234450: jalr        $v0
    // 0x80234454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80234454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234458: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8023445C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234460: bne         $v1, $v0, L_80234510
    if (ctx->r3 != ctx->r2) {
        // 0x80234464: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234510;
    }
    // 0x80234464: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234468: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x8023446C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234470: beq         $v0, $zero, L_8023447C
    if (ctx->r2 == 0) {
        // 0x80234474: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023447C;
    }
    // 0x80234474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234478: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8023447C:
    // 0x8023447C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80234480: bne         $v0, $v1, L_802344D8
    if (ctx->r2 != ctx->r3) {
        // 0x80234484: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802344D8;
    }
    // 0x80234484: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234488: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8023448C: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x80234490: beq         $v0, $s2, L_802344D0
    if (ctx->r2 == ctx->r18) {
        // 0x80234494: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802344D0;
    }
    // 0x80234494: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234498: lb          $v0, 0x1DC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1DC);
    // 0x8023449C: bne         $v0, $zero, L_802344C4
    if (ctx->r2 != 0) {
        // 0x802344A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802344C4;
    }
    // 0x802344A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802344A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802344A8: jal         0x80234C38
    // 0x802344AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80234C38_ovl28(rdram, ctx);
        goto after_3;
    // 0x802344AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x802344B0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802344B4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802344B8: subu        $v0, $s2, $v0
    ctx->r2 = SUB32(ctx->r18, ctx->r2);
    // 0x802344BC: j           L_80234508
    // 0x802344C0: sb          $v0, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = ctx->r2;
        goto L_80234508;
    // 0x802344C0: sb          $v0, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = ctx->r2;
L_802344C4:
    // 0x802344C4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802344C8: j           L_80234508
    // 0x802344CC: sb          $v0, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = ctx->r2;
        goto L_80234508;
    // 0x802344CC: sb          $v0, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = ctx->r2;
L_802344D0:
    // 0x802344D0: j           L_80234508
    // 0x802344D4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80234508;
    // 0x802344D4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802344D8:
    // 0x802344D8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802344DC: bne         $v1, $v0, L_80234508
    if (ctx->r3 != ctx->r2) {
        // 0x802344E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234508;
    }
    // 0x802344E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802344E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802344E8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802344EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802344F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802344F4: jal         0x80050294
    // 0x802344F8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802344F8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_4:
    // 0x802344FC: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x80234500: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
    // 0x80234504: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80234508:
    // 0x80234508: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8023450C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80234510:
    // 0x80234510: bne         $v1, $v0, L_80234600
    if (ctx->r3 != ctx->r2) {
        // 0x80234514: nop
    
            goto L_80234600;
    }
    // 0x80234514: nop

    // 0x80234518: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8023451C: bne         $v1, $zero, L_80234560
    if (ctx->r3 != 0) {
        // 0x80234520: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234560;
    }
    // 0x80234520: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234524: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80234528: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023452C: bne         $v1, $v0, L_80234600
    if (ctx->r3 != ctx->r2) {
        // 0x80234530: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80234600;
    }
    // 0x80234530: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80234534: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234538: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023453C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234540: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234544: jal         0x80050294
    // 0x80234548: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80234548: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_5:
    // 0x8023454C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234550: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80234554: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80234558: j           L_80234600
    // 0x8023455C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80234600;
    // 0x8023455C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_80234560:
    // 0x80234560: bne         $v1, $v0, L_802345D0
    if (ctx->r3 != ctx->r2) {
        // 0x80234564: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802345D0;
    }
    // 0x80234564: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234568: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x8023456C: beq         $v0, $zero, L_802345AC
    if (ctx->r2 == 0) {
        // 0x80234570: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802345AC;
    }
    // 0x80234570: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80234574: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x80234578: bne         $v0, $zero, L_80234594
    if (ctx->r2 != 0) {
        // 0x8023457C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80234594;
    }
    // 0x8023457C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234584: jal         0x80234C38
    // 0x80234588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80234C38_ovl28(rdram, ctx);
        goto after_6;
    // 0x80234588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8023458C: j           L_80234598
    // 0x80234590: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80234598;
    // 0x80234590: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80234594:
    // 0x80234594: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_80234598:
    // 0x80234598: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8023459C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x802345A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802345A4: j           L_80234600
    // 0x802345A8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80234600;
    // 0x802345A8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_802345AC:
    // 0x802345AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802345B0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802345B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802345B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802345BC: jal         0x80050294
    // 0x802345C0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x802345C0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_7:
    // 0x802345C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802345C8: j           L_80234600
    // 0x802345CC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80234600;
    // 0x802345CC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802345D0:
    // 0x802345D0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802345D4: bne         $v1, $v0, L_80234600
    if (ctx->r3 != ctx->r2) {
        // 0x802345D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234600;
    }
    // 0x802345D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802345DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802345E0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802345E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802345E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802345EC: jal         0x80050294
    // 0x802345F0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_8;
    // 0x802345F0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_8:
    // 0x802345F4: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x802345F8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802345FC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80234600:
    // 0x80234600: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80234604: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234608: bne         $v1, $v0, L_80234810
    if (ctx->r3 != ctx->r2) {
        // 0x8023460C: nop
    
            goto L_80234810;
    }
    // 0x8023460C: nop

    // 0x80234610: lbu         $v1, 0xA6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA6);
    // 0x80234614: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80234618: bne         $v0, $zero, L_80234638
    if (ctx->r2 != 0) {
        // 0x8023461C: addiu       $a0, $zero, 0x1BF
        ctx->r4 = ADD32(0, 0X1BF);
            goto L_80234638;
    }
    // 0x8023461C: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    // 0x80234620: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x80234624: bne         $v0, $zero, L_80234638
    if (ctx->r2 != 0) {
        // 0x80234628: addiu       $a0, $zero, 0x1C0
        ctx->r4 = ADD32(0, 0X1C0);
            goto L_80234638;
    }
    // 0x80234628: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    // 0x8023462C: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x80234630: beq         $v0, $zero, L_80234640
    if (ctx->r2 == 0) {
        // 0x80234634: addiu       $a0, $zero, 0x1C1
        ctx->r4 = ADD32(0, 0X1C1);
            goto L_80234640;
    }
    // 0x80234634: addiu       $a0, $zero, 0x1C1
    ctx->r4 = ADD32(0, 0X1C1);
L_80234638:
    // 0x80234638: jal         0x8002A33C
    // 0x8023463C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x8023463C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_9:
L_80234640:
    // 0x80234640: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80234644: bne         $v1, $zero, L_8023469C
    if (ctx->r3 != 0) {
        // 0x80234648: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023469C;
    }
    // 0x80234648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023464C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80234650: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234654: bne         $v1, $v0, L_80234810
    if (ctx->r3 != ctx->r2) {
        // 0x80234658: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80234810;
    }
    // 0x80234658: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023465C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80234660: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80234664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234668: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023466C: jal         0x80050294
    // 0x80234670: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x80234670: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_10:
    // 0x80234674: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80234678: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023467C: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80234680: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x80234684: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80234688: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8023468C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234690: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234694: j           L_80234810
    // 0x80234698: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80234810;
    // 0x80234698: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_8023469C:
    // 0x8023469C: bne         $v1, $v0, L_802347C8
    if (ctx->r3 != ctx->r2) {
        // 0x802346A0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802347C8;
    }
    // 0x802346A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802346A4: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x802346A8: beq         $v0, $zero, L_802347A0
    if (ctx->r2 == 0) {
        // 0x802346AC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_802347A0;
    }
    // 0x802346AC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802346B0: beq         $v0, $v1, L_8023477C
    if (ctx->r2 == ctx->r3) {
        // 0x802346B4: nop
    
            goto L_8023477C;
    }
    // 0x802346B4: nop

    // 0x802346B8: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x802346BC: bne         $v0, $zero, L_80234794
    if (ctx->r2 != 0) {
        // 0x802346C0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80234794;
    }
    // 0x802346C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802346C4: addiu       $a0, $zero, 0x1C2
    ctx->r4 = ADD32(0, 0X1C2);
    // 0x802346C8: jal         0x8002A33C
    // 0x802346CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_11;
    // 0x802346CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_11:
    // 0x802346D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802346D4: jal         0x80234C38
    // 0x802346D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80234C38_ovl28(rdram, ctx);
        goto after_12;
    // 0x802346D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x802346DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802346E0: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x802346E4: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x802346E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802346EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802346F0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802346F4: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x802346F8: jal         0x80234C38
    // 0x802346FC: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    func_80234C38_ovl28(rdram, ctx);
        goto after_13;
    // 0x802346FC: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    after_13:
    // 0x80234700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234704: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80234708: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x8023470C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80234710: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234714: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234718: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8023471C: jal         0x80234C38
    // 0x80234720: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    func_80234C38_ovl28(rdram, ctx);
        goto after_14;
    // 0x80234720: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    after_14:
    // 0x80234724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234728: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8023472C: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x80234730: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80234734: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234738: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023473C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80234740: jal         0x80234C38
    // 0x80234744: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    func_80234C38_ovl28(rdram, ctx);
        goto after_15;
    // 0x80234744: sb          $v1, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r3;
    after_15:
    // 0x80234748: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8023474C: lhu         $v1, 0x2($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X2);
    // 0x80234750: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234754: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80234758: lbu         $a0, 0x6($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X6);
    // 0x8023475C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80234760: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80234764: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x80234768: sltiu       $a0, $a0, 0x10
    ctx->r4 = ctx->r4 < 0X10 ? 1 : 0;
    // 0x8023476C: bne         $a0, $zero, L_80234810
    if (ctx->r4 != 0) {
        // 0x80234770: sh          $v1, 0x2($s1)
        MEM_H(0X2, ctx->r17) = ctx->r3;
            goto L_80234810;
    }
    // 0x80234770: sh          $v1, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r3;
    // 0x80234774: j           L_80234810
    // 0x80234778: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
        goto L_80234810;
    // 0x80234778: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
L_8023477C:
    // 0x8023477C: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x80234780: bne         $v0, $zero, L_80234794
    if (ctx->r2 != 0) {
        // 0x80234784: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80234794;
    }
    // 0x80234784: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234788: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x8023478C: j           L_80234810
    // 0x80234790: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80234810;
    // 0x80234790: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_80234794:
    // 0x80234794: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80234798: j           L_80234810
    // 0x8023479C: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_80234810;
    // 0x8023479C: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_802347A0:
    // 0x802347A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802347A4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802347A8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802347AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802347B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802347B4: jal         0x80050294
    // 0x802347B8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_16;
    // 0x802347B8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_16:
    // 0x802347BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802347C0: j           L_80234810
    // 0x802347C4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80234810;
    // 0x802347C4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_802347C8:
    // 0x802347C8: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802347CC: bne         $v1, $v0, L_80234810
    if (ctx->r3 != ctx->r2) {
        // 0x802347D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234810;
    }
    // 0x802347D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802347D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802347D8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802347DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802347E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802347E4: jal         0x80050294
    // 0x802347E8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_17;
    // 0x802347E8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_17:
    // 0x802347EC: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x802347F0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802347F4: j           L_80234810
    // 0x802347F8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80234810;
    // 0x802347F8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_802347FC:
    // 0x802347FC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80234800: j           L_80234810
    // 0x80234804: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
        goto L_80234810;
    // 0x80234804: sh          $v0, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = ctx->r2;
L_80234808:
    // 0x80234808: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023480C: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
L_80234810:
    // 0x80234810: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80234814: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80234818: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8023481C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80234820: jr          $ra
    // 0x80234824: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80234824: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80245A94_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245A94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245A98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80245A9C: jal         0x8004F4F8
    // 0x80245AA0: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80245AA0: nop

    after_0:
    // 0x80245AA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80245AA8: jr          $ra
    // 0x80245AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80245AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023627C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023627C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236280: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236284: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236288: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023628C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236290: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80236294: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80236298: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8023629C: bne         $v1, $v0, L_80236338
    if (ctx->r3 != ctx->r2) {
        // 0x802362A0: addiu       $v0, $zero, 0x17
        ctx->r2 = ADD32(0, 0X17);
            goto L_80236338;
    }
    // 0x802362A0: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x802362A4: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x802362A8: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x802362AC: beq         $a1, $v0, L_802362F0
    if (ctx->r5 == ctx->r2) {
        // 0x802362B0: slti        $v0, $a1, 0x6F
        ctx->r2 = SIGNED(ctx->r5) < 0X6F ? 1 : 0;
            goto L_802362F0;
    }
    // 0x802362B0: slti        $v0, $a1, 0x6F
    ctx->r2 = SIGNED(ctx->r5) < 0X6F ? 1 : 0;
    // 0x802362B4: beq         $v0, $zero, L_802362D4
    if (ctx->r2 == 0) {
        // 0x802362B8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802362D4;
    }
    // 0x802362B8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802362BC: beq         $a1, $v0, L_80236320
    if (ctx->r5 == ctx->r2) {
        // 0x802362C0: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80236320;
    }
    // 0x802362C0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802362C4: beq         $a1, $v0, L_8023630C
    if (ctx->r5 == ctx->r2) {
        // 0x802362C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023630C;
    }
    // 0x802362C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802362CC: j           L_80236364
    // 0x802362D0: nop

        goto L_80236364;
    // 0x802362D0: nop

L_802362D4:
    // 0x802362D4: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x802362D8: beq         $a1, $v0, L_80236308
    if (ctx->r5 == ctx->r2) {
        // 0x802362DC: addiu       $v0, $zero, 0xE6
        ctx->r2 = ADD32(0, 0XE6);
            goto L_80236308;
    }
    // 0x802362DC: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x802362E0: beq         $a1, $v0, L_80236324
    if (ctx->r5 == ctx->r2) {
        // 0x802362E4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236324;
    }
    // 0x802362E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802362E8: j           L_80236364
    // 0x802362EC: nop

        goto L_80236364;
    // 0x802362EC: nop

L_802362F0:
    // 0x802362F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802362F4: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x802362F8: jal         0x80236A60
    // 0x802362FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80236A60_ovl28(rdram, ctx);
        goto after_0;
    // 0x802362FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80236300: j           L_80236364
    // 0x80236304: nop

        goto L_80236364;
    // 0x80236304: nop

L_80236308:
    // 0x80236308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023630C:
    // 0x8023630C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236310: jal         0x80236A60
    // 0x80236314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80236A60_ovl28(rdram, ctx);
        goto after_1;
    // 0x80236314: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80236318: j           L_80236364
    // 0x8023631C: nop

        goto L_80236364;
    // 0x8023631C: nop

L_80236320:
    // 0x80236320: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80236324:
    // 0x80236324: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236328: jal         0x80236A60
    // 0x8023632C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80236A60_ovl28(rdram, ctx);
        goto after_2;
    // 0x8023632C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x80236330: j           L_80236364
    // 0x80236334: nop

        goto L_80236364;
    // 0x80236334: nop

L_80236338:
    // 0x80236338: bne         $v1, $v0, L_80236364
    if (ctx->r3 != ctx->r2) {
        // 0x8023633C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236364;
    }
    // 0x8023633C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236340: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80236344: bne         $v1, $v0, L_80236364
    if (ctx->r3 != ctx->r2) {
        // 0x80236348: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236364;
    }
    // 0x80236348: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023634C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80236350: jal         0x80236A60
    // 0x80236354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80236A60_ovl28(rdram, ctx);
        goto after_3;
    // 0x80236354: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80236358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023635C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80236360: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80236364:
    // 0x80236364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236368: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023636C: jr          $ra
    // 0x80236370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236370: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226FAC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226FB0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80226FB4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80226FB8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226FBC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226FC0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226FC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226FC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FCC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226FD0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80226FD4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80226FD8: beq         $v1, $zero, L_80226FF0
    if (ctx->r3 == 0) {
        // 0x80226FDC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80226FF0;
    }
    // 0x80226FDC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80226FE0: beq         $v1, $v0, L_80227120
    if (ctx->r3 == ctx->r2) {
        // 0x80226FE4: addiu       $v0, $zero, 0x85
        ctx->r2 = ADD32(0, 0X85);
            goto L_80227120;
    }
    // 0x80226FE4: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x80226FE8: j           L_80227150
    // 0x80226FEC: nop

        goto L_80227150;
    // 0x80226FEC: nop

L_80226FF0:
    // 0x80226FF0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226FF4: addiu       $s5, $zero, 0x37
    ctx->r21 = ADD32(0, 0X37);
    // 0x80226FF8: addiu       $s4, $zero, -0xC0
    ctx->r20 = ADD32(0, -0XC0);
    // 0x80226FFC: addiu       $s3, $zero, -0x300
    ctx->r19 = ADD32(0, -0X300);
    // 0x80227000: addiu       $s1, $zero, -0x200
    ctx->r17 = ADD32(0, -0X200);
L_80227004:
    // 0x80227004: jal         0x8004F2C4
    // 0x80227008: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x80227008: nop

    after_0:
    // 0x8022700C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227010: beql        $a0, $zero, L_80227040
    if (ctx->r4 == 0) {
        // 0x80227014: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80227040;
    }
    goto skip_0;
    // 0x80227014: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x80227018: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022701C: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
    // 0x80227020: sb          $s5, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r21;
    // 0x80227024: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80227028: sh          $s1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r17;
    // 0x8022702C: sh          $s4, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r20;
    // 0x80227030: sh          $s3, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r19;
    // 0x80227034: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80227038: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022703C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80227040:
    // 0x80227040: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80227044: bne         $v0, $zero, L_80227004
    if (ctx->r2 != 0) {
        // 0x80227048: addiu       $s1, $s1, 0x400
        ctx->r17 = ADD32(ctx->r17, 0X400);
            goto L_80227004;
    }
    // 0x80227048: addiu       $s1, $s1, 0x400
    ctx->r17 = ADD32(ctx->r17, 0X400);
    // 0x8022704C: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80227050: lbu         $a0, 0xBD($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XBD);
    // 0x80227054: sh          $zero, 0x438($s2)
    MEM_H(0X438, ctx->r18) = 0;
    // 0x80227058: lh          $a1, 0x438($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X438);
    // 0x8022705C: addiu       $v0, $zero, -0xC1
    ctx->r2 = ADD32(0, -0XC1);
    // 0x80227060: sh          $v0, 0x43A($s2)
    MEM_H(0X43A, ctx->r18) = ctx->r2;
    // 0x80227064: lh          $a2, 0x43A($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X43A);
    // 0x80227068: addiu       $v0, $zero, 0x898
    ctx->r2 = ADD32(0, 0X898);
    // 0x8022706C: sh          $v0, 0x43C($s2)
    MEM_H(0X43C, ctx->r18) = ctx->r2;
    // 0x80227070: lh          $a3, 0x43C($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X43C);
    // 0x80227074: lui         $t0, 0x8025
    ctx->r8 = S32(0X8025 << 16);
    // 0x80227078: lw          $t0, 0x11CC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X11CC);
    // 0x8022707C: lui         $t1, 0x8025
    ctx->r9 = S32(0X8025 << 16);
    // 0x80227080: lw          $t1, 0x1184($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1184);
    // 0x80227084: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227088: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022708C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227090: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80227094: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227098: sh          $v0, 0x442($s2)
    MEM_H(0X442, ctx->r18) = ctx->r2;
    // 0x8022709C: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    // 0x802270A0: sh          $zero, 0x440($s2)
    MEM_H(0X440, ctx->r18) = 0;
    // 0x802270A4: sh          $zero, 0x444($s2)
    MEM_H(0X444, ctx->r18) = 0;
    // 0x802270A8: sb          $v0, 0x448($s2)
    MEM_B(0X448, ctx->r18) = ctx->r2;
    // 0x802270AC: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    // 0x802270B0: sb          $zero, 0x74($s2)
    MEM_B(0X74, ctx->r18) = 0;
    // 0x802270B4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802270B8: sb          $zero, 0x63AD($at)
    MEM_B(0X63AD, ctx->r1) = 0;
    // 0x802270BC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802270C0: sb          $zero, 0x63AC($at)
    MEM_B(0X63AC, ctx->r1) = 0;
    // 0x802270C4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802270C8: sb          $zero, 0x63AB($at)
    MEM_B(0X63AB, ctx->r1) = 0;
    // 0x802270CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802270D0: sb          $zero, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = 0;
    // 0x802270D4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802270D8: sb          $zero, 0x63A9($at)
    MEM_B(0X63A9, ctx->r1) = 0;
    // 0x802270DC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802270E0: sb          $zero, 0x63A8($at)
    MEM_B(0X63A8, ctx->r1) = 0;
    // 0x802270E4: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x802270E8: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x802270EC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802270F0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802270F4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x802270F8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x802270FC: sb          $a0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r4;
    // 0x80227100: sw          $a1, 0x428($s2)
    MEM_W(0X428, ctx->r18) = ctx->r5;
    // 0x80227104: sw          $a2, 0x42C($s2)
    MEM_W(0X42C, ctx->r18) = ctx->r6;
    // 0x80227108: sw          $a3, 0x430($s2)
    MEM_W(0X430, ctx->r18) = ctx->r7;
    // 0x8022710C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227110: sw          $t0, 0x63B4($at)
    MEM_W(0X63B4, ctx->r1) = ctx->r8;
    // 0x80227114: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227118: j           L_80227150
    // 0x8022711C: sw          $t1, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r9;
        goto L_80227150;
    // 0x8022711C: sw          $t1, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r9;
L_80227120:
    // 0x80227120: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80227124: lw          $v1, 0x1190($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1190);
    // 0x80227128: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022712C: sb          $zero, 0x63AA($at)
    MEM_B(0X63AA, ctx->r1) = 0;
    // 0x80227130: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80227134: sb          $zero, 0x63A9($at)
    MEM_B(0X63A9, ctx->r1) = 0;
    // 0x80227138: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022713C: sb          $zero, 0x63A8($at)
    MEM_B(0X63A8, ctx->r1) = 0;
    // 0x80227140: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227144: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80227148: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022714C: sw          $v1, 0x63B0($at)
    MEM_W(0X63B0, ctx->r1) = ctx->r3;
L_80227150:
    // 0x80227150: jal         0x80226CE0
    // 0x80227154: nop

    func_80226CE0_ovl28(rdram, ctx);
        goto after_1;
    // 0x80227154: nop

    after_1:
    // 0x80227158: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022715C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80227160: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80227164: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227168: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022716C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227170: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227174: jr          $ra
    // 0x80227178: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80227178: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8024B0C0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B0C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024B0C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024B0C8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8024B0CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024B0D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024B0D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024B0D8: lw          $v0, 0x52C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X52C0);
    // 0x8024B0DC: jalr        $v0
    // 0x8024B0E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024B0E0: nop

    after_0:
    // 0x8024B0E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024B0E8: jr          $ra
    // 0x8024B0EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024B0EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FB90_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FB94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FB98: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022FB9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FBA0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022FBA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FBA8: lw          $v0, 0x3808($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3808);
    // 0x8022FBAC: jalr        $v0
    // 0x8022FBB0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FBB0: nop

    after_0:
    // 0x8022FBB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBB8: jr          $ra
    // 0x8022FBBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FBBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B1E4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B1E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B1E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B1EC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B1F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B1F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B1F8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8023B1FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B200: beq         $v1, $v0, L_8023B234
    if (ctx->r3 == ctx->r2) {
        // 0x8023B204: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_8023B234;
    }
    // 0x8023B204: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8023B208: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023B20C: beq         $v0, $zero, L_8023B23C
    if (ctx->r2 == 0) {
        // 0x8023B210: nop
    
            goto L_8023B23C;
    }
    // 0x8023B210: nop

    // 0x8023B214: bne         $v1, $zero, L_8023B23C
    if (ctx->r3 != 0) {
        // 0x8023B218: addiu       $a1, $zero, 0x15
        ctx->r5 = ADD32(0, 0X15);
            goto L_8023B23C;
    }
    // 0x8023B218: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x8023B21C: jal         0x80050294
    // 0x8023B220: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023B220: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023B224: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023B228: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B22C: j           L_8023B23C
    // 0x8023B230: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8023B23C;
    // 0x8023B230: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8023B234:
    // 0x8023B234: jal         0x8005044C
    // 0x8023B238: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023B238: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_8023B23C:
    // 0x8023B23C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B240: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023B244: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8023B248: beq         $v1, $v0, L_8023B2C8
    if (ctx->r3 == ctx->r2) {
        // 0x8023B24C: slti        $v0, $v1, 0x29
        ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
            goto L_8023B2C8;
    }
    // 0x8023B24C: slti        $v0, $v1, 0x29
    ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x8023B250: beql        $v0, $zero, L_8023B270
    if (ctx->r2 == 0) {
        // 0x8023B254: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8023B270;
    }
    goto skip_0;
    // 0x8023B254: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    skip_0:
    // 0x8023B258: beq         $v1, $zero, L_8023B288
    if (ctx->r3 == 0) {
        // 0x8023B25C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8023B288;
    }
    // 0x8023B25C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023B260: beql        $v1, $v0, L_8023B2A4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B264: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8023B2A4;
    }
    goto skip_1;
    // 0x8023B264: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_1:
    // 0x8023B268: j           L_8023B2DC
    // 0x8023B26C: nop

        goto L_8023B2DC;
    // 0x8023B26C: nop

L_8023B270:
    // 0x8023B270: beq         $v1, $v0, L_8023B2B4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B274: addiu       $v0, $zero, 0x91
        ctx->r2 = ADD32(0, 0X91);
            goto L_8023B2B4;
    }
    // 0x8023B274: addiu       $v0, $zero, 0x91
    ctx->r2 = ADD32(0, 0X91);
    // 0x8023B278: beql        $v1, $v0, L_8023B2CC
    if (ctx->r3 == ctx->r2) {
        // 0x8023B27C: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_8023B2CC;
    }
    goto skip_2;
    // 0x8023B27C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_2:
    // 0x8023B280: j           L_8023B2DC
    // 0x8023B284: nop

        goto L_8023B2DC;
    // 0x8023B284: nop

L_8023B288:
    // 0x8023B288: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x8023B28C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B290: lw          $v0, 0x45E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45E4);
    // 0x8023B294: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023B298: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023B29C: j           L_8023B2CC
    // 0x8023B2A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_8023B2CC;
    // 0x8023B2A0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_8023B2A4:
    // 0x8023B2A4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B2A8: lw          $v0, 0x4670($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4670);
    // 0x8023B2AC: j           L_8023B2D8
    // 0x8023B2B0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8023B2D8;
    // 0x8023B2B0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B2B4:
    // 0x8023B2B4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023B2B8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B2BC: lw          $v0, 0x4670($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4670);
    // 0x8023B2C0: j           L_8023B2D8
    // 0x8023B2C4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_8023B2D8;
    // 0x8023B2C4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B2C8:
    // 0x8023B2C8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023B2CC:
    // 0x8023B2CC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023B2D0: lw          $v0, 0x4664($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4664);
    // 0x8023B2D4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_8023B2D8:
    // 0x8023B2D8: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_8023B2DC:
    // 0x8023B2DC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B2E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B2E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B2E8: jr          $ra
    // 0x8023B2EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B2EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80249CAC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249CAC: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x80249CB0: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x80249CB4: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80249CB8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80249CBC: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80249CC0: bne         $v0, $zero, L_80249CD4
    if (ctx->r2 != 0) {
        // 0x80249CC4: sb          $v0, 0xE($a0)
        MEM_B(0XE, ctx->r4) = ctx->r2;
            goto L_80249CD4;
    }
    // 0x80249CC4: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80249CC8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80249CCC: j           L_80249CDC
    // 0x80249CD0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_80249CDC;
    // 0x80249CD0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_80249CD4:
    // 0x80249CD4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80249CD8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_80249CDC:
    // 0x80249CDC: jr          $ra
    // 0x80249CE0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80249CE0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022C0C8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C0C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C0CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C0D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C0D4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022C0D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022C0DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C0E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C0E4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C0E8: beq         $v1, $zero, L_8022C104
    if (ctx->r3 == 0) {
        // 0x8022C0EC: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_8022C104;
    }
    // 0x8022C0EC: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x8022C0F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C0F4: beq         $v1, $v0, L_8022C188
    if (ctx->r3 == ctx->r2) {
        // 0x8022C0F8: nop
    
            goto L_8022C188;
    }
    // 0x8022C0F8: nop

    // 0x8022C0FC: j           L_8022C1D8
    // 0x8022C100: nop

        goto L_8022C1D8;
    // 0x8022C100: nop

L_8022C104:
    // 0x8022C104: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022C108: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C10C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022C110: addiu       $s3, $s3, 0x49C4
    ctx->r19 = ADD32(ctx->r19, 0X49C4);
    // 0x8022C114: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022C118: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C11C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022C120: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C124: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C128: jal         0x8004F820
    // 0x8022C12C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022C12C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C130: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C134: bgez        $v0, L_8022C160
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C138: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C160;
    }
    // 0x8022C138: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C13C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C140: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022C144: jal         0x8004F820
    // 0x8022C148: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022C148: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022C14C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C150: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C154: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022C158: j           L_8022C178
    // 0x8022C15C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022C178;
    // 0x8022C15C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022C160:
    // 0x8022C160: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C164: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022C168: jal         0x8004F820
    // 0x8022C16C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022C16C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022C170: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C174: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022C178:
    // 0x8022C178: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022C17C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C180: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022C184: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
L_8022C188:
    // 0x8022C188: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022C18C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C190: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022C194: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C198: bgez        $v0, L_8022C1AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C19C: nop
    
            goto L_8022C1AC;
    }
    // 0x8022C19C: nop

    // 0x8022C1A0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022C1A4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022C1A8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022C1AC:
    // 0x8022C1AC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022C1B0: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022C1B4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C1B8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022C1BC: jal         0x8004F820
    // 0x8022C1C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022C1C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022C1C4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022C1C8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C1CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C1D0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C1D4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022C1D8:
    // 0x8022C1D8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022C1DC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C1E0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C1E4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C1E8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C1EC: jr          $ra
    // 0x8022C1F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022C1F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022717C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022717C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227180: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227184: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022718C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80227190: bne         $v0, $zero, L_8022729C
    if (ctx->r2 != 0) {
        // 0x80227194: slti        $v0, $v0, 0x168
        ctx->r2 = SIGNED(ctx->r2) < 0X168 ? 1 : 0;
            goto L_8022729C;
    }
    // 0x80227194: slti        $v0, $v0, 0x168
    ctx->r2 = SIGNED(ctx->r2) < 0X168 ? 1 : 0;
    // 0x80227198: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022719C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271A0: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802271A4: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802271A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271AC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802271B0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x802271B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271B8: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802271BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802271C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271C4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802271C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271CC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802271D0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802271D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271D8: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
    // 0x802271DC: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802271E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271E4: sh          $v0, 0x443E($at)
    MEM_H(0X443E, ctx->r1) = ctx->r2;
    // 0x802271E8: lui         $v0, 0xE0
    ctx->r2 = S32(0XE0 << 16);
    // 0x802271EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271F0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802271F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802271F8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802271FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227200: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80227204: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227208: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022720C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227210: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80227214: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227218: sh          $zero, 0x443C($at)
    MEM_H(0X443C, ctx->r1) = 0;
    // 0x8022721C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227220: sw          $zero, 0x4434($at)
    MEM_W(0X4434, ctx->r1) = 0;
    // 0x80227224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227228: jal         0x8004F144
    // 0x8022722C: sw          $v0, 0x4438($at)
    MEM_W(0X4438, ctx->r1) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022722C: sw          $v0, 0x4438($at)
    MEM_W(0X4438, ctx->r1) = ctx->r2;
    after_0:
    // 0x80227230: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227234: beq         $a0, $zero, L_8022725C
    if (ctx->r4 == 0) {
        // 0x80227238: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022725C;
    }
    // 0x80227238: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022723C: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80227240: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80227244: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80227248: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x8022724C: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x80227250: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80227254: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x80227258: sw          $a0, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r4;
L_8022725C:
    // 0x8022725C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80227260: jal         0x8005FA7C
    // 0x80227264: addiu       $a0, $a0, 0x11F0
    ctx->r4 = ADD32(ctx->r4, 0X11F0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80227264: addiu       $a0, $a0, 0x11F0
    ctx->r4 = ADD32(ctx->r4, 0X11F0);
    after_1:
    // 0x80227268: addiu       $v1, $zero, 0x140
    ctx->r3 = ADD32(0, 0X140);
    // 0x8022726C: sh          $v1, 0x58($v0)
    MEM_H(0X58, ctx->r2) = ctx->r3;
    // 0x80227270: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80227274: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80227278: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8022727C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80227280: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80227284: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227288: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022728C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80227290: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80227294: j           L_802272C8
    // 0x80227298: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_802272C8;
    // 0x80227298: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8022729C:
    // 0x8022729C: beq         $v0, $zero, L_802272C8
    if (ctx->r2 == 0) {
        // 0x802272A0: nop
    
            goto L_802272C8;
    }
    // 0x802272A0: nop

    // 0x802272A4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802272A8: ldc1        $f2, 0x5C80($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X5C80);
    // 0x802272AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802272B0: lwc1        $f0, 0x4438($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X4438);
    // 0x802272B4: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x802272B8: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x802272BC: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x802272C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802272C4: swc1        $f2, 0x4438($at)
    MEM_W(0X4438, ctx->r1) = ctx->f2.u32l;
L_802272C8:
    // 0x802272C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802272CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802272D0: jr          $ra
    // 0x802272D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802272D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A0E0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A0E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A0E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A0E8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022A0EC: bne         $v0, $zero, L_8022A138
    if (ctx->r2 != 0) {
        // 0x8022A0F0: addiu       $a1, $zero, -0x3
        ctx->r5 = ADD32(0, -0X3);
            goto L_8022A138;
    }
    // 0x8022A0F0: addiu       $a1, $zero, -0x3
    ctx->r5 = ADD32(0, -0X3);
    // 0x8022A0F4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022A0F8: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x8022A0FC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A100: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8022A104: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A108: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8022A10C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A110: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022A114: addiu       $a0, $a0, 0x1F70
    ctx->r4 = ADD32(ctx->r4, 0X1F70);
    // 0x8022A118: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8022A11C: jal         0x8005FA7C
    // 0x8022A120: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8022A120: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
    // 0x8022A124: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A128: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A12C: sb          $v0, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = ctx->r2;
    // 0x8022A130: jal         0x8022B6D0
    // 0x8022A134: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022A134: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_1:
L_8022A138:
    // 0x8022A138: jal         0x8022B884
    // 0x8022A13C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022B884_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022A13C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x8022A140: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A144: jr          $ra
    // 0x8022A148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802278A4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802278A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802278AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802278B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802278B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802278B8: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x802278BC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802278C0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802278C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802278C8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802278CC: beq         $v1, $v0, L_80227A04
    if (ctx->r3 == ctx->r2) {
        // 0x802278D0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227A04;
    }
    // 0x802278D0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802278D4: beql        $v0, $zero, L_802278EC
    if (ctx->r2 == 0) {
        // 0x802278D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802278EC;
    }
    goto skip_0;
    // 0x802278D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802278DC: beq         $v1, $zero, L_80227904
    if (ctx->r3 == 0) {
        // 0x802278E0: nop
    
            goto L_80227904;
    }
    // 0x802278E0: nop

    // 0x802278E4: j           L_80227B08
    // 0x802278E8: nop

        goto L_80227B08;
    // 0x802278E8: nop

L_802278EC:
    // 0x802278EC: beq         $v1, $v0, L_80227A2C
    if (ctx->r3 == ctx->r2) {
        // 0x802278F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227A2C;
    }
    // 0x802278F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802278F4: beq         $v1, $v0, L_80227A38
    if (ctx->r3 == ctx->r2) {
        // 0x802278F8: nop
    
            goto L_80227A38;
    }
    // 0x802278F8: nop

    // 0x802278FC: j           L_80227B08
    // 0x80227900: nop

        goto L_80227B08;
    // 0x80227900: nop

L_80227904:
    // 0x80227904: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227908: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022790C: bne         $v0, $zero, L_80227B08
    if (ctx->r2 != 0) {
        // 0x80227910: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80227B08;
    }
    // 0x80227910: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227914: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227918: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8022791C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227924: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227928: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022792C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227930: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227934: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80227938: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022793C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227940: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80227944: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227948: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022794C: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80227950: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227954: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227958: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x8022795C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227960: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x80227964: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227968: sb          $zero, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = 0;
    // 0x8022796C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227970: sb          $zero, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = 0;
    // 0x80227974: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227978: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x8022797C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227980: sh          $zero, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = 0;
    // 0x80227984: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227988: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x8022798C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227990: sw          $zero, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = 0;
    // 0x80227994: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227998: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8022799C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802279A0: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x802279A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802279A8: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x802279AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802279B0: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x802279B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802279B8: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x802279BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802279C0: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    // 0x802279C4: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802279C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802279CC: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x802279D0: jal         0x80036B00
    // 0x802279D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x802279D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802279D8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802279DC: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x802279E0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802279E4: beq         $v0, $zero, L_802279F4
    if (ctx->r2 == 0) {
        // 0x802279E8: addiu       $a0, $zero, 0x17E
        ctx->r4 = ADD32(0, 0X17E);
            goto L_802279F4;
    }
    // 0x802279E8: addiu       $a0, $zero, 0x17E
    ctx->r4 = ADD32(0, 0X17E);
    // 0x802279EC: jal         0x8004CB2C
    // 0x802279F0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x802279F0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
L_802279F4:
    // 0x802279F4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802279F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279FC: j           L_80227B08
    // 0x80227A00: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80227B08;
    // 0x80227A00: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227A04:
    // 0x80227A04: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227A08: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x80227A0C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227A10: beq         $v0, $zero, L_80227A20
    if (ctx->r2 == 0) {
        // 0x80227A14: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227A20;
    }
    // 0x80227A14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227A18: j           L_80227B08
    // 0x80227A1C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80227B08;
    // 0x80227A1C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227A20:
    // 0x80227A20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227A24: j           L_80227B08
    // 0x80227A28: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80227B08;
    // 0x80227A28: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227A2C:
    // 0x80227A2C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227A30: j           L_80227B08
    // 0x80227A34: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80227B08;
    // 0x80227A34: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227A38:
    // 0x80227A38: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80227A3C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80227A40: lw          $v1, 0x63A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X63A0);
    // 0x80227A44: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80227A48: andi        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 & 0X2;
    // 0x80227A4C: bne         $v1, $zero, L_80227A60
    if (ctx->r3 != 0) {
        // 0x80227A50: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_80227A60;
    }
    // 0x80227A50: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80227A54: addiu       $a0, $zero, 0x17E
    ctx->r4 = ADD32(0, 0X17E);
    // 0x80227A58: jal         0x8004CB2C
    // 0x80227A5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x80227A5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
L_80227A60:
    // 0x80227A60: jal         0x80054578
    // 0x80227A64: nop

    func_80054578_2F978(rdram, ctx);
        goto after_3;
    // 0x80227A64: nop

    after_3:
    // 0x80227A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227A6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227A70: jal         0x80034844
    // 0x80227A74: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_4;
    // 0x80227A74: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_4:
    // 0x80227A78: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80227A7C: lw          $v0, 0x63A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63A0);
    // 0x80227A80: beq         $v0, $zero, L_80227A94
    if (ctx->r2 == 0) {
        // 0x80227A84: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80227A94;
    }
    // 0x80227A84: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227A88: jal         0x80036E48
    // 0x80227A8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x80227A8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x80227A90: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80227A94:
    // 0x80227A94: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80227A98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227A9C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80227AA0: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80227AA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227AA8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80227AAC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80227AB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227AB4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80227AB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227ABC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227AC0: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80227AC4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227AC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227ACC: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80227AD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227AD4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80227AD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227ADC: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80227AE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227AE4: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80227AE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227AEC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80227AF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227AF4: jal         0x8023ED8C
    // 0x80227AF8: sb          $v1, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r3;
    func_8023ED8C_ovl28(rdram, ctx);
        goto after_6;
    // 0x80227AF8: sb          $v1, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r3;
    after_6:
    // 0x80227AFC: jal         0x80070050
    // 0x80227B00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_7;
    // 0x80227B00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80227B04: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80227B08:
    // 0x80227B08: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227B0C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227B10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B14: jr          $ra
    // 0x80227B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024718C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024718C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247190: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247194: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80247198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024719C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802471A0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802471A4: beq         $v0, $zero, L_8024725C
    if (ctx->r2 == 0) {
        // 0x802471A8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8024725C;
    }
    // 0x802471A8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802471AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802471B0: addu        $at, $at, $v0
    gpr jr_addend_802471B8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802471B4: lw          $v0, 0x62A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X62A0);
    // 0x802471B8: jr          $v0
    // 0x802471BC: nop

    switch (jr_addend_802471B8 >> 2) {
        case 0: goto L_802471C0; break;
        case 1: goto L_802471EC; break;
        case 2: goto L_80247214; break;
        case 3: goto L_80247238; break;
        case 4: goto L_8024725C; break;
        default: switch_error(__func__, 0x802471B8, 0x802562A0);
    }
    // 0x802471BC: nop

L_802471C0:
    // 0x802471C0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802471C4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802471C8: bne         $v1, $v0, L_8024725C
    if (ctx->r3 != ctx->r2) {
        // 0x802471CC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8024725C;
    }
    // 0x802471CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802471D0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802471D4: bne         $v1, $v0, L_8024725C
    if (ctx->r3 != ctx->r2) {
        // 0x802471D8: nop
    
            goto L_8024725C;
    }
    // 0x802471D8: nop

    // 0x802471DC: jal         0x802476B0
    // 0x802471E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802476B0_ovl28(rdram, ctx);
        goto after_0;
    // 0x802471E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802471E4: j           L_80247250
    // 0x802471E8: nop

        goto L_80247250;
    // 0x802471E8: nop

L_802471EC:
    // 0x802471EC: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x802471F0: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x802471F4: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x802471F8: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x802471FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247200: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80247204: beq         $v0, $v1, L_80247250
    if (ctx->r2 == ctx->r3) {
        // 0x80247208: nop
    
            goto L_80247250;
    }
    // 0x80247208: nop

    // 0x8024720C: j           L_8024725C
    // 0x80247210: nop

        goto L_8024725C;
    // 0x80247210: nop

L_80247214:
    // 0x80247214: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80247218: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8024721C: bne         $v1, $v0, L_8024725C
    if (ctx->r3 != ctx->r2) {
        // 0x80247220: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8024725C;
    }
    // 0x80247220: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80247224: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80247228: beq         $v1, $v0, L_80247250
    if (ctx->r3 == ctx->r2) {
        // 0x8024722C: nop
    
            goto L_80247250;
    }
    // 0x8024722C: nop

    // 0x80247230: j           L_8024725C
    // 0x80247234: nop

        goto L_8024725C;
    // 0x80247234: nop

L_80247238:
    // 0x80247238: lhu         $v0, 0x2($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X2);
    // 0x8024723C: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80247240: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x80247244: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80247248: bne         $v0, $zero, L_8024725C
    if (ctx->r2 != 0) {
        // 0x8024724C: nop
    
            goto L_8024725C;
    }
    // 0x8024724C: nop

L_80247250:
    // 0x80247250: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80247254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80247258: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024725C:
    // 0x8024725C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247260: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247264: jr          $ra
    // 0x80247268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80247268: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A818_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A818: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A81C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8022A820: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A824: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x8022A828: bne         $v0, $zero, L_8022A888
    if (ctx->r2 != 0) {
        // 0x8022A82C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8022A888;
    }
    // 0x8022A82C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022A830: addiu       $a3, $zero, -0x3
    ctx->r7 = ADD32(0, -0X3);
L_8022A834:
    // 0x8022A834: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x8022A838: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022A83C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022A840: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    // 0x8022A844: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022A848: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022A84C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A850: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8022A854: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A858: slti        $v0, $v0, 0xB
    ctx->r2 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8022A85C: and         $v1, $v1, $a3
    ctx->r3 = ctx->r3 & ctx->r7;
    // 0x8022A860: bne         $v0, $zero, L_8022A834
    if (ctx->r2 != 0) {
        // 0x8022A864: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_8022A834;
    }
    // 0x8022A864: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022A868: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A86C: sb          $zero, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = 0;
    // 0x8022A870: lw          $v1, 0x50($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X50);
    // 0x8022A874: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A878: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x8022A87C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A880: jal         0x8022B6D0
    // 0x8022A884: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A884: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
L_8022A888:
    // 0x8022A888: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A88C: jr          $ra
    // 0x8022A890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225FD4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FD4: jr          $ra
    // 0x80225FD8: nop

    TRACE_RETURN()
    return;
    // 0x80225FD8: nop

;}
RECOMP_FUNC void func_80232560_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232560: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80232564: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80232568: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023256C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232570: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80232574: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80232578: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8023257C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80232580: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80232584: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232588: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023258C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232590: jal         0x8009A3B4
    // 0x80232594: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232594: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232598: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023259C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802325A0: jal         0x8009A3B4
    // 0x802325A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802325A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802325A8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802325AC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802325B0: jal         0x8009A3B4
    // 0x802325B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802325B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802325B8: lbu         $v1, 0x74($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X74);
    // 0x802325BC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802325C0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802325C4: jal         0x800A3450
    // 0x802325C8: sb          $v1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802325C8: sb          $v1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r3;
    after_3:
    // 0x802325CC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802325D0: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x802325D4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802325D8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802325DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802325E0: lw          $v0, 0x390C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X390C);
    // 0x802325E4: jalr        $v0
    // 0x802325E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802325E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802325EC: addiu       $a0, $s0, 0x388
    ctx->r4 = ADD32(ctx->r16, 0X388);
    // 0x802325F0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802325F4: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802325F8: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x802325FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232600: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80232604: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232608: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023260C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80232610: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80232614: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80232618: jal         0x800540D0
    // 0x8023261C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_5;
    // 0x8023261C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_5:
    // 0x80232620: beq         $v0, $zero, L_80232634
    if (ctx->r2 == 0) {
        // 0x80232624: nop
    
            goto L_80232634;
    }
    // 0x80232624: nop

    // 0x80232628: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8023262C: j           L_8023263C
    // 0x80232630: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_8023263C;
    // 0x80232630: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_80232634:
    // 0x80232634: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80232638: andi        $v0, $v0, 0xFFDF
    ctx->r2 = ctx->r2 & 0XFFDF;
L_8023263C:
    // 0x8023263C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80232640: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80232644: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232648: beq         $v0, $a1, L_80232660
    if (ctx->r2 == ctx->r5) {
        // 0x8023264C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232660;
    }
    // 0x8023264C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232650: jal         0x80050294
    // 0x80232654: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80232654: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80232658: j           L_80232668
    // 0x8023265C: nop

        goto L_80232668;
    // 0x8023265C: nop

L_80232660:
    // 0x80232660: jal         0x8005044C
    // 0x80232664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x80232664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80232668:
    // 0x80232668: jal         0x80040F30
    // 0x8023266C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x8023266C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80232670: jal         0x8003E934
    // 0x80232674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_9;
    // 0x80232674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80232678: lb          $v1, 0x74($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X74);
    // 0x8023267C: bne         $v1, $zero, L_802326F4
    if (ctx->r3 != 0) {
        // 0x80232680: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_802326F4;
    }
    // 0x80232680: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80232684: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80232688: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023268C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232690: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80232694: bltz        $v0, L_802326AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232698: slti        $v0, $v0, 0x101
        ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
            goto L_802326AC;
    }
    // 0x80232698: slti        $v0, $v0, 0x101
    ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x8023269C: beql        $v0, $zero, L_802326BC
    if (ctx->r2 == 0) {
        // 0x802326A0: sb          $zero, 0x3($s0)
        MEM_B(0X3, ctx->r16) = 0;
            goto L_802326BC;
    }
    goto skip_0;
    // 0x802326A0: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    skip_0:
    // 0x802326A4: j           L_802326BC
    // 0x802326A8: nop

        goto L_802326BC;
    // 0x802326A8: nop

L_802326AC:
    // 0x802326AC: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x802326B0: slti        $v0, $v0, 0x101
    ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x802326B4: beql        $v0, $zero, L_802326BC
    if (ctx->r2 == 0) {
        // 0x802326B8: sb          $zero, 0x3($s0)
        MEM_B(0X3, ctx->r16) = 0;
            goto L_802326BC;
    }
    goto skip_1;
    // 0x802326B8: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    skip_1:
L_802326BC:
    // 0x802326BC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802326C0: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x802326C4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802326C8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x802326CC: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802326D0: beq         $v1, $zero, L_802326F0
    if (ctx->r3 == 0) {
        // 0x802326D4: addiu       $v0, $a0, 0x28
        ctx->r2 = ADD32(ctx->r4, 0X28);
            goto L_802326F0;
    }
    // 0x802326D4: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x802326D8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802326DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802326E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802326E4: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802326E8: beq         $v0, $zero, L_802326F8
    if (ctx->r2 == 0) {
        // 0x802326EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802326F8;
    }
    // 0x802326EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802326F0:
    // 0x802326F0: sh          $a2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r6;
L_802326F4:
    // 0x802326F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802326F8:
    // 0x802326F8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802326FC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80232700: jal         0x8003B564
    // 0x80232704: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x80232704: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x80232708: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023270C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232710: beq         $v0, $zero, L_80232810
    if (ctx->r2 == 0) {
        // 0x80232714: addiu       $s2, $s1, 0x18
        ctx->r18 = ADD32(ctx->r17, 0X18);
            goto L_80232810;
    }
    // 0x80232714: addiu       $s2, $s1, 0x18
    ctx->r18 = ADD32(ctx->r17, 0X18);
    // 0x80232718: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023271C: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x80232720: jal         0x8009A3B4
    // 0x80232724: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80232724: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x80232728: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023272C: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x80232730: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80232734: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232738: addiu       $v0, $s1, 0x20
    ctx->r2 = ADD32(ctx->r17, 0X20);
    // 0x8023273C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80232740: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80232744: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80232748: lhu         $v0, 0x10($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X10);
    // 0x8023274C: lui         $s4, 0x80
    ctx->r20 = S32(0X80 << 16);
    // 0x80232750: lui         $s3, 0x488
    ctx->r19 = S32(0X488 << 16);
    // 0x80232754: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x80232758: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023275C: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x80232760: jal         0x80051E18
    // 0x80232764: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x80232764: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_12:
    // 0x80232768: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023276C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80232770: beql        $v0, $zero, L_80232814
    if (ctx->r2 == 0) {
        // 0x80232774: sw          $zero, 0x20($s1)
        MEM_W(0X20, ctx->r17) = 0;
            goto L_80232814;
    }
    goto skip_2;
    // 0x80232774: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
    skip_2:
    // 0x80232778: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8023277C: jal         0x800324B4
    // 0x80232780: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_13;
    // 0x80232780: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_13:
    // 0x80232784: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80232788: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023278C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80232790: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232794: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80232798: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023279C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802327A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802327A4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x802327A8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802327AC: jal         0x80032498
    // 0x802327B0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_80032498_D898(rdram, ctx);
        goto after_14;
    // 0x802327B0: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_14:
    // 0x802327B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802327B8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802327BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802327C0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802327C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802327C8: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x802327CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802327D0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802327D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802327D8: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x802327DC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802327E0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x802327E4: addiu       $v0, $s1, 0x30
    ctx->r2 = ADD32(ctx->r17, 0X30);
    // 0x802327E8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802327EC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802327F0: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802327F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802327F8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802327FC: sw          $s4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r20;
    // 0x80232800: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80232804: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x80232808: jal         0x80051E18
    // 0x8023280C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_15;
    // 0x8023280C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_15:
L_80232810:
    // 0x80232810: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
L_80232814:
    // 0x80232814: sw          $zero, 0x30($s1)
    MEM_W(0X30, ctx->r17) = 0;
    // 0x80232818: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8023281C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80232820: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80232824: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80232828: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8023282C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80232830: jr          $ra
    // 0x80232834: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80232834: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80228950_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228950: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228954: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80228958: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022895C: lbu         $v1, 0x6($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X6);
    // 0x80228960: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80228964: addiu       $t1, $t1, 0x49B0
    ctx->r9 = ADD32(ctx->r9, 0X49B0);
    // 0x80228968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022896C: beq         $v1, $v0, L_80228B28
    if (ctx->r3 == ctx->r2) {
        // 0x80228970: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80228B28;
    }
    // 0x80228970: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228974: beql        $v0, $zero, L_8022898C
    if (ctx->r2 == 0) {
        // 0x80228978: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022898C;
    }
    goto skip_0;
    // 0x80228978: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022897C: beq         $v1, $zero, L_8022899C
    if (ctx->r3 == 0) {
        // 0x80228980: addiu       $a0, $zero, -0x3
        ctx->r4 = ADD32(0, -0X3);
            goto L_8022899C;
    }
    // 0x80228980: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x80228984: j           L_80228BC8
    // 0x80228988: nop

        goto L_80228BC8;
    // 0x80228988: nop

L_8022898C:
    // 0x8022898C: beq         $v1, $v0, L_80228B94
    if (ctx->r3 == ctx->r2) {
        // 0x80228990: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80228B94;
    }
    // 0x80228990: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80228994: j           L_80228BC8
    // 0x80228998: nop

        goto L_80228BC8;
    // 0x80228998: nop

L_8022899C:
    // 0x8022899C: lw          $v1, 0x28($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X28);
    // 0x802289A0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802289A4: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802289A8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802289AC: lw          $v1, 0x24($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X24);
    // 0x802289B0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802289B4: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802289B8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802289BC: lw          $v0, 0x24($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X24);
    // 0x802289C0: addiu       $a2, $zero, -0xC1
    ctx->r6 = ADD32(0, -0XC1);
    // 0x802289C4: addiu       $a1, $zero, 0x780
    ctx->r5 = ADD32(0, 0X780);
    // 0x802289C8: sh          $zero, 0x46($v0)
    MEM_H(0X46, ctx->r2) = 0;
    // 0x802289CC: lbu         $v1, 0x0($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X0);
    // 0x802289D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802289D4: lbu         $a0, 0x4A6D($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4A6D);
    // 0x802289D8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802289DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802289E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802289E4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802289E8: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x802289EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802289F0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802289F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802289F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802289FC: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80228A00: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228A04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A08: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80228A0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A10: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80228A14: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228A18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A1C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80228A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228A24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A28: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80228A2C: lui         $v0, 0xFF3F
    ctx->r2 = S32(0XFF3F << 16);
    // 0x80228A30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A34: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80228A38: lui         $v0, 0x780
    ctx->r2 = S32(0X780 << 16);
    // 0x80228A3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A40: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80228A44: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x80228A48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A4C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80228A50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A54: sh          $a2, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r6;
    // 0x80228A58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A5C: sh          $a1, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r5;
    // 0x80228A60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A64: sh          $a3, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r7;
    // 0x80228A68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A6C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80228A70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A74: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x80228A78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A7C: sh          $a2, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r6;
    // 0x80228A80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A84: sh          $a1, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r5;
    // 0x80228A88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A8C: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x80228A90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A94: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80228A98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228A9C: sh          $a3, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r7;
    // 0x80228AA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AA4: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80228AA8: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80228AAC: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x80228AB0: sb          $v1, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r3;
    // 0x80228AB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AB8: sb          $a0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r4;
    // 0x80228ABC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AC0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80228AC4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80228AC8: lw          $v0, 0x1994($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1994);
    // 0x80228ACC: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80228AD0: lw          $v1, 0x1950($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1950);
    // 0x80228AD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AD8: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x80228ADC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228AE0: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x80228AE4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228AE8: sb          $zero, 0x63CD($at)
    MEM_B(0X63CD, ctx->r1) = 0;
    // 0x80228AEC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228AF0: sb          $zero, 0x63CC($at)
    MEM_B(0X63CC, ctx->r1) = 0;
    // 0x80228AF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228AF8: sb          $zero, 0x63CB($at)
    MEM_B(0X63CB, ctx->r1) = 0;
    // 0x80228AFC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228B00: sb          $zero, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = 0;
    // 0x80228B04: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228B08: sb          $zero, 0x63C9($at)
    MEM_B(0X63C9, ctx->r1) = 0;
    // 0x80228B0C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228B10: sb          $zero, 0x63C8($at)
    MEM_B(0X63C8, ctx->r1) = 0;
    // 0x80228B14: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228B18: sw          $v0, 0x63D4($at)
    MEM_W(0X63D4, ctx->r1) = ctx->r2;
    // 0x80228B1C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228B20: j           L_80228B84
    // 0x80228B24: sw          $v1, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r3;
        goto L_80228B84;
    // 0x80228B24: sw          $v1, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r3;
L_80228B28:
    // 0x80228B28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228B2C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80228B30: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228B34: lhu         $v1, 0x4DEC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4DEC);
    // 0x80228B38: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80228B3C: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80228B40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B44: sh          $v1, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r3;
    // 0x80228B48: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228B4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B50: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80228B54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B58: sw          $v1, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r3;
    // 0x80228B5C: lw          $v1, 0x10($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X10);
    // 0x80228B60: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228B64: bne         $v1, $v0, L_80228B7C
    if (ctx->r3 != ctx->r2) {
        // 0x80228B68: addiu       $v0, $zero, 0x1C
        ctx->r2 = ADD32(0, 0X1C);
            goto L_80228B7C;
    }
    // 0x80228B68: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80228B6C: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x80228B70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228B74: j           L_80228BC8
    // 0x80228B78: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
        goto L_80228BC8;
    // 0x80228B78: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_80228B7C:
    // 0x80228B7C: bne         $v1, $v0, L_80228BC8
    if (ctx->r3 != ctx->r2) {
        // 0x80228B80: nop
    
            goto L_80228BC8;
    }
    // 0x80228B80: nop

L_80228B84:
    // 0x80228B84: lbu         $v0, 0x6($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X6);
    // 0x80228B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228B8C: j           L_80228BC8
    // 0x80228B90: sb          $v0, 0x6($t0)
    MEM_B(0X6, ctx->r8) = ctx->r2;
        goto L_80228BC8;
    // 0x80228B90: sb          $v0, 0x6($t0)
    MEM_B(0X6, ctx->r8) = ctx->r2;
L_80228B94:
    // 0x80228B94: lw          $v1, 0x10($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X10);
    // 0x80228B98: bne         $v1, $v0, L_80228BC8
    if (ctx->r3 != ctx->r2) {
        // 0x80228B9C: nop
    
            goto L_80228BC8;
    }
    // 0x80228B9C: nop

    // 0x80228BA0: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80228BA4: lw          $v0, 0x195C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X195C);
    // 0x80228BA8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228BAC: sb          $zero, 0x63CA($at)
    MEM_B(0X63CA, ctx->r1) = 0;
    // 0x80228BB0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228BB4: sb          $zero, 0x63C9($at)
    MEM_B(0X63C9, ctx->r1) = 0;
    // 0x80228BB8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228BBC: sb          $zero, 0x63C8($at)
    MEM_B(0X63C8, ctx->r1) = 0;
    // 0x80228BC0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80228BC4: sw          $v0, 0x63D0($at)
    MEM_W(0X63D0, ctx->r1) = ctx->r2;
L_80228BC8:
    // 0x80228BC8: jal         0x80228310
    // 0x80228BCC: nop

    func_80228310_ovl28(rdram, ctx);
        goto after_0;
    // 0x80228BCC: nop

    after_0:
    // 0x80228BD0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228BD4: jr          $ra
    // 0x80228BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232D78_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D78: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80232D7C: bgez        $v0, L_80232D94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232D80: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80232D94;
    }
    // 0x80232D80: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80232D84: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80232D88: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80232D8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232D90: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80232D94:
    // 0x80232D94: jr          $ra
    // 0x80232D98: nop

    TRACE_RETURN()
    return;
    // 0x80232D98: nop

;}
RECOMP_FUNC void func_80249244_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249248: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024924C: jal         0x8004F684
    // 0x80249250: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80249250: nop

    after_0:
    // 0x80249254: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80249258: jr          $ra
    // 0x8024925C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024925C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023570C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023570C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80235710: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80235714: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
    // 0x80235718: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8023571C: sb          $v0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r2;
    // 0x80235720: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235724: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80235728: lw          $v0, 0x3B78($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B78);
    // 0x8023572C: jr          $ra
    // 0x80235730: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80235730: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80226AF0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AF0: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x80226AF4: lw          $v0, 0x10($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X10);
    // 0x80226AF8: bne         $v0, $zero, L_80226B70
    if (ctx->r2 != 0) {
        // 0x80226AFC: addiu       $v0, $zero, -0x1F
        ctx->r2 = ADD32(0, -0X1F);
            goto L_80226B70;
    }
    // 0x80226AFC: addiu       $v0, $zero, -0x1F
    ctx->r2 = ADD32(0, -0X1F);
    // 0x80226B00: lw          $t0, 0x28($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X28);
    // 0x80226B04: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80226B08: addiu       $a2, $zero, -0x200
    ctx->r6 = ADD32(0, -0X200);
    // 0x80226B0C: lui         $a1, 0xFFFF
    ctx->r5 = S32(0XFFFF << 16);
    // 0x80226B10: lui         $a0, 0xFE00
    ctx->r4 = S32(0XFE00 << 16);
    // 0x80226B14: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x80226B18: sh          $v0, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r2;
    // 0x80226B1C: lui         $v0, 0xFFE1
    ctx->r2 = S32(0XFFE1 << 16);
    // 0x80226B20: sh          $a3, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r7;
    // 0x80226B24: sh          $a2, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r6;
    // 0x80226B28: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x80226B2C: sw          $a1, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r5;
    // 0x80226B30: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
    // 0x80226B34: sh          $zero, 0x58($t0)
    MEM_H(0X58, ctx->r8) = 0;
    // 0x80226B38: sh          $zero, 0x54($t0)
    MEM_H(0X54, ctx->r8) = 0;
    // 0x80226B3C: sh          $v1, 0x56($t0)
    MEM_H(0X56, ctx->r8) = ctx->r3;
    // 0x80226B40: lw          $t0, 0x2C($t1)
    ctx->r8 = MEM_W(ctx->r9, 0X2C);
    // 0x80226B44: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80226B48: sh          $v0, 0x14($t0)
    MEM_H(0X14, ctx->r8) = ctx->r2;
    // 0x80226B4C: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x80226B50: sh          $a3, 0x16($t0)
    MEM_H(0X16, ctx->r8) = ctx->r7;
    // 0x80226B54: sh          $a2, 0x18($t0)
    MEM_H(0X18, ctx->r8) = ctx->r6;
    // 0x80226B58: sw          $v0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->r2;
    // 0x80226B5C: sw          $a1, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r5;
    // 0x80226B60: sw          $a0, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r4;
    // 0x80226B64: sh          $zero, 0x58($t0)
    MEM_H(0X58, ctx->r8) = 0;
    // 0x80226B68: sh          $zero, 0x54($t0)
    MEM_H(0X54, ctx->r8) = 0;
    // 0x80226B6C: sh          $v1, 0x56($t0)
    MEM_H(0X56, ctx->r8) = ctx->r3;
L_80226B70:
    // 0x80226B70: jr          $ra
    // 0x80226B74: nop

    TRACE_RETURN()
    return;
    // 0x80226B74: nop

;}
RECOMP_FUNC void func_80232444_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232448: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023244C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232454: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80232458: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023245C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80232460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232464: jal         0x8004DA90
    // 0x80232468: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80232468: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023246C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80232470: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80232474: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232478: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023247C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232480: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232484: jr          $ra
    // 0x80232488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802486E8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802486E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802486EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802486F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802486F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802486F8: jal         0x802492D0
    // 0x802486FC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    func_802492D0_ovl28(rdram, ctx);
        goto after_0;
    // 0x802486FC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    after_0:
    // 0x80248700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80248704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80248708: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x8024870C: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80248710: jal         0x8024932C
    // 0x80248714: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    func_8024932C_ovl28(rdram, ctx);
        goto after_1;
    // 0x80248714: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    after_1:
    // 0x80248718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024871C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80248720: jr          $ra
    // 0x80248724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B750_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B750: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022B754: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B758: sb          $zero, 0x63EA($at)
    MEM_B(0X63EA, ctx->r1) = 0;
    // 0x8022B75C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B760: sb          $zero, 0x63E9($at)
    MEM_B(0X63E9, ctx->r1) = 0;
    // 0x8022B764: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B768: sb          $zero, 0x63E8($at)
    MEM_B(0X63E8, ctx->r1) = 0;
    // 0x8022B76C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022B770: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022B774: lw          $v0, 0x2F28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2F28);
    // 0x8022B778: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B77C: jr          $ra
    // 0x8022B780: sw          $v0, 0x63E0($at)
    MEM_W(0X63E0, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022B780: sw          $v0, 0x63E0($at)
    MEM_W(0X63E0, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8022A6A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A6A4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8022A6A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A6AC: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x8022A6B0: bne         $v0, $zero, L_8022A70C
    if (ctx->r2 != 0) {
        // 0x8022A6B4: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_8022A70C;
    }
    // 0x8022A6B4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022A6B8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A6BC: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022A6C0: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8022A6C4: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8022A6C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A6CC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022A6D0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8022A6D4: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x8022A6D8: lw          $v1, 0x54($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X54);
    // 0x8022A6DC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A6E0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022A6E4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A6E8: lw          $v1, 0x28($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X28);
    // 0x8022A6EC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A6F0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A6F4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A6F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A6FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A700: sb          $v0, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = ctx->r2;
    // 0x8022A704: jal         0x8022B6D0
    // 0x8022A708: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A708: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_0:
L_8022A70C:
    // 0x8022A70C: jal         0x8022B884
    // 0x8022A710: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8022B884_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022A710: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x8022A714: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A718: jr          $ra
    // 0x8022A71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226178_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226178: jr          $ra
    // 0x8022617C: nop

    TRACE_RETURN()
    return;
    // 0x8022617C: nop

;}
RECOMP_FUNC void func_802475A0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802475A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802475A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802475A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802475AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802475B0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x802475B4: addiu       $s1, $a0, 0x38
    ctx->r17 = ADD32(ctx->r4, 0X38);
    // 0x802475B8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x802475BC: jal         0x8003B878
    // 0x802475C0: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x802475C0: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    after_0:
    // 0x802475C4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802475C8: sltiu       $v0, $s0, 0x10
    ctx->r2 = ctx->r16 < 0X10 ? 1 : 0;
    // 0x802475CC: beq         $v0, $zero, L_802475EC
    if (ctx->r2 == 0) {
        // 0x802475D0: sll         $v0, $s0, 1
        ctx->r2 = S32(ctx->r16 << 1);
            goto L_802475EC;
    }
    // 0x802475D0: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x802475D4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802475D8: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x802475DC: beq         $s0, $zero, L_8024769C
    if (ctx->r16 == 0) {
        // 0x802475E0: lui         $v0, 0xAE00
        ctx->r2 = S32(0XAE00 << 16);
            goto L_8024769C;
    }
    // 0x802475E0: lui         $v0, 0xAE00
    ctx->r2 = S32(0XAE00 << 16);
    // 0x802475E4: j           L_80247610
    // 0x802475E8: nop

        goto L_80247610;
    // 0x802475E8: nop

L_802475EC:
    // 0x802475EC: sltiu       $v0, $s0, 0x21
    ctx->r2 = ctx->r16 < 0X21 ? 1 : 0;
    // 0x802475F0: bne         $v0, $zero, L_8024761C
    if (ctx->r2 != 0) {
        // 0x802475F4: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8024761C;
    }
    // 0x802475F4: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x802475F8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x802475FC: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x80247600: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80247604: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80247608: sll         $s0, $v1, 2
    ctx->r16 = S32(ctx->r3 << 2);
    // 0x8024760C: lui         $v0, 0xAE00
    ctx->r2 = S32(0XAE00 << 16);
L_80247610:
    // 0x80247610: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80247614: j           L_80247628
    // 0x80247618: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
        goto L_80247628;
    // 0x80247618: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_8024761C:
    // 0x8024761C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80247620: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80247624: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80247628:
    // 0x80247628: sltiu       $v0, $s0, 0x100
    ctx->r2 = ctx->r16 < 0X100 ? 1 : 0;
    // 0x8024762C: beql        $v0, $zero, L_80247634
    if (ctx->r2 == 0) {
        // 0x80247630: addiu       $s0, $zero, 0xFF
        ctx->r16 = ADD32(0, 0XFF);
            goto L_80247634;
    }
    goto skip_0;
    // 0x80247630: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    skip_0:
L_80247634:
    // 0x80247634: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80247638: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8024763C: ori         $a0, $a0, 0x60A0
    ctx->r4 = ctx->r4 | 0X60A0;
    // 0x80247640: lh          $v1, 0x2($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2);
    // 0x80247644: addiu       $v0, $v0, -0x18
    ctx->r2 = ADD32(ctx->r2, -0X18);
    // 0x80247648: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024764C: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x80247650: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80247654: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80247658: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x8024765C: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x80247660: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x80247664: ori         $v0, $v0, 0x60BF
    ctx->r2 = ctx->r2 | 0X60BF;
    // 0x80247668: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x8024766C: addiu       $v0, $zero, 0x7FA0
    ctx->r2 = ADD32(0, 0X7FA0);
    // 0x80247670: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80247674: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x80247678: ori         $v0, $v0, 0x7FBF
    ctx->r2 = ctx->r2 | 0X7FBF;
    // 0x8024767C: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80247680: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80247684: sw          $a0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r4;
    // 0x80247688: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8024768C: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    // 0x80247690: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80247694: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80247698: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
L_8024769C:
    // 0x8024769C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802476A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802476A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802476A8: jr          $ra
    // 0x802476AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802476AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024DD2C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024DD2C: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8024DD30: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8024DD34: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8024DD38: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x8024DD3C: lbu         $a1, 0x2($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X2);
    // 0x8024DD40: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024DD44: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8024DD48: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8024DD4C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8024DD50: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8024DD54: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8024DD58: sltu        $v1, $v1, $a1
    ctx->r3 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8024DD5C: beq         $v1, $zero, L_8024DD90
    if (ctx->r3 == 0) {
        // 0x8024DD60: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8024DD90;
    }
    // 0x8024DD60: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8024DD64: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024DD68: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x8024DD6C: lbu         $v1, 0x1($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X1);
    // 0x8024DD70: lbu         $a0, 0x3($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X3);
    // 0x8024DD74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8024DD78: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8024DD7C: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8024DD80: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8024DD84: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8024DD88: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8024DD8C: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
L_8024DD90:
    // 0x8024DD90: jr          $ra
    // 0x8024DD94: nop

    TRACE_RETURN()
    return;
    // 0x8024DD94: nop

;}
RECOMP_FUNC void func_8022DAF4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DAF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DAFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DB00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022DB04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022DB08: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DB0C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DB10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DB14: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x8022DB18: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022DB1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022DB20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DB24: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022DB28: addiu       $v1, $v1, 0x3080
    ctx->r3 = ADD32(ctx->r3, 0X3080);
    // 0x8022DB2C: jal         0x8022FF44
    // 0x8022DB30: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_8022FF44_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022DB30: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x8022DB34: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DB38: beq         $v0, $zero, L_8022DC48
    if (ctx->r2 == 0) {
        // 0x8022DB3C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022DC48;
    }
    // 0x8022DB3C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022DB40: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022DB44: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DB48: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DB4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DB50: jal         0x8009A3B4
    // 0x8022DB54: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DB54: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DB58: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022DB5C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022DB60: jal         0x8009A3B4
    // 0x8022DB64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DB64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022DB68: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022DB6C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022DB70: jal         0x8009A3B4
    // 0x8022DB74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022DB74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022DB78: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022DB7C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022DB80: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DB84: beq         $v0, $zero, L_8022DB94
    if (ctx->r2 == 0) {
        // 0x8022DB88: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_8022DB94;
    }
    // 0x8022DB88: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022DB8C: jal         0x8022FDAC
    // 0x8022DB90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FDAC_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022DB90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022DB94:
    // 0x8022DB94: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022DB98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DB9C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022DBA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DBA4: lw          $v0, 0x35E8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X35E8);
    // 0x8022DBA8: jalr        $v0
    // 0x8022DBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022DBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022DBB0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DBB4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022DBB8: bne         $v0, $zero, L_8022DBD4
    if (ctx->r2 != 0) {
        // 0x8022DBBC: nop
    
            goto L_8022DBD4;
    }
    // 0x8022DBBC: nop

    // 0x8022DBC0: jal         0x8003E934
    // 0x8022DBC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022DBC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022DBC8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022DBCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DBD0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022DBD4:
    // 0x8022DBD4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022DBD8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DBDC: beq         $v0, $a1, L_8022DBF4
    if (ctx->r2 == ctx->r5) {
        // 0x8022DBE0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DBF4;
    }
    // 0x8022DBE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DBE4: jal         0x80050294
    // 0x8022DBE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022DBE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022DBEC: j           L_8022DBFC
    // 0x8022DBF0: nop

        goto L_8022DBFC;
    // 0x8022DBF0: nop

L_8022DBF4:
    // 0x8022DBF4: jal         0x8005044C
    // 0x8022DBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022DBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022DBFC:
    // 0x8022DBFC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DC00: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DC04: beq         $v0, $zero, L_8022DC20
    if (ctx->r2 == 0) {
        // 0x8022DC08: nop
    
            goto L_8022DC20;
    }
    // 0x8022DC08: nop

    // 0x8022DC0C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8022DC10: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x8022DC14: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x8022DC18: jal         0x8003B564
    // 0x8022DC1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022DC1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_8022DC20:
    // 0x8022DC20: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022DC24: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022DC28: beq         $v0, $zero, L_8022DC38
    if (ctx->r2 == 0) {
        // 0x8022DC2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DC38;
    }
    // 0x8022DC2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DC30: j           L_8022DC3C
    // 0x8022DC34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8022DC3C;
    // 0x8022DC34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022DC38:
    // 0x8022DC38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8022DC3C:
    // 0x8022DC3C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022DC40: jal         0x80047284
    // 0x8022DC44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x8022DC44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8022DC48:
    // 0x8022DC48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DC4C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022DC50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DC54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DC58: jr          $ra
    // 0x8022DC5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DC5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235864_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235868: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023586C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235870: jal         0x8004F144
    // 0x80235874: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80235874: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80235878: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023587C: beq         $a0, $zero, L_80235900
    if (ctx->r4 == 0) {
        // 0x80235880: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80235900;
    }
    // 0x80235880: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80235884: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80235888: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023588C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80235890: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80235894: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80235898: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023589C: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x802358A0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802358A4: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x802358A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802358AC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802358B0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802358B4: lhu         $v0, 0x3BB0($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X3BB0);
    // 0x802358B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802358BC: sh          $v1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r3;
    // 0x802358C0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802358C4: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802358C8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802358CC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802358D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802358D4: lhu         $v0, 0x3BB2($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X3BB2);
    // 0x802358D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802358DC: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x802358E0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802358E4: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x802358E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802358EC: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802358F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802358F4: lhu         $v0, 0x3BB4($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X3BB4);
    // 0x802358F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802358FC: sh          $v1, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r3;
L_80235900:
    // 0x80235900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235904: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235908: jr          $ra
    // 0x8023590C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023590C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E78_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E78: jr          $ra
    // 0x80225E7C: nop

    TRACE_RETURN()
    return;
    // 0x80225E7C: nop

;}
RECOMP_FUNC void func_80234948_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234948: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023494C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234950: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80234954: bne         $v0, $zero, L_802349CC
    if (ctx->r2 != 0) {
        // 0x80234958: nop
    
            goto L_802349CC;
    }
    // 0x80234958: nop

    // 0x8023495C: lhu         $v0, 0x3B2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3B2);
    // 0x80234960: sb          $zero, 0x1DC($a0)
    MEM_B(0X1DC, ctx->r4) = 0;
    // 0x80234964: andi        $v1, $v0, 0x7
    ctx->r3 = ctx->r2 & 0X7;
    // 0x80234968: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x8023496C: beq         $v0, $zero, L_8023498C
    if (ctx->r2 == 0) {
        // 0x80234970: sb          $zero, 0xE($a0)
        MEM_B(0XE, ctx->r4) = 0;
            goto L_8023498C;
    }
    // 0x80234970: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x80234974: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80234978: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8023497C: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x80234980: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234984: j           L_802349C0
    // 0x80234988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802349C0;
    // 0x80234988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023498C:
    // 0x8023498C: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80234990: beq         $v0, $zero, L_802349AC
    if (ctx->r2 == 0) {
        // 0x80234994: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802349AC;
    }
    // 0x80234994: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80234998: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8023499C: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x802349A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802349A4: j           L_802349C0
    // 0x802349A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802349C0;
    // 0x802349A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802349AC:
    // 0x802349AC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x802349B0: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802349B4: lbu         $a1, 0xAC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XAC);
    // 0x802349B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802349BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802349C0:
    // 0x802349C0: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x802349C4: jal         0x80050294
    // 0x802349C8: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802349C8: sb          $v1, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r3;
    after_0:
L_802349CC:
    // 0x802349CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802349D0: jr          $ra
    // 0x802349D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802349D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024975C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024975C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80249760: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249764: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80249768: addiu       $a0, $zero, 0x57
    ctx->r4 = ADD32(0, 0X57);
    // 0x8024976C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80249770: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80249774: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80249778: jal         0x8006033C
    // 0x8024977C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8024977C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80249780: bne         $v0, $zero, L_802497A8
    if (ctx->r2 != 0) {
        // 0x80249784: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802497A8;
    }
    // 0x80249784: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80249788: jal         0x8006033C
    // 0x8024978C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8024978C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_1:
    // 0x80249790: bne         $v0, $zero, L_802497A8
    if (ctx->r2 != 0) {
        // 0x80249794: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802497A8;
    }
    // 0x80249794: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80249798: jal         0x8006033C
    // 0x8024979C: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8024979C: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    after_2:
    // 0x802497A0: beq         $v0, $zero, L_802497B0
    if (ctx->r2 == 0) {
        // 0x802497A4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802497B0;
    }
    // 0x802497A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802497A8:
    // 0x802497A8: j           L_80249860
    // 0x802497AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80249860;
    // 0x802497AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802497B0:
    // 0x802497B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802497B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802497B8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802497BC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802497C0: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x802497C4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x802497C8: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802497CC: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802497D0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802497D4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x802497D8: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x802497DC: jal         0x8004D5D4
    // 0x802497E0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x802497E0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_3:
    // 0x802497E4: lui         $v1, 0x280
    ctx->r3 = S32(0X280 << 16);
    // 0x802497E8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802497EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802497F0: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x802497F4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802497F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802497FC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80249800: jal         0x80249E98
    // 0x80249804: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    func_80249E98_ovl28(rdram, ctx);
        goto after_4;
    // 0x80249804: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    after_4:
L_80249808:
    // 0x80249808: jal         0x8004F144
    // 0x8024980C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x8024980C: nop

    after_5:
    // 0x80249810: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80249814: beq         $v1, $zero, L_80249834
    if (ctx->r3 == 0) {
        // 0x80249818: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_80249834;
    }
    // 0x80249818: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8024981C: sb          $s2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r18;
    // 0x80249820: sb          $s3, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r19;
    // 0x80249824: sb          $s2, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r18;
    // 0x80249828: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8024982C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80249830: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
L_80249834:
    // 0x80249834: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80249838: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024983C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80249840: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80249844: bne         $v0, $zero, L_80249808
    if (ctx->r2 != 0) {
        // 0x80249848: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80249808;
    }
    // 0x80249848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024984C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x80249850: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80249854: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80249858: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024985C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80249860:
    // 0x80249860: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80249864: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80249868: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8024986C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80249870: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249874: jr          $ra
    // 0x80249878: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80249878: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80249E34_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249E38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249E3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249E40: jal         0x8004F2C4
    // 0x80249E44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x80249E44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80249E48: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80249E4C: beq         $a0, $zero, L_80249E88
    if (ctx->r4 == 0) {
        // 0x80249E50: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80249E88;
    }
    // 0x80249E50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80249E54: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x80249E58: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80249E5C: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80249E60: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x80249E64: lhu         $v0, 0x38($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X38);
    // 0x80249E68: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80249E6C: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80249E70: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x80249E74: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80249E78: lhu         $v0, 0x3C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3C);
    // 0x80249E7C: sw          $s0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r16;
    // 0x80249E80: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
    // 0x80249E84: sw          $a0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r4;
L_80249E88:
    // 0x80249E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249E8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249E90: jr          $ra
    // 0x80249E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
