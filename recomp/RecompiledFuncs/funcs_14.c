#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8006033C_3B73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006033C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80060340: andi        $a1, $a0, 0x7
    ctx->r5 = ctx->r4 & 0X7;
    // 0x80060344: srl         $a0, $a0, 3
    ctx->r4 = S32(U32(ctx->r4) >> 3);
    // 0x80060348: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006034C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80060350: lbu         $v0, 0x55A8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X55A8);
    // 0x80060354: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80060358: srav        $v1, $v1, $a1
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r5 & 31));
    // 0x8006035C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80060360: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80060364: jr          $ra
    // 0x80060368: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80060368: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800654BC_408BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800654BC: lhu         $v0, 0xBE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XBE);
    // 0x800654C0: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800654C4: sh          $v1, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r3;
    // 0x800654C8: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x800654CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800654D0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800654D4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800654D8: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x800654DC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x800654E0: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800654E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800654E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800654EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800654F0: lw          $v0, 0x28C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X28C4);
    // 0x800654F4: jr          $ra
    // 0x800654F8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800654F8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8008B2E0_666E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B2E0: jr          $ra
    // 0x8008B2E4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    TRACE_RETURN()
    return;
    // 0x8008B2E4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
;}
RECOMP_FUNC void func_800660C0_414C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800660C0: lui         $v0, 0x1A1F
    ctx->r2 = S32(0X1A1F << 16);
    // 0x800660C4: ori         $v0, $v0, 0x58D1
    ctx->r2 = ctx->r2 | 0X58D1;
    // 0x800660C8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x800660CC: addiu       $a1, $a1, -0x7790
    ctx->r5 = ADD32(ctx->r5, -0X7790);
    // 0x800660D0: subu        $a1, $a0, $a1
    ctx->r5 = SUB32(ctx->r4, ctx->r5);
    // 0x800660D4: lbu         $v1, 0x72($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X72);
    // 0x800660D8: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800660DC: mflo        $a1
    ctx->r5 = lo;
    // 0x800660E0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800660E4: lw          $a2, 0x6C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X6C);
    // 0x800660E8: lui         $a3, 0x40
    ctx->r7 = S32(0X40 << 16);
    // 0x800660EC: ori         $a3, $a3, 0x800
    ctx->r7 = ctx->r7 | 0X800;
    // 0x800660F0: sh          $zero, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = 0;
    // 0x800660F4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800660F8: sb          $v1, 0x72($a0)
    MEM_B(0X72, ctx->r4) = ctx->r3;
    // 0x800660FC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80066100: lw          $v1, 0x77F0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X77F0);
    // 0x80066104: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x80066108: addiu       $a2, $a2, 0x5
    ctx->r6 = ADD32(ctx->r6, 0X5);
    // 0x8006610C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80066110: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x80066114: sw          $a2, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r6;
    // 0x80066118: sra         $a1, $a1, 2
    ctx->r5 = S32(SIGNED(ctx->r5) >> 2);
    // 0x8006611C: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x80066120: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80066124: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80066128: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006612C: sw          $v1, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r3;
    // 0x80066130: jr          $ra
    // 0x80066134: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80066134: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80056518_31918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80056518: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8005651C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80056520: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80056524: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80056528: lb          $a0, -0x1CB8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1CB8);
    // 0x8005652C: lbu         $v1, 0x11($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X11);
    // 0x80056530: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80056534: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80056538: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005653C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80056540: sb          $v1, 0x11($a2)
    MEM_B(0X11, ctx->r6) = ctx->r3;
    // 0x80056544: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80056548: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8005654C: lb          $a0, -0x1CB7($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1CB7);
    // 0x80056550: lbu         $v1, 0x19($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X19);
    // 0x80056554: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80056558: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005655C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80056560: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80056564: sb          $v1, 0x19($a2)
    MEM_B(0X19, ctx->r6) = ctx->r3;
    // 0x80056568: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005656C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80056570: lb          $a0, -0x1CB6($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1CB6);
    // 0x80056574: lbu         $v1, 0x21($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X21);
    // 0x80056578: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8005657C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80056580: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80056584: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80056588: sb          $v1, 0x21($a2)
    MEM_B(0X21, ctx->r6) = ctx->r3;
    // 0x8005658C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80056590: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80056594: lb          $v1, -0x1CB5($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X1CB5);
    // 0x80056598: lbu         $a0, 0x11($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X11);
    // 0x8005659C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800565A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800565A4: lbu         $v1, 0x29($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X29);
    // 0x800565A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800565AC: sltiu       $a0, $a0, 0x47
    ctx->r4 = ctx->r4 < 0X47 ? 1 : 0;
    // 0x800565B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800565B4: bne         $a0, $zero, L_800565C4
    if (ctx->r4 != 0) {
        // 0x800565B8: sb          $v1, 0x29($a2)
        MEM_B(0X29, ctx->r6) = ctx->r3;
            goto L_800565C4;
    }
    // 0x800565B8: sb          $v1, 0x29($a2)
    MEM_B(0X29, ctx->r6) = ctx->r3;
    // 0x800565BC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x800565C0: sb          $v0, 0x11($a2)
    MEM_B(0X11, ctx->r6) = ctx->r2;
L_800565C4:
    // 0x800565C4: lbu         $v0, 0x19($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X19);
    // 0x800565C8: sltiu       $v0, $v0, 0x47
    ctx->r2 = ctx->r2 < 0X47 ? 1 : 0;
    // 0x800565CC: bne         $v0, $zero, L_800565D8
    if (ctx->r2 != 0) {
        // 0x800565D0: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_800565D8;
    }
    // 0x800565D0: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x800565D4: sb          $v0, 0x19($a2)
    MEM_B(0X19, ctx->r6) = ctx->r2;
L_800565D8:
    // 0x800565D8: lbu         $v0, 0x21($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X21);
    // 0x800565DC: sltiu       $v0, $v0, 0x47
    ctx->r2 = ctx->r2 < 0X47 ? 1 : 0;
    // 0x800565E0: bne         $v0, $zero, L_800565EC
    if (ctx->r2 != 0) {
        // 0x800565E4: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_800565EC;
    }
    // 0x800565E4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x800565E8: sb          $v0, 0x21($a2)
    MEM_B(0X21, ctx->r6) = ctx->r2;
L_800565EC:
    // 0x800565EC: lbu         $v0, 0x29($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X29);
    // 0x800565F0: sltiu       $v0, $v0, 0x29
    ctx->r2 = ctx->r2 < 0X29 ? 1 : 0;
    // 0x800565F4: bne         $v0, $zero, L_80056600
    if (ctx->r2 != 0) {
        // 0x800565F8: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80056600;
    }
    // 0x800565F8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x800565FC: sb          $v0, 0x29($a2)
    MEM_B(0X29, ctx->r6) = ctx->r2;
L_80056600:
    // 0x80056600: jr          $ra
    // 0x80056604: nop

    TRACE_RETURN()
    return;
    // 0x80056604: nop

;}
RECOMP_FUNC void func_8008A7A4_65BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A7A4: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x8008A7A8: beq         $v0, $zero, L_8008A7B8
    if (ctx->r2 == 0) {
        // 0x8008A7AC: andi        $v0, $a0, 0x2
        ctx->r2 = ctx->r4 & 0X2;
            goto L_8008A7B8;
    }
    // 0x8008A7AC: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x8008A7B0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A7B4: sh          $a1, 0x4F9C($at)
    MEM_H(0X4F9C, ctx->r1) = ctx->r5;
L_8008A7B8:
    // 0x8008A7B8: beq         $v0, $zero, L_8008A7C8
    if (ctx->r2 == 0) {
        // 0x8008A7BC: nop
    
            goto L_8008A7C8;
    }
    // 0x8008A7BC: nop

    // 0x8008A7C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008A7C4: sh          $a1, 0x4F9E($at)
    MEM_H(0X4F9E, ctx->r1) = ctx->r5;
L_8008A7C8:
    // 0x8008A7C8: jr          $ra
    // 0x8008A7CC: nop

    TRACE_RETURN()
    return;
    // 0x8008A7CC: nop

;}
RECOMP_FUNC void func_80078660_53A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80078668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007866C: jal         0x800A3450
    // 0x80078670: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80078670: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80078674: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x80078678: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8007867C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80078680: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x80078684: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80078688: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8007868C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80078690: jal         0x800324B4
    // 0x80078694: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80078694: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_1:
    // 0x80078698: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8007869C: srl         $v0, $v0, 9
    ctx->r2 = S32(U32(ctx->r2) >> 9);
    // 0x800786A0: jal         0x800A3450
    // 0x800786A4: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x800786A4: sh          $v0, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r2;
    after_2:
    // 0x800786A8: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    // 0x800786AC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x800786B0: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x800786B4: jal         0x80032498
    // 0x800786B8: sh          $v0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x800786B8: sh          $v0, 0x32($s0)
    MEM_H(0X32, ctx->r16) = ctx->r2;
    after_3:
    // 0x800786BC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800786C0: srl         $v0, $v0, 9
    ctx->r2 = S32(U32(ctx->r2) >> 9);
    // 0x800786C4: sh          $v0, 0x34($s0)
    MEM_H(0X34, ctx->r16) = ctx->r2;
    // 0x800786C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800786CC: sh          $zero, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = 0;
    // 0x800786D0: sh          $zero, 0x28($s0)
    MEM_H(0X28, ctx->r16) = 0;
    // 0x800786D4: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x800786D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800786DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800786E0: jr          $ra
    // 0x800786E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800786E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8009CC40_78040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009CC40: addi        $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8009CC44: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x8009CC48: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
    // 0x8009CC4C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8009CC50: sw          $t0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r8;
    // 0x8009CC54: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8009CC58: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8009CC5C: sw          $t1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r9;
    // 0x8009CC60: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x8009CC64: sw          $t0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r8;
    // 0x8009CC68: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x8009CC6C: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x8009CC70: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x8009CC74: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x8009CC78: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x8009CC7C: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x8009CC80: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x8009CC84: jr          $ra
    // 0x8009CC88: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8009CC88: sw          $zero, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = 0;
    // 0x8009CC8C: nop

    // 0x8009CC90: nop

    // 0x8009CC94: nop

    // 0x8009CC98: nop

    // 0x8009CC9C: nop

;}
RECOMP_FUNC void func_800601D0_3B5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800601D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800601D4: bne         $a0, $zero, L_80060210
    if (ctx->r4 != 0) {
        // 0x800601D8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80060210;
    }
    // 0x800601D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800601DC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800601E0: addiu       $v1, $v1, 0x55A8
    ctx->r3 = ADD32(ctx->r3, 0X55A8);
    // 0x800601E4: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
L_800601E8:
    // 0x800601E8: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800601EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800601F0: bgez        $v0, L_800601E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800601F4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800601E8;
    }
    // 0x800601F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800601F8: jal         0x8004BDD0
    // 0x800601FC: nop

    func_8004BDD0_271D0(rdram, ctx);
        goto after_0;
    // 0x800601FC: nop

    after_0:
    // 0x80060200: jal         0x8004BE00
    // 0x80060204: nop

    func_8004BE00_27200(rdram, ctx);
        goto after_1;
    // 0x80060204: nop

    after_1:
    // 0x80060208: j           L_80060228
    // 0x8006020C: nop

        goto L_80060228;
    // 0x8006020C: nop

L_80060210:
    // 0x80060210: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80060214: addiu       $a0, $a0, 0x3EF0
    ctx->r4 = ADD32(ctx->r4, 0X3EF0);
    // 0x80060218: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8006021C: addiu       $a1, $a1, 0x55A8
    ctx->r5 = ADD32(ctx->r5, 0X55A8);
    // 0x80060220: jal         0x8003BD6C
    // 0x80060224: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_2;
    // 0x80060224: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
L_80060228:
    // 0x80060228: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8006022C: jr          $ra
    // 0x80060230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80060230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004F568_2A968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F568: lui         $v1, 0xEA0
    ctx->r3 = S32(0XEA0 << 16);
    // 0x8004F56C: ori         $v1, $v1, 0xEA0F
    ctx->r3 = ctx->r3 | 0XEA0F;
    // 0x8004F570: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004F574: addiu       $v0, $v0, 0x59A0
    ctx->r2 = ADD32(ctx->r2, 0X59A0);
    // 0x8004F578: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8004F57C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8004F580: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F584: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F588: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8004F58C: lw          $v0, 0xA9C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA9C);
    // 0x8004F590: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8004F594: lw          $a2, -0x3FB0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3FB0);
    // 0x8004F598: mfhi        $a3
    ctx->r7 = hi;
    // 0x8004F59C: srl         $a1, $a3, 1
    ctx->r5 = S32(U32(ctx->r7) >> 1);
    // 0x8004F5A0: srlv        $v1, $v1, $a1
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r5 & 31));
    // 0x8004F5A4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F5A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004F5AC: sw          $v0, 0xA9C($at)
    MEM_W(0XA9C, ctx->r1) = ctx->r2;
    // 0x8004F5B0: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8004F5B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004F5B8: sw          $v0, 0xA9C($at)
    MEM_W(0XA9C, ctx->r1) = ctx->r2;
    // 0x8004F5BC: jr          $ra
    // 0x8004F5C0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8004F5C0: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8004B494_26894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B494: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004B498: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004B49C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8004B4A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004B4A4: lui         $s2, 0x800
    ctx->r18 = S32(0X800 << 16);
    // 0x8004B4A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004B4AC: addiu       $s1, $zero, 0x140
    ctx->r17 = ADD32(0, 0X140);
    // 0x8004B4B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8004B4B4:
    // 0x8004B4B4: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x8004B4B8: lw          $a1, -0x5858($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5858);
    // 0x8004B4BC: sll         $v1, $s0, 4
    ctx->r3 = S32(ctx->r16 << 4);
    // 0x8004B4C0: addiu       $v0, $a1, 0x24
    ctx->r2 = ADD32(ctx->r5, 0X24);
    // 0x8004B4C4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004B4C8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8004B4CC: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x8004B4D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004B4D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B4D8: lw          $v0, -0x2EB4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2EB4);
    // 0x8004B4DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004B4E0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8004B4E4: ori         $v0, $v0, 0x38
    ctx->r2 = ctx->r2 | 0X38;
    // 0x8004B4E8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8004B4EC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004B4F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B4F4: lw          $v0, -0x2EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2EB0);
    // 0x8004B4F8: subu        $a2, $v1, $s0
    ctx->r6 = SUB32(ctx->r3, ctx->r16);
    // 0x8004B4FC: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x8004B500: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x8004B504: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004B508: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004B50C: lw          $v0, -0x2EAC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2EAC);
    // 0x8004B510: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004B514: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8004B518: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x8004B51C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004B520: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8004B524: lw          $v1, -0x2EA8($at)
    ctx->r3 = MEM_W(ctx->r1, -0X2EA8);
    // 0x8004B528: sll         $v0, $s0, 4
    ctx->r2 = S32(ctx->r16 << 4);
    // 0x8004B52C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x8004B530: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8004B534: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x8004B538: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // 0x8004B53C: sh          $s1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r17;
    // 0x8004B540: sh          $s1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r17;
    // 0x8004B544: sh          $a2, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r6;
    // 0x8004B548: sh          $a2, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r6;
    // 0x8004B54C: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x8004B550: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x8004B554: jal         0x8002FD30
    // 0x8004B558: sw          $v1, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r3;
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x8004B558: sw          $v1, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r3;
    after_0:
    // 0x8004B55C: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8004B560: bne         $v0, $zero, L_8004B4B4
    if (ctx->r2 != 0) {
        // 0x8004B564: nop
    
            goto L_8004B4B4;
    }
    // 0x8004B564: nop

    // 0x8004B568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B56C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004B570: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004B574: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004B578: jr          $ra
    // 0x8004B57C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004B57C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800727A4_4DBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800727A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800727A8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800727AC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x800727B0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800727B4: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x800727B8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800727BC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800727C0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800727C4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800727C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800727CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800727D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800727D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800727D8: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x800727DC: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x800727E0: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x800727E4: bne         $v1, $zero, L_800727F4
    if (ctx->r3 != 0) {
        // 0x800727E8: addu        $fp, $a2, $zero
        ctx->r30 = ADD32(ctx->r6, 0);
            goto L_800727F4;
    }
    // 0x800727E8: addu        $fp, $a2, $zero
    ctx->r30 = ADD32(ctx->r6, 0);
    // 0x800727EC: j           L_8007281C
    // 0x800727F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_8007281C;
    // 0x800727F0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_800727F4:
    // 0x800727F4: srl         $v0, $s5, 1
    ctx->r2 = S32(U32(ctx->r21) >> 1);
    // 0x800727F8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800727FC: bne         $v0, $zero, L_8007280C
    if (ctx->r2 != 0) {
        // 0x80072800: sltu        $v0, $v1, $s5
        ctx->r2 = ctx->r3 < ctx->r21 ? 1 : 0;
            goto L_8007280C;
    }
    // 0x80072800: sltu        $v0, $v1, $s5
    ctx->r2 = ctx->r3 < ctx->r21 ? 1 : 0;
    // 0x80072804: j           L_8007281C
    // 0x80072808: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_8007281C;
    // 0x80072808: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8007280C:
    // 0x8007280C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80072810: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80072814: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80072818: ori         $s0, $v0, 0x2
    ctx->r16 = ctx->r2 | 0X2;
L_8007281C:
    // 0x8007281C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80072820: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80072824: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80072828: addiu       $s2, $zero, 0xC
    ctx->r18 = ADD32(0, 0XC);
L_8007282C:
    // 0x8007282C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072830: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80072834: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80072838: beq         $v0, $zero, L_8007295C
    if (ctx->r2 == 0) {
        // 0x8007283C: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_8007295C;
    }
    // 0x8007283C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80072840: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80072844: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80072848: bnel        $v0, $fp, L_8007292C
    if (ctx->r2 != ctx->r30) {
        // 0x8007284C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8007292C;
    }
    goto skip_0;
    // 0x8007284C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80072850: beq         $s3, $zero, L_800728CC
    if (ctx->r19 == 0) {
        // 0x80072854: nop
    
            goto L_800728CC;
    }
    // 0x80072854: nop

    // 0x80072858: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8007285C: jal         0x800721F0
    // 0x80072860: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800721F0_4D5F0(rdram, ctx);
        goto after_0;
    // 0x80072860: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80072864: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80072868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007286C: beq         $v1, $v0, L_8007289C
    if (ctx->r3 == ctx->r2) {
        // 0x80072870: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8007289C;
    }
    // 0x80072870: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80072874: bne         $v0, $zero, L_8007288C
    if (ctx->r2 != 0) {
        // 0x80072878: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007288C;
    }
    // 0x80072878: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007287C: beql        $v1, $v0, L_800728B0
    if (ctx->r3 == ctx->r2) {
        // 0x80072880: sltiu       $v0, $s0, 0x3
        ctx->r2 = ctx->r16 < 0X3 ? 1 : 0;
            goto L_800728B0;
    }
    goto skip_1;
    // 0x80072880: sltiu       $v0, $s0, 0x3
    ctx->r2 = ctx->r16 < 0X3 ? 1 : 0;
    skip_1:
    // 0x80072884: beq         $v1, $s6, L_8007295C
    if (ctx->r3 == ctx->r22) {
        // 0x80072888: nop
    
            goto L_8007295C;
    }
    // 0x80072888: nop

L_8007288C:
    // 0x8007288C: bnel        $s0, $zero, L_800728CC
    if (ctx->r16 != 0) {
        // 0x80072890: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_800728CC;
    }
    goto skip_2;
    // 0x80072890: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_2:
    // 0x80072894: j           L_800728CC
    // 0x80072898: nop

        goto L_800728CC;
    // 0x80072898: nop

L_8007289C:
    // 0x8007289C: sltiu       $v0, $s0, 0x2
    ctx->r2 = ctx->r16 < 0X2 ? 1 : 0;
    // 0x800728A0: beql        $v0, $zero, L_800728CC
    if (ctx->r2 == 0) {
        // 0x800728A4: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_800728CC;
    }
    goto skip_3;
    // 0x800728A4: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    skip_3:
    // 0x800728A8: j           L_800728CC
    // 0x800728AC: nop

        goto L_800728CC;
    // 0x800728AC: nop

L_800728B0:
    // 0x800728B0: bne         $v0, $zero, L_800728CC
    if (ctx->r2 != 0) {
        // 0x800728B4: addiu       $a0, $s7, 0x6
        ctx->r4 = ADD32(ctx->r23, 0X6);
            goto L_800728CC;
    }
    // 0x800728B4: addiu       $a0, $s7, 0x6
    ctx->r4 = ADD32(ctx->r23, 0X6);
    // 0x800728B8: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x800728BC: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x800728C0: subu        $v0, $v0, $s5
    ctx->r2 = SUB32(ctx->r2, ctx->r21);
    // 0x800728C4: jal         0x8006036C
    // 0x800728C8: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x800728C8: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    after_1:
L_800728CC:
    // 0x800728CC: bltzl       $s1, L_8007292C
    if (SIGNED(ctx->r17) < 0) {
        // 0x800728D0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8007292C;
    }
    goto skip_4;
    // 0x800728D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_4:
    // 0x800728D4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x800728D8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800728DC: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x800728E0: lb          $v1, 0x3580($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3580);
    // 0x800728E4: bltz        $v1, L_80072928
    if (SIGNED(ctx->r3) < 0) {
        // 0x800728E8: sll         $v1, $v1, 9
        ctx->r3 = S32(ctx->r3 << 9);
            goto L_80072928;
    }
    // 0x800728E8: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x800728EC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800728F0: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x800728F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800728F8: sra         $a1, $s1, 4
    ctx->r5 = S32(SIGNED(ctx->r17) >> 4);
    // 0x800728FC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80072900: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80072904: andi        $v1, $s1, 0xF
    ctx->r3 = ctx->r17 & 0XF;
    // 0x80072908: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8007290C: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80072910: sllv        $v0, $s6, $v1
    ctx->r2 = S32(ctx->r22 << (ctx->r3 & 31));
    // 0x80072914: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80072918: sllv        $v1, $s0, $v1
    ctx->r3 = S32(ctx->r16 << (ctx->r3 & 31));
    // 0x8007291C: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80072920: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80072924: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
L_80072928:
    // 0x80072928: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8007292C:
    // 0x8007292C: sltiu       $v0, $s1, 0x6B0
    ctx->r2 = ctx->r17 < 0X6B0 ? 1 : 0;
    // 0x80072930: bne         $v0, $zero, L_8007282C
    if (ctx->r2 != 0) {
        // 0x80072934: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8007282C;
    }
    // 0x80072934: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80072938: sltiu       $v0, $s0, 0x3
    ctx->r2 = ctx->r16 < 0X3 ? 1 : 0;
    // 0x8007293C: beq         $v0, $zero, L_80072954
    if (ctx->r2 == 0) {
        // 0x80072940: nop
    
            goto L_80072954;
    }
    // 0x80072940: nop

    // 0x80072944: jal         0x8006036C
    // 0x80072948: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80072948: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_2:
    // 0x8007294C: j           L_8007295C
    // 0x80072950: nop

        goto L_8007295C;
    // 0x80072950: nop

L_80072954:
    // 0x80072954: jal         0x80060590
    // 0x80072958: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80072958: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_3:
L_8007295C:
    // 0x8007295C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80072960: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80072964: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80072968: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8007296C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80072970: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80072974: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80072978: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007297C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80072980: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80072984: jr          $ra
    // 0x80072988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80072988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003B7F4_16BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B7F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003B7F8: sw          $zero, -0x6F9C($at)
    MEM_W(-0X6F9C, ctx->r1) = 0;
    // 0x8003B7FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B800: sb          $zero, 0x3FFC($at)
    MEM_B(0X3FFC, ctx->r1) = 0;
    // 0x8003B804: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003B808: jr          $ra
    // 0x8003B80C: sh          $zero, -0x2380($at)
    MEM_H(-0X2380, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x8003B80C: sh          $zero, -0x2380($at)
    MEM_H(-0X2380, ctx->r1) = 0;
;}
RECOMP_FUNC void func_800912E0_6C6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800912E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800912E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800912E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800912EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800912F0: jal         0x80094460
    // 0x800912F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800912F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800912F8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800912FC: lw          $a1, -0xEEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEEC);
    // 0x80091300: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x80091304: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x80091308: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8009130C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80091310: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x80091314: jal         0x80094460
    // 0x80091318: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80091318: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    after_1:
    // 0x8009131C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80091324: jr          $ra
    // 0x80091328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80091328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009132C: nop

;}
RECOMP_FUNC void func_8004A350_25750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A350: jr          $ra
    // 0x8004A354: nop

    TRACE_RETURN()
    return;
    // 0x8004A354: nop

;}
RECOMP_FUNC void func_8002B2C8_66C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002B2C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002B2CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002B2D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002B2D4: srl         $v0, $s0, 24
    ctx->r2 = S32(U32(ctx->r16) >> 24);
    // 0x8002B2D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8002B2DC: andi        $s3, $v0, 0xF
    ctx->r19 = ctx->r2 & 0XF;
    // 0x8002B2E0: andi        $v0, $s0, 0xFF00
    ctx->r2 = ctx->r16 & 0XFF00;
    // 0x8002B2E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8002B2E8: srl         $s2, $v0, 8
    ctx->r18 = S32(U32(ctx->r2) >> 8);
    // 0x8002B2EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8002B2F0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8002B2F4: beq         $s3, $v0, L_8002B314
    if (ctx->r19 == ctx->r2) {
        // 0x8002B2F8: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_8002B314;
    }
    // 0x8002B2F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002B2FC: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x8002B300: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002B304: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002B308: lw          $v0, -0x7C28($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7C28);
    // 0x8002B30C: bltz        $v0, L_8002B3A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8002B310: nop
    
            goto L_8002B3A8;
    }
    // 0x8002B310: nop

L_8002B314:
    // 0x8002B314: bltz        $s0, L_8002B3A8
    if (SIGNED(ctx->r16) < 0) {
        // 0x8002B318: nop
    
            goto L_8002B3A8;
    }
    // 0x8002B318: nop

    // 0x8002B31C: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x8002B320: addiu       $s1, $s1, 0x22DC
    ctx->r17 = ADD32(ctx->r17, 0X22DC);
    // 0x8002B324: jal         0x8008ADE8
    // 0x8002B328: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_0;
    // 0x8002B328: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_0:
    // 0x8002B32C: beq         $v0, $zero, L_8002B364
    if (ctx->r2 == 0) {
        // 0x8002B330: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002B364;
    }
    // 0x8002B330: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002B334: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8002B338: jal         0x8008AD34
    // 0x8002B33C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_1;
    // 0x8002B33C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8002B340: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B344: lw          $a0, 0x22E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E0);
    // 0x8002B348: jal         0x8008AD34
    // 0x8002B34C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_2;
    // 0x8002B34C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8002B350: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B354: lw          $a0, 0x22E4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E4);
    // 0x8002B358: jal         0x8008AD34
    // 0x8002B35C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_3;
    // 0x8002B35C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8002B360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002B364:
    // 0x8002B364: bne         $s3, $v0, L_8002B384
    if (ctx->r19 != ctx->r2) {
        // 0x8002B368: nop
    
            goto L_8002B384;
    }
    // 0x8002B368: nop

    // 0x8002B36C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8002B370: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8002B374: lbu         $v0, 0x7D3C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7D3C);
    // 0x8002B378: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B37C: j           L_8002B38C
    // 0x8002B380: sb          $v0, 0x22F0($at)
    MEM_B(0X22F0, ctx->r1) = ctx->r2;
        goto L_8002B38C;
    // 0x8002B380: sb          $v0, 0x22F0($at)
    MEM_B(0X22F0, ctx->r1) = ctx->r2;
L_8002B384:
    // 0x8002B384: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B388: sb          $zero, 0x22F0($at)
    MEM_B(0X22F0, ctx->r1) = 0;
L_8002B38C:
    // 0x8002B38C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8002B390: lw          $v1, 0x56FC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56FC);
    // 0x8002B394: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8002B398: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B39C: sw          $zero, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = 0;
    // 0x8002B3A0: sw          $s0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r16;
    // 0x8002B3A4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8002B3A8:
    // 0x8002B3A8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8002B3AC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B3B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8002B3B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002B3B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002B3BC: jr          $ra
    // 0x8002B3C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8002B3C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8006100C_3C40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006100C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80061010: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80061014: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80061018: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8006101C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80061020: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80061024: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80061028: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8006102C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
    // 0x80061030: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_80061034:
    // 0x80061034: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80061038: beq         $a0, $zero, L_80061074
    if (ctx->r4 == 0) {
        // 0x8006103C: nop
    
            goto L_80061074;
    }
    // 0x8006103C: nop

    // 0x80061040: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x80061044: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x80061048: beql        $a2, $s3, L_80061064
    if (ctx->r6 == ctx->r19) {
        // 0x8006104C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80061064;
    }
    goto skip_0;
    // 0x8006104C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80061050: srl         $a2, $a2, 1
    ctx->r6 = S32(U32(ctx->r6) >> 1);
    // 0x80061054: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    // 0x80061058: jal         0x80060DA0
    // 0x8006105C: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_0;
    // 0x8006105C: andi        $a2, $a2, 0x1
    ctx->r6 = ctx->r6 & 0X1;
    after_0:
    // 0x80061060: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80061064:
    // 0x80061064: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80061068: slti        $v0, $s1, 0x8
    ctx->r2 = SIGNED(ctx->r17) < 0X8 ? 1 : 0;
    // 0x8006106C: bne         $v0, $zero, L_80061034
    if (ctx->r2 != 0) {
        // 0x80061070: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80061034;
    }
    // 0x80061070: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80061074:
    // 0x80061074: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80061078: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8006107C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80061080: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80061084: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80061088: jr          $ra
    // 0x8006108C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8006108C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80060170_3B570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060170: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060174: sw          $zero, -0x3A40($at)
    MEM_W(-0X3A40, ctx->r1) = 0;
    // 0x80060178: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006017C: sw          $zero, -0x3A38($at)
    MEM_W(-0X3A38, ctx->r1) = 0;
    // 0x80060180: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060184: sw          $zero, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = 0;
    // 0x80060188: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006018C: sb          $zero, -0x3A48($at)
    MEM_B(-0X3A48, ctx->r1) = 0;
    // 0x80060190: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060194: jr          $ra
    // 0x80060198: sb          $zero, -0x3A47($at)
    MEM_B(-0X3A47, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80060198: sb          $zero, -0x3A47($at)
    MEM_B(-0X3A47, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80049F14_25314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049F14: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80049F18: lbu         $v1, -0x3991($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3991);
    // 0x80049F1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80049F20: beq         $v1, $v0, L_80049F54
    if (ctx->r3 == ctx->r2) {
        // 0x80049F24: nop
    
            goto L_80049F54;
    }
    // 0x80049F24: nop

    // 0x80049F28: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80049F2C: lbu         $v0, -0x3993($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3993);
    // 0x80049F30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80049F34: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80049F38: beq         $v0, $zero, L_80049F54
    if (ctx->r2 == 0) {
        // 0x80049F3C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80049F54;
    }
    // 0x80049F3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80049F40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049F44: sb          $v0, -0x3993($at)
    MEM_B(-0X3993, ctx->r1) = ctx->r2;
    // 0x80049F48: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80049F4C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049F50: sb          $v0, -0x3997($at)
    MEM_B(-0X3997, ctx->r1) = ctx->r2;
L_80049F54:
    // 0x80049F54: jr          $ra
    // 0x80049F58: nop

    TRACE_RETURN()
    return;
    // 0x80049F58: nop

;}
RECOMP_FUNC void func_80026B9C_1F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026B9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026BA0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80026BA4: jal         0x80089EA0
    // 0x80026BA8: nop

    func_80089EA0_652A0(rdram, ctx);
        goto after_0;
    // 0x80026BA8: nop

    after_0:
    // 0x80026BAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80026BB0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80026BB4: jal         0x8009C830
    // 0x80026BB8: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_1;
    // 0x80026BB8: nop

    after_1:
    // 0x80026BBC: jal         0x8009CBE0
    // 0x80026BC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_2;
    // 0x80026BC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80026BC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80026BC8: jr          $ra
    // 0x80026BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80026BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008DC50_69050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DC50: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008DC54: lw          $v0, -0xEF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEF0);
    // 0x8008DC58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DC5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008DC60: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8008DC64: bne         $v0, $zero, L_8008DCA8
    if (ctx->r2 != 0) {
        // 0x8008DC68: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8008DCA8;
    }
    // 0x8008DC68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DC6C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008DC70: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8008DC74: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008DC78: bne         $v0, $zero, L_8008DCA8
    if (ctx->r2 != 0) {
        // 0x8008DC7C: sw          $a0, -0xEF0($at)
        MEM_W(-0XEF0, ctx->r1) = ctx->r4;
            goto L_8008DCA8;
    }
    // 0x8008DC7C: sw          $a0, -0xEF0($at)
    MEM_W(-0XEF0, ctx->r1) = ctx->r4;
    // 0x8008DC80: jal         0x8008E3A0
    // 0x8008DC84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008E3A0_697A0(rdram, ctx);
        goto after_0;
    // 0x8008DC84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8008DC88: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008DC8C: lw          $v0, -0xEF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEF0);
    // 0x8008DC90: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8008DC94: sw          $v0, 0xB30($at)
    MEM_W(0XB30, ctx->r1) = ctx->r2;
    // 0x8008DC98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008DC9C: sw          $v0, -0xEEC($at)
    MEM_W(-0XEEC, ctx->r1) = ctx->r2;
    // 0x8008DCA0: jal         0x8008DCB8
    // 0x8008DCA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008DCB8_690B8(rdram, ctx);
        goto after_1;
    // 0x8008DCA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8008DCA8:
    // 0x8008DCA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DCAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008DCB0: jr          $ra
    // 0x8008DCB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008DCB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80093894_6EC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093894: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80093898: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8009389C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800938A0: addiu       $v1, $v1, -0x3C39
    ctx->r3 = ADD32(ctx->r3, -0X3C39);
    // 0x800938A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_800938A8:
    // 0x800938A8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800938AC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x800938B0: sb          $a2, -0x3C3A($at)
    MEM_B(-0X3C3A, ctx->r1) = ctx->r6;
    // 0x800938B4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x800938B8: addiu       $a0, $a0, 0xA
    ctx->r4 = ADD32(ctx->r4, 0XA);
    // 0x800938BC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800938C0: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x800938C4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x800938C8: sltiu       $v0, $a1, 0x4
    ctx->r2 = ctx->r5 < 0X4 ? 1 : 0;
    // 0x800938CC: bne         $v0, $zero, L_800938A8
    if (ctx->r2 != 0) {
        // 0x800938D0: addiu       $v1, $v1, 0xA
        ctx->r3 = ADD32(ctx->r3, 0XA);
            goto L_800938A8;
    }
    // 0x800938D0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x800938D4: jr          $ra
    // 0x800938D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x800938D8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_80050294_2B694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80050294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80050298: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005029C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800502A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800502A4: lw          $v1, 0x90($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X90);
    // 0x800502A8: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x800502AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800502B0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800502B4: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x800502B8: sb          $a1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r5;
    // 0x800502BC: sw          $v0, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r2;
    // 0x800502C0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800502C4: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
    // 0x800502C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800502CC: jal         0x80051770
    // 0x800502D0: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_80051770_2CB70(rdram, ctx);
        goto after_0;
    // 0x800502D0: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_0:
    // 0x800502D4: jal         0x80051248
    // 0x800502D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_1;
    // 0x800502D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800502DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800502E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800502E4: jr          $ra
    // 0x800502E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800502E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006F9A4_4ADA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F9A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006F9A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006F9AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8006F9B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8006F9B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F9B8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8006F9BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006F9C0: bne         $v1, $v0, L_8006FA30
    if (ctx->r3 != ctx->r2) {
        // 0x8006F9C4: nop
    
            goto L_8006FA30;
    }
    // 0x8006F9C4: nop

    // 0x8006F9C8: jal         0x8003E934
    // 0x8006F9CC: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8006F9CC: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    after_0:
    // 0x8006F9D0: lw          $v1, 0x78($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X78);
    // 0x8006F9D4: lh          $v1, 0xA($v1)
    ctx->r3 = MEM_H(ctx->r3, 0XA);
    // 0x8006F9D8: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8006F9DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8006F9E0: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8006F9E4: beq         $v0, $zero, L_8006FA30
    if (ctx->r2 == 0) {
        // 0x8006F9E8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8006FA30;
    }
    // 0x8006F9E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8006F9EC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006F9F0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8006F9F4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8006F9F8: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x8006F9FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006FA00: sb          $v0, 0x75($s1)
    MEM_B(0X75, ctx->r17) = ctx->r2;
    // 0x8006FA04: sb          $v0, 0x74($s1)
    MEM_B(0X74, ctx->r17) = ctx->r2;
    // 0x8006FA08: addiu       $v0, $zero, -0x2A
    ctx->r2 = ADD32(0, -0X2A);
    // 0x8006FA0C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8006FA10: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x8006FA14: jal         0x80070100
    // 0x8006FA18: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    func_80070100_4B500(rdram, ctx);
        goto after_1;
    // 0x8006FA18: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    after_1:
    // 0x8006FA1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8006FA20: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8006FA24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006FA28: jal         0x8006FB90
    // 0x8006FA2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_2;
    // 0x8006FA2C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
L_8006FA30:
    // 0x8006FA30: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8006FA34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006FA38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006FA3C: jr          $ra
    // 0x8006FA40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006FA40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800666D0_41AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800666D0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x800666D4: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x800666D8: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    // 0x800666DC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800666E0: addiu       $v1, $v1, -0x6F11
    ctx->r3 = ADD32(ctx->r3, -0X6F11);
    // 0x800666E4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800666E8: sb          $zero, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = 0;
    // 0x800666EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800666F0: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
L_800666F4:
    // 0x800666F4: sb          $a2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r6;
    // 0x800666F8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800666FC: bgez        $a1, L_800666F4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80066700: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_800666F4;
    }
    // 0x80066700: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80066704: jr          $ra
    // 0x80066708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80066708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8002894C_3D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002894C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80028950: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80028954: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80028958: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8002895C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80028960: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028964: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80028968: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8002896C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80028970: jr          $ra
    // 0x80028974: sb          $zero, 0x4898($at)
    MEM_B(0X4898, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80028974: sb          $zero, 0x4898($at)
    MEM_B(0X4898, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80035418_10818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035418: jr          $ra
    // 0x8003541C: nop

    TRACE_RETURN()
    return;
    // 0x8003541C: nop

;}
RECOMP_FUNC void func_8002A670_5A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A674: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A678: jal         0x8006033C
    // 0x8002A67C: addiu       $a0, $zero, 0x1E1
    ctx->r4 = ADD32(0, 0X1E1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8002A67C: addiu       $a0, $zero, 0x1E1
    ctx->r4 = ADD32(0, 0X1E1);
    after_0:
    // 0x8002A680: bne         $v0, $zero, L_8002A68C
    if (ctx->r2 != 0) {
        // 0x8002A684: addiu       $v0, $zero, 0x25
        ctx->r2 = ADD32(0, 0X25);
            goto L_8002A68C;
    }
    // 0x8002A684: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8002A688: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_8002A68C:
    // 0x8002A68C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A690: sh          $v0, 0x701E($at)
    MEM_H(0X701E, ctx->r1) = ctx->r2;
    // 0x8002A694: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A698: jr          $ra
    // 0x8002A69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80063F18_3F318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063F1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80063F20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80063F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063F28: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80063F2C: beql        $a1, $zero, L_80063F50
    if (ctx->r5 == 0) {
        // 0x80063F30: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_80063F50;
    }
    goto skip_0;
    // 0x80063F30: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    skip_0:
    // 0x80063F34: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063F38: lbu         $v1, 0x71($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X71);
    // 0x80063F3C: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x80063F40: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80063F44: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80063F48: j           L_80063F74
    // 0x80063F4C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
        goto L_80063F74;
    // 0x80063F4C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
L_80063F50:
    // 0x80063F50: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063F54: lb          $a1, 0x71($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X71);
    // 0x80063F58: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80063F5C: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80063F60: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80063F64: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80063F68: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80063F6C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80063F70: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
L_80063F74:
    // 0x80063F74: jal         0x80061510
    // 0x80063F78: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80063F78: nop

    after_0:
    // 0x80063F7C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063F80: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80063F84: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80063F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063F8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80063F90: jr          $ra
    // 0x80063F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80063F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002B3C4_67C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002B3C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002B3C8: lw          $v0, 0x56FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56FC);
    // 0x8002B3CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8002B3D0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8002B3D4: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8002B3D8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8002B3DC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8002B3E0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8002B3E4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8002B3E8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8002B3EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002B3F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002B3F4: lw          $s3, 0x4($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X4);
    // 0x8002B3F8: srl         $v0, $s3, 24
    ctx->r2 = S32(U32(ctx->r19) >> 24);
    // 0x8002B3FC: srl         $v1, $s3, 16
    ctx->r3 = S32(U32(ctx->r19) >> 16);
    // 0x8002B400: andi        $a0, $s3, 0xFF00
    ctx->r4 = ctx->r19 & 0XFF00;
    // 0x8002B404: andi        $s3, $s3, 0xFF
    ctx->r19 = ctx->r19 & 0XFF;
    // 0x8002B408: andi        $s4, $v1, 0xFF
    ctx->r20 = ctx->r3 & 0XFF;
    // 0x8002B40C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8002B410: lw          $v1, -0x72D8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72D8);
    // 0x8002B414: andi        $s5, $v0, 0xF
    ctx->r21 = ctx->r2 & 0XF;
    // 0x8002B418: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8002B41C: beq         $v0, $zero, L_8002B9CC
    if (ctx->r2 == 0) {
        // 0x8002B420: srl         $s2, $a0, 8
        ctx->r18 = S32(U32(ctx->r4) >> 8);
            goto L_8002B9CC;
    }
    // 0x8002B420: srl         $s2, $a0, 8
    ctx->r18 = S32(U32(ctx->r4) >> 8);
    // 0x8002B424: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8002B428: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002B42C: addu        $at, $at, $v0
    gpr jr_addend_8002B434 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002B430: lw          $v0, 0x1CD0($at)
    ctx->r2 = ADD32(ctx->r1, 0X1CD0);
    // 0x8002B434: jr          $v0
    // 0x8002B438: nop

    switch (jr_addend_8002B434 >> 2) {
        case 0: goto L_8002B43C; break;
        case 1: goto L_8002B504; break;
        case 2: goto L_8002B67C; break;
        case 3: goto L_8002B840; break;
        case 4: goto L_8002B8BC; break;
        case 5: goto L_8002B904; break;
        case 6: goto L_8002B99C; break;
        default: switch_error(__func__, 0x8002B434, 0x800D1CD0);
    }
    // 0x8002B438: nop

L_8002B43C:
    // 0x8002B43C: xori        $v0, $s5, 0x1
    ctx->r2 = ctx->r21 ^ 0X1;
    // 0x8002B440: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8002B444: sltu        $v1, $zero, $s4
    ctx->r3 = 0 < ctx->r20 ? 1 : 0;
    // 0x8002B448: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002B44C: bne         $v0, $zero, L_8002B45C
    if (ctx->r2 != 0) {
        // 0x8002B450: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8002B45C;
    }
    // 0x8002B450: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8002B454: bne         $s5, $v0, L_8002B4EC
    if (ctx->r21 != ctx->r2) {
        // 0x8002B458: nop
    
            goto L_8002B4EC;
    }
    // 0x8002B458: nop

L_8002B45C:
    // 0x8002B45C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B460: jal         0x8008ADE8
    // 0x8002B464: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_0;
    // 0x8002B464: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    after_0:
    // 0x8002B468: beq         $v0, $zero, L_8002B480
    if (ctx->r2 == 0) {
        // 0x8002B46C: nop
    
            goto L_8002B480;
    }
    // 0x8002B46C: nop

    // 0x8002B470: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B474: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    // 0x8002B478: jal         0x8008AD34
    // 0x8002B47C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_1;
    // 0x8002B47C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_8002B480:
    // 0x8002B480: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B484: jal         0x8008ADE8
    // 0x8002B488: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_2;
    // 0x8002B488: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    after_2:
    // 0x8002B48C: beq         $v0, $zero, L_8002B4A4
    if (ctx->r2 == 0) {
        // 0x8002B490: nop
    
            goto L_8002B4A4;
    }
    // 0x8002B490: nop

    // 0x8002B494: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B498: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    // 0x8002B49C: jal         0x8008AD34
    // 0x8002B4A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_3;
    // 0x8002B4A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8002B4A4:
    // 0x8002B4A4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B4A8: jal         0x8008ADE8
    // 0x8002B4AC: lw          $a0, 0x22E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E8);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_4;
    // 0x8002B4AC: lw          $a0, 0x22E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E8);
    after_4:
    // 0x8002B4B0: beq         $v0, $zero, L_8002B4C8
    if (ctx->r2 == 0) {
        // 0x8002B4B4: nop
    
            goto L_8002B4C8;
    }
    // 0x8002B4B4: nop

    // 0x8002B4B8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B4BC: lw          $a0, 0x22E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E8);
    // 0x8002B4C0: jal         0x8008AD34
    // 0x8002B4C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_5;
    // 0x8002B4C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_8002B4C8:
    // 0x8002B4C8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B4CC: jal         0x8008ADE8
    // 0x8002B4D0: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_6;
    // 0x8002B4D0: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    after_6:
    // 0x8002B4D4: beq         $v0, $zero, L_8002B4EC
    if (ctx->r2 == 0) {
        // 0x8002B4D8: nop
    
            goto L_8002B4EC;
    }
    // 0x8002B4D8: nop

    // 0x8002B4DC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B4E0: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    // 0x8002B4E4: jal         0x8008AD34
    // 0x8002B4E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_7;
    // 0x8002B4E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_8002B4EC:
    // 0x8002B4EC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002B4F0: lw          $v0, -0x72D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72D8);
    // 0x8002B4F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002B4F8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B4FC: j           L_8002B9CC
    // 0x8002B500: sw          $v0, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = ctx->r2;
        goto L_8002B9CC;
    // 0x8002B500: sw          $v0, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = ctx->r2;
L_8002B504:
    // 0x8002B504: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8002B508: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002B50C: sh          $v0, -0x3F7A($at)
    MEM_H(-0X3F7A, ctx->r1) = ctx->r2;
    // 0x8002B510: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8002B514: bne         $s5, $v0, L_8002B544
    if (ctx->r21 != ctx->r2) {
        // 0x8002B518: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_8002B544;
    }
    // 0x8002B518: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x8002B51C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002B520: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002B524: lw          $v0, 0x7DA8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7DA8);
    // 0x8002B528: bltz        $v0, L_8002B9AC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8002B52C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8002B9AC;
    }
    // 0x8002B52C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8002B530: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B534: sh          $s2, 0x22F2($at)
    MEM_H(0X22F2, ctx->r1) = ctx->r18;
    // 0x8002B538: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B53C: j           L_8002B9CC
    // 0x8002B540: sw          $v0, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = ctx->r2;
        goto L_8002B9CC;
    // 0x8002B540: sw          $v0, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = ctx->r2;
L_8002B544:
    // 0x8002B544: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002B548: lw          $v0, 0x56FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56FC);
    // 0x8002B54C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x8002B550: beq         $s2, $v0, L_8002B654
    if (ctx->r18 == ctx->r2) {
        // 0x8002B554: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8002B654;
    }
    // 0x8002B554: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002B558: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002B55C: addiu       $a1, $a1, -0x7F70
    ctx->r5 = ADD32(ctx->r5, -0X7F70);
    // 0x8002B560: lui         $a2, 0x9E
    ctx->r6 = S32(0X9E << 16);
    // 0x8002B564: addiu       $a2, $a2, 0x29E0
    ctx->r6 = ADD32(ctx->r6, 0X29E0);
    // 0x8002B568: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x8002B56C: addiu       $s1, $s1, -0x60C0
    ctx->r17 = ADD32(ctx->r17, -0X60C0);
    // 0x8002B570: jal         0x80028D30
    // 0x8002B574: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_8;
    // 0x8002B574: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8002B578: jal         0x8008B25C
    // 0x8002B57C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008B25C_6665C(rdram, ctx);
        goto after_9;
    // 0x8002B57C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8002B580: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002B584: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002B588: addiu       $a1, $a1, -0x7C28
    ctx->r5 = ADD32(ctx->r5, -0X7C28);
    // 0x8002B58C: lui         $a2, 0x9F
    ctx->r6 = S32(0X9F << 16);
    // 0x8002B590: addiu       $a2, $a2, -0x51D0
    ctx->r6 = ADD32(ctx->r6, -0X51D0);
    // 0x8002B594: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8002B598: addiu       $s0, $s0, -0x54C0
    ctx->r16 = ADD32(ctx->r16, -0X54C0);
    // 0x8002B59C: jal         0x80028D30
    // 0x8002B5A0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_10;
    // 0x8002B5A0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8002B5A4: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x8002B5A8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8002B5AC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8002B5B0: lw          $a1, 0x7B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7B24);
    // 0x8002B5B4: jal         0x8008B094
    // 0x8002B5B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008B094_66494(rdram, ctx);
        goto after_11;
    // 0x8002B5B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8002B5BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002B5C0: jal         0x8008B30C
    // 0x8002B5C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8008B30C_6670C(rdram, ctx);
        goto after_12;
    // 0x8002B5C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8002B5C8: sltu        $v0, $zero, $s5
    ctx->r2 = 0 < ctx->r21 ? 1 : 0;
    // 0x8002B5CC: sltu        $v1, $zero, $s4
    ctx->r3 = 0 < ctx->r20 ? 1 : 0;
    // 0x8002B5D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002B5D4: beq         $v0, $zero, L_8002B648
    if (ctx->r2 == 0) {
        // 0x8002B5D8: sll         $v0, $s4, 1
        ctx->r2 = S32(ctx->r20 << 1);
            goto L_8002B648;
    }
    // 0x8002B5D8: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x8002B5DC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8002B5E0: sll         $s0, $v0, 1
    ctx->r16 = S32(ctx->r2 << 1);
    // 0x8002B5E4: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8002B5E8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8002B5EC: lh          $v0, 0x7CC8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7CC8);
    // 0x8002B5F0: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x8002B5F4: beq         $v0, $s7, L_8002B648
    if (ctx->r2 == ctx->r23) {
        // 0x8002B5F8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8002B648;
    }
    // 0x8002B5F8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8002B5FC: lui         $s6, 0x800A
    ctx->r22 = S32(0X800A << 16);
    // 0x8002B600: addiu       $s6, $s6, 0x7FD0
    ctx->r22 = ADD32(ctx->r22, 0X7FD0);
    // 0x8002B604: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x8002B608: lui         $s1, 0x198
    ctx->r17 = S32(0X198 << 16);
    // 0x8002B60C: addiu       $s1, $s1, 0xCE0
    ctx->r17 = ADD32(ctx->r17, 0XCE0);
    // 0x8002B610: lui         $a3, 0x8014
    ctx->r7 = S32(0X8014 << 16);
    // 0x8002B614: addiu       $a3, $a3, 0x2250
    ctx->r7 = ADD32(ctx->r7, 0X2250);
    // 0x8002B618: jal         0x80028D30
    // 0x8002B61C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_13;
    // 0x8002B61C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8002B620: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8002B624: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8002B628: lh          $v0, 0x7CCA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X7CCA);
    // 0x8002B62C: beq         $v0, $s7, L_8002B648
    if (ctx->r2 == ctx->r23) {
        // 0x8002B630: addiu       $a0, $s4, 0x1
        ctx->r4 = ADD32(ctx->r20, 0X1);
            goto L_8002B648;
    }
    // 0x8002B630: addiu       $a0, $s4, 0x1
    ctx->r4 = ADD32(ctx->r20, 0X1);
    // 0x8002B634: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x8002B638: lui         $a3, 0x8014
    ctx->r7 = S32(0X8014 << 16);
    // 0x8002B63C: addiu       $a3, $a3, 0x6310
    ctx->r7 = ADD32(ctx->r7, 0X6310);
    // 0x8002B640: jal         0x80028D30
    // 0x8002B644: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_14;
    // 0x8002B644: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_14:
L_8002B648:
    // 0x8002B648: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002B64C: lw          $v0, 0x56FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56FC);
    // 0x8002B650: sw          $s2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r18;
L_8002B654:
    // 0x8002B654: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002B658: addiu       $v0, $v0, -0x3F86
    ctx->r2 = ADD32(ctx->r2, -0X3F86);
    // 0x8002B65C: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x8002B660: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8002B664: lw          $a0, -0x72D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X72D8);
    // 0x8002B668: andi        $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 & 0X7FFF;
    // 0x8002B66C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8002B670: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x8002B674: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B678: sw          $a0, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = ctx->r4;
L_8002B67C:
    // 0x8002B67C: bne         $s5, $zero, L_8002B6AC
    if (ctx->r21 != 0) {
        // 0x8002B680: nop
    
            goto L_8002B6AC;
    }
    // 0x8002B680: nop

    // 0x8002B684: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B688: jal         0x8008B2F4
    // 0x8002B68C: addiu       $a0, $a0, -0x60C0
    ctx->r4 = ADD32(ctx->r4, -0X60C0);
    func_8008B2F4_666F4(rdram, ctx);
        goto after_15;
    // 0x8002B68C: addiu       $a0, $a0, -0x60C0
    ctx->r4 = ADD32(ctx->r4, -0X60C0);
    after_15:
    // 0x8002B690: jal         0x8008AA50
    // 0x8002B694: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8008AA50_65E50(rdram, ctx);
        goto after_16;
    // 0x8002B694: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_16:
    // 0x8002B698: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8002B69C: lw          $v1, 0x56FC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56FC);
    // 0x8002B6A0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B6A4: j           L_8002B8E8
    // 0x8002B6A8: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
        goto L_8002B8E8;
    // 0x8002B6A8: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
L_8002B6AC:
    // 0x8002B6AC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002B6B0: lbu         $v0, 0x22F0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X22F0);
    // 0x8002B6B4: beq         $v0, $zero, L_8002B6C8
    if (ctx->r2 == 0) {
        // 0x8002B6B8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8002B6C8;
    }
    // 0x8002B6B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002B6BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B6C0: j           L_8002B9CC
    // 0x8002B6C4: sb          $v0, 0x22F0($at)
    MEM_B(0X22F0, ctx->r1) = ctx->r2;
        goto L_8002B9CC;
    // 0x8002B6C4: sb          $v0, 0x22F0($at)
    MEM_B(0X22F0, ctx->r1) = ctx->r2;
L_8002B6C8:
    // 0x8002B6C8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B6CC: jal         0x8008B2F4
    // 0x8002B6D0: addiu       $a0, $a0, -0x60C0
    ctx->r4 = ADD32(ctx->r4, -0X60C0);
    func_8008B2F4_666F4(rdram, ctx);
        goto after_17;
    // 0x8002B6D0: addiu       $a0, $a0, -0x60C0
    ctx->r4 = ADD32(ctx->r4, -0X60C0);
    after_17:
    // 0x8002B6D4: addiu       $v1, $s3, -0x1
    ctx->r3 = ADD32(ctx->r19, -0X1);
    // 0x8002B6D8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8002B6DC: beq         $v0, $zero, L_8002B7E4
    if (ctx->r2 == 0) {
        // 0x8002B6E0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8002B7E4;
    }
    // 0x8002B6E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8002B6E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002B6E8: addu        $at, $at, $v0
    gpr jr_addend_8002B6F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002B6EC: lw          $v0, 0x1CF0($at)
    ctx->r2 = ADD32(ctx->r1, 0X1CF0);
    // 0x8002B6F0: jr          $v0
    // 0x8002B6F4: nop

    switch (jr_addend_8002B6F0 >> 2) {
        case 0: goto L_8002B6F8; break;
        case 1: goto L_8002B71C; break;
        case 2: goto L_8002B768; break;
        case 3: goto L_8002B78C; break;
        case 4: goto L_8002B7B0; break;
        default: switch_error(__func__, 0x8002B6F0, 0x800D1CF0);
    }
    // 0x8002B6F4: nop

L_8002B6F8:
    // 0x8002B6F8: jal         0x8008AA50
    // 0x8002B6FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8008AA50_65E50(rdram, ctx);
        goto after_18;
    // 0x8002B6FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_18:
    // 0x8002B700: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B704: addiu       $a0, $a0, -0x60C0
    ctx->r4 = ADD32(ctx->r4, -0X60C0);
    // 0x8002B708: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B70C: jal         0x8008B2F4
    // 0x8002B710: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
    func_8008B2F4_666F4(rdram, ctx);
        goto after_19;
    // 0x8002B710: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
    after_19:
    // 0x8002B714: j           L_8002B7D0
    // 0x8002B718: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8002B7D0;
    // 0x8002B718: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8002B71C:
    // 0x8002B71C: jal         0x8008AA50
    // 0x8002B720: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8008AA50_65E50(rdram, ctx);
        goto after_20;
    // 0x8002B720: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_20:
    // 0x8002B724: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8002B728: addiu       $s0, $s0, -0x60C0
    ctx->r16 = ADD32(ctx->r16, -0X60C0);
    // 0x8002B72C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B730: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
    // 0x8002B734: jal         0x8008B2F4
    // 0x8002B738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008B2F4_666F4(rdram, ctx);
        goto after_21;
    // 0x8002B738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_21:
    // 0x8002B73C: jal         0x8008AA50
    // 0x8002B740: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8008AA50_65E50(rdram, ctx);
        goto after_22;
    // 0x8002B740: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_22:
    // 0x8002B744: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B748: sw          $v0, 0x22E0($at)
    MEM_W(0X22E0, ctx->r1) = ctx->r2;
    // 0x8002B74C: jal         0x8008B2F4
    // 0x8002B750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008B2F4_666F4(rdram, ctx);
        goto after_23;
    // 0x8002B750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_23:
    // 0x8002B754: jal         0x8008AA50
    // 0x8002B758: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8008AA50_65E50(rdram, ctx);
        goto after_24;
    // 0x8002B758: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_24:
    // 0x8002B75C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B760: j           L_8002B7F4
    // 0x8002B764: sw          $v0, 0x22E4($at)
    MEM_W(0X22E4, ctx->r1) = ctx->r2;
        goto L_8002B7F4;
    // 0x8002B764: sw          $v0, 0x22E4($at)
    MEM_W(0X22E4, ctx->r1) = ctx->r2;
L_8002B768:
    // 0x8002B768: jal         0x8008AA50
    // 0x8002B76C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8008AA50_65E50(rdram, ctx);
        goto after_25;
    // 0x8002B76C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_25:
    // 0x8002B770: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B774: addiu       $a0, $a0, -0x60C0
    ctx->r4 = ADD32(ctx->r4, -0X60C0);
    // 0x8002B778: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B77C: jal         0x8008B2F4
    // 0x8002B780: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
    func_8008B2F4_666F4(rdram, ctx);
        goto after_26;
    // 0x8002B780: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
    after_26:
    // 0x8002B784: j           L_8002B7D0
    // 0x8002B788: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_8002B7D0;
    // 0x8002B788: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8002B78C:
    // 0x8002B78C: jal         0x8008AA50
    // 0x8002B790: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8008AA50_65E50(rdram, ctx);
        goto after_27;
    // 0x8002B790: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_27:
    // 0x8002B794: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B798: addiu       $a0, $a0, -0x60C0
    ctx->r4 = ADD32(ctx->r4, -0X60C0);
    // 0x8002B79C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B7A0: jal         0x8008B2F4
    // 0x8002B7A4: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
    func_8008B2F4_666F4(rdram, ctx);
        goto after_28;
    // 0x8002B7A4: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
    after_28:
    // 0x8002B7A8: j           L_8002B7D0
    // 0x8002B7AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_8002B7D0;
    // 0x8002B7AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8002B7B0:
    // 0x8002B7B0: jal         0x8008AA50
    // 0x8002B7B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8008AA50_65E50(rdram, ctx);
        goto after_29;
    // 0x8002B7B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_29:
    // 0x8002B7B8: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B7BC: addiu       $a0, $a0, -0x60C0
    ctx->r4 = ADD32(ctx->r4, -0X60C0);
    // 0x8002B7C0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B7C4: jal         0x8008B2F4
    // 0x8002B7C8: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
    func_8008B2F4_666F4(rdram, ctx);
        goto after_30;
    // 0x8002B7C8: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
    after_30:
    // 0x8002B7CC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_8002B7D0:
    // 0x8002B7D0: jal         0x8008AA50
    // 0x8002B7D4: nop

    func_8008AA50_65E50(rdram, ctx);
        goto after_31;
    // 0x8002B7D4: nop

    after_31:
    // 0x8002B7D8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B7DC: j           L_8002B7F4
    // 0x8002B7E0: sw          $v0, 0x22E0($at)
    MEM_W(0X22E0, ctx->r1) = ctx->r2;
        goto L_8002B7F4;
    // 0x8002B7E0: sw          $v0, 0x22E0($at)
    MEM_W(0X22E0, ctx->r1) = ctx->r2;
L_8002B7E4:
    // 0x8002B7E4: jal         0x8008AA50
    // 0x8002B7E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8008AA50_65E50(rdram, ctx);
        goto after_32;
    // 0x8002B7E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_32:
    // 0x8002B7EC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B7F0: sw          $v0, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = ctx->r2;
L_8002B7F4:
    // 0x8002B7F4: beq         $s4, $zero, L_8002B9AC
    if (ctx->r20 == 0) {
        // 0x8002B7F8: sll         $v0, $s4, 1
        ctx->r2 = S32(ctx->r20 << 1);
            goto L_8002B9AC;
    }
    // 0x8002B7F8: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x8002B7FC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x8002B800: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8002B804: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x8002B808: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8002B80C: lh          $a0, 0x7CC8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7CC8);
    // 0x8002B810: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8002B814: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8002B818: lh          $v1, 0x7CCA($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X7CCA);
    // 0x8002B81C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8002B820: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B824: sw          $v0, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = ctx->r2;
    // 0x8002B828: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8002B82C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B830: sw          $a0, 0x22F8($at)
    MEM_W(0X22F8, ctx->r1) = ctx->r4;
    // 0x8002B834: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B838: beq         $a0, $v0, L_8002B9AC
    if (ctx->r4 == ctx->r2) {
        // 0x8002B83C: sw          $v1, 0x22FC($at)
        MEM_W(0X22FC, ctx->r1) = ctx->r3;
            goto L_8002B9AC;
    }
    // 0x8002B83C: sw          $v1, 0x22FC($at)
    MEM_W(0X22FC, ctx->r1) = ctx->r3;
L_8002B840:
    // 0x8002B840: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002B844: lw          $v0, 0x22F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X22F8);
    // 0x8002B848: bne         $v0, $zero, L_8002B898
    if (ctx->r2 != 0) {
        // 0x8002B84C: nop
    
            goto L_8002B898;
    }
    // 0x8002B84C: nop

    // 0x8002B850: lui         $a0, 0x8014
    ctx->r4 = S32(0X8014 << 16);
    // 0x8002B854: jal         0x8008A7D0
    // 0x8002B858: addiu       $a0, $a0, 0x2250
    ctx->r4 = ADD32(ctx->r4, 0X2250);
    func_8008A7D0_65BD0(rdram, ctx);
        goto after_33;
    // 0x8002B858: addiu       $a0, $a0, 0x2250
    ctx->r4 = ADD32(ctx->r4, 0X2250);
    after_33:
    // 0x8002B85C: sll         $v1, $s4, 1
    ctx->r3 = S32(ctx->r20 << 1);
    // 0x8002B860: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x8002B864: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8002B868: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002B86C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8002B870: lh          $v1, 0x7CCA($at)
    ctx->r3 = MEM_H(ctx->r1, 0X7CCA);
    // 0x8002B874: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B878: sw          $v0, 0x22E8($at)
    MEM_W(0X22E8, ctx->r1) = ctx->r2;
    // 0x8002B87C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8002B880: beq         $v1, $v0, L_8002B9AC
    if (ctx->r3 == ctx->r2) {
        // 0x8002B884: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8002B9AC;
    }
    // 0x8002B884: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8002B888: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B88C: sw          $v0, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = ctx->r2;
    // 0x8002B890: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002B894: lw          $v0, 0x22F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X22F8);
L_8002B898:
    // 0x8002B898: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8002B89C: lw          $v1, 0x22FC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X22FC);
    // 0x8002B8A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002B8A4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002B8A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B8AC: sw          $v0, 0x22F8($at)
    MEM_W(0X22F8, ctx->r1) = ctx->r2;
    // 0x8002B8B0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B8B4: j           L_8002B9CC
    // 0x8002B8B8: sw          $v1, 0x22FC($at)
    MEM_W(0X22FC, ctx->r1) = ctx->r3;
        goto L_8002B9CC;
    // 0x8002B8B8: sw          $v1, 0x22FC($at)
    MEM_W(0X22FC, ctx->r1) = ctx->r3;
L_8002B8BC:
    // 0x8002B8BC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002B8C0: lw          $v0, 0x22FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X22FC);
    // 0x8002B8C4: bne         $v0, $zero, L_8002B8F8
    if (ctx->r2 != 0) {
        // 0x8002B8C8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8002B8F8;
    }
    // 0x8002B8C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002B8CC: lui         $a0, 0x8014
    ctx->r4 = S32(0X8014 << 16);
    // 0x8002B8D0: jal         0x8008A7D0
    // 0x8002B8D4: addiu       $a0, $a0, 0x6310
    ctx->r4 = ADD32(ctx->r4, 0X6310);
    func_8008A7D0_65BD0(rdram, ctx);
        goto after_34;
    // 0x8002B8D4: addiu       $a0, $a0, 0x6310
    ctx->r4 = ADD32(ctx->r4, 0X6310);
    after_34:
    // 0x8002B8D8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8002B8DC: lw          $v1, 0x56FC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X56FC);
    // 0x8002B8E0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B8E4: sw          $v0, 0x22EC($at)
    MEM_W(0X22EC, ctx->r1) = ctx->r2;
L_8002B8E8:
    // 0x8002B8E8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B8EC: sw          $zero, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = 0;
    // 0x8002B8F0: j           L_8002B9CC
    // 0x8002B8F4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
        goto L_8002B9CC;
    // 0x8002B8F4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_8002B8F8:
    // 0x8002B8F8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B8FC: j           L_8002B9CC
    // 0x8002B900: sw          $v0, 0x22FC($at)
    MEM_W(0X22FC, ctx->r1) = ctx->r2;
        goto L_8002B9CC;
    // 0x8002B900: sw          $v0, 0x22FC($at)
    MEM_W(0X22FC, ctx->r1) = ctx->r2;
L_8002B904:
    // 0x8002B904: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B908: jal         0x8008ADE8
    // 0x8002B90C: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_35;
    // 0x8002B90C: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    after_35:
    // 0x8002B910: bne         $v0, $zero, L_8002B9CC
    if (ctx->r2 != 0) {
        // 0x8002B914: nop
    
            goto L_8002B9CC;
    }
    // 0x8002B914: nop

    // 0x8002B918: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B91C: jal         0x8008ADE8
    // 0x8002B920: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_36;
    // 0x8002B920: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    after_36:
    // 0x8002B924: bne         $v0, $zero, L_8002B9CC
    if (ctx->r2 != 0) {
        // 0x8002B928: nop
    
            goto L_8002B9CC;
    }
    // 0x8002B928: nop

    // 0x8002B92C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B930: lh          $a0, 0x22F2($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X22F2);
    // 0x8002B934: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8002B938: addiu       $a1, $a1, 0x7DA8
    ctx->r5 = ADD32(ctx->r5, 0X7DA8);
    // 0x8002B93C: lui         $a2, 0x86
    ctx->r6 = S32(0X86 << 16);
    // 0x8002B940: addiu       $a2, $a2, 0x7EB0
    ctx->r6 = ADD32(ctx->r6, 0X7EB0);
    // 0x8002B944: lui         $s0, 0x8014
    ctx->r16 = S32(0X8014 << 16);
    // 0x8002B948: addiu       $s0, $s0, 0x2250
    ctx->r16 = ADD32(ctx->r16, 0X2250);
    // 0x8002B94C: jal         0x80028D30
    // 0x8002B950: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_37;
    // 0x8002B950: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_37:
    // 0x8002B954: jal         0x8008A7D0
    // 0x8002B958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008A7D0_65BD0(rdram, ctx);
        goto after_38;
    // 0x8002B958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_38:
    // 0x8002B95C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8002B960: addiu       $a0, $a0, -0x3F88
    ctx->r4 = ADD32(ctx->r4, -0X3F88);
    // 0x8002B964: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B968: jal         0x8002BC54
    // 0x8002B96C: sw          $v0, 0x22D4($at)
    MEM_W(0X22D4, ctx->r1) = ctx->r2;
    func_8002BC54_7054(rdram, ctx);
        goto after_39;
    // 0x8002B96C: sw          $v0, 0x22D4($at)
    MEM_W(0X22D4, ctx->r1) = ctx->r2;
    after_39:
    // 0x8002B970: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002B974: lw          $v0, 0x56FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56FC);
    // 0x8002B978: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002B97C: addiu       $v1, $v1, -0x3F86
    ctx->r3 = ADD32(ctx->r3, -0X3F86);
    // 0x8002B980: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8002B984: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8002B988: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B98C: sw          $zero, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = 0;
    // 0x8002B990: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8002B994: j           L_8002B9CC
    // 0x8002B998: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
        goto L_8002B9CC;
    // 0x8002B998: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_8002B99C:
    // 0x8002B99C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002B9A0: lw          $v0, 0x22F4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X22F4);
    // 0x8002B9A4: bne         $v0, $zero, L_8002B9C4
    if (ctx->r2 != 0) {
        // 0x8002B9A8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8002B9C4;
    }
    // 0x8002B9A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8002B9AC:
    // 0x8002B9AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002B9B0: lw          $v0, 0x56FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56FC);
    // 0x8002B9B4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002B9B8: sw          $zero, -0x72D8($at)
    MEM_W(-0X72D8, ctx->r1) = 0;
    // 0x8002B9BC: j           L_8002B9CC
    // 0x8002B9C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
        goto L_8002B9CC;
    // 0x8002B9C0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_8002B9C4:
    // 0x8002B9C4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B9C8: sw          $v0, 0x22F4($at)
    MEM_W(0X22F4, ctx->r1) = ctx->r2;
L_8002B9CC:
    // 0x8002B9CC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8002B9D0: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8002B9D4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8002B9D8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8002B9DC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8002B9E0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B9E4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8002B9E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002B9EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002B9F0: jr          $ra
    // 0x8002B9F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8002B9F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80062224_3D624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062224: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80062228: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8006222C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80062230: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x80062234: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80062238: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006223C: sh          $v1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r3;
    // 0x80062240: lbu         $v0, 0x4($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X4);
    // 0x80062244: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x80062248: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x8006224C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80062250: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80062254: sh          $v1, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r3;
    // 0x80062258: lbu         $v0, 0x5($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X5);
    // 0x8006225C: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80062260: sb          $v0, 0x7E($a0)
    MEM_B(0X7E, ctx->r4) = ctx->r2;
    // 0x80062264: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80062268: lbu         $v1, 0x6($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6);
    // 0x8006226C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80062270: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80062274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062278: jr          $ra
    // 0x8006227C: sb          $v1, 0x7F($a0)
    MEM_B(0X7F, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8006227C: sb          $v1, 0x7F($a0)
    MEM_B(0X7F, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80026914_1D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026914: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80026918: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x8002691C: jr          $ra
    // 0x80026920: lh          $v0, 0x32($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X32);
    TRACE_RETURN()
    return;
    // 0x80026920: lh          $v0, 0x32($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X32);
    // 0x80026924: nop

    // 0x80026928: nop

    // 0x8002692C: nop

;}
RECOMP_FUNC void alAuxBusPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096D60: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80096D64: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80096D68: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80096D6C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80096D70: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80096D74: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80096D78: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x80096D7C: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80096D80: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80096D84: ori         $v1, $v1, 0x6C0
    ctx->r3 = ctx->r3 | 0X6C0;
    // 0x80096D88: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    // 0x80096D8C: ori         $a1, $a1, 0x800
    ctx->r5 = ctx->r5 | 0X800;
    // 0x80096D90: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80096D94: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80096D98: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80096D9C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80096DA0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80096DA4: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80096DA8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x80096DAC: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80096DB0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80096DB4: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x80096DB8: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80096DBC: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x80096DC0: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80096DC4: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x80096DC8: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x80096DCC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80096DD0: blez        $v0, L_80096E14
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80096DD4: addiu       $a2, $a2, 0x8
        ctx->r6 = ADD32(ctx->r6, 0X8);
            goto L_80096E14;
    }
    // 0x80096DD4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80096DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_80096DDC:
    // 0x80096DDC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80096DE0: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80096DE4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80096DE8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80096DEC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80096DF0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80096DF4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80096DF8: jalr        $v0
    // 0x80096DFC: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80096DFC: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_0:
    // 0x80096E00: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x80096E04: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80096E08: slt         $v1, $s1, $v1
    ctx->r3 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80096E0C: bne         $v1, $zero, L_80096DDC
    if (ctx->r3 != 0) {
        // 0x80096E10: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_80096DDC;
    }
    // 0x80096E10: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_80096E14:
    // 0x80096E14: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x80096E18: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80096E1C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80096E20: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80096E24: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80096E28: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80096E2C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80096E30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80096E34: jr          $ra
    // 0x80096E38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80096E38: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80093FC0_6F3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093FC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80093FC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80093FC8: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x80093FCC: addiu       $s1, $s1, -0xE20
    ctx->r17 = ADD32(ctx->r17, -0XE20);
    // 0x80093FD0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80093FD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80093FD8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80093FDC: beq         $v0, $zero, L_80094024
    if (ctx->r2 == 0) {
        // 0x80093FE0: nop
    
            goto L_80094024;
    }
    // 0x80093FE0: nop

L_80093FE4:
    // 0x80093FE4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80093FE8: lw          $s0, 0x0($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X0);
    // 0x80093FEC: bne         $s0, $a0, L_8009401C
    if (ctx->r16 != ctx->r4) {
        // 0x80093FF0: nop
    
            goto L_8009401C;
    }
    // 0x80093FF0: nop

    // 0x80093FF4: jal         0x80094460
    // 0x80093FF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80093FF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80093FFC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80094000: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80094004: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80094008: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8009400C: jal         0x80094460
    // 0x80094010: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80094010: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    after_1:
    // 0x80094014: j           L_80094024
    // 0x80094018: nop

        goto L_80094024;
    // 0x80094018: nop

L_8009401C:
    // 0x8009401C: bne         $s0, $zero, L_80093FE4
    if (ctx->r16 != 0) {
        // 0x80094020: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_80093FE4;
    }
    // 0x80094020: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_80094024:
    // 0x80094024: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80094028: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009402C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80094030: jr          $ra
    // 0x80094034: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80094034: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80094038: nop

    // 0x8009403C: nop

;}
RECOMP_FUNC void func_8004A1AC_255AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A1AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A1B0: sw          $zero, -0x38B0($at)
    MEM_W(-0X38B0, ctx->r1) = 0;
    // 0x8004A1B4: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x8004A1B8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A1BC: addiu       $v0, $v0, -0x3958
    ctx->r2 = ADD32(ctx->r2, -0X3958);
    // 0x8004A1C0: addiu       $t2, $v0, 0x1C
    ctx->r10 = ADD32(ctx->r2, 0X1C);
    // 0x8004A1C4: addiu       $t1, $v0, 0x18
    ctx->r9 = ADD32(ctx->r2, 0X18);
    // 0x8004A1C8: addiu       $t0, $v0, 0x14
    ctx->r8 = ADD32(ctx->r2, 0X14);
    // 0x8004A1CC: addiu       $a3, $v0, 0x10
    ctx->r7 = ADD32(ctx->r2, 0X10);
    // 0x8004A1D0: addiu       $a2, $v0, 0xC
    ctx->r6 = ADD32(ctx->r2, 0XC);
    // 0x8004A1D4: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x8004A1D8: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8004A1DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8004A1E0:
    // 0x8004A1E0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8004A1E4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8004A1E8: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8004A1EC: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8004A1F0: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x8004A1F4: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x8004A1F8: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x8004A1FC: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    // 0x8004A200: addiu       $t2, $t2, 0x24
    ctx->r10 = ADD32(ctx->r10, 0X24);
    // 0x8004A204: addiu       $t1, $t1, 0x24
    ctx->r9 = ADD32(ctx->r9, 0X24);
    // 0x8004A208: addiu       $t0, $t0, 0x24
    ctx->r8 = ADD32(ctx->r8, 0X24);
    // 0x8004A20C: addiu       $a3, $a3, 0x24
    ctx->r7 = ADD32(ctx->r7, 0X24);
    // 0x8004A210: addiu       $a2, $a2, 0x24
    ctx->r6 = ADD32(ctx->r6, 0X24);
    // 0x8004A214: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    // 0x8004A218: addiu       $a0, $a0, 0x24
    ctx->r4 = ADD32(ctx->r4, 0X24);
    // 0x8004A21C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8004A220: sltiu       $v0, $t3, 0x3
    ctx->r2 = ctx->r11 < 0X3 ? 1 : 0;
    // 0x8004A224: bne         $v0, $zero, L_8004A1E0
    if (ctx->r2 != 0) {
        // 0x8004A228: addiu       $v1, $v1, 0x24
        ctx->r3 = ADD32(ctx->r3, 0X24);
            goto L_8004A1E0;
    }
    // 0x8004A228: addiu       $v1, $v1, 0x24
    ctx->r3 = ADD32(ctx->r3, 0X24);
    // 0x8004A22C: jr          $ra
    // 0x8004A230: nop

    TRACE_RETURN()
    return;
    // 0x8004A230: nop

;}
RECOMP_FUNC void _getRate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009781C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80097820: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x80097824: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097828: ldc1        $f2, 0x30A0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X30A0);
    // 0x8009782C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80097830: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x80097834: nop

    // 0x80097838: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x8009783C: bne         $v0, $zero, L_80097870
    if (ctx->r2 != 0) {
        // 0x80097840: div.d       $f4, $f2, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f2.d, ctx->f0.d);
            goto L_80097870;
    }
    // 0x80097840: div.d       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f2.d, ctx->f0.d);
    // 0x80097844: c.le.d      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.d <= ctx->f14.d;
    // 0x80097848: nop

    // 0x8009784C: nop

    // 0x80097850: bc1f        L_80097864
    if (!c1cs) {
        // 0x80097854: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_80097864;
    }
    // 0x80097854: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x80097858: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
    // 0x8009785C: j           L_80097A94
    // 0x80097860: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80097A94;
    // 0x80097860: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80097864:
    // 0x80097864: sh          $zero, 0x0($t1)
    MEM_H(0X0, ctx->r9) = 0;
    // 0x80097868: j           L_80097A94
    // 0x8009786C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80097A94;
    // 0x8009786C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80097870:
    // 0x80097870: c.lt.d      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.d < ctx->f2.d;
    // 0x80097874: nop

    // 0x80097878: nop

    // 0x8009787C: bc1tl       L_80097884
    if (c1cs) {
        // 0x80097880: mov.d       $f14, $f2
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.d = ctx->f2.d;
            goto L_80097884;
    }
    goto skip_0;
    // 0x80097880: mov.d       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.d = ctx->f2.d;
    skip_0:
L_80097884:
    // 0x80097884: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80097888: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x8009788C: nop

    // 0x80097890: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x80097894: nop

    // 0x80097898: nop

    // 0x8009789C: bc1tl       L_800978A4
    if (c1cs) {
        // 0x800978A0: mov.d       $f12, $f2
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.d = ctx->f2.d;
            goto L_800978A4;
    }
    goto skip_1;
    // 0x800978A0: mov.d       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.d = ctx->f2.d;
    skip_1:
L_800978A4:
    // 0x800978A4: addu        $a3, $sp, $zero
    ctx->r7 = ADD32(ctx->r29, 0);
    // 0x800978A8: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800978AC: addiu       $a2, $a2, 0x3060
    ctx->r6 = ADD32(ctx->r6, 0X3060);
    // 0x800978B0: addiu       $t0, $a2, 0x40
    ctx->r8 = ADD32(ctx->r6, 0X40);
L_800978B4:
    // 0x800978B4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800978B8: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x800978BC: lw          $a0, 0x8($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X8);
    // 0x800978C0: lw          $a1, 0xC($a2)
    ctx->r5 = MEM_W(ctx->r6, 0XC);
    // 0x800978C4: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x800978C8: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x800978CC: sw          $a0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r4;
    // 0x800978D0: sw          $a1, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r5;
    // 0x800978D4: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x800978D8: bne         $a2, $t0, L_800978B4
    if (ctx->r6 != ctx->r8) {
        // 0x800978DC: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_800978B4;
    }
    // 0x800978DC: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x800978E0: div.d       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f12.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f12.d);
    // 0x800978E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800978E8: ldc1        $f0, 0x30A8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X30A8);
    // 0x800978EC: mul.d       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x800978F0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800978F4: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x800978F8: nop

    // 0x800978FC: c.eq.d      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.d == ctx->f4.d;
    // 0x80097900: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80097904: mfc1        $a0, $f2
    ctx->r4 = (int32_t)ctx->f2.u32l;
    // 0x80097908: nop

    // 0x8009790C: bc1t        L_800979C8
    if (c1cs) {
        // 0x80097910: sw          $zero, 0x40($sp)
        MEM_W(0X40, ctx->r29) = 0;
            goto L_800979C8;
    }
    // 0x80097910: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x80097914: c.lt.d      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.d < ctx->f12.d;
    // 0x80097918: nop

    // 0x8009791C: nop

    // 0x80097920: bc1t        L_8009792C
    if (c1cs) {
        // 0x80097924: mov.d       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
            goto L_8009792C;
    }
    // 0x80097924: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
    // 0x80097928: neg.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = -ctx->f12.d;
L_8009792C:
    // 0x8009792C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097930: ldc1        $f0, 0x30B0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X30B0);
    // 0x80097934: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x80097938: nop

    // 0x8009793C: bc1f        L_8009796C
    if (!c1cs) {
        // 0x80097940: nop
    
            goto L_8009796C;
    }
    // 0x80097940: nop

    // 0x80097944: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097948: ldc1        $f4, 0x30B8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X30B8);
L_8009794C:
    // 0x8009794C: nop

    // 0x80097950: mul.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x80097954: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x80097958: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x8009795C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80097960: nop

    // 0x80097964: bc1t        L_8009794C
    if (c1cs) {
        // 0x80097968: sw          $v0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r2;
            goto L_8009794C;
    }
    // 0x80097968: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_8009796C:
    // 0x8009796C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097970: ldc1        $f0, 0x30C0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X30C0);
    // 0x80097974: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x80097978: nop

    // 0x8009797C: bc1f        L_800979A0
    if (!c1cs) {
        // 0x80097980: nop
    
            goto L_800979A0;
    }
    // 0x80097980: nop

L_80097984:
    // 0x80097984: add.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = ctx->f2.d + ctx->f2.d;
    // 0x80097988: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x8009798C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x80097990: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80097994: nop

    // 0x80097998: bc1t        L_80097984
    if (c1cs) {
        // 0x8009799C: sw          $v0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r2;
            goto L_80097984;
    }
    // 0x8009799C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
L_800979A0:
    // 0x800979A0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800979A4: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x800979A8: nop

    // 0x800979AC: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x800979B0: nop

    // 0x800979B4: nop

    // 0x800979B8: bc1t        L_800979C4
    if (c1cs) {
        // 0x800979BC: mov.d       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
            goto L_800979C4;
    }
    // 0x800979BC: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x800979C0: neg.d       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = -ctx->f0.d;
L_800979C4:
    // 0x800979C4: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
L_800979C8:
    // 0x800979C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800979CC: ldc1        $f0, 0x30C8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X30C8);
    // 0x800979D0: mul.d       $f0, $f12, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f12.d, ctx->f0.d);
    // 0x800979D4: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x800979D8: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x800979DC: nop

    // 0x800979E0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800979E4: addu        $v0, $v0, $sp
    ctx->r2 = ADD32(ctx->r2, ctx->r29);
    // 0x800979E8: ldc1        $f0, -0x40($v0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r2, -0X40);
    // 0x800979EC: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800979F0: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x800979F4: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x800979F8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800979FC: ldc1        $f2, 0x30D0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X30D0);
    // 0x80097A00: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x80097A04: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097A08: ldc1        $f2, 0x30D8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X30D8);
    // 0x80097A0C: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80097A10: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097A14: ldc1        $f2, 0x30E0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X30E0);
    // 0x80097A18: beq         $a0, $zero, L_80097A38
    if (ctx->r4 == 0) {
        // 0x80097A1C: add.d       $f0, $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
            goto L_80097A38;
    }
    // 0x80097A1C: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
L_80097A20:
    // 0x80097A20: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x80097A24: bnel        $v0, $zero, L_80097A2C
    if (ctx->r2 != 0) {
        // 0x80097A28: mul.d       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
            goto L_80097A2C;
    }
    goto skip_2;
    // 0x80097A28: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    skip_2:
L_80097A2C:
    // 0x80097A2C: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80097A30: bne         $a0, $zero, L_80097A20
    if (ctx->r4 != 0) {
        // 0x80097A34: mul.d       $f0, $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f0.d);
            goto L_80097A20;
    }
    // 0x80097A34: mul.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f0.d);
L_80097A38:
    // 0x80097A38: nop

    // 0x80097A3C: mul.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80097A40: nop

    // 0x80097A44: mul.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80097A48: nop

    // 0x80097A4C: mul.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x80097A50: trunc.w.d   $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x80097A54: mfc1        $v0, $f0
    ctx->r2 = (int32_t)ctx->f0.u32l;
    // 0x80097A58: nop

    // 0x80097A5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80097A60: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80097A64: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x80097A68: nop

    // 0x80097A6C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80097A70: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80097A74: sub.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d - ctx->f0.d;
    // 0x80097A78: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097A7C: ldc1        $f2, 0x30E8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X30E8);
    // 0x80097A80: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x80097A84: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80097A88: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x80097A8C: nop

    // 0x80097A90: sh          $v1, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r3;
L_80097A94:
    // 0x80097A94: jr          $ra
    // 0x80097A98: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80097A98: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80035408_10808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035408: jr          $ra
    // 0x8003540C: nop

    TRACE_RETURN()
    return;
    // 0x8003540C: nop

;}
RECOMP_FUNC void func_8002A7AC_5BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A7AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A7B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8002A7B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002A7B8: jal         0x8002B29C
    // 0x8002A7BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8002B29C_669C(rdram, ctx);
        goto after_0;
    // 0x8002A7BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8002A7C0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8002A7C4: jal         0x8002BB34
    // 0x8002A7C8: addiu       $a0, $a0, -0x3F88
    ctx->r4 = ADD32(ctx->r4, -0X3F88);
    func_8002BB34_6F34(rdram, ctx);
        goto after_1;
    // 0x8002A7C8: addiu       $a0, $a0, -0x3F88
    ctx->r4 = ADD32(ctx->r4, -0X3F88);
    after_1:
    // 0x8002A7CC: lui         $a0, 0x71
    ctx->r4 = S32(0X71 << 16);
    // 0x8002A7D0: addiu       $a0, $a0, 0x7B70
    ctx->r4 = ADD32(ctx->r4, 0X7B70);
    // 0x8002A7D4: lui         $a1, 0x72
    ctx->r5 = S32(0X72 << 16);
    // 0x8002A7D8: addiu       $a1, $a1, -0x74D0
    ctx->r5 = ADD32(ctx->r5, -0X74D0);
    // 0x8002A7DC: lui         $s1, 0x8014
    ctx->r17 = S32(0X8014 << 16);
    // 0x8002A7E0: addiu       $s1, $s1, 0x71C0
    ctx->r17 = ADD32(ctx->r17, 0X71C0);
    // 0x8002A7E4: jal         0x80027334
    // 0x8002A7E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_80027334_2734(rdram, ctx);
        goto after_2;
    // 0x8002A7E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8002A7EC: jal         0x8008B25C
    // 0x8002A7F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008B25C_6665C(rdram, ctx);
        goto after_3;
    // 0x8002A7F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8002A7F4: lui         $a0, 0x72
    ctx->r4 = S32(0X72 << 16);
    // 0x8002A7F8: addiu       $a0, $a0, -0x74D0
    ctx->r4 = ADD32(ctx->r4, -0X74D0);
    // 0x8002A7FC: lui         $a1, 0x72
    ctx->r5 = S32(0X72 << 16);
    // 0x8002A800: addiu       $a1, $a1, 0x61D0
    ctx->r5 = ADD32(ctx->r5, 0X61D0);
    // 0x8002A804: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8002A808: addiu       $s0, $s0, -0x6410
    ctx->r16 = ADD32(ctx->r16, -0X6410);
    // 0x8002A80C: jal         0x80027334
    // 0x8002A810: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_80027334_2734(rdram, ctx);
        goto after_4;
    // 0x8002A810: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8002A814: lui         $a1, 0x72
    ctx->r5 = S32(0X72 << 16);
    // 0x8002A818: addiu       $a1, $a1, 0x61D0
    ctx->r5 = ADD32(ctx->r5, 0X61D0);
    // 0x8002A81C: jal         0x8008B094
    // 0x8002A820: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008B094_66494(rdram, ctx);
        goto after_5;
    // 0x8002A820: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8002A824: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002A828: jal         0x8008B30C
    // 0x8002A82C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8008B30C_6670C(rdram, ctx);
        goto after_6;
    // 0x8002A82C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8002A830: lui         $a0, 0x88
    ctx->r4 = S32(0X88 << 16);
    // 0x8002A834: addiu       $a0, $a0, -0x6B80
    ctx->r4 = ADD32(ctx->r4, -0X6B80);
    // 0x8002A838: lui         $a1, 0x88
    ctx->r5 = S32(0X88 << 16);
    // 0x8002A83C: addiu       $a1, $a1, 0xD20
    ctx->r5 = ADD32(ctx->r5, 0XD20);
    // 0x8002A840: lui         $s0, 0x8014
    ctx->r16 = S32(0X8014 << 16);
    // 0x8002A844: addiu       $s0, $s0, -0x5FB0
    ctx->r16 = ADD32(ctx->r16, -0X5FB0);
    // 0x8002A848: jal         0x80027334
    // 0x8002A84C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_80027334_2734(rdram, ctx);
        goto after_7;
    // 0x8002A84C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8002A850: lui         $a1, 0x88
    ctx->r5 = S32(0X88 << 16);
    // 0x8002A854: addiu       $a1, $a1, 0xD20
    ctx->r5 = ADD32(ctx->r5, 0XD20);
    // 0x8002A858: jal         0x8008B094
    // 0x8002A85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008B094_66494(rdram, ctx);
        goto after_8;
    // 0x8002A85C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8002A860: jal         0x8008B0F8
    // 0x8002A864: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008B0F8_664F8(rdram, ctx);
        goto after_9;
    // 0x8002A864: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8002A868: addiu       $v1, $zero, 0x17
    ctx->r3 = ADD32(0, 0X17);
    // 0x8002A86C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002A870: addiu       $v0, $v0, 0x22CC
    ctx->r2 = ADD32(ctx->r2, 0X22CC);
L_8002A874:
    // 0x8002A874: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8002A878: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002A87C: bgez        $v1, L_8002A874
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002A880: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_8002A874;
    }
    // 0x8002A880: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8002A884: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002A888: sw          $zero, 0x22D0($at)
    MEM_W(0X22D0, ctx->r1) = 0;
    // 0x8002A88C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002A890: sw          $zero, 0x22D4($at)
    MEM_W(0X22D4, ctx->r1) = 0;
    // 0x8002A894: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002A898: sw          $zero, 0x22E4($at)
    MEM_W(0X22E4, ctx->r1) = 0;
    // 0x8002A89C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002A8A0: sw          $zero, 0x22E0($at)
    MEM_W(0X22E0, ctx->r1) = 0;
    // 0x8002A8A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002A8A8: sw          $zero, 0x22DC($at)
    MEM_W(0X22DC, ctx->r1) = 0;
    // 0x8002A8AC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002A8B0: sw          $zero, 0x22E8($at)
    MEM_W(0X22E8, ctx->r1) = 0;
    // 0x8002A8B4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002A8B8: sw          $zero, 0x22EC($at)
    MEM_W(0X22EC, ctx->r1) = 0;
    // 0x8002A8BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002A8C0: sb          $zero, 0x22D8($at)
    MEM_B(0X22D8, ctx->r1) = 0;
    // 0x8002A8C4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002A8C8: sb          $zero, 0x22F1($at)
    MEM_B(0X22F1, ctx->r1) = 0;
    // 0x8002A8CC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8002A8D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002A8D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002A8D8: jr          $ra
    // 0x8002A8DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002A8DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005699C_31D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005699C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800569A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800569A4: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x800569A8: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x800569AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800569B0: lh          $v0, 0x4A60($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A60);
    // 0x800569B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800569B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800569BC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x800569C0: lh          $s1, 0x4A1E($s1)
    ctx->r17 = MEM_H(ctx->r17, 0X4A1E);
    // 0x800569C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800569C8: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x800569CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800569D0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800569D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800569D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800569DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800569E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800569E4: jal         0x8003055C
    // 0x800569E8: sra         $s2, $v0, 4
    ctx->r18 = S32(SIGNED(ctx->r2) >> 4);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x800569E8: sra         $s2, $v0, 4
    ctx->r18 = S32(SIGNED(ctx->r2) >> 4);
    after_0:
    // 0x800569EC: addiu       $v1, $s0, 0x14
    ctx->r3 = ADD32(ctx->r16, 0X14);
    // 0x800569F0: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x800569F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x800569F8: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    // 0x800569FC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80056A00: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x80056A04: bltz        $s2, L_80056AC0
    if (SIGNED(ctx->r18) < 0) {
        // 0x80056A08: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80056AC0;
    }
    // 0x80056A08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80056A0C: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x80056A10: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x80056A14: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x80056A18: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80056A1C: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x80056A20: lui         $t2, 0x8
    ctx->r10 = S32(0X8 << 16);
    // 0x80056A24: ori         $t2, $t2, 0x8
    ctx->r10 = ctx->r10 | 0X8;
    // 0x80056A28: addiu       $t1, $s1, -0x10
    ctx->r9 = ADD32(ctx->r17, -0X10);
    // 0x80056A2C: andi        $t0, $s1, 0xF
    ctx->r8 = ctx->r17 & 0XF;
    // 0x80056A30: addiu       $t5, $zero, 0xB8
    ctx->r13 = ADD32(0, 0XB8);
    // 0x80056A34: addiu       $t4, $zero, 0x3E75
    ctx->r12 = ADD32(0, 0X3E75);
    // 0x80056A38: addiu       $a2, $zero, 0x31
    ctx->r6 = ADD32(0, 0X31);
    // 0x80056A3C: addiu       $v1, $s0, 0xE
    ctx->r3 = ADD32(ctx->r16, 0XE);
L_80056A40:
    // 0x80056A40: addiu       $v0, $s0, 0x14
    ctx->r2 = ADD32(ctx->r16, 0X14);
    // 0x80056A44: and         $v0, $v0, $t3
    ctx->r2 = ctx->r2 & ctx->r11;
    // 0x80056A48: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80056A4C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80056A50: sll         $a0, $a1, 4
    ctx->r4 = S32(ctx->r5 << 4);
    // 0x80056A54: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80056A58: slt         $v0, $a0, $s1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80056A5C: sb          $t7, -0x7($v1)
    MEM_B(-0X7, ctx->r3) = ctx->r15;
    // 0x80056A60: sb          $a3, -0x8($v1)
    MEM_B(-0X8, ctx->r3) = ctx->r7;
    // 0x80056A64: sb          $a3, -0x9($v1)
    MEM_B(-0X9, ctx->r3) = ctx->r7;
    // 0x80056A68: sb          $a3, -0xA($v1)
    MEM_B(-0XA, ctx->r3) = ctx->r7;
    // 0x80056A6C: sh          $a2, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r6;
    // 0x80056A70: sh          $t6, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r14;
    // 0x80056A74: beq         $v0, $zero, L_80056A98
    if (ctx->r2 == 0) {
        // 0x80056A78: sw          $t2, 0x2($v1)
        MEM_W(0X2, ctx->r3) = ctx->r10;
            goto L_80056A98;
    }
    // 0x80056A78: sw          $t2, 0x2($v1)
    MEM_W(0X2, ctx->r3) = ctx->r10;
    // 0x80056A7C: slt         $v0, $a0, $t1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80056A80: bnel        $v0, $zero, L_80056A9C
    if (ctx->r2 != 0) {
        // 0x80056A84: addiu       $v0, $zero, 0x70
        ctx->r2 = ADD32(0, 0X70);
            goto L_80056A9C;
    }
    goto skip_0;
    // 0x80056A84: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
    skip_0:
    // 0x80056A88: bne         $t0, $zero, L_80056A9C
    if (ctx->r8 != 0) {
        // 0x80056A8C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_80056A9C;
    }
    // 0x80056A8C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80056A90: j           L_80056A9C
    // 0x80056A94: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
        goto L_80056A9C;
    // 0x80056A94: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
L_80056A98:
    // 0x80056A98: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_80056A9C:
    // 0x80056A9C: sb          $v0, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r2;
    // 0x80056AA0: sb          $t5, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r13;
    // 0x80056AA4: sh          $t4, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r12;
    // 0x80056AA8: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x80056AAC: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80056AB0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80056AB4: slt         $v0, $s2, $a1
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80056AB8: beq         $v0, $zero, L_80056A40
    if (ctx->r2 == 0) {
        // 0x80056ABC: addiu       $a2, $a2, 0x5
        ctx->r6 = ADD32(ctx->r6, 0X5);
            goto L_80056A40;
    }
    // 0x80056ABC: addiu       $a2, $a2, 0x5
    ctx->r6 = ADD32(ctx->r6, 0X5);
L_80056AC0:
    // 0x80056AC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80056AC4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80056AC8: lw          $a1, -0x3BFC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3BFC);
    // 0x80056ACC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80056AD0: lui         $t6, 0x6666
    ctx->r14 = S32(0X6666 << 16);
    // 0x80056AD4: ori         $t6, $t6, 0x6667
    ctx->r14 = ctx->r14 | 0X6667;
    // 0x80056AD8: lui         $t5, 0xFF
    ctx->r13 = S32(0XFF << 16);
    // 0x80056ADC: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x80056AE0: addiu       $s2, $zero, 0x64
    ctx->r18 = ADD32(0, 0X64);
    // 0x80056AE4: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80056AE8: lui         $s1, 0xFFFF
    ctx->r17 = S32(0XFFFF << 16);
    // 0x80056AEC: lui         $t4, 0x8
    ctx->r12 = S32(0X8 << 16);
    // 0x80056AF0: ori         $t4, $t4, 0x8
    ctx->r12 = ctx->r12 | 0X8;
    // 0x80056AF4: addiu       $s0, $zero, 0xB0
    ctx->r16 = ADD32(0, 0XB0);
    // 0x80056AF8: addiu       $t7, $zero, 0x3E75
    ctx->r15 = ADD32(0, 0X3E75);
    // 0x80056AFC: lui         $t1, 0x24
    ctx->r9 = S32(0X24 << 16);
    // 0x80056B00: ori         $t1, $t1, 0xC7
    ctx->r9 = ctx->r9 | 0XC7;
    // 0x80056B04: addiu       $t0, $zero, 0xC7
    ctx->r8 = ADD32(0, 0XC7);
L_80056B08:
    // 0x80056B08: nop

    // 0x80056B0C: mult        $a1, $t6
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056B10: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80056B14: mfhi        $t8
    ctx->r24 = hi;
    // 0x80056B18: sra         $v1, $t8, 2
    ctx->r3 = S32(SIGNED(ctx->r24) >> 2);
    // 0x80056B1C: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x80056B20: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x80056B24: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80056B28: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80056B2C: beq         $a1, $zero, L_80056B84
    if (ctx->r5 == 0) {
        // 0x80056B30: subu        $a3, $a1, $v0
        ctx->r7 = SUB32(ctx->r5, ctx->r2);
            goto L_80056B84;
    }
    // 0x80056B30: subu        $a3, $a1, $v0
    ctx->r7 = SUB32(ctx->r5, ctx->r2);
    // 0x80056B34: addiu       $v1, $a0, 0x14
    ctx->r3 = ADD32(ctx->r4, 0X14);
    // 0x80056B38: and         $v0, $v1, $t5
    ctx->r2 = ctx->r3 & ctx->r13;
    // 0x80056B3C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80056B40: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80056B44: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80056B48: and         $v0, $t1, $s1
    ctx->r2 = ctx->r9 & ctx->r17;
    // 0x80056B4C: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80056B50: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x80056B54: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x80056B58: addiu       $v0, $v0, 0x60
    ctx->r2 = ADD32(ctx->r2, 0X60);
    // 0x80056B5C: sb          $s2, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r18;
    // 0x80056B60: sb          $t3, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r11;
    // 0x80056B64: sb          $t3, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r11;
    // 0x80056B68: sb          $t3, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r11;
    // 0x80056B6C: sh          $t0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r8;
    // 0x80056B70: sw          $t4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r12;
    // 0x80056B74: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80056B78: sb          $s0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r16;
    // 0x80056B7C: sh          $t7, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r15;
    // 0x80056B80: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_80056B84:
    // 0x80056B84: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80056B88: addiu       $t1, $t1, -0x7
    ctx->r9 = ADD32(ctx->r9, -0X7);
    // 0x80056B8C: addiu       $t2, $t2, -0x1
    ctx->r10 = ADD32(ctx->r10, -0X1);
    // 0x80056B90: bgez        $t2, L_80056B08
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80056B94: addiu       $t0, $t0, -0x7
        ctx->r8 = ADD32(ctx->r8, -0X7);
            goto L_80056B08;
    }
    // 0x80056B94: addiu       $t0, $t0, -0x7
    ctx->r8 = ADD32(ctx->r8, -0X7);
    // 0x80056B98: lui         $v1, 0x26D
    ctx->r3 = S32(0X26D << 16);
    // 0x80056B9C: ori         $v1, $v1, 0x60DD
    ctx->r3 = ctx->r3 | 0X60DD;
    // 0x80056BA0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80056BA4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80056BA8: lui         $t5, 0x6666
    ctx->r13 = S32(0X6666 << 16);
    // 0x80056BAC: ori         $t5, $t5, 0x6667
    ctx->r13 = ctx->r13 | 0X6667;
    // 0x80056BB0: lui         $t4, 0xFF
    ctx->r12 = S32(0XFF << 16);
    // 0x80056BB4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80056BB8: lw          $v0, -0x3C0C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C0C);
    // 0x80056BBC: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x80056BC0: addiu       $s1, $zero, 0x64
    ctx->r17 = ADD32(0, 0X64);
    // 0x80056BC4: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
    // 0x80056BC8: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056BCC: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80056BD0: lui         $s0, 0xFFFF
    ctx->r16 = S32(0XFFFF << 16);
    // 0x80056BD4: lui         $t3, 0x8
    ctx->r11 = S32(0X8 << 16);
    // 0x80056BD8: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    // 0x80056BDC: addiu       $t7, $zero, 0xB0
    ctx->r15 = ADD32(0, 0XB0);
    // 0x80056BE0: addiu       $t6, $zero, 0x3E75
    ctx->r14 = ADD32(0, 0X3E75);
    // 0x80056BE4: lui         $t0, 0x24
    ctx->r8 = S32(0X24 << 16);
    // 0x80056BE8: ori         $t0, $t0, 0x10D
    ctx->r8 = ctx->r8 | 0X10D;
    // 0x80056BEC: addiu       $a3, $zero, 0x10D
    ctx->r7 = ADD32(0, 0X10D);
    // 0x80056BF0: mfhi        $t8
    ctx->r24 = hi;
    // 0x80056BF4: srl         $a1, $t8, 5
    ctx->r5 = S32(U32(ctx->r24) >> 5);
L_80056BF8:
    // 0x80056BF8: and         $v1, $t0, $s0
    ctx->r3 = ctx->r8 & ctx->r16;
    // 0x80056BFC: addiu       $t0, $t0, -0x7
    ctx->r8 = ADD32(ctx->r8, -0X7);
    // 0x80056C00: sh          $a3, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r7;
    // 0x80056C04: addiu       $a3, $a3, -0x7
    ctx->r7 = ADD32(ctx->r7, -0X7);
    // 0x80056C08: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80056C0C: addiu       $a0, $a2, 0x14
    ctx->r4 = ADD32(ctx->r6, 0X14);
    // 0x80056C10: and         $v0, $a0, $t4
    ctx->r2 = ctx->r4 & ctx->r12;
    // 0x80056C14: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80056C18: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80056C1C: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x80056C20: mult        $a1, $t5
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056C24: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80056C28: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80056C2C: sb          $s1, 0x7($a2)
    MEM_B(0X7, ctx->r6) = ctx->r17;
    // 0x80056C30: sb          $t2, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r10;
    // 0x80056C34: sb          $t2, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r10;
    // 0x80056C38: sb          $t2, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r10;
    // 0x80056C3C: sh          $v1, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r3;
    // 0x80056C40: sw          $t3, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r11;
    // 0x80056C44: sb          $t7, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r15;
    // 0x80056C48: sh          $t6, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r14;
    // 0x80056C4C: mfhi        $t8
    ctx->r24 = hi;
    // 0x80056C50: sra         $v1, $t8, 2
    ctx->r3 = S32(SIGNED(ctx->r24) >> 2);
    // 0x80056C54: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80056C58: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80056C5C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80056C60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80056C64: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80056C68: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x80056C6C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80056C70: addiu       $v0, $v0, 0x60
    ctx->r2 = ADD32(ctx->r2, 0X60);
    // 0x80056C74: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x80056C78: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80056C7C: bgez        $t1, L_80056BF8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80056C80: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80056BF8;
    }
    // 0x80056C80: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80056C84: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80056C88: lw          $v1, -0x3C0C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3C0C);
    // 0x80056C8C: lui         $v0, 0x91A2
    ctx->r2 = S32(0X91A2 << 16);
    // 0x80056C90: ori         $v0, $v0, 0xB3C5
    ctx->r2 = ctx->r2 | 0XB3C5;
    // 0x80056C94: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056C98: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80056C9C: lui         $t5, 0x6666
    ctx->r13 = S32(0X6666 << 16);
    // 0x80056CA0: ori         $t5, $t5, 0x6667
    ctx->r13 = ctx->r13 | 0X6667;
    // 0x80056CA4: lui         $t4, 0xFF
    ctx->r12 = S32(0XFF << 16);
    // 0x80056CA8: ori         $t4, $t4, 0xFFFF
    ctx->r12 = ctx->r12 | 0XFFFF;
    // 0x80056CAC: addiu       $s1, $zero, 0x64
    ctx->r17 = ADD32(0, 0X64);
    // 0x80056CB0: mfhi        $t8
    ctx->r24 = hi;
    // 0x80056CB4: lui         $v0, 0x8888
    ctx->r2 = S32(0X8888 << 16);
    // 0x80056CB8: ori         $v0, $v0, 0x8889
    ctx->r2 = ctx->r2 | 0X8889;
    // 0x80056CBC: srl         $a0, $t8, 10
    ctx->r4 = S32(U32(ctx->r24) >> 10);
    // 0x80056CC0: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056CC4: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80056CC8: lui         $s0, 0xFFFF
    ctx->r16 = S32(0XFFFF << 16);
    // 0x80056CCC: lui         $t3, 0x8
    ctx->r11 = S32(0X8 << 16);
    // 0x80056CD0: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    // 0x80056CD4: addiu       $t7, $zero, 0xB0
    ctx->r15 = ADD32(0, 0XB0);
    // 0x80056CD8: addiu       $t6, $zero, 0x3E75
    ctx->r14 = ADD32(0, 0X3E75);
    // 0x80056CDC: lui         $t0, 0x24
    ctx->r8 = S32(0X24 << 16);
    // 0x80056CE0: ori         $t0, $t0, 0x121
    ctx->r8 = ctx->r8 | 0X121;
    // 0x80056CE4: addiu       $a3, $zero, 0x121
    ctx->r7 = ADD32(0, 0X121);
    // 0x80056CE8: mfhi        $t8
    ctx->r24 = hi;
    // 0x80056CEC: srl         $v1, $t8, 5
    ctx->r3 = S32(U32(ctx->r24) >> 5);
    // 0x80056CF0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80056CF4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80056CF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80056CFC: subu        $a1, $a0, $v0
    ctx->r5 = SUB32(ctx->r4, ctx->r2);
L_80056D00:
    // 0x80056D00: and         $v1, $t0, $s0
    ctx->r3 = ctx->r8 & ctx->r16;
    // 0x80056D04: addiu       $t0, $t0, -0x7
    ctx->r8 = ADD32(ctx->r8, -0X7);
    // 0x80056D08: sh          $a3, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r7;
    // 0x80056D0C: addiu       $a3, $a3, -0x7
    ctx->r7 = ADD32(ctx->r7, -0X7);
    // 0x80056D10: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80056D14: addiu       $a0, $a2, 0x14
    ctx->r4 = ADD32(ctx->r6, 0X14);
    // 0x80056D18: and         $v0, $a0, $t4
    ctx->r2 = ctx->r4 & ctx->r12;
    // 0x80056D1C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80056D20: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80056D24: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x80056D28: mult        $a1, $t5
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056D2C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80056D30: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80056D34: sb          $s1, 0x7($a2)
    MEM_B(0X7, ctx->r6) = ctx->r17;
    // 0x80056D38: sb          $t2, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r10;
    // 0x80056D3C: sb          $t2, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r10;
    // 0x80056D40: sb          $t2, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r10;
    // 0x80056D44: sh          $v1, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r3;
    // 0x80056D48: sw          $t3, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r11;
    // 0x80056D4C: sb          $t7, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r15;
    // 0x80056D50: sh          $t6, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r14;
    // 0x80056D54: mfhi        $t8
    ctx->r24 = hi;
    // 0x80056D58: sra         $v1, $t8, 2
    ctx->r3 = S32(SIGNED(ctx->r24) >> 2);
    // 0x80056D5C: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80056D60: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80056D64: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80056D68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80056D6C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80056D70: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x80056D74: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80056D78: addiu       $v0, $v0, 0x60
    ctx->r2 = ADD32(ctx->r2, 0X60);
    // 0x80056D7C: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x80056D80: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80056D84: bgez        $t1, L_80056D00
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80056D88: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80056D00;
    }
    // 0x80056D88: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80056D8C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80056D90: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80056D94: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80056D98: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80056D9C: addiu       $a2, $s0, -0x14
    ctx->r6 = ADD32(ctx->r16, -0X14);
    // 0x80056DA0: jal         0x8002FD5C
    // 0x80056DA4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD5C_B15C(rdram, ctx);
        goto after_1;
    // 0x80056DA4: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_1:
    // 0x80056DA8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80056DAC: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x80056DB0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80056DB4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80056DB8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80056DBC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80056DC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80056DC4: jr          $ra
    // 0x80056DC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80056DC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void _Printf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A0B30: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x800A0B34: sw          $s4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r20;
    // 0x800A0B38: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x800A0B3C: sw          $s3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r19;
    // 0x800A0B40: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x800A0B44: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x800A0B48: sw          $s5, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r21;
    // 0x800A0B4C: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x800A0B50: addiu       $s5, $s5, 0x32E0
    ctx->r21 = ADD32(ctx->r21, 0X32E0);
    // 0x800A0B54: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x800A0B58: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x800A0B5C: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x800A0B60: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x800A0B64: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x800A0B68: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_800A0B6C:
    // 0x800A0B6C: lb          $v0, 0x0($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X0);
    // 0x800A0B70: lbu         $s1, 0x0($a1)
    ctx->r17 = MEM_BU(ctx->r5, 0X0);
    // 0x800A0B74: j           L_800A0B84
    // 0x800A0B78: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
        goto L_800A0B84;
    // 0x800A0B78: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
L_800A0B7C:
    // 0x800A0B7C: lb          $v0, 0x0($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X0);
    // 0x800A0B80: lbu         $s1, 0x0($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0X0);
L_800A0B84:
    // 0x800A0B84: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A0B88: xori        $v0, $v0, 0x25
    ctx->r2 = ctx->r2 ^ 0X25;
    // 0x800A0B8C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x800A0B90: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800A0B94: bnel        $v1, $zero, L_800A0B7C
    if (ctx->r3 != 0) {
        // 0x800A0B98: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800A0B7C;
    }
    goto skip_0;
    // 0x800A0B98: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x800A0B9C: subu        $s0, $s2, $a1
    ctx->r16 = SUB32(ctx->r18, ctx->r5);
    // 0x800A0BA0: blez        $s0, L_800A0BC8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800A0BA4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_800A0BC8;
    }
    // 0x800A0BA4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800A0BA8: jalr        $s4
    // 0x800A0BAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x800A0BAC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x800A0BB0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x800A0BB4: beq         $s3, $zero, L_800A1088
    if (ctx->r19 == 0) {
        // 0x800A0BB8: nop
    
            goto L_800A1088;
    }
    // 0x800A0BB8: nop

    // 0x800A0BBC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0BC0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800A0BC4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_800A0BC8:
    // 0x800A0BC8: beq         $s1, $zero, L_800A1088
    if (ctx->r17 == 0) {
        // 0x800A0BCC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800A1088;
    }
    // 0x800A0BCC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A0BD0: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x800A0BD4: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x800A0BD8: addiu       $s0, $s0, 0x32E8
    ctx->r16 = ADD32(ctx->r16, 0X32E8);
L_800A0BDC:
    // 0x800A0BDC: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    // 0x800A0BE0: jal         0x8009A350
    // 0x800A0BE4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    strchr_recomp(rdram, ctx);
        goto after_1;
    // 0x800A0BE4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_1:
    // 0x800A0BE8: beq         $v0, $zero, L_800A0C10
    if (ctx->r2 == 0) {
        // 0x800A0BEC: subu        $v0, $v0, $s5
        ctx->r2 = SUB32(ctx->r2, ctx->r21);
            goto L_800A0C10;
    }
    // 0x800A0BEC: subu        $v0, $v0, $s5
    ctx->r2 = SUB32(ctx->r2, ctx->r21);
    // 0x800A0BF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800A0BF4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800A0BF8: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x800A0BFC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800A0C00: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A0C04: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800A0C08: j           L_800A0BDC
    // 0x800A0C0C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
        goto L_800A0BDC;
    // 0x800A0C0C: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
L_800A0C10:
    // 0x800A0C10: lb          $v1, 0x0($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X0);
    // 0x800A0C14: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x800A0C18: bne         $v1, $v0, L_800A0C60
    if (ctx->r3 != ctx->r2) {
        // 0x800A0C1C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_800A0C60;
    }
    // 0x800A0C1C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x800A0C20: lw          $v0, 0xBC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XBC);
    // 0x800A0C24: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x800A0C28: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800A0C2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A0C30: addiu       $v1, $v0, 0x4
    ctx->r3 = ADD32(ctx->r2, 0X4);
    // 0x800A0C34: sw          $v1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r3;
    // 0x800A0C38: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800A0C3C: bgez        $v0, L_800A0C58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A0C40: sw          $v0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r2;
            goto L_800A0C58;
    }
    // 0x800A0C40: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800A0C44: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x800A0C48: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800A0C4C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800A0C50: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x800A0C54: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
L_800A0C58:
    // 0x800A0C58: j           L_800A0CB8
    // 0x800A0C5C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_800A0CB8;
    // 0x800A0C5C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800A0C60:
    // 0x800A0C60: addiu       $v0, $a0, -0x30
    ctx->r2 = ADD32(ctx->r4, -0X30);
    // 0x800A0C64: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800A0C68: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x800A0C6C: beq         $v0, $zero, L_800A0CB8
    if (ctx->r2 == 0) {
        // 0x800A0C70: sw          $zero, 0x38($sp)
        MEM_W(0X38, ctx->r29) = 0;
            goto L_800A0CB8;
    }
    // 0x800A0C70: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_800A0C74:
    // 0x800A0C74: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800A0C78: slti        $v0, $a0, 0x3E7
    ctx->r2 = SIGNED(ctx->r4) < 0X3E7 ? 1 : 0;
    // 0x800A0C7C: beql        $v0, $zero, L_800A0CA4
    if (ctx->r2 == 0) {
        // 0x800A0C80: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800A0CA4;
    }
    goto skip_1;
    // 0x800A0C80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x800A0C84: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800A0C88: lb          $v1, 0x0($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X0);
    // 0x800A0C8C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800A0C90: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800A0C94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A0C98: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x800A0C9C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800A0CA0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800A0CA4:
    // 0x800A0CA4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x800A0CA8: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x800A0CAC: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x800A0CB0: bne         $v0, $zero, L_800A0C74
    if (ctx->r2 != 0) {
        // 0x800A0CB4: nop
    
            goto L_800A0C74;
    }
    // 0x800A0CB4: nop

L_800A0CB8:
    // 0x800A0CB8: lb          $v1, 0x0($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X0);
    // 0x800A0CBC: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x800A0CC0: beq         $v1, $v0, L_800A0CD0
    if (ctx->r3 == ctx->r2) {
        // 0x800A0CC4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800A0CD0;
    }
    // 0x800A0CC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A0CC8: j           L_800A0D64
    // 0x800A0CCC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_800A0D64;
    // 0x800A0CCC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_800A0CD0:
    // 0x800A0CD0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A0CD4: lb          $v1, 0x0($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X0);
    // 0x800A0CD8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x800A0CDC: bne         $v1, $v0, L_800A0D0C
    if (ctx->r3 != ctx->r2) {
        // 0x800A0CE0: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_800A0D0C;
    }
    // 0x800A0CE0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x800A0CE4: lw          $v1, 0xBC($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XBC);
    // 0x800A0CE8: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x800A0CEC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x800A0CF0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800A0CF4: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x800A0CF8: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
    // 0x800A0CFC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800A0D00: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A0D04: j           L_800A0D64
    // 0x800A0D08: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_800A0D64;
    // 0x800A0D08: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_800A0D0C:
    // 0x800A0D0C: addiu       $v0, $a0, -0x30
    ctx->r2 = ADD32(ctx->r4, -0X30);
    // 0x800A0D10: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800A0D14: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x800A0D18: beq         $v0, $zero, L_800A0D64
    if (ctx->r2 == 0) {
        // 0x800A0D1C: sw          $zero, 0x34($sp)
        MEM_W(0X34, ctx->r29) = 0;
            goto L_800A0D64;
    }
    // 0x800A0D1C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_800A0D20:
    // 0x800A0D20: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800A0D24: slti        $v0, $a0, 0x3E7
    ctx->r2 = SIGNED(ctx->r4) < 0X3E7 ? 1 : 0;
    // 0x800A0D28: beql        $v0, $zero, L_800A0D50
    if (ctx->r2 == 0) {
        // 0x800A0D2C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_800A0D50;
    }
    goto skip_2;
    // 0x800A0D2C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x800A0D30: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800A0D34: lb          $v1, 0x0($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X0);
    // 0x800A0D38: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800A0D3C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800A0D40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A0D44: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x800A0D48: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x800A0D4C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800A0D50:
    // 0x800A0D50: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x800A0D54: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x800A0D58: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x800A0D5C: bne         $v0, $zero, L_800A0D20
    if (ctx->r2 != 0) {
        // 0x800A0D60: nop
    
            goto L_800A0D20;
    }
    // 0x800A0D60: nop

L_800A0D64:
    // 0x800A0D64: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    // 0x800A0D68: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A0D6C: addiu       $a0, $a0, 0x3300
    ctx->r4 = ADD32(ctx->r4, 0X3300);
    // 0x800A0D70: jal         0x8009A350
    // 0x800A0D74: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    strchr_recomp(rdram, ctx);
        goto after_2;
    // 0x800A0D74: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_2:
    // 0x800A0D78: beq         $v0, $zero, L_800A0D88
    if (ctx->r2 == 0) {
        // 0x800A0D7C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_800A0D88;
    }
    // 0x800A0D7C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x800A0D80: j           L_800A0D8C
    // 0x800A0D84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_800A0D8C;
    // 0x800A0D84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_800A0D88:
    // 0x800A0D88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800A0D8C:
    // 0x800A0D8C: sb          $v0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r2;
    // 0x800A0D90: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800A0D94: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800A0D98: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x800A0D9C: bne         $v1, $v0, L_800A0DBC
    if (ctx->r3 != ctx->r2) {
        // 0x800A0DA0: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_800A0DBC;
    }
    // 0x800A0DA0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800A0DA4: lb          $v0, 0x0($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X0);
    // 0x800A0DA8: bne         $v0, $v1, L_800A0DBC
    if (ctx->r2 != ctx->r3) {
        // 0x800A0DAC: addiu       $v0, $zero, 0x4C
        ctx->r2 = ADD32(0, 0X4C);
            goto L_800A0DBC;
    }
    // 0x800A0DAC: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x800A0DB0: sb          $v0, 0x44($sp)
    MEM_B(0X44, ctx->r29) = ctx->r2;
    // 0x800A0DB4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800A0DB8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_800A0DBC:
    // 0x800A0DBC: lb          $a2, 0x0($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X0);
    // 0x800A0DC0: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x800A0DC4: jal         0x800A10B0
    // 0x800A0DC8: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    _Putfld(rdram, ctx);
        goto after_3;
    // 0x800A0DC8: addiu       $a3, $sp, 0x48
    ctx->r7 = ADD32(ctx->r29, 0X48);
    after_3:
    // 0x800A0DCC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0DD0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800A0DD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800A0DD8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x800A0DDC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800A0DE0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800A0DE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800A0DE8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800A0DEC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800A0DF0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800A0DF4: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x800A0DF8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x800A0DFC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800A0E00: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x800A0E04: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x800A0E08: bne         $v0, $zero, L_800A0E68
    if (ctx->r2 != 0) {
        // 0x800A0E0C: sw          $a1, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r5;
            goto L_800A0E68;
    }
    // 0x800A0E0C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    // 0x800A0E10: blez        $a1, L_800A0E68
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800A0E14: nop
    
            goto L_800A0E68;
    }
    // 0x800A0E14: nop

    // 0x800A0E18: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x800A0E1C: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_800A0E20:
    // 0x800A0E20: beq         $v0, $zero, L_800A0E2C
    if (ctx->r2 == 0) {
        // 0x800A0E24: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_800A0E2C;
    }
    // 0x800A0E24: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x800A0E28: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_800A0E2C:
    // 0x800A0E2C: blezl       $s0, L_800A0E60
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800A0E30: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A0E60;
    }
    goto skip_3;
    // 0x800A0E30: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_3:
    // 0x800A0E34: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800A0E38: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800A0E3C: addiu       $a1, $a1, 0xFC0
    ctx->r5 = ADD32(ctx->r5, 0XFC0);
    // 0x800A0E40: jalr        $s4
    // 0x800A0E44: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_4;
    // 0x800A0E44: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x800A0E48: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x800A0E4C: beq         $s3, $zero, L_800A1088
    if (ctx->r19 == 0) {
        // 0x800A0E50: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A1088;
    }
    // 0x800A0E50: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800A0E54: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0E58: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800A0E5C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_800A0E60:
    // 0x800A0E60: bgtz        $s1, L_800A0E20
    if (SIGNED(ctx->r17) > 0) {
        // 0x800A0E64: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_800A0E20;
    }
    // 0x800A0E64: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_800A0E68:
    // 0x800A0E68: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0E6C: blez        $a2, L_800A0E98
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800A0E70: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_800A0E98;
    }
    // 0x800A0E70: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800A0E74: jalr        $s4
    // 0x800A0E78: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_5;
    // 0x800A0E78: addiu       $a1, $sp, 0x48
    ctx->r5 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x800A0E7C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x800A0E80: beq         $s3, $zero, L_800A1088
    if (ctx->r19 == 0) {
        // 0x800A0E84: nop
    
            goto L_800A1088;
    }
    // 0x800A0E84: nop

    // 0x800A0E88: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0E8C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800A0E90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A0E94: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_800A0E98:
    // 0x800A0E98: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x800A0E9C: blez        $v0, L_800A0EF4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800A0EA0: nop
    
            goto L_800A0EF4;
    }
    // 0x800A0EA0: nop

    // 0x800A0EA4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x800A0EA8: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_800A0EAC:
    // 0x800A0EAC: beq         $v0, $zero, L_800A0EB8
    if (ctx->r2 == 0) {
        // 0x800A0EB0: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_800A0EB8;
    }
    // 0x800A0EB0: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x800A0EB4: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_800A0EB8:
    // 0x800A0EB8: blezl       $s0, L_800A0EEC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800A0EBC: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A0EEC;
    }
    goto skip_4;
    // 0x800A0EBC: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_4:
    // 0x800A0EC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800A0EC4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800A0EC8: addiu       $a1, $a1, 0xFE4
    ctx->r5 = ADD32(ctx->r5, 0XFE4);
    // 0x800A0ECC: jalr        $s4
    // 0x800A0ED0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_6;
    // 0x800A0ED0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_6:
    // 0x800A0ED4: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x800A0ED8: beq         $s3, $zero, L_800A1088
    if (ctx->r19 == 0) {
        // 0x800A0EDC: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A1088;
    }
    // 0x800A0EDC: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800A0EE0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0EE4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800A0EE8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_800A0EEC:
    // 0x800A0EEC: bgtz        $s1, L_800A0EAC
    if (SIGNED(ctx->r17) > 0) {
        // 0x800A0EF0: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_800A0EAC;
    }
    // 0x800A0EF0: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_800A0EF4:
    // 0x800A0EF4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x800A0EF8: blez        $a2, L_800A0F28
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800A0EFC: nop
    
            goto L_800A0F28;
    }
    // 0x800A0EFC: nop

    // 0x800A0F00: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800A0F04: jalr        $s4
    // 0x800A0F08: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x800A0F08: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_7:
    // 0x800A0F0C: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x800A0F10: beq         $s3, $zero, L_800A1088
    if (ctx->r19 == 0) {
        // 0x800A0F14: nop
    
            goto L_800A1088;
    }
    // 0x800A0F14: nop

    // 0x800A0F18: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0F1C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x800A0F20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A0F24: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_800A0F28:
    // 0x800A0F28: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x800A0F2C: blez        $v0, L_800A0F84
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800A0F30: nop
    
            goto L_800A0F84;
    }
    // 0x800A0F30: nop

    // 0x800A0F34: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x800A0F38: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_800A0F3C:
    // 0x800A0F3C: beq         $v0, $zero, L_800A0F48
    if (ctx->r2 == 0) {
        // 0x800A0F40: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_800A0F48;
    }
    // 0x800A0F40: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x800A0F44: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_800A0F48:
    // 0x800A0F48: blezl       $s0, L_800A0F7C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800A0F4C: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A0F7C;
    }
    goto skip_5;
    // 0x800A0F4C: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_5:
    // 0x800A0F50: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800A0F54: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800A0F58: addiu       $a1, $a1, 0xFE4
    ctx->r5 = ADD32(ctx->r5, 0XFE4);
    // 0x800A0F5C: jalr        $s4
    // 0x800A0F60: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_8;
    // 0x800A0F60: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x800A0F64: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x800A0F68: beq         $s3, $zero, L_800A1088
    if (ctx->r19 == 0) {
        // 0x800A0F6C: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A1088;
    }
    // 0x800A0F6C: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800A0F70: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0F74: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800A0F78: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_800A0F7C:
    // 0x800A0F7C: bgtz        $s1, L_800A0F3C
    if (SIGNED(ctx->r17) > 0) {
        // 0x800A0F80: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_800A0F3C;
    }
    // 0x800A0F80: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_800A0F84:
    // 0x800A0F84: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x800A0F88: blez        $a2, L_800A0FBC
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800A0F8C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_800A0FBC;
    }
    // 0x800A0F8C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800A0F90: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800A0F94: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800A0F98: jalr        $s4
    // 0x800A0F9C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_9;
    // 0x800A0F9C: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    after_9:
    // 0x800A0FA0: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x800A0FA4: beq         $s3, $zero, L_800A1088
    if (ctx->r19 == 0) {
        // 0x800A0FA8: nop
    
            goto L_800A1088;
    }
    // 0x800A0FA8: nop

    // 0x800A0FAC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A0FB0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800A0FB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800A0FB8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_800A0FBC:
    // 0x800A0FBC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x800A0FC0: blez        $v0, L_800A1018
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800A0FC4: nop
    
            goto L_800A1018;
    }
    // 0x800A0FC4: nop

    // 0x800A0FC8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x800A0FCC: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_800A0FD0:
    // 0x800A0FD0: beq         $v0, $zero, L_800A0FDC
    if (ctx->r2 == 0) {
        // 0x800A0FD4: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_800A0FDC;
    }
    // 0x800A0FD4: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x800A0FD8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_800A0FDC:
    // 0x800A0FDC: blezl       $s0, L_800A1010
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800A0FE0: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A1010;
    }
    goto skip_6;
    // 0x800A0FE0: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_6:
    // 0x800A0FE4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800A0FE8: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800A0FEC: addiu       $a1, $a1, 0xFE4
    ctx->r5 = ADD32(ctx->r5, 0XFE4);
    // 0x800A0FF0: jalr        $s4
    // 0x800A0FF4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_10;
    // 0x800A0FF4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_10:
    // 0x800A0FF8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x800A0FFC: beq         $s3, $zero, L_800A1088
    if (ctx->r19 == 0) {
        // 0x800A1000: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A1088;
    }
    // 0x800A1000: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800A1004: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1008: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800A100C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_800A1010:
    // 0x800A1010: bgtz        $s1, L_800A0FD0
    if (SIGNED(ctx->r17) > 0) {
        // 0x800A1014: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_800A0FD0;
    }
    // 0x800A1014: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_800A1018:
    // 0x800A1018: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x800A101C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x800A1020: beq         $v0, $zero, L_800A0B6C
    if (ctx->r2 == 0) {
        // 0x800A1024: addiu       $a1, $s2, 0x1
        ctx->r5 = ADD32(ctx->r18, 0X1);
            goto L_800A0B6C;
    }
    // 0x800A1024: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
    // 0x800A1028: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x800A102C: blez        $v0, L_800A0B6C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800A1030: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_800A0B6C;
    }
    // 0x800A1030: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x800A1034: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
L_800A1038:
    // 0x800A1038: beq         $v0, $zero, L_800A1044
    if (ctx->r2 == 0) {
        // 0x800A103C: addiu       $s0, $zero, 0x20
        ctx->r16 = ADD32(0, 0X20);
            goto L_800A1044;
    }
    // 0x800A103C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
    // 0x800A1040: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
L_800A1044:
    // 0x800A1044: blezl       $s0, L_800A1078
    if (SIGNED(ctx->r16) <= 0) {
        // 0x800A1048: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A1078;
    }
    goto skip_7;
    // 0x800A1048: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    skip_7:
    // 0x800A104C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800A1050: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800A1054: addiu       $a1, $a1, 0xFC0
    ctx->r5 = ADD32(ctx->r5, 0XFC0);
    // 0x800A1058: jalr        $s4
    // 0x800A105C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_11;
    // 0x800A105C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_11:
    // 0x800A1060: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x800A1064: beq         $s3, $zero, L_800A1088
    if (ctx->r19 == 0) {
        // 0x800A1068: subu        $s1, $s1, $s0
        ctx->r17 = SUB32(ctx->r17, ctx->r16);
            goto L_800A1088;
    }
    // 0x800A1068: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800A106C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A1070: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800A1074: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_800A1078:
    // 0x800A1078: bgtz        $s1, L_800A1038
    if (SIGNED(ctx->r17) > 0) {
        // 0x800A107C: sltiu       $v0, $s1, 0x21
        ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_800A1038;
    }
    // 0x800A107C: sltiu       $v0, $s1, 0x21
    ctx->r2 = ctx->r17 < 0X21 ? 1 : 0;
    // 0x800A1080: j           L_800A0B6C
    // 0x800A1084: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
        goto L_800A0B6C;
    // 0x800A1084: addiu       $a1, $s2, 0x1
    ctx->r5 = ADD32(ctx->r18, 0X1);
L_800A1088:
    // 0x800A1088: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800A108C: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x800A1090: lw          $s5, 0xA4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XA4);
    // 0x800A1094: lw          $s4, 0xA0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XA0);
    // 0x800A1098: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x800A109C: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x800A10A0: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x800A10A4: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x800A10A8: jr          $ra
    // 0x800A10AC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x800A10AC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8004DE68_29268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DE68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004DE6C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004DE70: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8004DE74: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8004DE78: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004DE7C: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x8004DE80: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8004DE84: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DE88: mflo        $a2
    ctx->r6 = lo;
    // 0x8004DE8C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8004DE90: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x8004DE94: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8004DE98: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004DE9C: sll         $a3, $v1, 16
    ctx->r7 = S32(ctx->r3 << 16);
    // 0x8004DEA0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004DEA4: mult        $a3, $a3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DEA8: mflo        $a3
    ctx->r7 = lo;
    // 0x8004DEAC: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8004DEB0: lhu         $v1, 0x4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X4);
    // 0x8004DEB4: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8004DEB8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004DEBC: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x8004DEC0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8004DEC4: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DEC8: mflo        $a0
    ctx->r4 = lo;
    // 0x8004DECC: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8004DED0: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8004DED4: jal         0x80032424
    // 0x8004DED8: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8004DED8: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    after_0:
    // 0x8004DEDC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004DEE0: jr          $ra
    // 0x8004DEE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004DEE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80069860_44C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069860: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80069864: lb          $v1, -0x3B96($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3B96);
    // 0x80069868: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006986C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80069870: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80069874: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80069878: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8006987C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80069880: lui         $s1, 0x8019
    ctx->r17 = S32(0X8019 << 16);
    // 0x80069884: addiu       $s1, $s1, 0x3C70
    ctx->r17 = ADD32(ctx->r17, 0X3C70);
    // 0x80069888: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006988C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80069890: sw          $v0, -0x35A4($at)
    MEM_W(-0X35A4, ctx->r1) = ctx->r2;
    // 0x80069894: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x80069898: beq         $v1, $zero, L_800698AC
    if (ctx->r3 == 0) {
        // 0x8006989C: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_800698AC;
    }
    // 0x8006989C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800698A0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x800698A4: j           L_800698C8
    // 0x800698A8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
        goto L_800698C8;
    // 0x800698A8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
L_800698AC:
    // 0x800698AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800698B0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800698B4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x800698B8: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x800698BC: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x800698C0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x800698C4: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_800698C8:
    // 0x800698C8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800698CC: addiu       $v0, $v0, 0x2F40
    ctx->r2 = ADD32(ctx->r2, 0X2F40);
    // 0x800698D0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x800698D4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800698D8: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x800698DC: sb          $zero, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = 0;
    // 0x800698E0: sb          $zero, 0x75($s0)
    MEM_B(0X75, ctx->r16) = 0;
    // 0x800698E4: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x800698E8: sb          $zero, 0x77($s0)
    MEM_B(0X77, ctx->r16) = 0;
    // 0x800698EC: sb          $zero, 0x76($s0)
    MEM_B(0X76, ctx->r16) = 0;
    // 0x800698F0: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x800698F4: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
    // 0x800698F8: sb          $zero, 0x111($s0)
    MEM_B(0X111, ctx->r16) = 0;
    // 0x800698FC: bne         $s0, $v0, L_80069910
    if (ctx->r16 != ctx->r2) {
        // 0x80069900: sb          $zero, 0x449($s0)
        MEM_B(0X449, ctx->r16) = 0;
            goto L_80069910;
    }
    // 0x80069900: sb          $zero, 0x449($s0)
    MEM_B(0X449, ctx->r16) = 0;
    // 0x80069904: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80069908: j           L_80069918
    // 0x8006990C: sb          $zero, 0x49B2($at)
    MEM_B(0X49B2, ctx->r1) = 0;
        goto L_80069918;
    // 0x8006990C: sb          $zero, 0x49B2($at)
    MEM_B(0X49B2, ctx->r1) = 0;
L_80069910:
    // 0x80069910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069914: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_80069918:
    // 0x80069918: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8006991C: lb          $a1, -0x3BC4($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC4);
    // 0x80069920: jal         0x800702F0
    // 0x80069924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800702F0_4B6F0(rdram, ctx);
        goto after_0;
    // 0x80069924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80069928: bne         $s2, $zero, L_80069990
    if (ctx->r18 != 0) {
        // 0x8006992C: addiu       $a0, $s1, 0x10C
        ctx->r4 = ADD32(ctx->r17, 0X10C);
            goto L_80069990;
    }
    // 0x8006992C: addiu       $a0, $s1, 0x10C
    ctx->r4 = ADD32(ctx->r17, 0X10C);
    // 0x80069930: addiu       $a0, $s0, 0x454
    ctx->r4 = ADD32(ctx->r16, 0X454);
    // 0x80069934: addiu       $a1, $s0, 0x458
    ctx->r5 = ADD32(ctx->r16, 0X458);
    // 0x80069938: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8006993C: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80069940: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80069944: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069948: sb          $zero, 0x16A($s0)
    MEM_B(0X16A, ctx->r16) = 0;
    // 0x8006994C: sb          $zero, 0x16B($s0)
    MEM_B(0X16B, ctx->r16) = 0;
    // 0x80069950: sb          $zero, 0x16C($s0)
    MEM_B(0X16C, ctx->r16) = 0;
    // 0x80069954: sb          $zero, 0x170($s0)
    MEM_B(0X170, ctx->r16) = 0;
    // 0x80069958: sb          $zero, 0x172($s0)
    MEM_B(0X172, ctx->r16) = 0;
    // 0x8006995C: sb          $zero, 0x171($s0)
    MEM_B(0X171, ctx->r16) = 0;
    // 0x80069960: sb          $v0, 0x173($s0)
    MEM_B(0X173, ctx->r16) = ctx->r2;
    // 0x80069964: sb          $zero, 0x44C($s0)
    MEM_B(0X44C, ctx->r16) = 0;
    // 0x80069968: sb          $zero, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = 0;
    // 0x8006996C: jal         0x8003BDA4
    // 0x80069970: sw          $zero, 0x450($s0)
    MEM_W(0X450, ctx->r16) = 0;
    func_8003BDA4_171A4(rdram, ctx);
        goto after_1;
    // 0x80069970: sw          $zero, 0x450($s0)
    MEM_W(0X450, ctx->r16) = 0;
    after_1:
    // 0x80069974: addiu       $a0, $s0, 0x474
    ctx->r4 = ADD32(ctx->r16, 0X474);
    // 0x80069978: jal         0x8003BDA4
    // 0x8006997C: addiu       $a1, $s0, 0x4B0
    ctx->r5 = ADD32(ctx->r16, 0X4B0);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_2;
    // 0x8006997C: addiu       $a1, $s0, 0x4B0
    ctx->r5 = ADD32(ctx->r16, 0X4B0);
    after_2:
    // 0x80069980: jal         0x80070FC0
    // 0x80069984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070FC0_4C3C0(rdram, ctx);
        goto after_3;
    // 0x80069984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80069988: j           L_80069A28
    // 0x8006998C: nop

        goto L_80069A28;
    // 0x8006998C: nop

L_80069990:
    // 0x80069990: lhu         $v0, 0xCE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XCE);
    // 0x80069994: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80069998: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8006999C: lbu         $v0, 0xD4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD4);
    // 0x800699A0: sb          $v0, 0x16A($s0)
    MEM_B(0X16A, ctx->r16) = ctx->r2;
    // 0x800699A4: lbu         $v0, 0xD5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD5);
    // 0x800699A8: sb          $v0, 0x16B($s0)
    MEM_B(0X16B, ctx->r16) = ctx->r2;
    // 0x800699AC: lbu         $v0, 0xD6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD6);
    // 0x800699B0: sb          $v0, 0x16C($s0)
    MEM_B(0X16C, ctx->r16) = ctx->r2;
    // 0x800699B4: lbu         $v0, 0xD8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD8);
    // 0x800699B8: sb          $v0, 0x170($s0)
    MEM_B(0X170, ctx->r16) = ctx->r2;
    // 0x800699BC: lbu         $v0, 0xD9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD9);
    // 0x800699C0: sb          $v0, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r2;
    // 0x800699C4: lbu         $v0, 0xDA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDA);
    // 0x800699C8: sb          $v0, 0x172($s0)
    MEM_B(0X172, ctx->r16) = ctx->r2;
    // 0x800699CC: lbu         $v0, 0xDB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDB);
    // 0x800699D0: sb          $v0, 0x173($s0)
    MEM_B(0X173, ctx->r16) = ctx->r2;
    // 0x800699D4: lbu         $v0, 0xDC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDC);
    // 0x800699D8: sb          $v0, 0x44C($s0)
    MEM_B(0X44C, ctx->r16) = ctx->r2;
    // 0x800699DC: lbu         $v0, 0xDE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDE);
    // 0x800699E0: sb          $v0, 0x44E($s0)
    MEM_B(0X44E, ctx->r16) = ctx->r2;
    // 0x800699E4: lbu         $v0, 0xDF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XDF);
    // 0x800699E8: sb          $v0, 0x44F($s0)
    MEM_B(0X44F, ctx->r16) = ctx->r2;
    // 0x800699EC: lw          $v0, 0x108($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X108);
    // 0x800699F0: addiu       $a1, $s0, 0x454
    ctx->r5 = ADD32(ctx->r16, 0X454);
    // 0x800699F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800699F8: jal         0x8003BD6C
    // 0x800699FC: sw          $v0, 0x450($s0)
    MEM_W(0X450, ctx->r16) = ctx->r2;
    func_8003BD6C_1716C(rdram, ctx);
        goto after_4;
    // 0x800699FC: sw          $v0, 0x450($s0)
    MEM_W(0X450, ctx->r16) = ctx->r2;
    after_4:
    // 0x80069A00: addiu       $a0, $s1, 0x1580
    ctx->r4 = ADD32(ctx->r17, 0X1580);
    // 0x80069A04: addiu       $a1, $s0, 0x474
    ctx->r5 = ADD32(ctx->r16, 0X474);
    // 0x80069A08: jal         0x8003BD6C
    // 0x80069A0C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_5;
    // 0x80069A0C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x80069A10: addiu       $a0, $s1, 0x12C
    ctx->r4 = ADD32(ctx->r17, 0X12C);
    // 0x80069A14: addiu       $a1, $s0, 0x4F4
    ctx->r5 = ADD32(ctx->r16, 0X4F4);
    // 0x80069A18: jal         0x8003BD6C
    // 0x80069A1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_6;
    // 0x80069A1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80069A20: jal         0x80071020
    // 0x80069A24: nop

    func_80071020_4C420(rdram, ctx);
        goto after_7;
    // 0x80069A24: nop

    after_7:
L_80069A28:
    // 0x80069A28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80069A2C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80069A30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80069A34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80069A38: jr          $ra
    // 0x80069A3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80069A3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008B11C_6651C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B11C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B120: jr          $ra
    // 0x8008B124: lw          $v0, 0x4FAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FAC);
    TRACE_RETURN()
    return;
    // 0x8008B124: lw          $v0, 0x4FAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FAC);
;}
RECOMP_FUNC void func_8006FAC8_4AEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FAC8: jr          $ra
    // 0x8006FACC: nop

    TRACE_RETURN()
    return;
    // 0x8006FACC: nop

;}
RECOMP_FUNC void func_800722A8_4D6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800722A8: bltz        $a0, L_80072338
    if (SIGNED(ctx->r4) < 0) {
        // 0x800722AC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80072338;
    }
    // 0x800722AC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800722B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800722B4: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x800722B8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800722BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800722C0: lb          $v1, 0x3580($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3580);
    // 0x800722C4: bltz        $v1, L_80072334
    if (SIGNED(ctx->r3) < 0) {
        // 0x800722C8: sll         $v1, $v1, 9
        ctx->r3 = S32(ctx->r3 << 9);
            goto L_80072334;
    }
    // 0x800722C8: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x800722CC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800722D0: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x800722D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800722D8: sra         $v0, $a0, 4
    ctx->r2 = S32(SIGNED(ctx->r4) >> 4);
    // 0x800722DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800722E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800722E4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800722E8: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x800722EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800722F0: srlv        $v1, $v1, $v0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r2 & 31));
    // 0x800722F4: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x800722F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800722FC: beq         $v1, $v0, L_80072338
    if (ctx->r3 == ctx->r2) {
        // 0x80072300: nop
    
            goto L_80072338;
    }
    // 0x80072300: nop

    // 0x80072304: beq         $v1, $zero, L_80072324
    if (ctx->r3 == 0) {
        // 0x80072308: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80072324;
    }
    // 0x80072308: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007230C: beq         $v1, $v0, L_8007232C
    if (ctx->r3 == ctx->r2) {
        // 0x80072310: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007232C;
    }
    // 0x80072310: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80072314: beq         $v1, $v0, L_80072338
    if (ctx->r3 == ctx->r2) {
        // 0x80072318: nop
    
            goto L_80072338;
    }
    // 0x80072318: nop

    // 0x8007231C: j           L_80072338
    // 0x80072320: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80072338;
    // 0x80072320: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80072324:
    // 0x80072324: j           L_80072338
    // 0x80072328: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80072338;
    // 0x80072328: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8007232C:
    // 0x8007232C: j           L_80072338
    // 0x80072330: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80072338;
    // 0x80072330: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80072334:
    // 0x80072334: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80072338:
    // 0x80072338: jr          $ra
    // 0x8007233C: nop

    TRACE_RETURN()
    return;
    // 0x8007233C: nop

;}
RECOMP_FUNC void func_8008DBD4_68FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DBD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DBD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008DBDC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8008DBE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DBE4: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8008DBE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008DBEC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8008DBF0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8008DBF4: beq         $v0, $zero, L_8008DC00
    if (ctx->r2 == 0) {
        // 0x8008DBF8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8008DC00;
    }
    // 0x8008DBF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008DBFC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8008DC00:
    // 0x8008DC00: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008DC04: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8008DC08: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8008DC0C: bne         $v0, $v1, L_8008DC34
    if (ctx->r2 != ctx->r3) {
        // 0x8008DC10: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_8008DC34;
    }
    // 0x8008DC10: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8008DC14: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008DC18: lw          $v0, 0x4FC0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FC0);
    // 0x8008DC1C: beql        $v0, $zero, L_8008DC34
    if (ctx->r2 == 0) {
        // 0x8008DC20: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_8008DC34;
    }
    goto skip_0;
    // 0x8008DC20: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8008DC24: lw          $a0, 0x44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X44);
    // 0x8008DC28: jalr        $v0
    // 0x8008DC2C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8008DC2C: nop

    after_0:
    // 0x8008DC30: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_8008DC34:
    // 0x8008DC34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DC38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008DC3C: jr          $ra
    // 0x8008DC40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008DC40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002C6F0_7AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C6F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C6F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002C6F8: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8002C6FC: addiu       $s0, $s0, 0x2300
    ctx->r16 = ADD32(ctx->r16, 0X2300);
    // 0x8002C700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002C704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C708: jal         0x8009A2B0
    // 0x8002C70C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8002C70C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_0:
    // 0x8002C710: jal         0x80086F70
    // 0x8002C714: addiu       $s0, $s0, 0x3F0
    ctx->r16 = ADD32(ctx->r16, 0X3F0);
    func_80086F70_62370(rdram, ctx);
        goto after_1;
    // 0x8002C714: addiu       $s0, $s0, 0x3F0
    ctx->r16 = ADD32(ctx->r16, 0X3F0);
    after_1:
    // 0x8002C718: addiu       $v0, $zero, 0x3E0
    ctx->r2 = ADD32(0, 0X3E0);
L_8002C71C:
    // 0x8002C71C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002C720: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002C724: sw          $s0, 0x2300($at)
    MEM_W(0X2300, ctx->r1) = ctx->r16;
    // 0x8002C728: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8002C72C: bgez        $v0, L_8002C71C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002C730: addiu       $s0, $s0, -0x10
        ctx->r16 = ADD32(ctx->r16, -0X10);
            goto L_8002C71C;
    }
    // 0x8002C730: addiu       $s0, $s0, -0x10
    ctx->r16 = ADD32(ctx->r16, -0X10);
    // 0x8002C734: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002C738: addiu       $v0, $v0, 0x2300
    ctx->r2 = ADD32(ctx->r2, 0X2300);
    // 0x8002C73C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002C740: sw          $zero, 0x26F0($at)
    MEM_W(0X26F0, ctx->r1) = 0;
    // 0x8002C744: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002C748: sw          $v0, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r2;
    // 0x8002C74C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002C750: sw          $zero, 0x2704($at)
    MEM_W(0X2704, ctx->r1) = 0;
    // 0x8002C754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C758: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002C75C: jr          $ra
    // 0x8002C760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002C760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006F8E0_4ACE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F8E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F8E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F8E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F8EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F8F0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F8F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006F8F8: bne         $v1, $v0, L_8006F98C
    if (ctx->r3 != ctx->r2) {
        // 0x8006F8FC: nop
    
            goto L_8006F98C;
    }
    // 0x8006F8FC: nop

    // 0x8006F900: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006F904: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006F908: lhu         $a1, 0x11C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006F90C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006F910: beq         $v0, $zero, L_8006F98C
    if (ctx->r2 == 0) {
        // 0x8006F914: nop
    
            goto L_8006F98C;
    }
    // 0x8006F914: nop

    // 0x8006F918: lhu         $v0, 0x12A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006F91C: lhu         $v1, 0x12E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006F920: lhu         $a0, 0x12C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006F924: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006F928: lhu         $v1, 0x128($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X128);
    // 0x8006F92C: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8006F930: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8006F934: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8006F938: and         $a0, $a1, $v1
    ctx->r4 = ctx->r5 & ctx->r3;
    // 0x8006F93C: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x8006F940: beq         $v0, $v1, L_8006F958
    if (ctx->r2 == ctx->r3) {
        // 0x8006F944: nop
    
            goto L_8006F958;
    }
    // 0x8006F944: nop

    // 0x8006F948: bne         $a0, $zero, L_8006F96C
    if (ctx->r4 != 0) {
        // 0x8006F94C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8006F96C;
    }
    // 0x8006F94C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8006F950: j           L_8006F97C
    // 0x8006F954: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8006F97C;
    // 0x8006F954: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8006F958:
    // 0x8006F958: jal         0x800A3450
    // 0x8006F95C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8006F95C: nop

    after_0:
    // 0x8006F960: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8006F964: beq         $v0, $zero, L_8006F978
    if (ctx->r2 == 0) {
        // 0x8006F968: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8006F978;
    }
    // 0x8006F968: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8006F96C:
    // 0x8006F96C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006F970: j           L_8006F984
    // 0x8006F974: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006F984;
    // 0x8006F974: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006F978:
    // 0x8006F978: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8006F97C:
    // 0x8006F97C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006F980: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8006F984:
    // 0x8006F984: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
    // 0x8006F988: sb          $zero, 0x169($s0)
    MEM_B(0X169, ctx->r16) = 0;
L_8006F98C:
    // 0x8006F98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F990: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F994: jr          $ra
    // 0x8006F998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80070430_4B830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80070434: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80070438: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8007043C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80070440: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80070444: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80070448: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8007044C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80070450: lb          $v1, 0x178($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X178);
    // 0x80070454: lb          $s2, 0x170($s1)
    ctx->r18 = MEM_B(ctx->r17, 0X170);
    // 0x80070458: lhu         $s4, 0x11C($s1)
    ctx->r20 = MEM_HU(ctx->r17, 0X11C);
    // 0x8007045C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80070460: beq         $v0, $zero, L_80070634
    if (ctx->r2 == 0) {
        // 0x80070464: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80070634;
    }
    // 0x80070464: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80070468: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007046C: addu        $at, $at, $v0
    gpr jr_addend_80070474 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070470: lw          $v0, 0x2998($at)
    ctx->r2 = ADD32(ctx->r1, 0X2998);
    // 0x80070474: jr          $v0
    // 0x80070478: nop

    switch (jr_addend_80070474 >> 2) {
        case 0: goto L_8007047C; break;
        case 1: goto L_800704B0; break;
        case 2: goto L_80070534; break;
        case 3: goto L_800705B4; break;
        case 4: goto L_80070614; break;
        default: switch_error(__func__, 0x80070474, 0x800D2998);
    }
    // 0x80070478: nop

L_8007047C:
    // 0x8007047C: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80070480: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80070484: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070488: lbu         $v1, 0x100($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X100);
    // 0x8007048C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070490: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070494: lbu         $v0, 0x30F4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F4);
    // 0x80070498: bne         $v1, $v0, L_80070634
    if (ctx->r3 != ctx->r2) {
        // 0x8007049C: nop
    
            goto L_80070634;
    }
    // 0x8007049C: nop

    // 0x800704A0: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x800704A4: lbu         $v1, 0x174($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X174);
    // 0x800704A8: j           L_80070524
    // 0x800704AC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_80070524;
    // 0x800704AC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_800704B0:
    // 0x800704B0: lbu         $v0, 0x174($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X174);
    // 0x800704B4: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x800704B8: bne         $v0, $zero, L_800704E0
    if (ctx->r2 != 0) {
        // 0x800704BC: sll         $v0, $s2, 1
        ctx->r2 = S32(ctx->r18 << 1);
            goto L_800704E0;
    }
    // 0x800704BC: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x800704C0: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x800704C4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x800704C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800704CC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800704D0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x800704D4: lbu         $a2, 0x30F4($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X30F4);
    // 0x800704D8: jal         0x800500C0
    // 0x800704DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800500C0_2B4C0(rdram, ctx);
        goto after_0;
    // 0x800704DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
L_800704E0:
    // 0x800704E0: jal         0x80070180
    // 0x800704E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070180_4B580(rdram, ctx);
        goto after_1;
    // 0x800704E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x800704E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800704EC: lbu         $a1, 0x174($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X174);
    // 0x800704F0: sll         $v1, $s2, 1
    ctx->r3 = S32(ctx->r18 << 1);
    // 0x800704F4: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x800704F8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800704FC: sb          $v0, 0x104($s1)
    MEM_B(0X104, ctx->r17) = ctx->r2;
    // 0x80070500: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80070504: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x80070508: lbu         $a3, 0x30F4($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X30F4);
    // 0x8007050C: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x80070510: jal         0x800501C0
    // 0x80070514: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    func_800501C0_2B5C0(rdram, ctx);
        goto after_2;
    // 0x80070514: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    after_2:
    // 0x80070518: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x8007051C: lbu         $v1, 0x174($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X174);
    // 0x80070520: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80070524:
    // 0x80070524: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80070528: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
    // 0x8007052C: j           L_80070634
    // 0x80070530: sb          $v1, 0x174($s1)
    MEM_B(0X174, ctx->r17) = ctx->r3;
        goto L_80070634;
    // 0x80070530: sb          $v1, 0x174($s1)
    MEM_B(0X174, ctx->r17) = ctx->r3;
L_80070534:
    // 0x80070534: lbu         $v0, 0x174($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X174);
    // 0x80070538: andi        $v0, $v0, 0xCF
    ctx->r2 = ctx->r2 & 0XCF;
    // 0x8007053C: sb          $v0, 0x174($s1)
    MEM_B(0X174, ctx->r17) = ctx->r2;
    // 0x80070540: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80070544: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80070548: sll         $s3, $v0, 2
    ctx->r19 = S32(ctx->r2 << 2);
    // 0x8007054C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80070550: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80070554: lbu         $v0, 0x30F7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F7);
    // 0x80070558: beq         $v0, $zero, L_800705A4
    if (ctx->r2 == 0) {
        // 0x8007055C: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_800705A4;
    }
    // 0x8007055C: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x80070560: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80070564: lh          $v0, 0x4FA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FA);
    // 0x80070568: blez        $v0, L_800705A4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8007056C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_800705A4;
    }
    // 0x8007056C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80070570: lbu         $s0, 0x100($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X100);
    // 0x80070574: jal         0x800710E4
    // 0x80070578: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_800710E4_4C4E4(rdram, ctx);
        goto after_3;
    // 0x80070578: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8007057C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80070580: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x80070584: lbu         $v1, 0x30F5($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X30F5);
    // 0x80070588: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007058C: bne         $s0, $v1, L_80070634
    if (ctx->r16 != ctx->r3) {
        // 0x80070590: nop
    
            goto L_80070634;
    }
    // 0x80070590: nop

    // 0x80070594: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x80070598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007059C: j           L_800705B4
    // 0x800705A0: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
        goto L_800705B4;
    // 0x800705A0: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
L_800705A4:
    // 0x800705A4: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x800705A8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800705AC: j           L_80070634
    // 0x800705B0: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
        goto L_80070634;
    // 0x800705B0: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
L_800705B4:
    // 0x800705B4: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x800705B8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x800705BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800705C0: lbu         $v1, 0x100($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X100);
    // 0x800705C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800705C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800705CC: lbu         $v0, 0x30F6($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F6);
    // 0x800705D0: bne         $v1, $v0, L_800705E8
    if (ctx->r3 != ctx->r2) {
        // 0x800705D4: nop
    
            goto L_800705E8;
    }
    // 0x800705D4: nop

    // 0x800705D8: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x800705DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800705E0: j           L_80070634
    // 0x800705E4: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
        goto L_80070634;
    // 0x800705E4: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
L_800705E8:
    // 0x800705E8: lhu         $v0, 0x13C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X13C);
    // 0x800705EC: and         $v0, $s4, $v0
    ctx->r2 = ctx->r20 & ctx->r2;
    // 0x800705F0: beq         $v0, $zero, L_80070634
    if (ctx->r2 == 0) {
        // 0x800705F4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80070634;
    }
    // 0x800705F4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x800705F8: lbu         $v0, 0x175($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X175);
    // 0x800705FC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80070600: bne         $v0, $v1, L_80070634
    if (ctx->r2 != ctx->r3) {
        // 0x80070604: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80070634;
    }
    // 0x80070604: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80070608: sb          $zero, 0x174($s1)
    MEM_B(0X174, ctx->r17) = 0;
    // 0x8007060C: j           L_80070634
    // 0x80070610: sb          $v0, 0x177($s1)
    MEM_B(0X177, ctx->r17) = ctx->r2;
        goto L_80070634;
    // 0x80070610: sb          $v0, 0x177($s1)
    MEM_B(0X177, ctx->r17) = ctx->r2;
L_80070614:
    // 0x80070614: lb          $v1, 0x103($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X103);
    // 0x80070618: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8007061C: bne         $v1, $v0, L_80070634
    if (ctx->r3 != ctx->r2) {
        // 0x80070620: nop
    
            goto L_80070634;
    }
    // 0x80070620: nop

    // 0x80070624: sb          $zero, 0x174($s1)
    MEM_B(0X174, ctx->r17) = 0;
    // 0x80070628: bne         $s2, $zero, L_8007068C
    if (ctx->r18 != 0) {
        // 0x8007062C: sb          $zero, 0x177($s1)
        MEM_B(0X177, ctx->r17) = 0;
            goto L_8007068C;
    }
    // 0x8007062C: sb          $zero, 0x177($s1)
    MEM_B(0X177, ctx->r17) = 0;
    // 0x80070630: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
L_80070634:
    // 0x80070634: bne         $s2, $zero, L_8007068C
    if (ctx->r18 != 0) {
        // 0x80070638: nop
    
            goto L_8007068C;
    }
    // 0x80070638: nop

    // 0x8007063C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80070640: lbu         $v0, -0x3B95($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B95);
    // 0x80070644: bnel        $v0, $zero, L_8007068C
    if (ctx->r2 != 0) {
        // 0x80070648: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_8007068C;
    }
    goto skip_0;
    // 0x80070648: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_0:
    // 0x8007064C: lw          $v0, 0x198($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X198);
    // 0x80070650: beq         $v0, $zero, L_80070660
    if (ctx->r2 == 0) {
        // 0x80070654: addiu       $v0, $zero, -0x300
        ctx->r2 = ADD32(0, -0X300);
            goto L_80070660;
    }
    // 0x80070654: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80070658: j           L_80070678
    // 0x8007065C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_80070678;
    // 0x8007065C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80070660:
    // 0x80070660: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x80070664: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80070668: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8007066C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80070670: bgtzl       $v0, L_80070678
    if (SIGNED(ctx->r2) > 0) {
        // 0x80070674: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_80070678;
    }
    goto skip_1;
    // 0x80070674: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_1:
L_80070678:
    // 0x80070678: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007067C: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80070680: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80070684: jal         0x8006FC34
    // 0x80070688: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_4;
    // 0x80070688: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8007068C:
    // 0x8007068C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80070690: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80070694: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80070698: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8007069C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800706A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800706A4: jr          $ra
    // 0x800706A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800706A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008A1D4_655D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A1D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008A1D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008A1DC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8008A1E0: addiu       $s0, $s0, 0x4008
    ctx->r16 = ADD32(ctx->r16, 0X4008);
    // 0x8008A1E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008A1E8: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008A1EC: addiu       $a1, $a1, 0x4F50
    ctx->r5 = ADD32(ctx->r5, 0X4F50);
    // 0x8008A1F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A1F4: jal         0x8009A470
    // 0x8008A1F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8008A1F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x8008A1FC: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8008A200: addiu       $a0, $a0, 0x5418
    ctx->r4 = ADD32(ctx->r4, 0X5418);
    // 0x8008A204: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008A208: addiu       $a1, $a1, 0x4F60
    ctx->r5 = ADD32(ctx->r5, 0X4F60);
    // 0x8008A20C: jal         0x8009A470
    // 0x8008A210: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x8008A210: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8008A214: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8008A218: addiu       $a0, $a0, -0x1420
    ctx->r4 = ADD32(ctx->r4, -0X1420);
    // 0x8008A21C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8008A220: jal         0x800922D0
    // 0x8008A224: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800922D0_6D6D0(rdram, ctx);
        goto after_2;
    // 0x8008A224: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x8008A228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008A22C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008A230: jr          $ra
    // 0x8008A234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008A234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
