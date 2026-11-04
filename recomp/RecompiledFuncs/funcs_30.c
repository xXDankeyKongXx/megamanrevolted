#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80093280_6E680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093284: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093288: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x8009328C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80093290: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80093294: jal         0x8009DF00
    // 0x80093298: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    osPfsFreeBlocks_recomp(rdram, ctx);
        goto after_0;
    // 0x80093298: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_0:
    // 0x8009329C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800932A0: jr          $ra
    // 0x800932A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800932A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80078B2C_53F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078B2C: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80078B30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80078B34: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80078B38: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80078B3C: bne         $v0, $zero, L_80078B50
    if (ctx->r2 != 0) {
        // 0x80078B40: nop
    
            goto L_80078B50;
    }
    // 0x80078B40: nop

    // 0x80078B44: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80078B48: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80078B4C: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80078B50:
    // 0x80078B50: jr          $ra
    // 0x80078B54: nop

    TRACE_RETURN()
    return;
    // 0x80078B54: nop

;}
RECOMP_FUNC void func_8008C30C_6770C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C30C: lbu         $a2, 0xD4($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0XD4);
    // 0x8008C310: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x8008C314: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8008C318:
    // 0x8008C318: lbu         $v0, 0xD9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD9);
    // 0x8008C31C: lw          $v1, 0x94($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X94);
    // 0x8008C320: addu        $a1, $v0, $a2
    ctx->r5 = ADD32(ctx->r2, ctx->r6);
    // 0x8008C324: addiu       $v1, $v1, 0x100
    ctx->r3 = ADD32(ctx->r3, 0X100);
    // 0x8008C328: sltiu       $v0, $a1, 0x40
    ctx->r2 = ctx->r5 < 0X40 ? 1 : 0;
    // 0x8008C32C: beq         $v0, $zero, L_8008C33C
    if (ctx->r2 == 0) {
        // 0x8008C330: sw          $v1, 0x94($a0)
        MEM_W(0X94, ctx->r4) = ctx->r3;
            goto L_8008C33C;
    }
    // 0x8008C330: sw          $v1, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r3;
    // 0x8008C334: j           L_8008C3A8
    // 0x8008C338: sb          $a1, 0xD9($a0)
    MEM_B(0XD9, ctx->r4) = ctx->r5;
        goto L_8008C3A8;
    // 0x8008C338: sb          $a1, 0xD9($a0)
    MEM_B(0XD9, ctx->r4) = ctx->r5;
L_8008C33C:
    // 0x8008C33C: lbu         $v1, 0xDA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XDA);
    // 0x8008C340: andi        $v0, $a1, 0x3F
    ctx->r2 = ctx->r5 & 0X3F;
    // 0x8008C344: srl         $a1, $a1, 6
    ctx->r5 = S32(U32(ctx->r5) >> 6);
    // 0x8008C348: bne         $v1, $zero, L_8008C378
    if (ctx->r3 != 0) {
        // 0x8008C34C: sb          $v0, 0xD9($a0)
        MEM_B(0XD9, ctx->r4) = ctx->r2;
            goto L_8008C378;
    }
    // 0x8008C34C: sb          $v0, 0xD9($a0)
    MEM_B(0XD9, ctx->r4) = ctx->r2;
    // 0x8008C350: lbu         $v0, 0xBD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XBD);
    // 0x8008C354: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8008C358: sb          $v0, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = ctx->r2;
    // 0x8008C35C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8008C360: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008C364: bne         $v0, $zero, L_8008C3A8
    if (ctx->r2 != 0) {
        // 0x8008C368: nop
    
            goto L_8008C3A8;
    }
    // 0x8008C368: nop

    // 0x8008C36C: sb          $t0, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = ctx->r8;
    // 0x8008C370: j           L_8008C3A8
    // 0x8008C374: sb          $a3, 0xDA($a0)
    MEM_B(0XDA, ctx->r4) = ctx->r7;
        goto L_8008C3A8;
    // 0x8008C374: sb          $a3, 0xDA($a0)
    MEM_B(0XDA, ctx->r4) = ctx->r7;
L_8008C378:
    // 0x8008C378: lbu         $v0, 0xBD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XBD);
    // 0x8008C37C: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8008C380: sb          $v0, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = ctx->r2;
    // 0x8008C384: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8008C388: sltiu       $v1, $v0, 0x80
    ctx->r3 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008C38C: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8008C390: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8008C394: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8008C398: beq         $v1, $zero, L_8008C3A8
    if (ctx->r3 == 0) {
        // 0x8008C39C: nop
    
            goto L_8008C3A8;
    }
    // 0x8008C39C: nop

    // 0x8008C3A0: sb          $zero, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = 0;
    // 0x8008C3A4: sb          $zero, 0xDA($a0)
    MEM_B(0XDA, ctx->r4) = 0;
L_8008C3A8:
    // 0x8008C3A8: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x8008C3AC: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x8008C3B0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008C3B4: bltz        $v0, L_8008C318
    if (SIGNED(ctx->r2) < 0) {
        // 0x8008C3B8: nop
    
            goto L_8008C318;
    }
    // 0x8008C3B8: nop

    // 0x8008C3BC: jr          $ra
    // 0x8008C3C0: nop

    TRACE_RETURN()
    return;
    // 0x8008C3C0: nop

;}
RECOMP_FUNC void func_8008D9C4_68DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D9C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008D9C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008D9CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8008D9D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008D9D4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8008D9D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008D9DC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8008D9E0: jal         0x8008C984
    // 0x8008D9E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_8008C984_67D84(rdram, ctx);
        goto after_0;
    // 0x8008D9E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x8008D9E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8008D9EC: sb          $v1, 0xBC($s1)
    MEM_B(0XBC, ctx->r17) = ctx->r3;
    // 0x8008D9F0: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8008D9F4: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8008D9F8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8008D9FC: sb          $v1, 0xBC($s1)
    MEM_B(0XBC, ctx->r17) = ctx->r3;
    // 0x8008DA00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008DA04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008DA08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008DA0C: jr          $ra
    // 0x8008DA10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008DA10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800707B0_4BBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800707B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800707B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800707B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800707BC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800707C0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800707C4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800707C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800707CC: lb          $v1, 0x178($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X178);
    // 0x800707D0: lb          $s2, 0x170($s1)
    ctx->r18 = MEM_B(ctx->r17, 0X170);
    // 0x800707D4: lhu         $s3, 0x11C($s1)
    ctx->r19 = MEM_HU(ctx->r17, 0X11C);
    // 0x800707D8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x800707DC: beq         $v0, $zero, L_80070940
    if (ctx->r2 == 0) {
        // 0x800707E0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80070940;
    }
    // 0x800707E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800707E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800707E8: addu        $at, $at, $v0
    gpr jr_addend_800707F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800707EC: lw          $v0, 0x29B0($at)
    ctx->r2 = ADD32(ctx->r1, 0X29B0);
    // 0x800707F0: jr          $v0
    // 0x800707F4: nop

    switch (jr_addend_800707F0 >> 2) {
        case 0: goto L_800707F8; break;
        case 1: goto L_80070838; break;
        case 2: goto L_80070838; break;
        case 3: goto L_800708CC; break;
        case 4: goto L_80070924; break;
        default: switch_error(__func__, 0x800707F0, 0x800D29B0);
    }
    // 0x800707F4: nop

L_800707F8:
    // 0x800707F8: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x800707FC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80070800: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070804: lbu         $v1, 0x100($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X100);
    // 0x80070808: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8007080C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070810: lbu         $v0, 0x30F4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F4);
    // 0x80070814: bne         $v1, $v0, L_80070944
    if (ctx->r3 != ctx->r2) {
        // 0x80070818: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80070944;
    }
    // 0x80070818: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8007081C: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x80070820: lbu         $v1, 0x174($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X174);
    // 0x80070824: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80070828: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8007082C: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
    // 0x80070830: j           L_80070940
    // 0x80070834: sb          $v1, 0x174($s1)
    MEM_B(0X174, ctx->r17) = ctx->r3;
        goto L_80070940;
    // 0x80070834: sb          $v1, 0x174($s1)
    MEM_B(0X174, ctx->r17) = ctx->r3;
L_80070838:
    // 0x80070838: lbu         $v0, 0x174($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X174);
    // 0x8007083C: andi        $v0, $v0, 0xCF
    ctx->r2 = ctx->r2 & 0XCF;
    // 0x80070840: sb          $v0, 0x174($s1)
    MEM_B(0X174, ctx->r17) = ctx->r2;
    // 0x80070844: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80070848: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8007084C: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x80070850: lbu         $v0, 0x100($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X100);
    // 0x80070854: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80070858: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8007085C: lbu         $v1, 0x30F6($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X30F6);
    // 0x80070860: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80070864: bne         $v0, $zero, L_800708A4
    if (ctx->r2 != 0) {
        // 0x80070868: nop
    
            goto L_800708A4;
    }
    // 0x80070868: nop

    // 0x8007086C: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80070870: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80070874: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x80070878: lbu         $a2, 0x30F5($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X30F5);
    // 0x8007087C: jal         0x800500C0
    // 0x80070880: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800500C0_2B4C0(rdram, ctx);
        goto after_0;
    // 0x80070880: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80070884: lbu         $a2, 0x104($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X104);
    // 0x80070888: lbu         $a1, 0x174($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X174);
    // 0x8007088C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80070890: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    // 0x80070894: lbu         $a3, 0x30F5($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X30F5);
    // 0x80070898: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007089C: jal         0x800501C0
    // 0x800708A0: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    func_800501C0_2B5C0(rdram, ctx);
        goto after_1;
    // 0x800708A0: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    after_1:
L_800708A4:
    // 0x800708A4: lhu         $v0, 0x13C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X13C);
    // 0x800708A8: and         $v0, $v0, $s3
    ctx->r2 = ctx->r2 & ctx->r19;
    // 0x800708AC: beq         $v0, $zero, L_80070910
    if (ctx->r2 == 0) {
        // 0x800708B0: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_80070910;
    }
    // 0x800708B0: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x800708B4: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x800708B8: lh          $v0, 0x4FA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FA);
    // 0x800708BC: bgtz        $v0, L_80070944
    if (SIGNED(ctx->r2) > 0) {
        // 0x800708C0: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80070944;
    }
    // 0x800708C0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x800708C4: j           L_80070910
    // 0x800708C8: nop

        goto L_80070910;
    // 0x800708C8: nop

L_800708CC:
    // 0x800708CC: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x800708D0: sll         $s0, $s2, 1
    ctx->r16 = S32(ctx->r18 << 1);
    // 0x800708D4: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x800708D8: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x800708DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800708E0: addu        $a2, $a2, $s0
    ctx->r6 = ADD32(ctx->r6, ctx->r16);
    // 0x800708E4: lbu         $a2, 0x30F6($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X30F6);
    // 0x800708E8: jal         0x800500C0
    // 0x800708EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800500C0_2B4C0(rdram, ctx);
        goto after_2;
    // 0x800708EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x800708F0: lbu         $a2, 0x104($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X104);
    // 0x800708F4: lbu         $a1, 0x174($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X174);
    // 0x800708F8: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800708FC: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    // 0x80070900: lbu         $a3, 0x30F6($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X30F6);
    // 0x80070904: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80070908: jal         0x800501C0
    // 0x8007090C: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    func_800501C0_2B5C0(rdram, ctx);
        goto after_3;
    // 0x8007090C: andi        $a1, $a1, 0x3
    ctx->r5 = ctx->r5 & 0X3;
    after_3:
L_80070910:
    // 0x80070910: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x80070914: sb          $zero, 0x110($s1)
    MEM_B(0X110, ctx->r17) = 0;
    // 0x80070918: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007091C: j           L_80070940
    // 0x80070920: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
        goto L_80070940;
    // 0x80070920: sb          $v0, 0x178($s1)
    MEM_B(0X178, ctx->r17) = ctx->r2;
L_80070924:
    // 0x80070924: lb          $v1, 0x103($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X103);
    // 0x80070928: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8007092C: bne         $v1, $v0, L_80070944
    if (ctx->r3 != ctx->r2) {
        // 0x80070930: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80070944;
    }
    // 0x80070930: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80070934: sb          $zero, 0x174($s1)
    MEM_B(0X174, ctx->r17) = 0;
    // 0x80070938: sb          $zero, 0x177($s1)
    MEM_B(0X177, ctx->r17) = 0;
    // 0x8007093C: sb          $zero, 0x110($s1)
    MEM_B(0X110, ctx->r17) = 0;
L_80070940:
    // 0x80070940: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80070944:
    // 0x80070944: bne         $s2, $v0, L_800709E4
    if (ctx->r18 != ctx->r2) {
        // 0x80070948: nop
    
            goto L_800709E4;
    }
    // 0x80070948: nop

    // 0x8007094C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80070950: lbu         $v0, -0x3B95($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B95);
    // 0x80070954: bnel        $v0, $zero, L_800709E4
    if (ctx->r2 != 0) {
        // 0x80070958: sh          $zero, 0x44($s1)
        MEM_H(0X44, ctx->r17) = 0;
            goto L_800709E4;
    }
    goto skip_0;
    // 0x80070958: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    skip_0:
    // 0x8007095C: lb          $v0, 0x44C($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X44C);
    // 0x80070960: beq         $v0, $zero, L_80070990
    if (ctx->r2 == 0) {
        // 0x80070964: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80070990;
    }
    // 0x80070964: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80070968: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8007096C: beq         $v0, $zero, L_80070978
    if (ctx->r2 == 0) {
        // 0x80070970: addiu       $v0, $zero, -0x280
        ctx->r2 = ADD32(0, -0X280);
            goto L_80070978;
    }
    // 0x80070970: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
    // 0x80070974: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80070978:
    // 0x80070978: lbu         $v0, 0x44C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X44C);
    // 0x8007097C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80070980: beq         $v0, $zero, L_8007098C
    if (ctx->r2 == 0) {
        // 0x80070984: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8007098C;
    }
    // 0x80070984: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80070988: sb          $v0, 0x110($s1)
    MEM_B(0X110, ctx->r17) = ctx->r2;
L_8007098C:
    // 0x8007098C: sb          $zero, 0x44C($s1)
    MEM_B(0X44C, ctx->r17) = 0;
L_80070990:
    // 0x80070990: lbu         $a0, 0x9($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9);
    // 0x80070994: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80070998: xori        $v0, $a0, 0x4
    ctx->r2 = ctx->r4 ^ 0X4;
    // 0x8007099C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800709A0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800709A4: bne         $v1, $zero, L_800709B4
    if (ctx->r3 != 0) {
        // 0x800709A8: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_800709B4;
    }
    // 0x800709A8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x800709AC: bne         $a0, $v0, L_800709D4
    if (ctx->r4 != ctx->r2) {
        // 0x800709B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_800709D4;
    }
    // 0x800709B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_800709B4:
    // 0x800709B4: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x800709B8: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x800709BC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x800709C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800709C4: blez        $v0, L_800709D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800709C8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_800709D4;
    }
    // 0x800709C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800709CC: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x800709D0: sb          $zero, 0x110($s1)
    MEM_B(0X110, ctx->r17) = 0;
L_800709D4:
    // 0x800709D4: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x800709D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800709DC: jal         0x8006FC34
    // 0x800709E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_4;
    // 0x800709E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_800709E4:
    // 0x800709E4: lb          $v0, 0x74($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X74);
    // 0x800709E8: beq         $v0, $zero, L_800709FC
    if (ctx->r2 == 0) {
        // 0x800709EC: nop
    
            goto L_800709FC;
    }
    // 0x800709EC: nop

    // 0x800709F0: jal         0x800700D8
    // 0x800709F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_5;
    // 0x800709F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x800709F8: sb          $zero, 0x110($s1)
    MEM_B(0X110, ctx->r17) = 0;
L_800709FC:
    // 0x800709FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80070A00: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80070A04: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80070A08: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80070A0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80070A10: jr          $ra
    // 0x80070A14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80070A14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void __osFlashGetAddr(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A08E0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800A08E4: lw          $v0, -0x5960($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5960);
    // 0x800A08E8: bne         $v0, $zero, L_800A08F4
    if (ctx->r2 != 0) {
        // 0x800A08EC: sll         $v0, $a0, 7
        ctx->r2 = S32(ctx->r4 << 7);
            goto L_800A08F4;
    }
    // 0x800A08EC: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    // 0x800A08F0: sll         $v0, $a0, 6
    ctx->r2 = S32(ctx->r4 << 6);
L_800A08F4:
    // 0x800A08F4: jr          $ra
    // 0x800A08F8: nop

    TRACE_RETURN()
    return;
    // 0x800A08F8: nop

;}
RECOMP_FUNC void func_80055E50_31250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80055E50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80055E54: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80055E58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80055E5C: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80055E60: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80055E64: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80055E68: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80055E6C: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x80055E70: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80055E74: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80055E78: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80055E7C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80055E80: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80055E84: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80055E88: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80055E8C: lh          $s1, 0x4EAA($s1)
    ctx->r17 = MEM_H(ctx->r17, 0X4EAA);
    // 0x80055E90: jal         0x8007108C
    // 0x80055E94: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    func_8007108C_4C48C(rdram, ctx);
        goto after_0;
    // 0x80055E94: addu        $s3, $s0, $zero
    ctx->r19 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80055E98: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80055E9C: slti        $v0, $s2, 0x7FFF
    ctx->r2 = SIGNED(ctx->r18) < 0X7FFF ? 1 : 0;
    // 0x80055EA0: beq         $v0, $zero, L_800560F4
    if (ctx->r2 == 0) {
        // 0x80055EA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800560F4;
    }
    // 0x80055EA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80055EA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80055EAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80055EB0: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80055EB4: jal         0x8003055C
    // 0x80055EB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8003055C_B95C(rdram, ctx);
        goto after_1;
    // 0x80055EB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80055EBC: addiu       $v1, $s0, 0x14
    ctx->r3 = ADD32(ctx->r16, 0X14);
    // 0x80055EC0: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80055EC4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80055EC8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80055ECC: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x80055ED0: addiu       $v0, $s0, 0x14
    ctx->r2 = ADD32(ctx->r16, 0X14);
    // 0x80055ED4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80055ED8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80055EDC: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80055EE0: lui         $t4, 0x6666
    ctx->r12 = S32(0X6666 << 16);
    // 0x80055EE4: ori         $t4, $t4, 0x6667
    ctx->r12 = ctx->r12 | 0X6667;
    // 0x80055EE8: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x80055EEC: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x80055EF0: addiu       $t9, $zero, 0x64
    ctx->r25 = ADD32(0, 0X64);
    // 0x80055EF4: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80055EF8: lui         $t8, 0xFFFF
    ctx->r24 = S32(0XFFFF << 16);
    // 0x80055EFC: addiu       $s1, $zero, 0x6
    ctx->r17 = ADD32(0, 0X6);
    // 0x80055F00: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80055F04: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x80055F08: addiu       $t5, $zero, 0x3E82
    ctx->r13 = ADD32(0, 0X3E82);
    // 0x80055F0C: lui         $t0, 0x8C
    ctx->r8 = S32(0X8C << 16);
    // 0x80055F10: ori         $t0, $t0, 0xC9
    ctx->r8 = ctx->r8 | 0XC9;
    // 0x80055F14: addiu       $a3, $zero, 0xC9
    ctx->r7 = ADD32(0, 0XC9);
    // 0x80055F18: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x80055F1C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80055F20: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80055F24: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80055F28: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80055F2C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80055F30: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80055F34: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80055F38: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80055F3C: addiu       $v0, $zero, 0xD1
    ctx->r2 = ADD32(0, 0XD1);
    // 0x80055F40: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80055F44: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80055F48: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x80055F4C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80055F50: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    // 0x80055F54: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80055F58: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x80055F5C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80055F60: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80055F64: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80055F68: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80055F6C: addiu       $v0, $zero, 0x3E82
    ctx->r2 = ADD32(0, 0X3E82);
    // 0x80055F70: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_80055F74:
    // 0x80055F74: and         $v1, $t0, $t8
    ctx->r3 = ctx->r8 & ctx->r24;
    // 0x80055F78: addiu       $t0, $t0, -0x7
    ctx->r8 = ADD32(ctx->r8, -0X7);
    // 0x80055F7C: sh          $a3, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r7;
    // 0x80055F80: addiu       $a3, $a3, -0x7
    ctx->r7 = ADD32(ctx->r7, -0X7);
    // 0x80055F84: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80055F88: addiu       $a0, $a1, 0x14
    ctx->r4 = ADD32(ctx->r5, 0X14);
    // 0x80055F8C: and         $v0, $a0, $t3
    ctx->r2 = ctx->r4 & ctx->r11;
    // 0x80055F90: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80055F94: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80055F98: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x80055F9C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80055FA0: sra         $v0, $a2, 31
    ctx->r2 = S32(SIGNED(ctx->r6) >> 31);
    // 0x80055FA4: mult        $a2, $t4
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80055FA8: sb          $t9, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r25;
    // 0x80055FAC: sb          $t2, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r10;
    // 0x80055FB0: sb          $t2, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r10;
    // 0x80055FB4: sb          $t2, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r10;
    // 0x80055FB8: sh          $v1, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r3;
    // 0x80055FBC: sh          $s1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r17;
    // 0x80055FC0: sh          $t7, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r15;
    // 0x80055FC4: sb          $t6, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r14;
    // 0x80055FC8: sh          $t5, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r13;
    // 0x80055FCC: mfhi        $s4
    ctx->r20 = hi;
    // 0x80055FD0: sra         $v1, $s4, 2
    ctx->r3 = S32(SIGNED(ctx->r20) >> 2);
    // 0x80055FD4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80055FD8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80055FDC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80055FE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80055FE4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80055FE8: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x80055FEC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80055FF0: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80055FF4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80055FF8: bgez        $t1, L_80055F74
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80055FFC: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80055F74;
    }
    // 0x80055FFC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80056000: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80056004: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80056008: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8005600C: lui         $t4, 0x6666
    ctx->r12 = S32(0X6666 << 16);
    // 0x80056010: ori         $t4, $t4, 0x6667
    ctx->r12 = ctx->r12 | 0X6667;
    // 0x80056014: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x80056018: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x8005601C: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x80056020: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80056024: lui         $s1, 0xFFFF
    ctx->r17 = S32(0XFFFF << 16);
    // 0x80056028: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x8005602C: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80056030: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x80056034: addiu       $t5, $zero, 0x3E82
    ctx->r13 = ADD32(0, 0X3E82);
    // 0x80056038: lui         $t0, 0x8C
    ctx->r8 = S32(0X8C << 16);
    // 0x8005603C: ori         $t0, $t0, 0xED
    ctx->r8 = ctx->r8 | 0XED;
    // 0x80056040: addiu       $a3, $zero, 0xED
    ctx->r7 = ADD32(0, 0XED);
L_80056044:
    // 0x80056044: and         $v1, $t0, $s1
    ctx->r3 = ctx->r8 & ctx->r17;
    // 0x80056048: addiu       $t0, $t0, -0x7
    ctx->r8 = ADD32(ctx->r8, -0X7);
    // 0x8005604C: sh          $a3, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r7;
    // 0x80056050: addiu       $a3, $a3, -0x7
    ctx->r7 = ADD32(ctx->r7, -0X7);
    // 0x80056054: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x80056058: addiu       $a0, $a2, 0x14
    ctx->r4 = ADD32(ctx->r6, 0X14);
    // 0x8005605C: and         $v0, $a0, $t3
    ctx->r2 = ctx->r4 & ctx->r11;
    // 0x80056060: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80056064: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80056068: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x8005606C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80056070: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80056074: mult        $a1, $t4
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80056078: sb          $t8, 0x7($a2)
    MEM_B(0X7, ctx->r6) = ctx->r24;
    // 0x8005607C: sb          $t2, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r10;
    // 0x80056080: sb          $t2, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r10;
    // 0x80056084: sb          $t2, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r10;
    // 0x80056088: sh          $v1, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r3;
    // 0x8005608C: sh          $s0, 0x10($a2)
    MEM_H(0X10, ctx->r6) = ctx->r16;
    // 0x80056090: sh          $t7, 0x12($a2)
    MEM_H(0X12, ctx->r6) = ctx->r15;
    // 0x80056094: sb          $t6, 0xD($a2)
    MEM_B(0XD, ctx->r6) = ctx->r14;
    // 0x80056098: sh          $t5, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r13;
    // 0x8005609C: mfhi        $s4
    ctx->r20 = hi;
    // 0x800560A0: sra         $v1, $s4, 2
    ctx->r3 = S32(SIGNED(ctx->r20) >> 2);
    // 0x800560A4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x800560A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800560AC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800560B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800560B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800560B8: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x800560BC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800560C0: sb          $v0, 0xC($a2)
    MEM_B(0XC, ctx->r6) = ctx->r2;
    // 0x800560C4: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x800560C8: bgez        $t1, L_80056044
    if (SIGNED(ctx->r9) >= 0) {
        // 0x800560CC: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80056044;
    }
    // 0x800560CC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x800560D0: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x800560D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800560D8: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x800560DC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800560E0: addiu       $a2, $s0, -0x14
    ctx->r6 = ADD32(ctx->r16, -0X14);
    // 0x800560E4: jal         0x8002FD5C
    // 0x800560E8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD5C_B15C(rdram, ctx);
        goto after_2;
    // 0x800560E8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_2:
    // 0x800560EC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800560F0: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
L_800560F4:
    // 0x800560F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800560F8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800560FC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80056100: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80056104: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80056108: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8005610C: jr          $ra
    // 0x80056110: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80056110: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80068CD0_440D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80068CD0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80068CD4: lw          $v1, -0x5858($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5858);
    // 0x80068CD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80068CDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80068CE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80068CE4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80068CE8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80068CEC: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x80068CF0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80068CF4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80068CF8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80068CFC: sw          $v1, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r3;
    // 0x80068D00: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80068D04: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068D08: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80068D0C: sb          $v0, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r2;
    // 0x80068D10: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068D14: lbu         $v0, 0x7($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X7);
    // 0x80068D18: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80068D1C: sb          $v0, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r2;
    // 0x80068D20: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068D24: lbu         $v0, 0xB0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB0);
    // 0x80068D28: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x80068D2C: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068D30: lbu         $v0, 0xB1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB1);
    // 0x80068D34: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x80068D38: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068D3C: lbu         $v0, 0xB2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB2);
    // 0x80068D40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80068D44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80068D48: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    // 0x80068D4C: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80068D50: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80068D54: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    // 0x80068D58: addiu       $v0, $s1, 0xC
    ctx->r2 = ADD32(ctx->r17, 0XC);
    // 0x80068D5C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80068D60: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80068D64: jal         0x80030284
    // 0x80068D68: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_80030284_B684(rdram, ctx);
        goto after_0;
    // 0x80068D68: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_0:
    // 0x80068D6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80068D70: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80068D74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80068D78: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x80068D7C: jal         0x8003055C
    // 0x80068D80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8003055C_B95C(rdram, ctx);
        goto after_1;
    // 0x80068D80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80068D84: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80068D88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80068D8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80068D90: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80068D94: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80068D98: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80068D9C: jal         0x8002FD30
    // 0x80068DA0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x80068DA0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x80068DA4: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068DA8: lhu         $v0, 0x88($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X88);
    // 0x80068DAC: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    // 0x80068DB0: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068DB4: lhu         $v0, 0x8A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8A);
    // 0x80068DB8: sh          $v0, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r2;
    // 0x80068DBC: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068DC0: lhu         $v0, 0x8C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8C);
    // 0x80068DC4: sh          $v0, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r2;
    // 0x80068DC8: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068DCC: lhu         $v0, 0x8E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8E);
    // 0x80068DD0: sh          $v0, 0xE($v1)
    MEM_H(0XE, ctx->r3) = ctx->r2;
    // 0x80068DD4: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068DD8: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80068DDC: sh          $v0, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r2;
    // 0x80068DE0: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068DE4: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80068DE8: sh          $v0, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r2;
    // 0x80068DEC: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068DF0: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80068DF4: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80068DF8: lw          $v1, 0x98($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X98);
    // 0x80068DFC: lhu         $v0, 0x96($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X96);
    // 0x80068E00: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x80068E04: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80068E08: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x80068E0C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80068E10: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80068E14: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80068E18: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80068E1C: jal         0x8002FD30
    // 0x80068E20: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_3;
    // 0x80068E20: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_3:
    // 0x80068E24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80068E28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80068E2C: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80068E30: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80068E34: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    // 0x80068E38: addiu       $v0, $s1, 0xC
    ctx->r2 = ADD32(ctx->r17, 0XC);
    // 0x80068E3C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80068E40: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80068E44: jal         0x80030284
    // 0x80068E48: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_80030284_B684(rdram, ctx);
        goto after_4;
    // 0x80068E48: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_4:
    // 0x80068E4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80068E50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80068E54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80068E58: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x80068E5C: jal         0x8003055C
    // 0x80068E60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8003055C_B95C(rdram, ctx);
        goto after_5;
    // 0x80068E60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80068E64: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80068E68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80068E6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80068E70: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80068E74: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80068E78: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80068E7C: jal         0x8002FD30
    // 0x80068E80: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_6;
    // 0x80068E80: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_6:
    // 0x80068E84: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80068E88: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80068E8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80068E90: jr          $ra
    // 0x80068E94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80068E94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80053ED8_2F2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80053ED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80053EDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80053EE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80053EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80053EE8: jal         0x8004DA68
    // 0x80053EEC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80053EEC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x80053EF0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80053EF4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80053EF8: beql        $v1, $v0, L_80053FF4
    if (ctx->r3 == ctx->r2) {
        // 0x80053EFC: andi        $v1, $s0, 0x1F
        ctx->r3 = ctx->r16 & 0X1F;
            goto L_80053FF4;
    }
    goto skip_0;
    // 0x80053EFC: andi        $v1, $s0, 0x1F
    ctx->r3 = ctx->r16 & 0X1F;
    skip_0:
    // 0x80053F00: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80053F04: beq         $v0, $zero, L_80053F40
    if (ctx->r2 == 0) {
        // 0x80053F08: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80053F40;
    }
    // 0x80053F08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80053F0C: beql        $v1, $v0, L_80053FAC
    if (ctx->r3 == ctx->r2) {
        // 0x80053F10: andi        $v1, $s0, 0xF
        ctx->r3 = ctx->r16 & 0XF;
            goto L_80053FAC;
    }
    goto skip_1;
    // 0x80053F10: andi        $v1, $s0, 0xF
    ctx->r3 = ctx->r16 & 0XF;
    skip_1:
    // 0x80053F14: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x80053F18: beql        $v0, $zero, L_80053F30
    if (ctx->r2 == 0) {
        // 0x80053F1C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80053F30;
    }
    goto skip_2;
    // 0x80053F1C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    skip_2:
    // 0x80053F20: beq         $v1, $zero, L_80053F88
    if (ctx->r3 == 0) {
        // 0x80053F24: andi        $v0, $s0, 0xF
        ctx->r2 = ctx->r16 & 0XF;
            goto L_80053F88;
    }
    // 0x80053F24: andi        $v0, $s0, 0xF
    ctx->r2 = ctx->r16 & 0XF;
    // 0x80053F28: j           L_800540A4
    // 0x80053F2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800540A4;
    // 0x80053F2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80053F30:
    // 0x80053F30: beq         $v1, $v0, L_80053FD0
    if (ctx->r3 == ctx->r2) {
        // 0x80053F34: andi        $v1, $s0, 0x1F
        ctx->r3 = ctx->r16 & 0X1F;
            goto L_80053FD0;
    }
    // 0x80053F34: andi        $v1, $s0, 0x1F
    ctx->r3 = ctx->r16 & 0X1F;
    // 0x80053F38: j           L_800540A4
    // 0x80053F3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800540A4;
    // 0x80053F3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80053F40:
    // 0x80053F40: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80053F44: beql        $v1, $v0, L_80054044
    if (ctx->r3 == ctx->r2) {
        // 0x80053F48: andi        $v1, $s0, 0x3F
        ctx->r3 = ctx->r16 & 0X3F;
            goto L_80054044;
    }
    goto skip_3;
    // 0x80053F48: andi        $v1, $s0, 0x3F
    ctx->r3 = ctx->r16 & 0X3F;
    skip_3:
    // 0x80053F4C: sltiu       $v0, $v1, 0x81
    ctx->r2 = ctx->r3 < 0X81 ? 1 : 0;
    // 0x80053F50: beq         $v0, $zero, L_80053F68
    if (ctx->r2 == 0) {
        // 0x80053F54: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80053F68;
    }
    // 0x80053F54: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80053F58: beq         $v1, $v0, L_80054020
    if (ctx->r3 == ctx->r2) {
        // 0x80053F5C: andi        $v1, $s0, 0x1F
        ctx->r3 = ctx->r16 & 0X1F;
            goto L_80054020;
    }
    // 0x80053F5C: andi        $v1, $s0, 0x1F
    ctx->r3 = ctx->r16 & 0X1F;
    // 0x80053F60: j           L_800540A4
    // 0x80053F64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800540A4;
    // 0x80053F64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80053F68:
    // 0x80053F68: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80053F6C: beql        $v1, $v0, L_80054068
    if (ctx->r3 == ctx->r2) {
        // 0x80053F70: andi        $v1, $s0, 0x1F
        ctx->r3 = ctx->r16 & 0X1F;
            goto L_80054068;
    }
    goto skip_4;
    // 0x80053F70: andi        $v1, $s0, 0x1F
    ctx->r3 = ctx->r16 & 0X1F;
    skip_4:
    // 0x80053F74: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80053F78: beq         $v1, $v0, L_80054084
    if (ctx->r3 == ctx->r2) {
        // 0x80053F7C: andi        $v1, $s0, 0x1F
        ctx->r3 = ctx->r16 & 0X1F;
            goto L_80054084;
    }
    // 0x80053F7C: andi        $v1, $s0, 0x1F
    ctx->r3 = ctx->r16 & 0X1F;
    // 0x80053F80: j           L_800540A4
    // 0x80053F84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800540A4;
    // 0x80053F84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80053F88:
    // 0x80053F88: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80053F8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80053F90: sll         $v0, $v1, 7
    ctx->r2 = S32(ctx->r3 << 7);
    // 0x80053F94: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80053F98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80053F9C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80053FA0: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80053FA4: j           L_800540A4
    // 0x80053FA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800540A4;
    // 0x80053FA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80053FAC:
    // 0x80053FAC: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80053FB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80053FB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80053FB8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80053FBC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80053FC0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80053FC4: addiu       $v1, $v1, 0x59A0
    ctx->r3 = ADD32(ctx->r3, 0X59A0);
    // 0x80053FC8: j           L_800540A4
    // 0x80053FCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800540A4;
    // 0x80053FCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80053FD0:
    // 0x80053FD0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80053FD4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80053FD8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80053FDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80053FE0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80053FE4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80053FE8: addiu       $v1, $v1, -0x420
    ctx->r3 = ADD32(ctx->r3, -0X420);
    // 0x80053FEC: j           L_800540A4
    // 0x80053FF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800540A4;
    // 0x80053FF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80053FF4:
    // 0x80053FF4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80053FF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80053FFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80054000: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054004: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x80054008: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005400C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80054010: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80054014: addiu       $v1, $v1, -0x5F40
    ctx->r3 = ADD32(ctx->r3, -0X5F40);
    // 0x80054018: j           L_800540A4
    // 0x8005401C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800540A4;
    // 0x8005401C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80054020:
    // 0x80054020: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80054024: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80054028: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005402C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054030: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80054034: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80054038: addiu       $v1, $v1, -0x2100
    ctx->r3 = ADD32(ctx->r3, -0X2100);
    // 0x8005403C: j           L_800540A4
    // 0x80054040: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800540A4;
    // 0x80054040: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80054044:
    // 0x80054044: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80054048: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005404C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80054050: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054054: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80054058: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005405C: addiu       $v1, $v1, -0x2290
    ctx->r3 = ADD32(ctx->r3, -0X2290);
    // 0x80054060: j           L_800540A4
    // 0x80054064: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800540A4;
    // 0x80054064: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80054068:
    // 0x80054068: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8005406C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80054070: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80054074: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80054078: addiu       $v1, $v1, -0x3050
    ctx->r3 = ADD32(ctx->r3, -0X3050);
    // 0x8005407C: j           L_800540A4
    // 0x80054080: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800540A4;
    // 0x80054080: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80054084:
    // 0x80054084: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80054088: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005408C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80054090: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054094: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80054098: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005409C: addiu       $v1, $v1, 0x6B70
    ctx->r3 = ADD32(ctx->r3, 0X6B70);
    // 0x800540A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_800540A4:
    // 0x800540A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800540A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800540AC: jr          $ra
    // 0x800540B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800540B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800608A8_3BCA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800608A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800608AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800608B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800608B4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x800608B8: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x800608BC: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x800608C0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800608C4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800608C8: jal         0x8005FA7C
    // 0x800608CC: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x800608CC: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    after_0:
    // 0x800608D0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800608D4: lw          $v1, -0x5810($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5810);
    // 0x800608D8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800608DC: sll         $a0, $s0, 2
    ctx->r4 = S32(ctx->r16 << 2);
    // 0x800608E0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x800608E4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x800608E8: lw          $a1, -0x3A2C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3A2C);
    // 0x800608EC: srlv        $v0, $v0, $s0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r16 & 31));
    // 0x800608F0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800608F4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800608F8: sw          $v1, -0x5810($at)
    MEM_W(-0X5810, ctx->r1) = ctx->r3;
    // 0x800608FC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80060900: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80060904: sw          $a1, -0x71D8($at)
    MEM_W(-0X71D8, ctx->r1) = ctx->r5;
    // 0x80060908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006090C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80060910: jr          $ra
    // 0x80060914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80060914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80025E3C_123C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025E3C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80025E40: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
    // 0x80025E44: addiu       $a0, $a0, 0xF
    ctx->r4 = ADD32(ctx->r4, 0XF);
    // 0x80025E48: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x80025E4C: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80025E50: sltiu       $v0, $a1, 0x100
    ctx->r2 = ctx->r5 < 0X100 ? 1 : 0;
    // 0x80025E54: bne         $v0, $zero, L_80025EB0
    if (ctx->r2 != 0) {
        // 0x80025E58: addiu       $a0, $a0, 0x40
        ctx->r4 = ADD32(ctx->r4, 0X40);
            goto L_80025EB0;
    }
    // 0x80025E58: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x80025E5C: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x80025E60: lw          $a3, 0x34D0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X34D0);
    // 0x80025E64: beq         $a3, $zero, L_80025EB0
    if (ctx->r7 == 0) {
        // 0x80025E68: nop
    
            goto L_80025EB0;
    }
    // 0x80025E68: nop

    // 0x80025E6C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80025E70: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80025E74:
    // 0x80025E74: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x80025E78: bne         $v0, $a1, L_80025EA4
    if (ctx->r2 != ctx->r5) {
        // 0x80025E7C: nop
    
            goto L_80025EA4;
    }
    // 0x80025E7C: nop

    // 0x80025E80: lw          $v0, 0x14($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X14);
    // 0x80025E84: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x80025E88: sw          $t0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r8;
    // 0x80025E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80025E90: bne         $v1, $a0, L_80025F80
    if (ctx->r3 != ctx->r4) {
        // 0x80025E94: sw          $v0, 0x14($a3)
        MEM_W(0X14, ctx->r7) = ctx->r2;
            goto L_80025F80;
    }
    // 0x80025E94: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    // 0x80025E98: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    // 0x80025E9C: j           L_80025FF0
    // 0x80025EA0: addiu       $v0, $a3, 0x40
    ctx->r2 = ADD32(ctx->r7, 0X40);
        goto L_80025FF0;
    // 0x80025EA0: addiu       $v0, $a3, 0x40
    ctx->r2 = ADD32(ctx->r7, 0X40);
L_80025EA4:
    // 0x80025EA4: lw          $a3, 0x0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X0);
    // 0x80025EA8: bne         $a3, $zero, L_80025E74
    if (ctx->r7 != 0) {
        // 0x80025EAC: nop
    
            goto L_80025E74;
    }
    // 0x80025EAC: nop

L_80025EB0:
    // 0x80025EB0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80025EB4: lw          $v0, 0x34D0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34D0);
    // 0x80025EB8: bnel        $v0, $zero, L_80025F2C
    if (ctx->r2 != 0) {
        // 0x80025EBC: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_80025F2C;
    }
    goto skip_0;
    // 0x80025EBC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    skip_0:
    // 0x80025EC0: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
    // 0x80025EC4: ori         $v0, $v0, 0x5000
    ctx->r2 = ctx->r2 | 0X5000;
    // 0x80025EC8: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80025ECC: addiu       $v1, $v1, -0x6D20
    ctx->r3 = ADD32(ctx->r3, -0X6D20);
    // 0x80025ED0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80025ED4: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80025ED8: bne         $v0, $zero, L_80025FF0
    if (ctx->r2 != 0) {
        // 0x80025EDC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80025FF0;
    }
    // 0x80025EDC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80025EE0: addiu       $v0, $v1, 0x40
    ctx->r2 = ADD32(ctx->r3, 0X40);
    // 0x80025EE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80025EE8: sw          $v1, 0x34D0($at)
    MEM_W(0X34D0, ctx->r1) = ctx->r3;
    // 0x80025EEC: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80025EF0: sw          $zero, -0x6D1C($at)
    MEM_W(-0X6D1C, ctx->r1) = 0;
    // 0x80025EF4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80025EF8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80025EFC: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80025F00: sw          $v1, -0x6D0C($at)
    MEM_W(-0X6D0C, ctx->r1) = ctx->r3;
    // 0x80025F04: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80025F08: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80025F0C: sw          $a1, -0x6D10($at)
    MEM_W(-0X6D10, ctx->r1) = ctx->r5;
    // 0x80025F10: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80025F14: sw          $a0, -0x6D14($at)
    MEM_W(-0X6D14, ctx->r1) = ctx->r4;
    // 0x80025F18: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80025F1C: sh          $zero, -0x6D04($at)
    MEM_H(-0X6D04, ctx->r1) = 0;
    // 0x80025F20: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80025F24: j           L_80025FF0
    // 0x80025F28: sw          $v1, -0x6D18($at)
    MEM_W(-0X6D18, ctx->r1) = ctx->r3;
        goto L_80025FF0;
    // 0x80025F28: sw          $v1, -0x6D18($at)
    MEM_W(-0X6D18, ctx->r1) = ctx->r3;
L_80025F2C:
    // 0x80025F2C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80025F30: beq         $v0, $zero, L_80025F64
    if (ctx->r2 == 0) {
        // 0x80025F34: lui         $v0, 0x803B
        ctx->r2 = S32(0X803B << 16);
            goto L_80025F64;
    }
    // 0x80025F34: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
L_80025F38:
    // 0x80025F38: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80025F3C: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x80025F40: subu        $a2, $v1, $a3
    ctx->r6 = SUB32(ctx->r3, ctx->r7);
    // 0x80025F44: addu        $v0, $a0, $t0
    ctx->r2 = ADD32(ctx->r4, ctx->r8);
    // 0x80025F48: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80025F4C: beql        $v0, $zero, L_80025F88
    if (ctx->r2 == 0) {
        // 0x80025F50: addu        $a2, $a3, $t0
        ctx->r6 = ADD32(ctx->r7, ctx->r8);
            goto L_80025F88;
    }
    goto skip_1;
    // 0x80025F50: addu        $a2, $a3, $t0
    ctx->r6 = ADD32(ctx->r7, ctx->r8);
    skip_1:
    // 0x80025F54: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80025F58: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80025F5C: bne         $v0, $zero, L_80025F38
    if (ctx->r2 != 0) {
        // 0x80025F60: lui         $v0, 0x803B
        ctx->r2 = S32(0X803B << 16);
            goto L_80025F38;
    }
    // 0x80025F60: lui         $v0, 0x803B
    ctx->r2 = S32(0X803B << 16);
L_80025F64:
    // 0x80025F64: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x80025F68: ori         $v0, $v0, 0x5000
    ctx->r2 = ctx->r2 | 0X5000;
    // 0x80025F6C: subu        $a2, $v0, $a3
    ctx->r6 = SUB32(ctx->r2, ctx->r7);
    // 0x80025F70: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x80025F74: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80025F78: beq         $v0, $zero, L_80025FC4
    if (ctx->r2 == 0) {
        // 0x80025F7C: addu        $a2, $a3, $v1
        ctx->r6 = ADD32(ctx->r7, ctx->r3);
            goto L_80025FC4;
    }
    // 0x80025F7C: addu        $a2, $a3, $v1
    ctx->r6 = ADD32(ctx->r7, ctx->r3);
L_80025F80:
    // 0x80025F80: j           L_80025FF0
    // 0x80025F84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80025FF0;
    // 0x80025F84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80025F88:
    // 0x80025F88: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x80025F8C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80025F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80025F94: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x80025F98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80025F9C: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x80025FA0: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x80025FA4: sh          $zero, 0x1C($a2)
    MEM_H(0X1C, ctx->r6) = 0;
    // 0x80025FA8: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x80025FAC: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x80025FB0: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x80025FB4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80025FB8: addiu       $v0, $a2, 0x40
    ctx->r2 = ADD32(ctx->r6, 0X40);
    // 0x80025FBC: j           L_80025FF0
    // 0x80025FC0: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
        goto L_80025FF0;
    // 0x80025FC0: sw          $a2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r6;
L_80025FC4:
    // 0x80025FC4: addiu       $v0, $a2, 0x40
    ctx->r2 = ADD32(ctx->r6, 0X40);
    // 0x80025FC8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80025FCC: sw          $v1, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r3;
    // 0x80025FD0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80025FD4: sw          $a3, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r7;
    // 0x80025FD8: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80025FDC: sw          $a1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r5;
    // 0x80025FE0: sw          $a0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r4;
    // 0x80025FE4: sh          $zero, 0x1C($a2)
    MEM_H(0X1C, ctx->r6) = 0;
    // 0x80025FE8: sw          $v1, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r3;
    // 0x80025FEC: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
L_80025FF0:
    // 0x80025FF0: jr          $ra
    // 0x80025FF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80025FF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80028888_3C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028888: lbu         $t0, 0x13($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X13);
    // 0x8002888C: lbu         $t1, 0x17($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X17);
    // 0x80028890: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80028894: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80028898: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8002889C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800288A0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800288A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800288A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800288AC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800288B0: addiu       $v1, $v1, 0x47F0
    ctx->r3 = ADD32(ctx->r3, 0X47F0);
    // 0x800288B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800288B8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x800288BC: sh          $a1, 0x94($v0)
    MEM_H(0X94, ctx->r2) = ctx->r5;
    // 0x800288C0: sh          $a2, 0x96($v0)
    MEM_H(0X96, ctx->r2) = ctx->r6;
    // 0x800288C4: sb          $a3, 0x98($v0)
    MEM_B(0X98, ctx->r2) = ctx->r7;
    // 0x800288C8: sb          $v1, 0x9B($v0)
    MEM_B(0X9B, ctx->r2) = ctx->r3;
    // 0x800288CC: sb          $t0, 0x99($v0)
    MEM_B(0X99, ctx->r2) = ctx->r8;
    // 0x800288D0: jr          $ra
    // 0x800288D4: sb          $t1, 0x9A($v0)
    MEM_B(0X9A, ctx->r2) = ctx->r9;
    TRACE_RETURN()
    return;
    // 0x800288D4: sb          $t1, 0x9A($v0)
    MEM_B(0X9A, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_8005131C_2C71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005131C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80051320: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80051324: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80051328: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8005132C: sb          $v0, 0x38A($a0)
    MEM_B(0X38A, ctx->r4) = ctx->r2;
    // 0x80051330: sb          $v0, 0x389($a0)
    MEM_B(0X389, ctx->r4) = ctx->r2;
    // 0x80051334: sb          $v0, 0x388($a0)
    MEM_B(0X388, ctx->r4) = ctx->r2;
L_80051338:
    // 0x80051338: sb          $a2, 0x38E($v1)
    MEM_B(0X38E, ctx->r3) = ctx->r6;
    // 0x8005133C: sb          $a2, 0x38D($v1)
    MEM_B(0X38D, ctx->r3) = ctx->r6;
    // 0x80051340: sb          $a2, 0x38C($v1)
    MEM_B(0X38C, ctx->r3) = ctx->r6;
    // 0x80051344: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80051348: slti        $v0, $a1, 0xD
    ctx->r2 = SIGNED(ctx->r5) < 0XD ? 1 : 0;
    // 0x8005134C: bne         $v0, $zero, L_80051338
    if (ctx->r2 != 0) {
        // 0x80051350: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80051338;
    }
    // 0x80051350: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80051354: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80051358: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8005135C: jr          $ra
    // 0x80051360: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80051360: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8002C070_7470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C070: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8002C074: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x8002C078: lwc1        $f26, 0x60($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8002C07C: sdc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X40, ctx->r29);
    // 0x8002C080: lwc1        $f28, 0x64($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8002C084: sdc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X48, ctx->r29);
    // 0x8002C088: lwc1        $f30, 0x68($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8002C08C: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x8002C090: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x8002C094: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002C098: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002C09C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002C0A0: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8002C0A4: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x8002C0A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8002C0AC: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8002C0B0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8002C0B4: swc1        $f26, 0xB18($at)
    MEM_W(0XB18, ctx->r1) = ctx->f26.u32l;
    // 0x8002C0B8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8002C0BC: swc1        $f28, -0x26D8($at)
    MEM_W(-0X26D8, ctx->r1) = ctx->f28.u32l;
    // 0x8002C0C0: jal         0x8009CCA0
    // 0x8002C0C4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8009CCA0_780A0(rdram, ctx);
        goto after_0;
    // 0x8002C0C4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8002C0C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002C0CC: ldc1        $f2, 0x1D10($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X1D10);
    // 0x8002C0D0: cvt.d.s     $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); 
    ctx->f0.d = CVT_D_S(ctx->f24.fl);
    // 0x8002C0D4: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x8002C0D8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8002C0DC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8002C0E0: cvt.s.d     $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f24.fl = CVT_S_D(ctx->f0.d);
    // 0x8002C0E4: div.s       $f20, $f24, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = DIV_S(ctx->f24.fl, ctx->f20.fl);
    // 0x8002C0E8: jal         0x80099C10
    // 0x8002C0EC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8002C0EC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x8002C0F0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8002C0F4: jal         0x80099D90
    // 0x8002C0F8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8002C0F8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x8002C0FC: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8002C100: add.s       $f2, $f26, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f26.fl + ctx->f28.fl;
    // 0x8002C104: sub.s       $f4, $f26, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f26.fl - ctx->f28.fl;
    // 0x8002C108: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8002C10C: div.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8002C110: add.s       $f0, $f26, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = ctx->f26.fl + ctx->f26.fl;
    // 0x8002C114: mul.s       $f0, $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x8002C118: div.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8002C11C: div.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = DIV_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8002C120: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002C124: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002C128: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8002C12C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x8002C130: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x8002C134: swc1        $f4, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f4.u32l;
    // 0x8002C138: swc1        $f20, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f20.u32l;
    // 0x8002C13C: swc1        $f2, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f2.u32l;
    // 0x8002C140: swc1        $f0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f0.u32l;
    // 0x8002C144: swc1        $f22, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f22.u32l;
L_8002C148:
    // 0x8002C148: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8002C14C: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_8002C150:
    // 0x8002C150: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8002C154: mul.s       $f0, $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x8002C158: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8002C15C: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x8002C160: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8002C164: bne         $v0, $zero, L_8002C150
    if (ctx->r2 != 0) {
        // 0x8002C168: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8002C150;
    }
    // 0x8002C168: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8002C16C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8002C170: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x8002C174: bne         $v0, $zero, L_8002C148
    if (ctx->r2 != 0) {
        // 0x8002C178: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8002C148;
    }
    // 0x8002C178: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8002C17C: beq         $s1, $zero, L_8002C20C
    if (ctx->r17 == 0) {
        // 0x8002C180: nop
    
            goto L_8002C20C;
    }
    // 0x8002C180: nop

    // 0x8002C184: add.s       $f2, $f26, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f26.fl + ctx->f28.fl;
    // 0x8002C188: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002C18C: ldc1        $f0, 0x1D18($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X1D18);
    // 0x8002C190: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8002C194: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x8002C198: nop

    // 0x8002C19C: nop

    // 0x8002C1A0: bc1t        L_8002C208
    if (c1cs) {
        // 0x8002C1A4: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8002C208;
    }
    // 0x8002C1A4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8002C1A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002C1AC: ldc1        $f0, 0x1D20($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X1D20);
    // 0x8002C1B0: div.d       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x8002C1B4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002C1B8: ldc1        $f0, 0x1D28($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X1D28);
    // 0x8002C1BC: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x8002C1C0: nop

    // 0x8002C1C4: nop

    // 0x8002C1C8: bc1tl       L_8002C1E4
    if (c1cs) {
        // 0x8002C1CC: sub.d       $f0, $f2, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d - ctx->f0.d;
            goto L_8002C1E4;
    }
    goto skip_0;
    // 0x8002C1CC: sub.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d - ctx->f0.d;
    skip_0:
    // 0x8002C1D0: trunc.w.d   $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8002C1D4: mfc1        $v1, $f0
    ctx->r3 = (int32_t)ctx->f0.u32l;
    // 0x8002C1D8: nop

    // 0x8002C1DC: j           L_8002C1F8
    // 0x8002C1E0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_8002C1F8;
    // 0x8002C1E0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_8002C1E4:
    // 0x8002C1E4: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8002C1E8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x8002C1EC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8002C1F0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002C1F4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_8002C1F8:
    // 0x8002C1F8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8002C1FC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8002C200: bne         $v0, $zero, L_8002C20C
    if (ctx->r2 != 0) {
        // 0x8002C204: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002C20C;
    }
    // 0x8002C204: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002C208:
    // 0x8002C208: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8002C20C:
    // 0x8002C20C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8002C210: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002C214: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002C218: ldc1        $f30, 0x48($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X48);
    // 0x8002C21C: ldc1        $f28, 0x40($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X40);
    // 0x8002C220: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x8002C224: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8002C228: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8002C22C: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8002C230: jr          $ra
    // 0x8002C234: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8002C234: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800270F8_24F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800270F8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800270FC: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80027100: lui         $s5, 0x8000
    ctx->r21 = S32(0X8000 << 16);
    // 0x80027104: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x80027108: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8002710C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80027110: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80027114: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80027118: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
L_8002711C:
    // 0x8002711C: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80027120: addiu       $a0, $a0, 0x38E0
    ctx->r4 = ADD32(ctx->r4, 0X38E0);
    // 0x80027124: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80027128: jal         0x8009A5E0
    // 0x8002712C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8002712C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80027130: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80027134: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80027138: beq         $v0, $zero, L_8002715C
    if (ctx->r2 == 0) {
        // 0x8002713C: nop
    
            goto L_8002715C;
    }
    // 0x8002713C: nop

    // 0x80027140: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80027144: addiu       $a1, $a1, 0x3F70
    ctx->r5 = ADD32(ctx->r5, 0X3F70);
    // 0x80027148: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8002714C: jal         0x80026C80
    // 0x80027150: addiu       $a2, $a2, 0x39F8
    ctx->r6 = ADD32(ctx->r6, 0X39F8);
    func_80026C80_2080(rdram, ctx);
        goto after_1;
    // 0x80027150: addiu       $a2, $a2, 0x39F8
    ctx->r6 = ADD32(ctx->r6, 0X39F8);
    after_1:
    // 0x80027154: j           L_800271FC
    // 0x80027158: nop

        goto L_800271FC;
    // 0x80027158: nop

L_8002715C:
    // 0x8002715C: lw          $s2, 0x10($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X10);
    // 0x80027160: lw          $s1, 0xC($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XC);
    // 0x80027164: lw          $s3, 0x0($a0)
    ctx->r19 = MEM_W(ctx->r4, 0X0);
    // 0x80027168: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002716C: jal         0x80099440
    // 0x80027170: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    osInvalDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x80027170: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80027174: beq         $s1, $zero, L_800271FC
    if (ctx->r17 == 0) {
        // 0x80027178: nop
    
            goto L_800271FC;
    }
    // 0x80027178: nop

    // 0x8002717C: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x80027180: addiu       $s4, $s4, 0x39F8
    ctx->r20 = ADD32(ctx->r20, 0X39F8);
L_80027184:
    // 0x80027184: sltiu       $v0, $s1, 0x1001
    ctx->r2 = ctx->r17 < 0X1001 ? 1 : 0;
    // 0x80027188: bne         $v0, $zero, L_80027194
    if (ctx->r2 != 0) {
        // 0x8002718C: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_80027194;
    }
    // 0x8002718C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x80027190: addiu       $s0, $zero, 0x1000
    ctx->r16 = ADD32(0, 0X1000);
L_80027194:
    // 0x80027194: and         $v0, $s3, $s5
    ctx->r2 = ctx->r19 & ctx->r21;
    // 0x80027198: beq         $v0, $zero, L_800271B4
    if (ctx->r2 == 0) {
        // 0x8002719C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_800271B4;
    }
    // 0x8002719C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800271A0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800271A4: jal         0x8009A3B4
    // 0x800271A8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x800271A8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x800271AC: j           L_800271F0
    // 0x800271B0: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
        goto L_800271F0;
    // 0x800271B0: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
L_800271B4:
    // 0x800271B4: jal         0x80099440
    // 0x800271B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    osInvalDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x800271B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x800271BC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x800271C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800271C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800271C8: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x800271CC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x800271D0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800271D4: jal         0x80094F50
    // 0x800271D8: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    osPiStartDma_recomp(rdram, ctx);
        goto after_5;
    // 0x800271D8: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    after_5:
    // 0x800271DC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x800271E0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x800271E4: jal         0x8009A5E0
    // 0x800271E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x800271E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x800271EC: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
L_800271F0:
    // 0x800271F0: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x800271F4: bne         $s1, $zero, L_80027184
    if (ctx->r17 != 0) {
        // 0x800271F8: addu        $s2, $s2, $s0
        ctx->r18 = ADD32(ctx->r18, ctx->r16);
            goto L_80027184;
    }
    // 0x800271F8: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_800271FC:
    // 0x800271FC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80027200: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80027204: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80027208: beq         $v0, $zero, L_8002711C
    if (ctx->r2 == 0) {
        // 0x8002720C: nop
    
            goto L_8002711C;
    }
    // 0x8002720C: nop

    // 0x80027210: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80027214: lw          $v0, 0x6DC0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6DC0);
    // 0x80027218: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002721C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80027220: j           L_8002711C
    // 0x80027224: sw          $v0, 0x6DC0($at)
    MEM_W(0X6DC0, ctx->r1) = ctx->r2;
        goto L_8002711C;
    // 0x80027224: sw          $v0, 0x6DC0($at)
    MEM_W(0X6DC0, ctx->r1) = ctx->r2;
    // 0x80027228: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x8002722C: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80027230: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80027234: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80027238: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8002723C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80027240: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80027244: jr          $ra
    // 0x80027248: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80027248: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80036F9C_1239C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036F9C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80036FA0: lh          $v1, -0xC66($v1)
    ctx->r3 = MEM_H(ctx->r3, -0XC66);
    // 0x80036FA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80036FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80036FAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80036FB0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80036FB4: addiu       $s0, $s0, -0xC70
    ctx->r16 = ADD32(ctx->r16, -0XC70);
    // 0x80036FB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80036FBC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80036FC0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80036FC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036FC8: sb          $zero, -0xC6C($at)
    MEM_B(-0XC6C, ctx->r1) = 0;
    // 0x80036FCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036FD0: sh          $v0, -0xC68($at)
    MEM_H(-0XC68, ctx->r1) = ctx->r2;
    // 0x80036FD4: blez        $v1, L_80037010
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80036FD8: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80037010;
    }
    // 0x80036FD8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80036FDC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80036FE0: lh          $v0, -0xC64($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC64);
    // 0x80036FE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036FE8: sh          $v1, -0xC62($at)
    MEM_H(-0XC62, ctx->r1) = ctx->r3;
    // 0x80036FEC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80036FF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036FF4: sb          $zero, -0xC6F($at)
    MEM_B(-0XC6F, ctx->r1) = 0;
    // 0x80036FF8: beq         $v0, $v1, L_80037028
    if (ctx->r2 == ctx->r3) {
        // 0x80036FFC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80037028;
    }
    // 0x80036FFC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80037000: jal         0x80029114
    // 0x80037004: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_0;
    // 0x80037004: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80037008: j           L_80037028
    // 0x8003700C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80037028;
    // 0x8003700C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80037010:
    // 0x80037010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80037014: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037018: sb          $v0, -0xC6F($at)
    MEM_B(-0XC6F, ctx->r1) = ctx->r2;
    // 0x8003701C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037020: sh          $zero, -0xC62($at)
    MEM_H(-0XC62, ctx->r1) = 0;
    // 0x80037024: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80037028:
    // 0x80037028: lb          $a1, 0x0($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X0);
    // 0x8003702C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80037030: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80037034: sltu        $a1, $zero, $a1
    ctx->r5 = 0 < ctx->r5 ? 1 : 0;
    // 0x80037038: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x8003703C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80037040: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80037044: jal         0x80028794
    // 0x80037048: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_80028794_3B94(rdram, ctx);
        goto after_1;
    // 0x80037048: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_1:
    // 0x8003704C: lb          $a2, 0xF($s0)
    ctx->r6 = MEM_B(ctx->r16, 0XF);
    // 0x80037050: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80037054: jal         0x800287CC
    // 0x80037058: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_800287CC_3BCC(rdram, ctx);
        goto after_2;
    // 0x80037058: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
L_8003705C:
    // 0x8003705C: lb          $a2, 0xF($s0)
    ctx->r6 = MEM_B(ctx->r16, 0XF);
    // 0x80037060: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80037064: jal         0x800287CC
    // 0x80037068: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_800287CC_3BCC(rdram, ctx);
        goto after_3;
    // 0x80037068: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x8003706C: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x80037070: beq         $v1, $s2, L_800370D0
    if (ctx->r3 == ctx->r18) {
        // 0x80037074: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_800370D0;
    }
    // 0x80037074: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80037078: beq         $v0, $zero, L_80037090
    if (ctx->r2 == 0) {
        // 0x8003707C: nop
    
            goto L_80037090;
    }
    // 0x8003707C: nop

    // 0x80037080: beq         $v1, $zero, L_800370A0
    if (ctx->r3 == 0) {
        // 0x80037084: nop
    
            goto L_800370A0;
    }
    // 0x80037084: nop

    // 0x80037088: j           L_80037134
    // 0x8003708C: nop

        goto L_80037134;
    // 0x8003708C: nop

L_80037090:
    // 0x80037090: beq         $v1, $s1, L_8003710C
    if (ctx->r3 == ctx->r17) {
        // 0x80037094: nop
    
            goto L_8003710C;
    }
    // 0x80037094: nop

    // 0x80037098: j           L_80037134
    // 0x8003709C: nop

        goto L_80037134;
    // 0x8003709C: nop

L_800370A0:
    // 0x800370A0: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x800370A4: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x800370A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800370AC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x800370B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800370B4: bgtz        $v0, L_80037134
    if (SIGNED(ctx->r2) > 0) {
        // 0x800370B8: nop
    
            goto L_80037134;
    }
    // 0x800370B8: nop

    // 0x800370BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800370C0: lbu         $v0, -0xC5C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XC5C);
    // 0x800370C4: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x800370C8: j           L_80037130
    // 0x800370CC: sb          $s1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r17;
        goto L_80037130;
    // 0x800370CC: sb          $s1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r17;
L_800370D0:
    // 0x800370D0: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x800370D4: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x800370D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800370DC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x800370E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800370E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800370E8: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x800370EC: bne         $v0, $zero, L_80037134
    if (ctx->r2 != 0) {
        // 0x800370F0: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80037134;
    }
    // 0x800370F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x800370F4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800370F8: lbu         $v1, -0xC5C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0XC5C);
    // 0x800370FC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80037100: sb          $s1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r17;
    // 0x80037104: j           L_80037134
    // 0x80037108: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
        goto L_80037134;
    // 0x80037108: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
L_8003710C:
    // 0x8003710C: lh          $v0, 0xC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC);
    // 0x80037110: bne         $v0, $zero, L_8003712C
    if (ctx->r2 != 0) {
        // 0x80037114: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8003712C;
    }
    // 0x80037114: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80037118: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x8003711C: beql        $v0, $s2, L_80037124
    if (ctx->r2 == ctx->r18) {
        // 0x80037120: sh          $zero, 0x8($s0)
        MEM_H(0X8, ctx->r16) = 0;
            goto L_80037124;
    }
    goto skip_0;
    // 0x80037120: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    skip_0:
L_80037124:
    // 0x80037124: j           L_80037144
    // 0x80037128: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80037144;
    // 0x80037128: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8003712C:
    // 0x8003712C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_80037130:
    // 0x80037130: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
L_80037134:
    // 0x80037134: jal         0x80029114
    // 0x80037138: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_4;
    // 0x80037138: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8003713C: j           L_8003705C
    // 0x80037140: nop

        goto L_8003705C;
    // 0x80037140: nop

L_80037144:
    // 0x80037144: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80037148: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003714C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80037150: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80037154: jr          $ra
    // 0x80037158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80037158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80034A54_FE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034A54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80034A58: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034A5C: sw          $zero, -0x721C($at)
    MEM_W(-0X721C, ctx->r1) = 0;
    // 0x80034A60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034A64: sw          $zero, -0x7218($at)
    MEM_W(-0X7218, ctx->r1) = 0;
    // 0x80034A68: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80034A6C: sw          $a0, 0x2898($at)
    MEM_W(0X2898, ctx->r1) = ctx->r4;
    // 0x80034A70: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034A74: jr          $ra
    // 0x80034A78: sw          $v0, -0x7218($at)
    MEM_W(-0X7218, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80034A78: sw          $v0, -0x7218($at)
    MEM_W(-0X7218, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void _decodeChunk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096BDC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80096BE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80096BE4: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80096BE8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80096BEC: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x80096BF0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80096BF4: lhu         $s5, 0x4A($sp)
    ctx->r21 = MEM_HU(ctx->r29, 0X4A);
    // 0x80096BF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80096BFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80096C00: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80096C04: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80096C08: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80096C0C: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80096C10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80096C14: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x80096C18: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80096C1C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80096C20: blez        $s1, L_80096C8C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80096C24: addu        $s4, $s3, $zero
        ctx->r20 = ADD32(ctx->r19, 0);
            goto L_80096C8C;
    }
    // 0x80096C24: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    // 0x80096C28: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x80096C2C: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x80096C30: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    // 0x80096C34: jalr        $v0
    // 0x80096C38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80096C38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80096C3C: andi        $a3, $v0, 0x7
    ctx->r7 = ctx->r2 & 0X7;
    // 0x80096C40: addu        $s1, $s1, $a3
    ctx->r17 = ADD32(ctx->r17, ctx->r7);
    // 0x80096C44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80096C48: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80096C4C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80096C50: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80096C54: andi        $v1, $s3, 0xFFFF
    ctx->r3 = ctx->r19 & 0XFFFF;
    // 0x80096C58: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x80096C5C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80096C60: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80096C64: andi        $v1, $s1, 0x7
    ctx->r3 = ctx->r17 & 0X7;
    // 0x80096C68: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x80096C6C: subu        $v1, $s1, $v1
    ctx->r3 = SUB32(ctx->r17, ctx->r3);
    // 0x80096C70: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80096C74: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x80096C78: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x80096C7C: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x80096C80: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x80096C84: j           L_80096C90
    // 0x80096C88: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_80096C90;
    // 0x80096C88: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_80096C8C:
    // 0x80096C8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80096C90:
    // 0x80096C90: andi        $v0, $s7, 0x2
    ctx->r2 = ctx->r23 & 0X2;
    // 0x80096C94: beq         $v0, $zero, L_80096CBC
    if (ctx->r2 == 0) {
        // 0x80096C98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80096CBC;
    }
    // 0x80096C98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80096C9C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80096CA0: lui         $v0, 0xF00
    ctx->r2 = S32(0XF00 << 16);
    // 0x80096CA4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80096CA8: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x80096CAC: lui         $v1, 0x1FFF
    ctx->r3 = S32(0X1FFF << 16);
    // 0x80096CB0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80096CB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80096CB8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_80096CBC:
    // 0x80096CBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80096CC0: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80096CC4: lui         $a1, 0x1FFF
    ctx->r5 = S32(0X1FFF << 16);
    // 0x80096CC8: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x80096CCC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80096CD0: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80096CD4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80096CD8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80096CDC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80096CE0: sll         $v1, $s5, 16
    ctx->r3 = S32(ctx->r21 << 16);
    // 0x80096CE4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80096CE8: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x80096CEC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80096CF0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80096CF4: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x80096CF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80096CFC: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x80096D00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80096D04: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x80096D08: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80096D0C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80096D10: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x80096D14: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x80096D18: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x80096D1C: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x80096D20: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x80096D24: sw          $zero, 0x40($s2)
    MEM_W(0X40, ctx->r18) = 0;
    // 0x80096D28: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80096D2C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80096D30: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80096D34: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80096D38: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80096D3C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80096D40: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80096D44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80096D48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80096D4C: jr          $ra
    // 0x80096D50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80096D50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80048C10_24010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048C14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80048C18: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80048C1C: addiu       $s0, $s0, -0x39A0
    ctx->r16 = ADD32(ctx->r16, -0X39A0);
    // 0x80048C20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80048C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048C28: jal         0x8003BDA4
    // 0x80048C2C: addiu       $a1, $s0, 0xD4
    ctx->r5 = ADD32(ctx->r16, 0XD4);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_0;
    // 0x80048C2C: addiu       $a1, $s0, 0xD4
    ctx->r5 = ADD32(ctx->r16, 0XD4);
    after_0:
    // 0x80048C30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80048C34: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80048C38: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048C3C: sb          $v0, -0x397C($at)
    MEM_B(-0X397C, ctx->r1) = ctx->r2;
    // 0x80048C40: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80048C44: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048C48: sw          $zero, -0x38B0($at)
    MEM_W(-0X38B0, ctx->r1) = 0;
    // 0x80048C4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048C50: sw          $v0, -0x2F30($at)
    MEM_W(-0X2F30, ctx->r1) = ctx->r2;
    // 0x80048C54: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80048C58: sb          $zero, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = 0;
    // 0x80048C5C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048C60: sw          $zero, -0x2F34($at)
    MEM_W(-0X2F34, ctx->r1) = 0;
    // 0x80048C64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80048C68: sw          $zero, -0x2F20($at)
    MEM_W(-0X2F20, ctx->r1) = 0;
    // 0x80048C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048C70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80048C74: jr          $ra
    // 0x80048C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80048C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80091520_6C920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80091524: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80091528: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009152C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80091530: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80091534: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80091538: beq         $v0, $zero, L_800915A0
    if (ctx->r2 == 0) {
        // 0x8009153C: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_800915A0;
    }
    // 0x8009153C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80091540: jal         0x80091C78
    // 0x80091544: nop

    func_80091C78_6D078(rdram, ctx);
        goto after_0;
    // 0x80091544: nop

    after_0:
    // 0x80091548: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8009154C: beq         $a2, $zero, L_800915A0
    if (ctx->r6 == 0) {
        // 0x80091550: nop
    
            goto L_800915A0;
    }
    // 0x80091550: nop

    // 0x80091554: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091558: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8009155C: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80091560: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80091564: lw          $a0, 0x88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X88);
    // 0x80091568: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8009156C: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x80091570: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80091574: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80091578: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8009157C: bne         $v0, $zero, L_80091588
    if (ctx->r2 != 0) {
        // 0x80091580: sw          $v1, 0x4($a2)
        MEM_W(0X4, ctx->r6) = ctx->r3;
            goto L_80091588;
    }
    // 0x80091580: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x80091584: addiu       $s0, $zero, 0x7F
    ctx->r16 = ADD32(0, 0X7F);
L_80091588:
    // 0x80091588: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8009158C: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    // 0x80091590: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80091594: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x80091598: jal         0x8008FB18
    // 0x8009159C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008FB18_6AF18(rdram, ctx);
        goto after_1;
    // 0x8009159C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_800915A0:
    // 0x800915A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800915A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800915A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800915AC: jr          $ra
    // 0x800915B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800915B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800915B4: nop

    // 0x800915B8: nop

    // 0x800915BC: nop

;}
RECOMP_FUNC void strchr_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009A350: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8009A354: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8009A358: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x8009A35C: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8009A360: beq         $v0, $a1, L_8009A384
    if (ctx->r2 == ctx->r5) {
        // 0x8009A364: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8009A384;
    }
    // 0x8009A364: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
L_8009A368:
    // 0x8009A368: bne         $v1, $zero, L_8009A378
    if (ctx->r3 != 0) {
        // 0x8009A36C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8009A378;
    }
    // 0x8009A36C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8009A370: j           L_8009A388
    // 0x8009A374: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8009A388;
    // 0x8009A374: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8009A378:
    // 0x8009A378: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8009A37C: bne         $v0, $a1, L_8009A368
    if (ctx->r2 != ctx->r5) {
        // 0x8009A380: lbu         $v1, 0x0($a0)
        ctx->r3 = MEM_BU(ctx->r4, 0X0);
            goto L_8009A368;
    }
    // 0x8009A380: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
L_8009A384:
    // 0x8009A384: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_8009A388:
    // 0x8009A388: jr          $ra
    // 0x8009A38C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8009A38C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8004F094_2A494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F094: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004F098: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8004F09C: lw          $a1, -0x3FB0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3FB0);
    // 0x8004F0A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004F0A4: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F0A8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004F0AC: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x8004F0B0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004F0B4: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x8004F0B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004F0BC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8004F0C0: addiu       $s1, $s1, 0x59A0
    ctx->r17 = ADD32(ctx->r17, 0X59A0);
    // 0x8004F0C4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004F0C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8004F0CC:
    // 0x8004F0CC: sllv        $v0, $a1, $a0
    ctx->r2 = S32(ctx->r5 << (ctx->r4 & 31));
    // 0x8004F0D0: bltzl       $v0, L_8004F118
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004F0D4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8004F118;
    }
    goto skip_0;
    // 0x8004F0D4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x8004F0D8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004F0DC: lw          $v0, -0x3FB0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3FB0);
    // 0x8004F0E0: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x8004F0E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004F0E8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F0EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004F0F0: sw          $v0, -0x3FB0($at)
    MEM_W(-0X3FB0, ctx->r1) = ctx->r2;
    // 0x8004F0F4: lbu         $s0, 0x1($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X1);
    // 0x8004F0F8: jal         0x8009A2B0
    // 0x8004F0FC: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8004F0FC: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    after_0:
    // 0x8004F100: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8004F104: sb          $s3, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r19;
    // 0x8004F108: sb          $s2, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r18;
    // 0x8004F10C: sb          $s2, 0xBC($v0)
    MEM_B(0XBC, ctx->r2) = ctx->r18;
    // 0x8004F110: j           L_8004F128
    // 0x8004F114: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
        goto L_8004F128;
    // 0x8004F114: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
L_8004F118:
    // 0x8004F118: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8004F11C: bne         $v0, $zero, L_8004F0CC
    if (ctx->r2 != 0) {
        // 0x8004F120: addiu       $s1, $s1, 0x118
        ctx->r17 = ADD32(ctx->r17, 0X118);
            goto L_8004F0CC;
    }
    // 0x8004F120: addiu       $s1, $s1, 0x118
    ctx->r17 = ADD32(ctx->r17, 0X118);
    // 0x8004F124: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004F128:
    // 0x8004F128: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004F12C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004F130: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004F134: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004F138: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004F13C: jr          $ra
    // 0x8004F140: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004F140: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80092E90_6E290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092E94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80092E98: jal         0x8009C880
    // 0x80092E9C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    osViSwapBuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x80092E9C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    after_0:
    // 0x80092EA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80092EA4: jr          $ra
    // 0x80092EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80092EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092EAC: nop

;}
RECOMP_FUNC void func_800306F0_BAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800306F0: addu        $t5, $a1, $zero
    ctx->r13 = ADD32(ctx->r5, 0);
    // 0x800306F4: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
    // 0x800306F8: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
    // 0x800306FC: addu        $t3, $a2, $zero
    ctx->r11 = ADD32(ctx->r6, 0);
L_80030700:
    // 0x80030700: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80030704: addu        $t0, $t3, $zero
    ctx->r8 = ADD32(ctx->r11, 0);
    // 0x80030708: addu        $a3, $t5, $zero
    ctx->r7 = ADD32(ctx->r13, 0);
L_8003070C:
    // 0x8003070C: lh          $v1, 0x0($t2)
    ctx->r3 = MEM_H(ctx->r10, 0X0);
    // 0x80030710: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x80030714: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030718: mflo        $v1
    ctx->r3 = lo;
    // 0x8003071C: lh          $a1, 0x2($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X2);
    // 0x80030720: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x80030724: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030728: mflo        $a1
    ctx->r5 = lo;
    // 0x8003072C: lh          $a0, 0x4($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X4);
    // 0x80030730: lh          $v0, 0xC($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XC);
    // 0x80030734: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030738: mflo        $a0
    ctx->r4 = lo;
    // 0x8003073C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80030740: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80030744: slti        $v0, $t1, 0x3
    ctx->r2 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80030748: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8003074C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80030750: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80030754: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80030758: bne         $v0, $zero, L_8003070C
    if (ctx->r2 != 0) {
        // 0x8003075C: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_8003070C;
    }
    // 0x8003075C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80030760: addiu       $t2, $t2, 0x6
    ctx->r10 = ADD32(ctx->r10, 0X6);
    // 0x80030764: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80030768: slti        $v0, $t4, 0x3
    ctx->r2 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x8003076C: bne         $v0, $zero, L_80030700
    if (ctx->r2 != 0) {
        // 0x80030770: addiu       $t3, $t3, 0x6
        ctx->r11 = ADD32(ctx->r11, 0X6);
            goto L_80030700;
    }
    // 0x80030770: addiu       $t3, $t3, 0x6
    ctx->r11 = ADD32(ctx->r11, 0X6);
    // 0x80030774: jr          $ra
    // 0x80030778: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    TRACE_RETURN()
    return;
    // 0x80030778: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
;}
RECOMP_FUNC void func_80090B80_6BF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80090B80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80090B84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80090B88: addiu       $v1, $a1, -0x2
    ctx->r3 = ADD32(ctx->r5, -0X2);
    // 0x80090B8C: bgez        $v1, L_80090B98
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80090B90: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80090B98;
    }
    // 0x80090B90: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80090B94: addiu       $v0, $a1, 0x5
    ctx->r2 = ADD32(ctx->r5, 0X5);
L_80090B98:
    // 0x80090B98: sra         $a3, $v0, 3
    ctx->r7 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80090B9C: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80090BA0: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x80090BA4: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
    // 0x80090BA8: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x80090BAC: sltiu       $v0, $a3, 0x8
    ctx->r2 = ctx->r7 < 0X8 ? 1 : 0;
    // 0x80090BB0: beq         $v0, $zero, L_80090D60
    if (ctx->r2 == 0) {
        // 0x80090BB4: nop
    
            goto L_80090D60;
    }
    // 0x80090BB4: nop

    // 0x80090BB8: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x80090BBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80090BC0: addu        $at, $at, $v0
    gpr jr_addend_80090BC8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80090BC4: lw          $v0, 0x2EB0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2EB0);
    // 0x80090BC8: jr          $v0
    // 0x80090BCC: nop

    switch (jr_addend_80090BC8 >> 2) {
        case 0: goto L_80090BD0; break;
        case 1: goto L_80090BF4; break;
        case 2: goto L_80090C34; break;
        case 3: goto L_80090C18; break;
        case 4: goto L_80090C50; break;
        case 5: goto L_80090C6C; break;
        case 6: goto L_80090CC0; break;
        case 7: goto L_80090D2C; break;
        default: switch_error(__func__, 0x80090BC8, 0x800D2EB0);
    }
    // 0x80090BCC: nop

L_80090BD0:
    // 0x80090BD0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80090BD4: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x80090BD8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80090BDC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80090BE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80090BE4: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x80090BE8: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x80090BEC: j           L_80090D60
    // 0x80090BF0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_80090D60;
    // 0x80090BF0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80090BF4:
    // 0x80090BF4: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80090BF8: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x80090BFC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80090C00: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80090C04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80090C08: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x80090C0C: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x80090C10: j           L_80090D60
    // 0x80090C14: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_80090D60;
    // 0x80090C14: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80090C18:
    // 0x80090C18: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80090C1C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80090C20: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80090C24: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80090C28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80090C2C: j           L_80090D60
    // 0x80090C30: sh          $a2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r6;
        goto L_80090D60;
    // 0x80090C30: sh          $a2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r6;
L_80090C34:
    // 0x80090C34: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80090C38: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80090C3C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80090C40: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80090C44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80090C48: j           L_80090D60
    // 0x80090C4C: sh          $a2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r6;
        goto L_80090D60;
    // 0x80090C4C: sh          $a2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r6;
L_80090C50:
    // 0x80090C50: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80090C54: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80090C58: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80090C5C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80090C60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80090C64: j           L_80090D60
    // 0x80090C68: sh          $a2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r6;
        goto L_80090D60;
    // 0x80090C68: sh          $a2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r6;
L_80090C6C:
    // 0x80090C6C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80090C70: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80090C74: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x80090C78: nop

    // 0x80090C7C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80090C80: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80090C84: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80090C88: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80090C8C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80090C90: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    // 0x80090C94: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80090C98: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80090C9C: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80090CA0: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80090CA4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80090CA8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80090CAC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80090CB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80090CB4: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80090CB8: j           L_80090D60
    // 0x80090CBC: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_80090D60;
    // 0x80090CBC: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_80090CC0:
    // 0x80090CC0: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80090CC4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80090CC8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80090CCC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80090CD0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80090CD4: ldc1        $f2, 0x2ED0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2ED0);
    // 0x80090CD8: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x80090CDC: nop

    // 0x80090CE0: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80090CE4: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x80090CE8: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80090CEC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80090CF0: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80090CF4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80090CF8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80090CFC: nop

    // 0x80090D00: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x80090D04: bgez        $v1, L_80090D18
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80090D08: div.d       $f2, $f0, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
            goto L_80090D18;
    }
    // 0x80090D08: div.d       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80090D0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80090D10: ldc1        $f0, 0x2ED8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2ED8);
    // 0x80090D14: add.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f4.d + ctx->f0.d;
L_80090D18:
    // 0x80090D18: nop

    // 0x80090D1C: mul.d       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x80090D20: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80090D24: j           L_80090D60
    // 0x80090D28: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
        goto L_80090D60;
    // 0x80090D28: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
L_80090D2C:
    // 0x80090D2C: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80090D30: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80090D34: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80090D38: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x80090D3C: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x80090D40: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x80090D44: beq         $v0, $zero, L_80090D60
    if (ctx->r2 == 0) {
        // 0x80090D48: nop
    
            goto L_80090D60;
    }
    // 0x80090D48: nop

    // 0x80090D4C: sh          $a2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r6;
    // 0x80090D50: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80090D54: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80090D58: jal         0x80095A20
    // 0x80090D5C: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    _init_lpfilter(rdram, ctx);
        goto after_0;
    // 0x80090D5C: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    after_0:
L_80090D60:
    // 0x80090D60: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80090D64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80090D68: jr          $ra
    // 0x80090D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80090D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B828_16C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B828: jr          $ra
    // 0x8003B82C: nop

    TRACE_RETURN()
    return;
    // 0x8003B82C: nop

;}
RECOMP_FUNC void func_80079160_54560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80079160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079164: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80079168: jal         0x8004DA68
    // 0x8007916C: lbu         $a0, 0x1($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8007916C: lbu         $a0, 0x1($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1);
    after_0:
    // 0x80079170: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80079174: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80079178: jr          $ra
    // 0x8007917C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007917C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800A3674_7EA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A3674: multu       $a1, $a2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3678: mflo        $t0
    ctx->r8 = lo;
    // 0x800A367C: nop

    // 0x800A3680: nop

    // 0x800A3684: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3688: mflo        $v1
    ctx->r3 = lo;
    // 0x800A368C: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x800A3690: nop

    // 0x800A3694: multu       $a0, $a2
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3698: mflo        $v1
    ctx->r3 = lo;
    // 0x800A369C: mfhi        $v0
    ctx->r2 = hi;
    // 0x800A36A0: jr          $ra
    // 0x800A36A4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    TRACE_RETURN()
    return;
    // 0x800A36A4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
;}
RECOMP_FUNC void func_8008699C_61D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008699C: bltzl       $a1, L_800869A4
    if (SIGNED(ctx->r5) < 0) {
        // 0x800869A0: addiu       $a1, $a1, 0x3
        ctx->r5 = ADD32(ctx->r5, 0X3);
            goto L_800869A4;
    }
    goto skip_0;
    // 0x800869A0: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    skip_0:
L_800869A4:
    // 0x800869A4: bgez        $a0, L_800869B0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800869A8: sra         $v0, $a1, 2
        ctx->r2 = S32(SIGNED(ctx->r5) >> 2);
            goto L_800869B0;
    }
    // 0x800869A8: sra         $v0, $a1, 2
    ctx->r2 = S32(SIGNED(ctx->r5) >> 2);
    // 0x800869AC: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
L_800869B0:
    // 0x800869B0: sra         $v1, $a0, 2
    ctx->r3 = S32(SIGNED(ctx->r4) >> 2);
    // 0x800869B4: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x800869B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800869BC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800869C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800869C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800869C8: jr          $ra
    // 0x800869CC: lhu         $v0, -0x3C20($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X3C20);
    TRACE_RETURN()
    return;
    // 0x800869CC: lhu         $v0, -0x3C20($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X3C20);
;}
RECOMP_FUNC void func_80093090_6E490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093090: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80093094: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80093098: jr          $ra
    // 0x8009309C: sw          $v0, -0x3E88($at)
    MEM_W(-0X3E88, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8009309C: sw          $v0, -0x3E88($at)
    MEM_W(-0X3E88, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80089CD0_650D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80089CD0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80089CD4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80089CD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80089CDC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80089CE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80089CE4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80089CE8: jal         0x8009A3B4
    // 0x80089CEC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80089CEC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    after_0:
    // 0x80089CF0: lbu         $v0, 0x34($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X34);
    // 0x80089CF4: lbu         $v1, 0x1C($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1C);
    // 0x80089CF8: lbu         $a0, 0x1D($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1D);
    // 0x80089CFC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80089D00: lbu         $v1, 0x35($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X35);
    // 0x80089D04: bltzl       $v0, L_80089D0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80089D08: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80089D0C;
    }
    goto skip_0;
    // 0x80089D08: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_80089D0C:
    // 0x80089D0C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80089D10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80089D14: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80089D18: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80089D1C: bgez        $v1, L_80089D28
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80089D20: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80089D28;
    }
    // 0x80089D20: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80089D24: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
L_80089D28:
    // 0x80089D28: lh          $v1, 0x20($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X20);
    // 0x80089D2C: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x80089D30: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x80089D34: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80089D38: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80089D3C: beq         $a3, $v1, L_80089D48
    if (ctx->r7 == ctx->r3) {
        // 0x80089D40: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80089D48;
    }
    // 0x80089D40: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80089D44: subu        $t0, $a1, $v0
    ctx->r8 = SUB32(ctx->r5, ctx->r2);
L_80089D48:
    // 0x80089D48: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80089D4C: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x80089D50: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80089D54: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80089D58: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80089D5C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80089D60: beq         $a2, $v1, L_80089D6C
    if (ctx->r6 == ctx->r3) {
        // 0x80089D64: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80089D6C;
    }
    // 0x80089D64: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80089D68: subu        $t1, $a1, $v0
    ctx->r9 = SUB32(ctx->r5, ctx->r2);
L_80089D6C:
    // 0x80089D6C: sltiu       $v0, $a3, 0x1
    ctx->r2 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x80089D70: sltiu       $v1, $a2, 0x1
    ctx->r3 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x80089D74: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80089D78: bne         $v0, $zero, L_80089E84
    if (ctx->r2 != 0) {
        // 0x80089D7C: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_80089E84;
    }
    // 0x80089D7C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x80089D80: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80089D84: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80089D88: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x80089D8C: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80089D90: sltiu       $v0, $a2, 0x1
    ctx->r2 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x80089D94: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80089D98: bne         $v1, $zero, L_80089E84
    if (ctx->r3 != 0) {
        // 0x80089D9C: addiu       $a0, $zero, 0xE
        ctx->r4 = ADD32(0, 0XE);
            goto L_80089E84;
    }
    // 0x80089D9C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80089DA0: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80089DA4: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x80089DA8: beq         $v0, $a0, L_80089DE0
    if (ctx->r2 == ctx->r4) {
        // 0x80089DAC: nop
    
            goto L_80089DE0;
    }
    // 0x80089DAC: nop

    // 0x80089DB0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80089DB4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80089DB8: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80089DBC: sw          $a0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r4;
    // 0x80089DC0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80089DC4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089DC8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089DCC: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x80089DD0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80089DD4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80089DD8: addiu       $v0, $v0, -0x1510
    ctx->r2 = ADD32(ctx->r2, -0X1510);
    // 0x80089DDC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80089DE0:
    // 0x80089DE0: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80089DE4: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80089DE8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80089DEC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80089DF0: nor         $a1, $zero, $v1
    ctx->r5 = ~(0 | ctx->r3);
    // 0x80089DF4: sra         $a1, $a1, 31
    ctx->r5 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80089DF8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80089DFC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80089E00: nor         $a0, $zero, $v0
    ctx->r4 = ~(0 | ctx->r2);
    // 0x80089E04: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80089E08: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80089E0C: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x80089E10: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x80089E14: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x80089E18: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x80089E1C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80089E20: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80089E24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80089E28: lui         $a0, 0xF600
    ctx->r4 = S32(0XF600 << 16);
    // 0x80089E2C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80089E30: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80089E34: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x80089E38: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80089E3C: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x80089E40: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089E44: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089E48: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80089E4C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80089E50: nor         $a0, $zero, $v1
    ctx->r4 = ~(0 | ctx->r3);
    // 0x80089E54: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80089E58: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80089E5C: nor         $a1, $zero, $v0
    ctx->r5 = ~(0 | ctx->r2);
    // 0x80089E60: sra         $a1, $a1, 31
    ctx->r5 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80089E64: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80089E68: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x80089E6C: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x80089E70: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x80089E74: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80089E78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80089E7C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80089E80: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
L_80089E84:
    // 0x80089E84: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80089E88: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x80089E8C: jr          $ra
    // 0x80089E90: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80089E90: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80089E94: nop

    // 0x80089E98: nop

    // 0x80089E9C: nop

;}
RECOMP_FUNC void func_800719B4_4CDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800719B4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800719B8: lhu         $v0, 0x355C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X355C);
    // 0x800719BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800719C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800719C4: beq         $v0, $zero, L_800719F4
    if (ctx->r2 == 0) {
        // 0x800719C8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_800719F4;
    }
    // 0x800719C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800719CC: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x800719D0: addiu       $s0, $s0, -0x4822
    ctx->r16 = ADD32(ctx->r16, -0X4822);
    // 0x800719D4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_800719D8:
    // 0x800719D8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800719DC: jal         0x8007171C
    // 0x800719E0: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    func_8007171C_4CB1C(rdram, ctx);
        goto after_0;
    // 0x800719E0: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    after_0:
    // 0x800719E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800719E8: lhu         $v0, 0x355C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X355C);
    // 0x800719EC: bne         $v0, $zero, L_800719D8
    if (ctx->r2 != 0) {
        // 0x800719F0: sll         $v0, $v0, 1
        ctx->r2 = S32(ctx->r2 << 1);
            goto L_800719D8;
    }
    // 0x800719F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_800719F4:
    // 0x800719F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800719F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800719FC: jr          $ra
    // 0x80071A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80071A00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80071A04: nop

    // 0x80071A08: nop

    // 0x80071A0C: nop

;}
RECOMP_FUNC void func_80030574_B974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030574: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x80030578: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    // 0x8003057C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80030580: jr          $ra
    // 0x80030584: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030584: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void alSynDelete(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80099390: jr          $ra
    // 0x80099394: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80099394: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8008CA18_67E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008CA18: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8008CA1C: lbu         $a3, 0xC9($a2)
    ctx->r7 = MEM_BU(ctx->r6, 0XC9);
    // 0x8008CA20: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8008CA24: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
L_8008CA28:
    // 0x8008CA28: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8008CA2C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8008CA30: sltiu       $v0, $v1, 0x13C
    ctx->r2 = ctx->r3 < 0X13C ? 1 : 0;
    // 0x8008CA34: bne         $v0, $zero, L_8008CA28
    if (ctx->r2 != 0) {
        // 0x8008CA38: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8008CA28;
    }
    // 0x8008CA38: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8008CA3C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8008CA40: sb          $a1, 0xCC($a2)
    MEM_B(0XCC, ctx->r6) = ctx->r5;
    // 0x8008CA44: sb          $a1, 0xBE($a2)
    MEM_B(0XBE, ctx->r6) = ctx->r5;
    // 0x8008CA48: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008CA4C: lw          $v0, 0x4F94($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F94);
    // 0x8008CA50: addiu       $a0, $zero, 0x6000
    ctx->r4 = ADD32(0, 0X6000);
    // 0x8008CA54: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8008CA58: bne         $v0, $zero, L_8008CA64
    if (ctx->r2 != 0) {
        // 0x8008CA5C: nop
    
            goto L_8008CA64;
    }
    // 0x8008CA5C: nop

    // 0x8008CA60: break       7
    do_break(2148059744);
L_8008CA64:
    // 0x8008CA64: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008CA68: bne         $v0, $at, L_8008CA7C
    if (ctx->r2 != ctx->r1) {
        // 0x8008CA6C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008CA7C;
    }
    // 0x8008CA6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008CA70: bne         $a0, $at, L_8008CA7C
    if (ctx->r4 != ctx->r1) {
        // 0x8008CA74: nop
    
            goto L_8008CA7C;
    }
    // 0x8008CA74: nop

    // 0x8008CA78: break       6
    do_break(2148059768);
L_8008CA7C:
    // 0x8008CA7C: mflo        $a0
    ctx->r4 = lo;
    // 0x8008CA80: lui         $at, 0x42C7
    ctx->r1 = S32(0X42C7 << 16);
    // 0x8008CA84: ori         $at, $at, 0xCCCD
    ctx->r1 = ctx->r1 | 0XCCCD;
    // 0x8008CA88: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8008CA8C: lui         $at, 0x3D00
    ctx->r1 = S32(0X3D00 << 16);
    // 0x8008CA90: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8008CA94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008CA98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008CA9C: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x8008CAA0: ori         $at, $at, 0x8081
    ctx->r1 = ctx->r1 | 0X8081;
    // 0x8008CAA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008CAA8: lui         $at, 0x3D88
    ctx->r1 = S32(0X3D88 << 16);
    // 0x8008CAAC: ori         $at, $at, 0x8889
    ctx->r1 = ctx->r1 | 0X8889;
    // 0x8008CAB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008CAB4: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x8008CAB8: sb          $v1, 0xD3($a2)
    MEM_B(0XD3, ctx->r6) = ctx->r3;
    // 0x8008CABC: sb          $v1, 0xBC($a2)
    MEM_B(0XBC, ctx->r6) = ctx->r3;
    // 0x8008CAC0: sb          $v1, 0xC1($a2)
    MEM_B(0XC1, ctx->r6) = ctx->r3;
    // 0x8008CAC4: sb          $a1, 0xC7($a2)
    MEM_B(0XC7, ctx->r6) = ctx->r5;
    // 0x8008CAC8: sb          $v1, 0xC2($a2)
    MEM_B(0XC2, ctx->r6) = ctx->r3;
    // 0x8008CACC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8008CAD0: sb          $v0, 0xBD($a2)
    MEM_B(0XBD, ctx->r6) = ctx->r2;
    // 0x8008CAD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008CAD8: sb          $v0, 0xBF($a2)
    MEM_B(0XBF, ctx->r6) = ctx->r2;
    // 0x8008CADC: sb          $v0, 0xC6($a2)
    MEM_B(0XC6, ctx->r6) = ctx->r2;
    // 0x8008CAE0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8008CAE4: sb          $v0, 0xC8($a2)
    MEM_B(0XC8, ctx->r6) = ctx->r2;
    // 0x8008CAE8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008CAEC: lw          $v1, 0x4FA8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FA8);
    // 0x8008CAF0: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8008CAF4: sh          $v0, 0xA0($a2)
    MEM_H(0XA0, ctx->r6) = ctx->r2;
    // 0x8008CAF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008CAFC: sh          $v0, 0x9A($a2)
    MEM_H(0X9A, ctx->r6) = ctx->r2;
    // 0x8008CB00: sh          $v0, 0xA2($a2)
    MEM_H(0XA2, ctx->r6) = ctx->r2;
    // 0x8008CB04: sh          $v0, 0xA4($a2)
    MEM_H(0XA4, ctx->r6) = ctx->r2;
    // 0x8008CB08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8008CB0C: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x8008CB10: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8008CB14: sh          $v0, 0x9E($a2)
    MEM_H(0X9E, ctx->r6) = ctx->r2;
    // 0x8008CB18: sh          $v0, 0xB0($a2)
    MEM_H(0XB0, ctx->r6) = ctx->r2;
    // 0x8008CB1C: sh          $v0, 0x98($a2)
    MEM_H(0X98, ctx->r6) = ctx->r2;
    // 0x8008CB20: swc1        $f0, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f0.u32l;
    // 0x8008CB24: swc1        $f2, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->f2.u32l;
    // 0x8008CB28: swc1        $f4, 0x58($a2)
    MEM_W(0X58, ctx->r6) = ctx->f4.u32l;
    // 0x8008CB2C: swc1        $f6, 0x5C($a2)
    MEM_W(0X5C, ctx->r6) = ctx->f6.u32l;
    // 0x8008CB30: swc1        $f8, 0x60($a2)
    MEM_W(0X60, ctx->r6) = ctx->f8.u32l;
    // 0x8008CB34: sh          $a0, 0xA8($a2)
    MEM_H(0XA8, ctx->r6) = ctx->r4;
    // 0x8008CB38: bne         $v1, $zero, L_8008CB48
    if (ctx->r3 != 0) {
        // 0x8008CB3C: sh          $a0, 0x9C($a2)
        MEM_H(0X9C, ctx->r6) = ctx->r4;
            goto L_8008CB48;
    }
    // 0x8008CB3C: sh          $a0, 0x9C($a2)
    MEM_H(0X9C, ctx->r6) = ctx->r4;
    // 0x8008CB40: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008CB44: lw          $v1, 0x4FAC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FAC);
L_8008CB48:
    // 0x8008CB48: sw          $v1, 0x7C($a2)
    MEM_W(0X7C, ctx->r6) = ctx->r3;
    // 0x8008CB4C: jr          $ra
    // 0x8008CB50: sb          $a3, 0xC9($a2)
    MEM_B(0XC9, ctx->r6) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x8008CB50: sb          $a3, 0xC9($a2)
    MEM_B(0XC9, ctx->r6) = ctx->r7;
;}
RECOMP_FUNC void func_8006FCDC_4B0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FCDC: lhu         $v0, 0x11C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X11C);
    // 0x8006FCE0: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x8006FCE4: beq         $v0, $zero, L_8006FD48
    if (ctx->r2 == 0) {
        // 0x8006FCE8: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8006FD48;
    }
    // 0x8006FCE8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8006FCEC: lh          $v0, 0x10C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X10C);
    // 0x8006FCF0: bgez        $v0, L_8006FD00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006FCF4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8006FD00;
    }
    // 0x8006FCF4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006FCF8: j           L_8006FD1C
    // 0x8006FCFC: sh          $zero, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = 0;
        goto L_8006FD1C;
    // 0x8006FCFC: sh          $zero, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = 0;
L_8006FD00:
    // 0x8006FD00: addu        $v0, $v1, $a1
    ctx->r2 = ADD32(ctx->r3, ctx->r5);
    // 0x8006FD04: sh          $v0, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = ctx->r2;
    // 0x8006FD08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006FD0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006FD10: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8006FD14: bnel        $v0, $zero, L_8006FD1C
    if (ctx->r2 != 0) {
        // 0x8006FD18: sh          $a2, 0x10C($a0)
        MEM_H(0X10C, ctx->r4) = ctx->r6;
            goto L_8006FD1C;
    }
    goto skip_0;
    // 0x8006FD18: sh          $a2, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = ctx->r6;
    skip_0:
L_8006FD1C:
    // 0x8006FD1C: lhu         $v0, 0x108($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X108);
    // 0x8006FD20: lhu         $v1, 0x10C($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10C);
    // 0x8006FD24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006FD28: sh          $v0, 0x108($a0)
    MEM_H(0X108, ctx->r4) = ctx->r2;
    // 0x8006FD2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006FD30: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006FD34: slti        $v0, $v0, 0x201
    ctx->r2 = SIGNED(ctx->r2) < 0X201 ? 1 : 0;
    // 0x8006FD38: bne         $v0, $zero, L_8006FDA4
    if (ctx->r2 != 0) {
        // 0x8006FD3C: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_8006FDA4;
    }
    // 0x8006FD3C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8006FD40: j           L_8006FDA4
    // 0x8006FD44: sh          $v0, 0x108($a0)
    MEM_H(0X108, ctx->r4) = ctx->r2;
        goto L_8006FDA4;
    // 0x8006FD44: sh          $v0, 0x108($a0)
    MEM_H(0X108, ctx->r4) = ctx->r2;
L_8006FD48:
    // 0x8006FD48: lh          $v0, 0x10C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X10C);
    // 0x8006FD4C: blez        $v0, L_8006FD5C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006FD50: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8006FD5C;
    }
    // 0x8006FD50: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006FD54: j           L_8006FD7C
    // 0x8006FD58: sh          $zero, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = 0;
        goto L_8006FD7C;
    // 0x8006FD58: sh          $zero, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = 0;
L_8006FD5C:
    // 0x8006FD5C: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x8006FD60: sh          $v0, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = ctx->r2;
    // 0x8006FD64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006FD68: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006FD6C: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8006FD70: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8006FD74: bnel        $v0, $zero, L_8006FD7C
    if (ctx->r2 != 0) {
        // 0x8006FD78: sh          $a2, 0x10C($a0)
        MEM_H(0X10C, ctx->r4) = ctx->r6;
            goto L_8006FD7C;
    }
    goto skip_1;
    // 0x8006FD78: sh          $a2, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = ctx->r6;
    skip_1:
L_8006FD7C:
    // 0x8006FD7C: lhu         $v0, 0x108($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X108);
    // 0x8006FD80: lhu         $v1, 0x10C($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X10C);
    // 0x8006FD84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006FD88: sh          $v0, 0x108($a0)
    MEM_H(0X108, ctx->r4) = ctx->r2;
    // 0x8006FD8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006FD90: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006FD94: slti        $v0, $v0, -0x200
    ctx->r2 = SIGNED(ctx->r2) < -0X200 ? 1 : 0;
    // 0x8006FD98: beq         $v0, $zero, L_8006FDA4
    if (ctx->r2 == 0) {
        // 0x8006FD9C: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_8006FDA4;
    }
    // 0x8006FD9C: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8006FDA0: sh          $v0, 0x108($a0)
    MEM_H(0X108, ctx->r4) = ctx->r2;
L_8006FDA4:
    // 0x8006FDA4: jr          $ra
    // 0x8006FDA8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8006FDA8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8004F144_2A544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F144: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004F148: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8004F14C: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F150: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x8004F154: addiu       $t2, $t2, -0x2290
    ctx->r10 = ADD32(ctx->r10, -0X2290);
    // 0x8004F158: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004F15C: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x8004F160: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004F164: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x8004F168: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8004F16C: addiu       $a2, $a2, -0x3F64
    ctx->r6 = ADD32(ctx->r6, -0X3F64);
    // 0x8004F170: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004F174: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004F178: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8004F17C:
    // 0x8004F17C: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x8004F180: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004F184: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8004F188: sll         $t1, $a3, 5
    ctx->r9 = S32(ctx->r7 << 5);
    // 0x8004F18C: sllv        $v0, $t0, $a0
    ctx->r2 = S32(ctx->r8 << (ctx->r4 & 31));
L_8004F190:
    // 0x8004F190: bltzl       $v0, L_8004F1EC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004F194: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8004F1EC;
    }
    goto skip_0;
    // 0x8004F194: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x8004F198: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8004F19C: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x8004F1A0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F1A4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8004F1A8: addu        $v0, $a0, $t1
    ctx->r2 = ADD32(ctx->r4, ctx->r9);
    // 0x8004F1AC: sll         $s0, $v0, 1
    ctx->r16 = S32(ctx->r2 << 1);
    // 0x8004F1B0: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8004F1B4: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8004F1B8: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x8004F1BC: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8004F1C0: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
    // 0x8004F1C4: lbu         $s1, 0x1($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X1);
    // 0x8004F1C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004F1CC: jal         0x8009A2B0
    // 0x8004F1D0: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8004F1D0: addiu       $a1, $zero, 0x58
    ctx->r5 = ADD32(0, 0X58);
    after_0:
    // 0x8004F1D4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8004F1D8: sb          $s3, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r19;
    // 0x8004F1DC: sb          $s2, 0x49($v0)
    MEM_B(0X49, ctx->r2) = ctx->r18;
    // 0x8004F1E0: sb          $s2, 0x48($v0)
    MEM_B(0X48, ctx->r2) = ctx->r18;
    // 0x8004F1E4: j           L_8004F20C
    // 0x8004F1E8: sb          $s1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r17;
        goto L_8004F20C;
    // 0x8004F1E8: sb          $s1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r17;
L_8004F1EC:
    // 0x8004F1EC: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x8004F1F0: bne         $v0, $zero, L_8004F190
    if (ctx->r2 != 0) {
        // 0x8004F1F4: sllv        $v0, $t0, $a0
        ctx->r2 = S32(ctx->r8 << (ctx->r4 & 31));
            goto L_8004F190;
    }
    // 0x8004F1F4: sllv        $v0, $t0, $a0
    ctx->r2 = S32(ctx->r8 << (ctx->r4 & 31));
    // 0x8004F1F8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8004F1FC: slti        $v0, $a3, 0x2
    ctx->r2 = SIGNED(ctx->r7) < 0X2 ? 1 : 0;
    // 0x8004F200: bne         $v0, $zero, L_8004F17C
    if (ctx->r2 != 0) {
        // 0x8004F204: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8004F17C;
    }
    // 0x8004F204: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8004F208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004F20C:
    // 0x8004F20C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004F210: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004F214: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004F218: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004F21C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004F220: jr          $ra
    // 0x8004F224: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004F224: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800321EC_D5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800321EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800321F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800321F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800321F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800321FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80032200: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80032204: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032208: mflo        $v1
    ctx->r3 = lo;
    // 0x8003220C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80032210: nop

    // 0x80032214: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032218: mflo        $v0
    ctx->r2 = lo;
    // 0x8003221C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80032220: nop

    // 0x80032224: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032228: mflo        $a0
    ctx->r4 = lo;
    // 0x8003222C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80032230: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80032234: jal         0x80032424
    // 0x80032238: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x80032238: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_0:
    // 0x8003223C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80032240: beq         $a0, $zero, L_800322F4
    if (ctx->r4 == 0) {
        // 0x80032244: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_800322F4;
    }
    // 0x80032244: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80032248: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8003224C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80032250: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80032254: bne         $a0, $zero, L_80032260
    if (ctx->r4 != 0) {
        // 0x80032258: nop
    
            goto L_80032260;
    }
    // 0x80032258: nop

    // 0x8003225C: break       7
    do_break(2147689052);
L_80032260:
    // 0x80032260: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80032264: bne         $a0, $at, L_80032278
    if (ctx->r4 != ctx->r1) {
        // 0x80032268: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80032278;
    }
    // 0x80032268: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003226C: bne         $v0, $at, L_80032278
    if (ctx->r2 != ctx->r1) {
        // 0x80032270: nop
    
            goto L_80032278;
    }
    // 0x80032270: nop

    // 0x80032274: break       6
    do_break(2147689076);
L_80032278:
    // 0x80032278: mflo        $v0
    ctx->r2 = lo;
    // 0x8003227C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80032280: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80032284: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80032288: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8003228C: bne         $a0, $zero, L_80032298
    if (ctx->r4 != 0) {
        // 0x80032290: nop
    
            goto L_80032298;
    }
    // 0x80032290: nop

    // 0x80032294: break       7
    do_break(2147689108);
L_80032298:
    // 0x80032298: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003229C: bne         $a0, $at, L_800322B0
    if (ctx->r4 != ctx->r1) {
        // 0x800322A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800322B0;
    }
    // 0x800322A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800322A4: bne         $v0, $at, L_800322B0
    if (ctx->r2 != ctx->r1) {
        // 0x800322A8: nop
    
            goto L_800322B0;
    }
    // 0x800322A8: nop

    // 0x800322AC: break       6
    do_break(2147689132);
L_800322B0:
    // 0x800322B0: mflo        $v0
    ctx->r2 = lo;
    // 0x800322B4: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x800322B8: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800322BC: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x800322C0: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x800322C4: bne         $a0, $zero, L_800322D0
    if (ctx->r4 != 0) {
        // 0x800322C8: nop
    
            goto L_800322D0;
    }
    // 0x800322C8: nop

    // 0x800322CC: break       7
    do_break(2147689164);
L_800322D0:
    // 0x800322D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800322D4: bne         $a0, $at, L_800322E8
    if (ctx->r4 != ctx->r1) {
        // 0x800322D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800322E8;
    }
    // 0x800322D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800322DC: bne         $v0, $at, L_800322E8
    if (ctx->r2 != ctx->r1) {
        // 0x800322E0: nop
    
            goto L_800322E8;
    }
    // 0x800322E0: nop

    // 0x800322E4: break       6
    do_break(2147689188);
L_800322E8:
    // 0x800322E8: mflo        $v0
    ctx->r2 = lo;
    // 0x800322EC: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x800322F0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_800322F4:
    // 0x800322F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800322F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800322FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80032300: jr          $ra
    // 0x80032304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80032304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004E800_29C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E800: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8004E804: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8004E808: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8004E80C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8004E810: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8004E814: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8004E818: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8004E81C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8004E820: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8004E824: lh          $a0, 0x0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X0);
    // 0x8004E828: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8004E82C: lhu         $s4, 0x52($sp)
    ctx->r20 = MEM_HU(ctx->r29, 0X52);
    // 0x8004E830: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8004E834: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8004E838: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x8004E83C: lh          $v1, 0x2($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X2);
    // 0x8004E840: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E844: mflo        $a0
    ctx->r4 = lo;
    // 0x8004E848: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E84C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8004E850: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8004E854: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x8004E858: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004E85C: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E860: mflo        $v1
    ctx->r3 = lo;
    // 0x8004E864: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x8004E868: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8004E86C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8004E870: jal         0x80032424
    // 0x8004E874: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8004E874: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    after_0:
    // 0x8004E878: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8004E87C: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8004E880: beq         $s0, $zero, L_8004E894
    if (ctx->r16 == 0) {
        // 0x8004E884: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8004E894;
    }
    // 0x8004E884: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8004E888: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8004E88C: beql        $v0, $zero, L_8004E894
    if (ctx->r2 == 0) {
        // 0x8004E890: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_8004E894;
    }
    goto skip_0;
    // 0x8004E890: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    skip_0:
L_8004E894:
    // 0x8004E894: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8004E898: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004E89C: beql        $a0, $zero, L_8004E974
    if (ctx->r4 == 0) {
        // 0x8004E8A0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004E974;
    }
    goto skip_1;
    // 0x8004E8A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_1:
    // 0x8004E8A4: beq         $v1, $zero, L_8004E954
    if (ctx->r3 == 0) {
        // 0x8004E8A8: nop
    
            goto L_8004E954;
    }
    // 0x8004E8A8: nop

    // 0x8004E8AC: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x8004E8B0: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x8004E8B4: mult        $a0, $a1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E8B8: mflo        $a1
    ctx->r5 = lo;
    // 0x8004E8BC: nop

    // 0x8004E8C0: nop

    // 0x8004E8C4: div         $zero, $a1, $v1
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r3)));
    // 0x8004E8C8: bne         $v1, $zero, L_8004E8D4
    if (ctx->r3 != 0) {
        // 0x8004E8CC: nop
    
            goto L_8004E8D4;
    }
    // 0x8004E8CC: nop

    // 0x8004E8D0: break       7
    do_break(2147805392);
L_8004E8D4:
    // 0x8004E8D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004E8D8: bne         $v1, $at, L_8004E8EC
    if (ctx->r3 != ctx->r1) {
        // 0x8004E8DC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004E8EC;
    }
    // 0x8004E8DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004E8E0: bne         $a1, $at, L_8004E8EC
    if (ctx->r5 != ctx->r1) {
        // 0x8004E8E4: nop
    
            goto L_8004E8EC;
    }
    // 0x8004E8E4: nop

    // 0x8004E8E8: break       6
    do_break(2147805416);
L_8004E8EC:
    // 0x8004E8EC: mflo        $a1
    ctx->r5 = lo;
    // 0x8004E8F0: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x8004E8F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004E8F8: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8004E8FC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004E900: mflo        $v0
    ctx->r2 = lo;
    // 0x8004E904: nop

    // 0x8004E908: nop

    // 0x8004E90C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8004E910: bne         $a0, $zero, L_8004E91C
    if (ctx->r4 != 0) {
        // 0x8004E914: nop
    
            goto L_8004E91C;
    }
    // 0x8004E914: nop

    // 0x8004E918: break       7
    do_break(2147805464);
L_8004E91C:
    // 0x8004E91C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004E920: bne         $a0, $at, L_8004E934
    if (ctx->r4 != ctx->r1) {
        // 0x8004E924: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004E934;
    }
    // 0x8004E924: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004E928: bne         $v0, $at, L_8004E934
    if (ctx->r2 != ctx->r1) {
        // 0x8004E92C: nop
    
            goto L_8004E934;
    }
    // 0x8004E92C: nop

    // 0x8004E930: break       6
    do_break(2147805488);
L_8004E934:
    // 0x8004E934: mflo        $v0
    ctx->r2 = lo;
    // 0x8004E938: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8004E93C: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8004E940: jal         0x80032664
    // 0x8004E944: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x8004E944: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    after_1:
    // 0x8004E948: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x8004E94C: j           L_8004E974
    // 0x8004E950: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
        goto L_8004E974;
    // 0x8004E950: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
L_8004E954:
    // 0x8004E954: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x8004E958: lh          $v1, 0x2($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X2);
    // 0x8004E95C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004E960: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8004E964: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8004E968: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x8004E96C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8004E970: ori         $v0, $v1, 0x400
    ctx->r2 = ctx->r3 | 0X400;
L_8004E974:
    // 0x8004E974: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004E978: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004E97C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8004E980: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8004E984: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8004E988: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8004E98C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8004E990: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8004E994: jr          $ra
    // 0x8004E998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8004E998: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003B564_16964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B564: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003B568: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003B56C: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8003B570: lw          $s2, -0x6F9C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X6F9C);
    // 0x8003B574: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003B578: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003B57C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8003B580: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8003B584: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8003B588: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8003B58C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8003B590: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x8003B594: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8003B598: addiu       $s6, $zero, -0x3
    ctx->r22 = ADD32(0, -0X3);
    // 0x8003B59C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003B5A0: sltiu       $v0, $s2, 0x40
    ctx->r2 = ctx->r18 < 0X40 ? 1 : 0;
    // 0x8003B5A4: beq         $v0, $zero, L_8003B690
    if (ctx->r2 == 0) {
        // 0x8003B5A8: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_8003B690;
    }
    // 0x8003B5A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003B5AC: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8003B5B0: sll         $s1, $s2, 4
    ctx->r17 = S32(ctx->r18 << 4);
    // 0x8003B5B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B5B8: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x8003B5BC: sh          $v0, -0x1140($at)
    MEM_H(-0X1140, ctx->r1) = ctx->r2;
    // 0x8003B5C0: lb          $v0, 0x76($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X76);
    // 0x8003B5C4: beq         $v0, $zero, L_8003B5D4
    if (ctx->r2 == 0) {
        // 0x8003B5C8: nop
    
            goto L_8003B5D4;
    }
    // 0x8003B5C8: nop

    // 0x8003B5CC: j           L_8003B5F0
    // 0x8003B5D0: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
        goto L_8003B5F0;
    // 0x8003B5D0: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
L_8003B5D4:
    // 0x8003B5D4: jal         0x8003E934
    // 0x8003B5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8003B5D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8003B5DC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8003B5E0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8003B5E4: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003B5E8: bnel        $v0, $zero, L_8003B5F0
    if (ctx->r2 != 0) {
        // 0x8003B5EC: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8003B5F0;
    }
    goto skip_0;
    // 0x8003B5EC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
L_8003B5F0:
    // 0x8003B5F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B5F4: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x8003B5F8: sh          $a1, -0x113E($at)
    MEM_H(-0X113E, ctx->r1) = ctx->r5;
    // 0x8003B5FC: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8003B600: sll         $a0, $s2, 4
    ctx->r4 = S32(ctx->r18 << 4);
    // 0x8003B604: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B608: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B60C: sh          $v0, -0x113C($at)
    MEM_H(-0X113C, ctx->r1) = ctx->r2;
    // 0x8003B610: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8003B614: sll         $v0, $s3, 14
    ctx->r2 = S32(ctx->r19 << 14);
    // 0x8003B618: or          $v0, $s4, $v0
    ctx->r2 = ctx->r20 | ctx->r2;
    // 0x8003B61C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B620: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B624: sh          $v0, -0x1138($at)
    MEM_H(-0X1138, ctx->r1) = ctx->r2;
    // 0x8003B628: sra         $v0, $s5, 6
    ctx->r2 = S32(SIGNED(ctx->r21) >> 6);
    // 0x8003B62C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8003B630: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8003B634: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8003B638: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B63C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B640: sh          $v1, -0x113A($at)
    MEM_H(-0X113A, ctx->r1) = ctx->r3;
    // 0x8003B644: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8003B648: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B64C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B650: sb          $zero, -0x1134($at)
    MEM_B(-0X1134, ctx->r1) = 0;
    // 0x8003B654: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B658: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B65C: sb          $s6, -0x1133($at)
    MEM_B(-0X1133, ctx->r1) = ctx->r22;
    // 0x8003B660: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B664: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B668: sb          $zero, -0x1132($at)
    MEM_B(-0X1132, ctx->r1) = 0;
    // 0x8003B66C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003B670: lw          $v0, -0x6F9C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F9C);
    // 0x8003B674: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x8003B678: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003B67C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B680: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B684: sh          $v1, -0x1136($at)
    MEM_H(-0X1136, ctx->r1) = ctx->r3;
    // 0x8003B688: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003B68C: sw          $v0, -0x6F9C($at)
    MEM_W(-0X6F9C, ctx->r1) = ctx->r2;
L_8003B690:
    // 0x8003B690: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003B694: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8003B698: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8003B69C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8003B6A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B6A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003B6A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003B6AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003B6B0: jr          $ra
    // 0x8003B6B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8003B6B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008F5A0_6A9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008F5A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8008F5A4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8008F5A8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8008F5AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008F5B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008F5B4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8008F5B8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8008F5BC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8008F5C0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8008F5C4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8008F5C8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8008F5CC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8008F5D0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8008F5D4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F5D8: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x8008F5DC: addiu       $s7, $zero, 0xB8
    ctx->r23 = ADD32(0, 0XB8);
    // 0x8008F5E0: sh          $zero, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = 0;
    // 0x8008F5E4: beq         $v0, $zero, L_8008FAB4
    if (ctx->r2 == 0) {
        // 0x8008F5E8: sh          $zero, 0x18($sp)
        MEM_H(0X18, ctx->r29) = 0;
            goto L_8008FAB4;
    }
    // 0x8008F5E8: sh          $zero, 0x18($sp)
    MEM_H(0X18, ctx->r29) = 0;
    // 0x8008F5EC: lui         $fp, 0xB216
    ctx->r30 = S32(0XB216 << 16);
    // 0x8008F5F0: ori         $fp, $fp, 0x42C9
    ctx->r30 = ctx->r30 | 0X42C9;
    // 0x8008F5F4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8008F5F8: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x8008F5FC: addiu       $s5, $s5, -0x1000
    ctx->r21 = ADD32(ctx->r21, -0X1000);
L_8008F600:
    // 0x8008F600: lw          $a1, 0x7C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F604: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x8008F608: lw          $s6, 0x4($a1)
    ctx->r22 = MEM_W(ctx->r5, 0X4);
    // 0x8008F60C: subu        $v0, $s6, $a0
    ctx->r2 = SUB32(ctx->r22, ctx->r4);
    // 0x8008F610: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x8008F614: mult        $v0, $fp
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008F618: mfhi        $t0
    ctx->r8 = hi;
    // 0x8008F61C: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x8008F620: sra         $v1, $v1, 7
    ctx->r3 = S32(SIGNED(ctx->r3) >> 7);
    // 0x8008F624: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8008F628: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008F62C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8008F630: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008F634: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008F638: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008F63C: sll         $s3, $v0, 3
    ctx->r19 = S32(ctx->r2 << 3);
    // 0x8008F640: beql        $s3, $zero, L_8008F648
    if (ctx->r19 == 0) {
        // 0x8008F644: addu        $s6, $a0, $zero
        ctx->r22 = ADD32(ctx->r4, 0);
            goto L_8008F648;
    }
    goto skip_0;
    // 0x8008F644: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    skip_0:
L_8008F648:
    // 0x8008F648: slt         $v0, $s7, $s3
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8008F64C: bnel        $v0, $zero, L_8008FAB8
    if (ctx->r2 != 0) {
        // 0x8008F650: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8008FAB8;
    }
    goto skip_1;
    // 0x8008F650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x8008F654: lh          $v1, 0x8($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X8);
    // 0x8008F658: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x8008F65C: beq         $v0, $zero, L_8008FA44
    if (ctx->r2 == 0) {
        // 0x8008F660: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8008FA44;
    }
    // 0x8008F660: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8008F664: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008F668: addu        $at, $at, $v0
    gpr jr_addend_8008F670 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008F66C: lw          $v0, 0x2E30($at)
    ctx->r2 = ADD32(ctx->r1, 0X2E30);
    // 0x8008F670: jr          $v0
    // 0x8008F674: nop

    switch (jr_addend_8008F670 >> 2) {
        case 0: goto L_8008F9A0; break;
        case 1: goto L_8008FA44; break;
        case 2: goto L_8008FA44; break;
        case 3: goto L_8008FA44; break;
        case 4: goto L_8008FA44; break;
        case 5: goto L_8008FA0C; break;
        case 6: goto L_8008FA44; break;
        case 7: goto L_8008F9BC; break;
        case 8: goto L_8008F9E8; break;
        case 9: goto L_8008FA44; break;
        case 10: goto L_8008FA44; break;
        case 11: goto L_8008F798; break;
        case 12: goto L_8008F798; break;
        case 13: goto L_8008F678; break;
        case 14: goto L_8008F94C; break;
        case 15: goto L_8008F974; break;
        case 16: goto L_8008F798; break;
        default: switch_error(__func__, 0x8008F670, 0x800D2E30);
    }
    // 0x8008F674: nop

L_8008F678:
    // 0x8008F678: lw          $s1, 0x7C($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F67C: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8008F680: bnel        $v0, $zero, L_8008F688
    if (ctx->r2 != 0) {
        // 0x8008F684: sw          $s4, 0x48($s0)
        MEM_W(0X48, ctx->r16) = ctx->r20;
            goto L_8008F688;
    }
    goto skip_2;
    // 0x8008F684: sw          $s4, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r20;
    skip_2:
L_8008F688:
    // 0x8008F688: lw          $a2, 0x18($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X18);
    // 0x8008F68C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008F690: jal         0x800903B8
    // 0x8008F694: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800903B8_6B7B8(rdram, ctx);
        goto after_0;
    // 0x8008F694: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x8008F698: sw          $s4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r20;
    // 0x8008F69C: sw          $s4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r20;
    // 0x8008F6A0: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8008F6A4: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8008F6A8: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x8008F6AC: mult        $v0, $fp
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008F6B0: mfhi        $t0
    ctx->r8 = hi;
    // 0x8008F6B4: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x8008F6B8: sra         $v1, $v1, 7
    ctx->r3 = S32(SIGNED(ctx->r3) >> 7);
    // 0x8008F6BC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8008F6C0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008F6C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8008F6C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008F6CC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008F6D0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008F6D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008F6D8: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
    // 0x8008F6DC: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x8008F6E0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008F6E4: mflo        $v0
    ctx->r2 = lo;
    // 0x8008F6E8: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8008F6EC: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
    // 0x8008F6F0: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x8008F6F4: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x8008F6F8: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x8008F6FC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008F700: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8008F704: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8008F708: sh          $v0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r2;
    // 0x8008F70C: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x8008F710: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x8008F714: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x8008F718: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008F71C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8008F720: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8008F724: sh          $v0, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r2;
    // 0x8008F728: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x8008F72C: beq         $v0, $zero, L_8008F740
    if (ctx->r2 == 0) {
        // 0x8008F730: nop
    
            goto L_8008F740;
    }
    // 0x8008F730: nop

    // 0x8008F734: sh          $s4, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r20;
    // 0x8008F738: j           L_8008F78C
    // 0x8008F73C: sh          $s4, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r20;
        goto L_8008F78C;
    // 0x8008F73C: sh          $s4, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r20;
L_8008F740:
    // 0x8008F740: lh          $v0, 0x58($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X58);
    // 0x8008F744: lh          $v1, 0x5A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X5A);
    // 0x8008F748: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008F74C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8008F750: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8008F754: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008F758: mflo        $v1
    ctx->r3 = lo;
    // 0x8008F75C: lh          $v0, 0x58($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X58);
    // 0x8008F760: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x8008F764: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008F768: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8008F76C: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8008F770: sh          $v1, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r3;
    // 0x8008F774: lh          $v1, 0x5A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X5A);
    // 0x8008F778: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8008F77C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008F780: mflo        $v1
    ctx->r3 = lo;
    // 0x8008F784: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8008F788: sh          $v1, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r3;
L_8008F78C:
    // 0x8008F78C: lwc1        $f0, 0xC($s1)
    ctx->f0.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8008F790: j           L_8008FA78
    // 0x8008F794: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
        goto L_8008FA78;
    // 0x8008F794: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
L_8008F798:
    // 0x8008F798: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008F79C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8008F7A0: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8008F7A4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x8008F7A8: jal         0x8008FBBC
    // 0x8008F7AC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_8008FBBC_6AFBC(rdram, ctx);
        goto after_1;
    // 0x8008F7AC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_1:
    // 0x8008F7B0: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x8008F7B4: lw          $v1, 0x74($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X74);
    // 0x8008F7B8: slt         $v1, $a1, $v1
    ctx->r3 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8008F7BC: bne         $v1, $zero, L_8008F830
    if (ctx->r3 != 0) {
        // 0x8008F7C0: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8008F830;
    }
    // 0x8008F7C0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8008F7C4: lh          $v0, 0x58($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X58);
    // 0x8008F7C8: lh          $v1, 0x5A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X5A);
    // 0x8008F7CC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008F7D0: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8008F7D4: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8008F7D8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008F7DC: mflo        $v1
    ctx->r3 = lo;
    // 0x8008F7E0: lh          $v0, 0x58($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X58);
    // 0x8008F7E4: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x8008F7E8: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x8008F7EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008F7F0: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8008F7F4: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8008F7F8: sh          $v1, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r3;
    // 0x8008F7FC: lh          $v1, 0x5A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X5A);
    // 0x8008F800: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8008F804: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008F808: mflo        $v1
    ctx->r3 = lo;
    // 0x8008F80C: lw          $v0, 0x74($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X74);
    // 0x8008F810: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8008F814: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8008F818: lhu         $v1, 0x68($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X68);
    // 0x8008F81C: lhu         $a0, 0x6E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X6E);
    // 0x8008F820: sw          $v0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r2;
    // 0x8008F824: sh          $v1, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r3;
    // 0x8008F828: j           L_8008F85C
    // 0x8008F82C: sh          $a0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r4;
        goto L_8008F85C;
    // 0x8008F82C: sh          $a0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r4;
L_8008F830:
    // 0x8008F830: lh          $a0, 0x5C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X5C);
    // 0x8008F834: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x8008F838: jal         0x8008FF1C
    // 0x8008F83C: lhu         $a3, 0x64($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X64);
    func_8008FF1C_6B31C(rdram, ctx);
        goto after_2;
    // 0x8008F83C: lhu         $a3, 0x64($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X64);
    after_2:
    // 0x8008F840: lh          $a0, 0x5E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X5E);
    // 0x8008F844: lw          $a1, 0x70($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X70);
    // 0x8008F848: lh          $a2, 0x6C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X6C);
    // 0x8008F84C: lhu         $a3, 0x6A($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X6A);
    // 0x8008F850: jal         0x8008FF1C
    // 0x8008F854: sh          $v0, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r2;
    func_8008FF1C_6B31C(rdram, ctx);
        goto after_3;
    // 0x8008F854: sh          $v0, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r2;
    after_3:
    // 0x8008F858: sh          $v0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r2;
L_8008F85C:
    // 0x8008F85C: lh          $v0, 0x5C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X5C);
    // 0x8008F860: beql        $v0, $zero, L_8008F868
    if (ctx->r2 == 0) {
        // 0x8008F864: sh          $s4, 0x5C($s0)
        MEM_H(0X5C, ctx->r16) = ctx->r20;
            goto L_8008F868;
    }
    goto skip_3;
    // 0x8008F864: sh          $s4, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r20;
    skip_3:
L_8008F868:
    // 0x8008F868: lh          $v0, 0x5E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X5E);
    // 0x8008F86C: beql        $v0, $zero, L_8008F874
    if (ctx->r2 == 0) {
        // 0x8008F870: sh          $s4, 0x5E($s0)
        MEM_H(0X5E, ctx->r16) = ctx->r20;
            goto L_8008F874;
    }
    goto skip_4;
    // 0x8008F870: sh          $s4, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r20;
    skip_4:
L_8008F874:
    // 0x8008F874: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F878: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x8008F87C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8008F880: bne         $v1, $v0, L_8008F890
    if (ctx->r3 != ctx->r2) {
        // 0x8008F884: nop
    
            goto L_8008F890;
    }
    // 0x8008F884: nop

    // 0x8008F888: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8008F88C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
L_8008F890:
    // 0x8008F890: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F894: lh          $v1, 0x8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8);
    // 0x8008F898: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8008F89C: bne         $v1, $v0, L_8008F8FC
    if (ctx->r3 != ctx->r2) {
        // 0x8008F8A0: nop
    
            goto L_8008F8FC;
    }
    // 0x8008F8A0: nop

    // 0x8008F8A4: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F8A8: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8008F8AC: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x8008F8B0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008F8B4: mflo        $v0
    ctx->r2 = lo;
    // 0x8008F8B8: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F8BC: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8008F8C0: sh          $v0, 0x5A($s0)
    MEM_H(0X5A, ctx->r16) = ctx->r2;
    // 0x8008F8C4: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x8008F8C8: addiu       $v0, $v0, 0x5C
    ctx->r2 = ADD32(ctx->r2, 0X5C);
    // 0x8008F8CC: mult        $v0, $fp
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008F8D0: mfhi        $t0
    ctx->r8 = hi;
    // 0x8008F8D4: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x8008F8D8: sra         $v1, $v1, 7
    ctx->r3 = S32(SIGNED(ctx->r3) >> 7);
    // 0x8008F8DC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8008F8E0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008F8E4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8008F8E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008F8EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008F8F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008F8F4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008F8F8: sw          $v0, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r2;
L_8008F8FC:
    // 0x8008F8FC: lw          $a0, 0x7C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F900: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x8008F904: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8008F908: bnel        $v1, $v0, L_8008FA78
    if (ctx->r3 != ctx->r2) {
        // 0x8008F90C: sw          $s4, 0x78($s0)
        MEM_W(0X78, ctx->r16) = ctx->r20;
            goto L_8008FA78;
    }
    goto skip_5;
    // 0x8008F90C: sw          $s4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r20;
    skip_5:
    // 0x8008F910: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8008F914: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F918: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008F91C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8008F920: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8008F924: sh          $v0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r2;
    // 0x8008F928: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x8008F92C: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x8008F930: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x8008F934: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008F938: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8008F93C: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8008F940: sh          $v0, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r2;
    // 0x8008F944: j           L_8008FA78
    // 0x8008F948: sw          $s4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r20;
        goto L_8008FA78;
    // 0x8008F948: sw          $s4, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r20;
L_8008F94C:
    // 0x8008F94C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F950: lh          $v0, 0xA($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA);
    // 0x8008F954: bnel        $v0, $zero, L_8008F95C
    if (ctx->r2 != 0) {
        // 0x8008F958: sw          $s4, 0x48($s0)
        MEM_W(0X48, ctx->r16) = ctx->r20;
            goto L_8008F95C;
    }
    goto skip_6;
    // 0x8008F958: sw          $s4, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r20;
    skip_6:
L_8008F95C:
    // 0x8008F95C: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x8008F960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008F964: jal         0x800903B8
    // 0x8008F968: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800903B8_6B7B8(rdram, ctx);
        goto after_4;
    // 0x8008F968: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_4:
    // 0x8008F96C: j           L_8008FA78
    // 0x8008F970: sw          $s4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r20;
        goto L_8008FA78;
    // 0x8008F970: sw          $s4, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r20;
L_8008F974:
    // 0x8008F974: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8008F978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008F97C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8008F980: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8008F984: jal         0x8008FBBC
    // 0x8008F988: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8008FBBC_6AFBC(rdram, ctx);
        goto after_5;
    // 0x8008F988: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_5:
    // 0x8008F98C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8008F990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008F994: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8008F998: j           L_8008FA70
    // 0x8008F99C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8008FA70;
    // 0x8008F99C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8008F9A0:
    // 0x8008F9A0: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F9A4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x8008F9A8: sw          $zero, 0x88($v0)
    MEM_W(0X88, ctx->r2) = 0;
    // 0x8008F9AC: jal         0x80091D1C
    // 0x8008F9B0: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    func_80091D1C_6D11C(rdram, ctx);
        goto after_6;
    // 0x8008F9B0: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    after_6:
    // 0x8008F9B4: j           L_8008FA78
    // 0x8008F9B8: nop

        goto L_8008FA78;
    // 0x8008F9B8: nop

L_8008F9BC:
    // 0x8008F9BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008F9C0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8008F9C4: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8008F9C8: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x8008F9CC: jal         0x8008FBBC
    // 0x8008F9D0: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_8008FBBC_6AFBC(rdram, ctx);
        goto after_7;
    // 0x8008F9D0: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_7:
    // 0x8008F9D4: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x8008F9D8: lwc1        $f0, 0xC($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8008F9DC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8008F9E0: j           L_8008FA78
    // 0x8008F9E4: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
        goto L_8008FA78;
    // 0x8008F9E4: swc1        $f0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f0.u32l;
L_8008F9E8:
    // 0x8008F9E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008F9EC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8008F9F0: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8008F9F4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x8008F9F8: jal         0x8008FBBC
    // 0x8008F9FC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_8008FBBC_6AFBC(rdram, ctx);
        goto after_8;
    // 0x8008F9FC: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_8:
    // 0x8008FA00: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8008FA04: j           L_8008FA78
    // 0x8008FA08: sw          $s4, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r20;
        goto L_8008FA78;
    // 0x8008FA08: sw          $s4, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r20;
L_8008FA0C:
    // 0x8008FA0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008FA10: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8008FA14: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8008FA18: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x8008FA1C: jal         0x8008FBBC
    // 0x8008FA20: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_8008FBBC_6AFBC(rdram, ctx);
        goto after_9;
    // 0x8008FA20: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_9:
    // 0x8008FA24: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x8008FA28: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8008FA2C: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x8008FA30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008FA34: jal         0x800903B8
    // 0x8008FA38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800903B8_6B7B8(rdram, ctx);
        goto after_10;
    // 0x8008FA38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_10:
    // 0x8008FA3C: j           L_8008FA78
    // 0x8008FA40: nop

        goto L_8008FA78;
    // 0x8008FA40: nop

L_8008FA44:
    // 0x8008FA44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008FA48: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8008FA4C: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8008FA50: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x8008FA54: jal         0x8008FBBC
    // 0x8008FA58: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_8008FBBC_6AFBC(rdram, ctx);
        goto after_11;
    // 0x8008FA58: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_11:
    // 0x8008FA5C: lw          $v1, 0x7C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X7C);
    // 0x8008FA60: lh          $a1, 0x8($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X8);
    // 0x8008FA64: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    // 0x8008FA68: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8008FA6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8008FA70:
    // 0x8008FA70: jal         0x8008FB18
    // 0x8008FA74: nop

    func_8008FB18_6AF18(rdram, ctx);
        goto after_12;
    // 0x8008FA74: nop

    after_12:
L_8008FA78:
    // 0x8008FA78: lw          $a1, 0x7C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X7C);
    // 0x8008FA7C: subu        $s7, $s7, $s3
    ctx->r23 = SUB32(ctx->r23, ctx->r19);
    // 0x8008FA80: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x8008FA84: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8008FA88: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x8008FA8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008FA90: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8008FA94: bne         $a0, $zero, L_8008FAA0
    if (ctx->r4 != 0) {
        // 0x8008FA98: sw          $a0, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r4;
            goto L_8008FAA0;
    }
    // 0x8008FA98: sw          $a0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r4;
    // 0x8008FA9C: sw          $zero, 0x80($s0)
    MEM_W(0X80, ctx->r16) = 0;
L_8008FAA0:
    // 0x8008FAA0: jal         0x80091CA4
    // 0x8008FAA4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80091CA4_6D0A4(rdram, ctx);
        goto after_13;
    // 0x8008FAA4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_13:
    // 0x8008FAA8: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8008FAAC: bne         $v0, $zero, L_8008F600
    if (ctx->r2 != 0) {
        // 0x8008FAB0: nop
    
            goto L_8008F600;
    }
    // 0x8008FAB0: nop

L_8008FAB4:
    // 0x8008FAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8008FAB8:
    // 0x8008FAB8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8008FABC: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8008FAC0: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    // 0x8008FAC4: jal         0x8008FBBC
    // 0x8008FAC8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    func_8008FBBC_6AFBC(rdram, ctx);
        goto after_14;
    // 0x8008FAC8: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    after_14:
    // 0x8008FACC: lw          $v1, 0x70($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X70);
    // 0x8008FAD0: lw          $a0, 0x74($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X74);
    // 0x8008FAD4: slt         $v1, $a0, $v1
    ctx->r3 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8008FAD8: beq         $v1, $zero, L_8008FAE4
    if (ctx->r3 == 0) {
        // 0x8008FADC: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8008FAE4;
    }
    // 0x8008FADC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8008FAE0: sw          $a0, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r4;
L_8008FAE4:
    // 0x8008FAE4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8008FAE8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8008FAEC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8008FAF0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8008FAF4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8008FAF8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8008FAFC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8008FB00: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8008FB04: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8008FB08: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8008FB0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008FB10: jr          $ra
    // 0x8008FB14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8008FB14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80035460_10860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035460: jr          $ra
    // 0x80035464: nop

    TRACE_RETURN()
    return;
    // 0x80035464: nop

;}
RECOMP_FUNC void func_80032308_D708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032308: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003230C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80032310: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80032314: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80032318: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003231C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80032320: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032324: mflo        $v1
    ctx->r3 = lo;
    // 0x80032328: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8003232C: nop

    // 0x80032330: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032334: mflo        $v0
    ctx->r2 = lo;
    // 0x80032338: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8003233C: nop

    // 0x80032340: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032344: mflo        $a0
    ctx->r4 = lo;
    // 0x80032348: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8003234C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80032350: jal         0x80032424
    // 0x80032354: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x80032354: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_0:
    // 0x80032358: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8003235C: beq         $a0, $zero, L_80032410
    if (ctx->r4 == 0) {
        // 0x80032360: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80032410;
    }
    // 0x80032360: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80032364: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80032368: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8003236C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80032370: bne         $a0, $zero, L_8003237C
    if (ctx->r4 != 0) {
        // 0x80032374: nop
    
            goto L_8003237C;
    }
    // 0x80032374: nop

    // 0x80032378: break       7
    do_break(2147689336);
L_8003237C:
    // 0x8003237C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80032380: bne         $a0, $at, L_80032394
    if (ctx->r4 != ctx->r1) {
        // 0x80032384: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80032394;
    }
    // 0x80032384: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80032388: bne         $v0, $at, L_80032394
    if (ctx->r2 != ctx->r1) {
        // 0x8003238C: nop
    
            goto L_80032394;
    }
    // 0x8003238C: nop

    // 0x80032390: break       6
    do_break(2147689360);
L_80032394:
    // 0x80032394: mflo        $v0
    ctx->r2 = lo;
    // 0x80032398: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8003239C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x800323A0: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x800323A4: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x800323A8: bne         $a0, $zero, L_800323B4
    if (ctx->r4 != 0) {
        // 0x800323AC: nop
    
            goto L_800323B4;
    }
    // 0x800323AC: nop

    // 0x800323B0: break       7
    do_break(2147689392);
L_800323B4:
    // 0x800323B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800323B8: bne         $a0, $at, L_800323CC
    if (ctx->r4 != ctx->r1) {
        // 0x800323BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800323CC;
    }
    // 0x800323BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800323C0: bne         $v0, $at, L_800323CC
    if (ctx->r2 != ctx->r1) {
        // 0x800323C4: nop
    
            goto L_800323CC;
    }
    // 0x800323C4: nop

    // 0x800323C8: break       6
    do_break(2147689416);
L_800323CC:
    // 0x800323CC: mflo        $v0
    ctx->r2 = lo;
    // 0x800323D0: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x800323D4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800323D8: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x800323DC: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x800323E0: bne         $a0, $zero, L_800323EC
    if (ctx->r4 != 0) {
        // 0x800323E4: nop
    
            goto L_800323EC;
    }
    // 0x800323E4: nop

    // 0x800323E8: break       7
    do_break(2147689448);
L_800323EC:
    // 0x800323EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800323F0: bne         $a0, $at, L_80032404
    if (ctx->r4 != ctx->r1) {
        // 0x800323F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80032404;
    }
    // 0x800323F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800323F8: bne         $v0, $at, L_80032404
    if (ctx->r2 != ctx->r1) {
        // 0x800323FC: nop
    
            goto L_80032404;
    }
    // 0x800323FC: nop

    // 0x80032400: break       6
    do_break(2147689472);
L_80032404:
    // 0x80032404: mflo        $v0
    ctx->r2 = lo;
    // 0x80032408: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8003240C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_80032410:
    // 0x80032410: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80032414: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80032418: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003241C: jr          $ra
    // 0x80032420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80032420: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007A1B8_555B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007A1B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A1BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007A1C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007A1C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8007A1C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8007A1CC: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x8007A1D0: jal         0x8004DA68
    // 0x8007A1D4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8007A1D4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8007A1D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8007A1DC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8007A1E0: beq         $v1, $v0, L_8007A21C
    if (ctx->r3 == ctx->r2) {
        // 0x8007A1E4: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_8007A21C;
    }
    // 0x8007A1E4: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x8007A1E8: beq         $v0, $zero, L_8007A200
    if (ctx->r2 == 0) {
        // 0x8007A1EC: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8007A200;
    }
    // 0x8007A1EC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8007A1F0: beq         $v1, $v0, L_8007A230
    if (ctx->r3 == ctx->r2) {
        // 0x8007A1F4: nop
    
            goto L_8007A230;
    }
    // 0x8007A1F4: nop

    // 0x8007A1F8: j           L_8007A27C
    // 0x8007A1FC: nop

        goto L_8007A27C;
    // 0x8007A1FC: nop

L_8007A200:
    // 0x8007A200: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8007A204: beq         $v1, $v0, L_8007A244
    if (ctx->r3 == ctx->r2) {
        // 0x8007A208: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8007A244;
    }
    // 0x8007A208: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8007A20C: beq         $v1, $v0, L_8007A258
    if (ctx->r3 == ctx->r2) {
        // 0x8007A210: nop
    
            goto L_8007A258;
    }
    // 0x8007A210: nop

    // 0x8007A214: j           L_8007A27C
    // 0x8007A218: nop

        goto L_8007A27C;
    // 0x8007A218: nop

L_8007A21C:
    // 0x8007A21C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8007A220: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8007A224: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8007A228: j           L_8007A268
    // 0x8007A22C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8007A268;
    // 0x8007A22C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8007A230:
    // 0x8007A230: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8007A234: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8007A238: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8007A23C: j           L_8007A268
    // 0x8007A240: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8007A268;
    // 0x8007A240: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8007A244:
    // 0x8007A244: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8007A248: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8007A24C: lw          $v1, -0x14F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14F0);
    // 0x8007A250: j           L_8007A268
    // 0x8007A254: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8007A268;
    // 0x8007A254: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8007A258:
    // 0x8007A258: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8007A25C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8007A260: lw          $v1, 0x6B3C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6B3C);
    // 0x8007A264: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8007A268:
    // 0x8007A268: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007A26C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8007A270: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8007A274: jal         0x80079BE0
    // 0x8007A278: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80079BE0_54FE0(rdram, ctx);
        goto after_1;
    // 0x8007A278: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_8007A27C:
    // 0x8007A27C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8007A280: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8007A284: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007A288: jr          $ra
    // 0x8007A28C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8007A28C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8009CD00_78100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009CD00: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8009CD04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8009CD08: lui         $t9, 0xFFFF
    ctx->r25 = S32(0XFFFF << 16);
    // 0x8009CD0C: addiu       $t8, $a1, 0x20
    ctx->r24 = ADD32(ctx->r5, 0X20);
L_8009CD10:
    // 0x8009CD10: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8009CD14: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8009CD18: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8009CD1C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x8009CD20: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8009CD24: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8009CD28: mfc1        $t0, $f8
    ctx->r8 = (int32_t)ctx->f8.u32l;
    // 0x8009CD2C: mfc1        $t1, $f18
    ctx->r9 = (int32_t)ctx->f18.u32l;
    // 0x8009CD30: and         $t2, $t0, $t9
    ctx->r10 = ctx->r8 & ctx->r25;
    // 0x8009CD34: srl         $t3, $t1, 16
    ctx->r11 = S32(U32(ctx->r9) >> 16);
    // 0x8009CD38: or          $t4, $t2, $t3
    ctx->r12 = ctx->r10 | ctx->r11;
    // 0x8009CD3C: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    // 0x8009CD40: sll         $t5, $t0, 16
    ctx->r13 = S32(ctx->r8 << 16);
    // 0x8009CD44: andi        $t6, $t1, 0xFFFF
    ctx->r14 = ctx->r9 & 0XFFFF;
    // 0x8009CD48: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x8009CD4C: sw          $t7, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r15;
    // 0x8009CD50: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8009CD54: bne         $a1, $t8, L_8009CD10
    if (ctx->r5 != ctx->r24) {
        // 0x8009CD58: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_8009CD10;
    }
    // 0x8009CD58: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8009CD5C: jr          $ra
    // 0x8009CD60: nop

    TRACE_RETURN()
    return;
    // 0x8009CD60: nop

    // 0x8009CD64: nop

    // 0x8009CD68: nop

    // 0x8009CD6C: nop

    // 0x8009CD70: nop

    // 0x8009CD74: nop

    // 0x8009CD78: nop

    // 0x8009CD7C: nop

;}
RECOMP_FUNC void func_8004B5A4_269A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B5A4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004B5A8: jr          $ra
    // 0x8004B5AC: lh          $v0, -0x3982($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3982);
    TRACE_RETURN()
    return;
    // 0x8004B5AC: lh          $v0, -0x3982($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3982);
;}
RECOMP_FUNC void func_80090544_6B944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80090544: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80090548: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8009054C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80090550: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80090554: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80090558: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8009055C: lhu         $s5, 0x42($sp)
    ctx->r21 = MEM_HU(ctx->r29, 0X42);
    // 0x80090560: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80090564: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80090568: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8009056C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80090570: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80090574: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x80090578: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009057C: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x80090580: blez        $s0, L_800905E0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80090584: sw          $ra, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r31;
            goto L_800905E0;
    }
    // 0x80090584: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80090588: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x8009058C: lw          $a0, 0x3C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X3C);
    // 0x80090590: lw          $a2, 0x2C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X2C);
    // 0x80090594: jalr        $v0
    // 0x80090598: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80090598: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8009059C: andi        $t0, $v0, 0x7
    ctx->r8 = ctx->r2 & 0X7;
    // 0x800905A0: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800905A4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x800905A8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800905AC: andi        $v1, $s0, 0x7
    ctx->r3 = ctx->r16 & 0X7;
    // 0x800905B0: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x800905B4: subu        $v1, $s0, $v1
    ctx->r3 = SUB32(ctx->r16, ctx->r3);
    // 0x800905B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x800905BC: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x800905C0: andi        $a0, $s3, 0xFFF
    ctx->r4 = ctx->r19 & 0XFFF;
    // 0x800905C4: lui         $a1, 0x400
    ctx->r5 = S32(0X400 << 16);
    // 0x800905C8: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x800905CC: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x800905D0: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x800905D4: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x800905D8: j           L_800905E4
    // 0x800905DC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
        goto L_800905E4;
    // 0x800905DC: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_800905E0:
    // 0x800905E0: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_800905E4:
    // 0x800905E4: andi        $v0, $s6, 0x2
    ctx->r2 = ctx->r22 & 0X2;
    // 0x800905E8: beq         $v0, $zero, L_80090610
    if (ctx->r2 == 0) {
        // 0x800905EC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80090610;
    }
    // 0x800905EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800905F0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800905F4: lui         $v0, 0xF00
    ctx->r2 = S32(0XF00 << 16);
    // 0x800905F8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800905FC: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80090600: lui         $v1, 0x1FFF
    ctx->r3 = S32(0X1FFF << 16);
    // 0x80090604: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80090608: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8009060C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_80090610:
    // 0x80090610: lui         $a3, 0xFF
    ctx->r7 = S32(0XFF << 16);
    // 0x80090614: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x80090618: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x8009061C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80090620: lw          $a1, 0xC($s2)
    ctx->r5 = MEM_W(ctx->r18, 0XC);
    // 0x80090624: sll         $a0, $s6, 28
    ctx->r4 = S32(ctx->r22 << 28);
    // 0x80090628: sll         $v1, $s4, 1
    ctx->r3 = S32(ctx->r20 << 1);
    // 0x8009062C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80090630: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80090634: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80090638: sll         $v1, $t0, 12
    ctx->r3 = S32(ctx->r8 << 12);
    // 0x8009063C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80090640: andi        $v1, $s5, 0xFFF
    ctx->r3 = ctx->r21 & 0XFFF;
    // 0x80090644: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80090648: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x8009064C: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
    // 0x80090650: and         $a1, $a1, $a3
    ctx->r5 = ctx->r5 & ctx->r7;
    // 0x80090654: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x80090658: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x8009065C: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    // 0x80090660: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80090664: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80090668: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8009066C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80090670: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80090674: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80090678: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009067C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80090680: jr          $ra
    // 0x80090684: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80090684: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80090688: nop

    // 0x8009068C: nop

;}
RECOMP_FUNC void func_80039FE0_153E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039FE0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80039FE4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80039FE8: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80039FEC: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80039FF0: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80039FF4: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80039FF8: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80039FFC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8003A000: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8003A004: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8003A008: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8003A00C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8003A010: lb          $v0, 0x171($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X171);
    // 0x8003A014: bne         $v0, $zero, L_8003A024
    if (ctx->r2 != 0) {
        // 0x8003A018: nop
    
            goto L_8003A024;
    }
    // 0x8003A018: nop

    // 0x8003A01C: j           L_8003A034
    // 0x8003A020: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
        goto L_8003A034;
    // 0x8003A020: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8003A024:
    // 0x8003A024: lb          $v0, 0x170($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X170);
    // 0x8003A028: bne         $v0, $zero, L_8003A034
    if (ctx->r2 != 0) {
        // 0x8003A02C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8003A034;
    }
    // 0x8003A02C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8003A030: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_8003A034:
    // 0x8003A034: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003A038: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8003A03C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8003A040: addiu       $a2, $a2, 0x128C
    ctx->r6 = ADD32(ctx->r6, 0X128C);
    // 0x8003A044: jal         0x800283A8
    // 0x8003A048: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_0;
    // 0x8003A048: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8003A04C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8003A050: lui         $s7, 0x801D
    ctx->r23 = S32(0X801D << 16);
    // 0x8003A054: addiu       $s7, $s7, 0x4760
    ctx->r23 = ADD32(ctx->r23, 0X4760);
    // 0x8003A058: lui         $s6, 0x8021
    ctx->r22 = S32(0X8021 << 16);
    // 0x8003A05C: addiu       $s6, $s6, 0x990
    ctx->r22 = ADD32(ctx->r22, 0X990);
    // 0x8003A060: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8003A064: addiu       $v1, $v1, -0x3644
    ctx->r3 = ADD32(ctx->r3, -0X3644);
    // 0x8003A068: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x8003A06C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8003A070: addu        $s2, $v0, $v1
    ctx->r18 = ADD32(ctx->r2, ctx->r3);
    // 0x8003A074: addiu       $fp, $s2, 0x5
    ctx->r30 = ADD32(ctx->r18, 0X5);
L_8003A078:
    // 0x8003A078: lbu         $s5, 0x0($s2)
    ctx->r21 = MEM_BU(ctx->r18, 0X0);
    // 0x8003A07C: beq         $s5, $zero, L_8003A148
    if (ctx->r21 == 0) {
        // 0x8003A080: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8003A148;
    }
    // 0x8003A080: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8003A084: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003A088: addiu       $v0, $v0, -0x3634
    ctx->r2 = ADD32(ctx->r2, -0X3634);
    // 0x8003A08C: addu        $s0, $s3, $v0
    ctx->r16 = ADD32(ctx->r19, ctx->r2);
    // 0x8003A090: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_8003A094:
    // 0x8003A094: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x8003A098: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8003A09C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003A0A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003A0A4: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x8003A0A8: addiu       $a1, $a1, 0x1C8
    ctx->r5 = ADD32(ctx->r5, 0X1C8);
    // 0x8003A0AC: jal         0x800306F0
    // 0x8003A0B0: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    func_800306F0_BAF0(rdram, ctx);
        goto after_1;
    // 0x8003A0B0: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    after_1:
    // 0x8003A0B4: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8003A0B8: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x8003A0BC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x8003A0C0: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x8003A0C4: addiu       $a1, $a1, 0x3A8
    ctx->r5 = ADD32(ctx->r5, 0X3A8);
    // 0x8003A0C8: jal         0x800308E8
    // 0x8003A0CC: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    func_800308E8_BCE8(rdram, ctx);
        goto after_2;
    // 0x8003A0CC: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    after_2:
    // 0x8003A0D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003A0D4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x8003A0D8: lw          $v0, 0x4774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4774);
    // 0x8003A0DC: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8003A0E0: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x8003A0E4: lw          $v1, 0x4778($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4778);
    // 0x8003A0E8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8003A0EC: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x8003A0F0: lw          $a2, 0x477C($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X477C);
    // 0x8003A0F4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8003A0F8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8003A0FC: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8003A100: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8003A104: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x8003A108: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003A10C: sw          $v0, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = ctx->r2;
    // 0x8003A110: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003A114: sw          $v1, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = ctx->r3;
    // 0x8003A118: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003A11C: sw          $a2, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r6;
    // 0x8003A120: lbu         $a2, 0x0($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X0);
    // 0x8003A124: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8003A128: lbu         $v0, 0xB62($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB62);
    // 0x8003A12C: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x8003A130: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003A134: jal         0x80084870
    // 0x8003A138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80084870_5FC70(rdram, ctx);
        goto after_3;
    // 0x8003A138: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8003A13C: slt         $v0, $s1, $s5
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8003A140: bne         $v0, $zero, L_8003A094
    if (ctx->r2 != 0) {
        // 0x8003A144: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_8003A094;
    }
    // 0x8003A144: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
L_8003A148:
    // 0x8003A148: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003A14C: slt         $v0, $s2, $fp
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r30) ? 1 : 0;
    // 0x8003A150: bne         $v0, $zero, L_8003A078
    if (ctx->r2 != 0) {
        // 0x8003A154: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8003A078;
    }
    // 0x8003A154: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8003A158: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x8003A15C: addiu       $s2, $s2, 0x4760
    ctx->r18 = ADD32(ctx->r18, 0X4760);
    // 0x8003A160: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x8003A164: addiu       $s1, $s1, 0x990
    ctx->r17 = ADD32(ctx->r17, 0X990);
    // 0x8003A168: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8003A16C:
    // 0x8003A16C: addiu       $a1, $s4, 0x1E8
    ctx->r5 = ADD32(ctx->r20, 0X1E8);
    // 0x8003A170: jal         0x800306F0
    // 0x8003A174: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_800306F0_BAF0(rdram, ctx);
        goto after_4;
    // 0x8003A174: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8003A178: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8003A17C: addiu       $a1, $s4, 0x3B0
    ctx->r5 = ADD32(ctx->r20, 0X3B0);
    // 0x8003A180: jal         0x800308E8
    // 0x8003A184: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_800308E8_BCE8(rdram, ctx);
        goto after_5;
    // 0x8003A184: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x8003A188: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003A18C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8003A190: addiu       $a2, $s0, 0xF
    ctx->r6 = ADD32(ctx->r16, 0XF);
    // 0x8003A194: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8003A198: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8003A19C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x8003A1A0: lw          $v0, 0x4774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4774);
    // 0x8003A1A4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8003A1A8: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x8003A1AC: lw          $v1, 0x4778($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4778);
    // 0x8003A1B0: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8003A1B4: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x8003A1B8: lw          $t0, 0x477C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X477C);
    // 0x8003A1BC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8003A1C0: lui         $t4, 0x8021
    ctx->r12 = S32(0X8021 << 16);
    // 0x8003A1C4: lbu         $t4, 0xB62($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0XB62);
    // 0x8003A1C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003A1CC: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8003A1D0: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x8003A1D4: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x8003A1D8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003A1DC: sw          $v0, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = ctx->r2;
    // 0x8003A1E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003A1E4: sw          $v1, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = ctx->r3;
    // 0x8003A1E8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003A1EC: sw          $t0, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r8;
    // 0x8003A1F0: jal         0x80084870
    // 0x8003A1F4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_80084870_5FC70(rdram, ctx);
        goto after_6;
    // 0x8003A1F4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_6:
    // 0x8003A1F8: blez        $s0, L_8003A16C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8003A1FC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8003A16C;
    }
    // 0x8003A1FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8003A200: lb          $a2, 0x168($s4)
    ctx->r6 = MEM_B(ctx->r20, 0X168);
    // 0x8003A204: lb          $a3, 0x169($s4)
    ctx->r7 = MEM_B(ctx->r20, 0X169);
    // 0x8003A208: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003A20C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8003A210: jal         0x8008498C
    // 0x8003A214: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    func_8008498C_5FD8C(rdram, ctx);
        goto after_7;
    // 0x8003A214: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_7:
    // 0x8003A218: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8003A21C: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x8003A220: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x8003A224: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8003A228: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x8003A22C: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8003A230: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8003A234: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8003A238: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8003A23C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8003A240: jr          $ra
    // 0x8003A244: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8003A244: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8002BC54_7054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BC54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002BC58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002BC5C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8002BC60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8002BC64: lui         $s2, 0x8016
    ctx->r18 = S32(0X8016 << 16);
    // 0x8002BC68: addiu       $s2, $s2, 0x22DC
    ctx->r18 = ADD32(ctx->r18, 0X22DC);
    // 0x8002BC6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002BC70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002BC74: jal         0x8008ADE8
    // 0x8002BC78: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_0;
    // 0x8002BC78: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_0:
    // 0x8002BC7C: beq         $v0, $zero, L_8002BD04
    if (ctx->r2 == 0) {
        // 0x8002BC80: nop
    
            goto L_8002BD04;
    }
    // 0x8002BC80: nop

    // 0x8002BC84: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x8002BC88: lh          $v0, 0xE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XE);
    // 0x8002BC8C: addiu       $v1, $v1, 0x21
    ctx->r3 = ADD32(ctx->r3, 0X21);
    // 0x8002BC90: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BC94: mflo        $v1
    ctx->r3 = lo;
    // 0x8002BC98: lui         $v0, 0x8102
    ctx->r2 = S32(0X8102 << 16);
    // 0x8002BC9C: ori         $v0, $v0, 0x409
    ctx->r2 = ctx->r2 | 0X409;
    // 0x8002BCA0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BCA4: mfhi        $a2
    ctx->r6 = hi;
    // 0x8002BCA8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8002BCAC: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8002BCB0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002BCB4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002BCB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002BCBC: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002BCC0: blez        $s0, L_8002BCFC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8002BCC4: nop
    
            goto L_8002BCFC;
    }
    // 0x8002BCC4: nop

    // 0x8002BCC8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8002BCCC: jal         0x8008AE40
    // 0x8002BCD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8008AE40_66240(rdram, ctx);
        goto after_1;
    // 0x8002BCD0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8002BCD4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BCD8: lw          $a0, 0x22E0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E0);
    // 0x8002BCDC: jal         0x8008AE40
    // 0x8002BCE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8008AE40_66240(rdram, ctx);
        goto after_2;
    // 0x8002BCE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8002BCE4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BCE8: lw          $a0, 0x22E4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E4);
    // 0x8002BCEC: jal         0x8008AE40
    // 0x8002BCF0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8008AE40_66240(rdram, ctx);
        goto after_3;
    // 0x8002BCF0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8002BCF4: j           L_8002BD04
    // 0x8002BCF8: nop

        goto L_8002BD04;
    // 0x8002BCF8: nop

L_8002BCFC:
    // 0x8002BCFC: jal         0x8002BF38
    // 0x8002BD00: nop

    func_8002BF38_7338(rdram, ctx);
        goto after_4;
    // 0x8002BD00: nop

    after_4:
L_8002BD04:
    // 0x8002BD04: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BD08: jal         0x8008ADE8
    // 0x8002BD0C: lw          $a0, 0x22E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E8);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_5;
    // 0x8002BD0C: lw          $a0, 0x22E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E8);
    after_5:
    // 0x8002BD10: beq         $v0, $zero, L_8002BD78
    if (ctx->r2 == 0) {
        // 0x8002BD14: nop
    
            goto L_8002BD78;
    }
    // 0x8002BD14: nop

    // 0x8002BD18: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x8002BD1C: lh          $v0, 0xE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XE);
    // 0x8002BD20: addiu       $v1, $v1, -0x11
    ctx->r3 = ADD32(ctx->r3, -0X11);
    // 0x8002BD24: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BD28: mflo        $v1
    ctx->r3 = lo;
    // 0x8002BD2C: lui         $v0, 0x8102
    ctx->r2 = S32(0X8102 << 16);
    // 0x8002BD30: ori         $v0, $v0, 0x409
    ctx->r2 = ctx->r2 | 0X409;
    // 0x8002BD34: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BD38: mfhi        $a2
    ctx->r6 = hi;
    // 0x8002BD3C: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8002BD40: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8002BD44: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002BD48: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002BD4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002BD50: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002BD54: blez        $a1, L_8002BD70
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8002BD58: nop
    
            goto L_8002BD70;
    }
    // 0x8002BD58: nop

    // 0x8002BD5C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BD60: jal         0x8008AE40
    // 0x8002BD64: lw          $a0, 0x22E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E8);
    func_8008AE40_66240(rdram, ctx);
        goto after_6;
    // 0x8002BD64: lw          $a0, 0x22E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22E8);
    after_6:
    // 0x8002BD68: j           L_8002BD78
    // 0x8002BD6C: nop

        goto L_8002BD78;
    // 0x8002BD6C: nop

L_8002BD70:
    // 0x8002BD70: jal         0x8002BF38
    // 0x8002BD74: nop

    func_8002BF38_7338(rdram, ctx);
        goto after_7;
    // 0x8002BD74: nop

    after_7:
L_8002BD78:
    // 0x8002BD78: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BD7C: jal         0x8008ADE8
    // 0x8002BD80: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_8;
    // 0x8002BD80: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    after_8:
    // 0x8002BD84: beq         $v0, $zero, L_8002BDEC
    if (ctx->r2 == 0) {
        // 0x8002BD88: nop
    
            goto L_8002BDEC;
    }
    // 0x8002BD88: nop

    // 0x8002BD8C: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x8002BD90: lh          $v0, 0xE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XE);
    // 0x8002BD94: addiu       $v1, $v1, -0x11
    ctx->r3 = ADD32(ctx->r3, -0X11);
    // 0x8002BD98: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BD9C: mflo        $v1
    ctx->r3 = lo;
    // 0x8002BDA0: lui         $v0, 0x8102
    ctx->r2 = S32(0X8102 << 16);
    // 0x8002BDA4: ori         $v0, $v0, 0x409
    ctx->r2 = ctx->r2 | 0X409;
    // 0x8002BDA8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BDAC: mfhi        $a2
    ctx->r6 = hi;
    // 0x8002BDB0: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8002BDB4: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8002BDB8: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002BDBC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002BDC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002BDC4: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002BDC8: blez        $a1, L_8002BDE4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8002BDCC: nop
    
            goto L_8002BDE4;
    }
    // 0x8002BDCC: nop

    // 0x8002BDD0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BDD4: jal         0x8008AE40
    // 0x8002BDD8: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    func_8008AE40_66240(rdram, ctx);
        goto after_9;
    // 0x8002BDD8: lw          $a0, 0x22EC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22EC);
    after_9:
    // 0x8002BDDC: j           L_8002BDEC
    // 0x8002BDE0: nop

        goto L_8002BDEC;
    // 0x8002BDE0: nop

L_8002BDE4:
    // 0x8002BDE4: jal         0x8002BF38
    // 0x8002BDE8: nop

    func_8002BF38_7338(rdram, ctx);
        goto after_10;
    // 0x8002BDE8: nop

    after_10:
L_8002BDEC:
    // 0x8002BDEC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BDF0: jal         0x8008ADE8
    // 0x8002BDF4: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_11;
    // 0x8002BDF4: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    after_11:
    // 0x8002BDF8: beq         $v0, $zero, L_8002BE60
    if (ctx->r2 == 0) {
        // 0x8002BDFC: nop
    
            goto L_8002BE60;
    }
    // 0x8002BDFC: nop

    // 0x8002BE00: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x8002BE04: lh          $v0, 0xE($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XE);
    // 0x8002BE08: addiu       $v1, $v1, 0x21
    ctx->r3 = ADD32(ctx->r3, 0X21);
    // 0x8002BE0C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BE10: mflo        $v1
    ctx->r3 = lo;
    // 0x8002BE14: lui         $v0, 0x8102
    ctx->r2 = S32(0X8102 << 16);
    // 0x8002BE18: ori         $v0, $v0, 0x409
    ctx->r2 = ctx->r2 | 0X409;
    // 0x8002BE1C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002BE20: mfhi        $a2
    ctx->r6 = hi;
    // 0x8002BE24: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8002BE28: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8002BE2C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002BE30: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002BE34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002BE38: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002BE3C: blez        $a1, L_8002BE58
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8002BE40: nop
    
            goto L_8002BE58;
    }
    // 0x8002BE40: nop

    // 0x8002BE44: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002BE48: jal         0x8008AE40
    // 0x8002BE4C: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    func_8008AE40_66240(rdram, ctx);
        goto after_12;
    // 0x8002BE4C: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    after_12:
    // 0x8002BE50: j           L_8002BE60
    // 0x8002BE54: nop

        goto L_8002BE60;
    // 0x8002BE54: nop

L_8002BE58:
    // 0x8002BE58: jal         0x8002BF38
    // 0x8002BE5C: nop

    func_8002BF38_7338(rdram, ctx);
        goto after_13;
    // 0x8002BE5C: nop

    after_13:
L_8002BE60:
    // 0x8002BE60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BE64: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8002BE68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002BE6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002BE70: jr          $ra
    // 0x8002BE74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002BE74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800377EC_12BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800377EC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800377F0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800377F4: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x800377F8: addiu       $s5, $s5, -0xC6D
    ctx->r21 = ADD32(ctx->r21, -0XC6D);
    // 0x800377FC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80037800: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80037804: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80037808: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003780C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80037810: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80037814: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80037818: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003781C: lb          $v1, 0x0($s5)
    ctx->r3 = MEM_B(ctx->r21, 0X0);
    // 0x80037820: beq         $v1, $zero, L_80037838
    if (ctx->r3 == 0) {
        // 0x80037824: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80037838;
    }
    // 0x80037824: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80037828: beq         $v1, $v0, L_800378F4
    if (ctx->r3 == ctx->r2) {
        // 0x8003782C: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_800378F4;
    }
    // 0x8003782C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80037830: j           L_80037B0C
    // 0x80037834: nop

        goto L_80037B0C;
    // 0x80037834: nop

L_80037838:
    // 0x80037838: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8003783C: lui         $s7, 0x8018
    ctx->r23 = S32(0X8018 << 16);
    // 0x80037840: addiu       $s7, $s7, -0x58D0
    ctx->r23 = ADD32(ctx->r23, -0X58D0);
    // 0x80037844: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
    // 0x80037848: addiu       $s2, $zero, 0xC0
    ctx->r18 = ADD32(0, 0XC0);
    // 0x8003784C: ori         $s5, $zero, 0xFFFF
    ctx->r21 = 0 | 0XFFFF;
    // 0x80037850: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x80037854: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80037858: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8003785C:
    // 0x8003785C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80037860: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
L_80037864:
    // 0x80037864: addu        $v1, $s0, $a1
    ctx->r3 = ADD32(ctx->r16, ctx->r5);
    // 0x80037868: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8003786C: sw          $s6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r22;
    // 0x80037870: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
    // 0x80037874: sw          $s5, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r21;
    // 0x80037878: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x8003787C: bne         $v0, $zero, L_8003788C
    if (ctx->r2 != 0) {
        // 0x80037880: sw          $zero, 0x1C($v1)
        MEM_W(0X1C, ctx->r3) = 0;
            goto L_8003788C;
    }
    // 0x80037880: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x80037884: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
    // 0x80037888: sw          $s3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r19;
L_8003788C:
    // 0x8003788C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80037890: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80037894: bne         $v0, $zero, L_80037864
    if (ctx->r2 != 0) {
        // 0x80037898: addiu       $a1, $a1, 0x24
        ctx->r5 = ADD32(ctx->r5, 0X24);
            goto L_80037864;
    }
    // 0x80037898: addiu       $a1, $a1, 0x24
    ctx->r5 = ADD32(ctx->r5, 0X24);
    // 0x8003789C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800378A0: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x800378A4: addiu       $a0, $a0, -0x5610
    ctx->r4 = ADD32(ctx->r4, -0X5610);
    // 0x800378A8: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x800378AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800378B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800378B4: jal         0x8003055C
    // 0x800378B8: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x800378B8: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    after_0:
    // 0x800378BC: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800378C0: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800378C4: slti        $v0, $s4, 0x2
    ctx->r2 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
    // 0x800378C8: bne         $v0, $zero, L_8003785C
    if (ctx->r2 != 0) {
        // 0x800378CC: addiu       $s0, $s0, 0x120
        ctx->r16 = ADD32(ctx->r16, 0X120);
            goto L_8003785C;
    }
    // 0x800378CC: addiu       $s0, $s0, 0x120
    ctx->r16 = ADD32(ctx->r16, 0X120);
    // 0x800378D0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800378D4: lbu         $v0, -0xC6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XC6D);
    // 0x800378D8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x800378DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800378E0: sb          $v1, -0xC6C($at)
    MEM_B(-0XC6C, ctx->r1) = ctx->r3;
    // 0x800378E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800378E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800378EC: j           L_80037B0C
    // 0x800378F0: sb          $v0, -0xC6D($at)
    MEM_B(-0XC6D, ctx->r1) = ctx->r2;
        goto L_80037B0C;
    // 0x800378F0: sb          $v0, -0xC6D($at)
    MEM_B(-0XC6D, ctx->r1) = ctx->r2;
L_800378F4:
    // 0x800378F4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800378F8: lb          $v1, -0xC6C($v1)
    ctx->r3 = MEM_B(ctx->r3, -0XC6C);
    // 0x800378FC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80037900: lbu         $a0, -0x2348($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2348);
    // 0x80037904: lui         $s3, 0x8018
    ctx->r19 = S32(0X8018 << 16);
    // 0x80037908: addiu       $s3, $s3, -0x58D0
    ctx->r19 = ADD32(ctx->r19, -0X58D0);
    // 0x8003790C: addiu       $s0, $zero, 0x140
    ctx->r16 = ADD32(0, 0X140);
    // 0x80037910: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037914: sh          $zero, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = 0;
    // 0x80037918: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8003791C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80037920: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
    // 0x80037924: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80037928: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003792C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80037930: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80037934: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80037938: addu        $a1, $v0, $s3
    ctx->r5 = ADD32(ctx->r2, ctx->r19);
    // 0x8003793C: addiu       $v0, $s4, 0x20
    ctx->r2 = ADD32(ctx->r20, 0X20);
    // 0x80037940: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
    // 0x80037944: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // 0x80037948: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8003794C: sh          $s0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r16;
    // 0x80037950: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x80037954: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x80037958: sh          $s2, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r18;
    // 0x8003795C: sh          $s0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r16;
    // 0x80037960: sh          $s2, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r18;
    // 0x80037964: jal         0x8002FD30
    // 0x80037968: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x80037968: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x8003796C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80037970: lbu         $v1, -0x2348($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2348);
    // 0x80037974: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80037978: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8003797C: addiu       $s1, $zero, 0xF0
    ctx->r17 = ADD32(0, 0XF0);
    // 0x80037980: subu        $s1, $s1, $s4
    ctx->r17 = SUB32(ctx->r17, ctx->r20);
    // 0x80037984: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80037988: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003798C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80037990: addiu       $v1, $s3, 0x24
    ctx->r3 = ADD32(ctx->r19, 0X24);
    // 0x80037994: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x80037998: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x8003799C: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x800379A0: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x800379A4: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // 0x800379A8: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x800379AC: sh          $s0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r16;
    // 0x800379B0: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x800379B4: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x800379B8: sh          $s1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r17;
    // 0x800379BC: sh          $s0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r16;
    // 0x800379C0: jal         0x8002FD30
    // 0x800379C4: sh          $s1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r17;
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x800379C4: sh          $s1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r17;
    after_2:
    // 0x800379C8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800379CC: lbu         $v1, -0x2348($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2348);
    // 0x800379D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800379D4: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x800379D8: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x800379DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800379E0: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x800379E4: addiu       $v1, $s3, 0x48
    ctx->r3 = ADD32(ctx->r19, 0X48);
    // 0x800379E8: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x800379EC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x800379F0: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // 0x800379F4: sh          $s2, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r18;
    // 0x800379F8: sh          $s0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r16;
    // 0x800379FC: sh          $s2, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r18;
    // 0x80037A00: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x80037A04: sh          $zero, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = 0;
    // 0x80037A08: sh          $s0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r16;
    // 0x80037A0C: jal         0x8002FD30
    // 0x80037A10: sh          $zero, 0x22($a1)
    MEM_H(0X22, ctx->r5) = 0;
    func_8002FD30_B130(rdram, ctx);
        goto after_3;
    // 0x80037A10: sh          $zero, 0x22($a1)
    MEM_H(0X22, ctx->r5) = 0;
    after_3:
    // 0x80037A14: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80037A18: lbu         $v1, -0x2348($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2348);
    // 0x80037A1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80037A20: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80037A24: addiu       $s3, $s3, 0x6C
    ctx->r19 = ADD32(ctx->r19, 0X6C);
    // 0x80037A28: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80037A2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80037A30: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80037A34: addu        $a1, $v0, $s3
    ctx->r5 = ADD32(ctx->r2, ctx->r19);
    // 0x80037A38: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80037A3C: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80037A40: sh          $zero, 0x8($a1)
    MEM_H(0X8, ctx->r5) = 0;
    // 0x80037A44: sh          $s1, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r17;
    // 0x80037A48: sh          $s0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r16;
    // 0x80037A4C: sh          $s1, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r17;
    // 0x80037A50: sh          $zero, 0x18($a1)
    MEM_H(0X18, ctx->r5) = 0;
    // 0x80037A54: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x80037A58: sh          $s0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r16;
    // 0x80037A5C: jal         0x8002FD30
    // 0x80037A60: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    func_8002FD30_B130(rdram, ctx);
        goto after_4;
    // 0x80037A60: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    after_4:
    // 0x80037A64: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80037A68: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80037A6C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80037A70: lbu         $v0, -0x2348($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2348);
    // 0x80037A74: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80037A78: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80037A7C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80037A80: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80037A84: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037A88: addiu       $v0, $v0, -0x5610
    ctx->r2 = ADD32(ctx->r2, -0X5610);
    // 0x80037A8C: jal         0x8002FD30
    // 0x80037A90: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8002FD30_B130(rdram, ctx);
        goto after_5;
    // 0x80037A90: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_5:
    // 0x80037A94: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80037A98: lbu         $v0, -0xC6C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XC6C);
    // 0x80037A9C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80037AA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037AA4: sb          $v0, -0xC6C($at)
    MEM_B(-0XC6C, ctx->r1) = ctx->r2;
    // 0x80037AA8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80037AAC: bne         $v0, $zero, L_80037B0C
    if (ctx->r2 != 0) {
        // 0x80037AB0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80037B0C;
    }
    // 0x80037AB0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80037AB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80037AB8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80037ABC: lbu         $v0, -0xC6E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XC6E);
    // 0x80037AC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80037AC4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80037AC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037ACC: sb          $zero, -0xC70($at)
    MEM_B(-0XC70, ctx->r1) = 0;
    // 0x80037AD0: sb          $zero, 0x0($s5)
    MEM_B(0X0, ctx->r21) = 0;
    // 0x80037AD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037AD8: sh          $v1, -0xC68($at)
    MEM_H(-0XC68, ctx->r1) = ctx->r3;
    // 0x80037ADC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80037AE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037AE4: sh          $v1, -0xC62($at)
    MEM_H(-0XC62, ctx->r1) = ctx->r3;
    // 0x80037AE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80037AEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037AF0: sb          $v0, -0xC6E($at)
    MEM_B(-0XC6E, ctx->r1) = ctx->r2;
    // 0x80037AF4: jal         0x80028794
    // 0x80037AF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80028794_3B94(rdram, ctx);
        goto after_6;
    // 0x80037AF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x80037AFC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80037B00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80037B04: jal         0x800287CC
    // 0x80037B08: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_800287CC_3BCC(rdram, ctx);
        goto after_7;
    // 0x80037B08: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_7:
L_80037B0C:
    // 0x80037B0C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80037B10: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80037B14: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80037B18: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80037B1C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80037B20: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80037B24: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80037B28: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80037B2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80037B30: jr          $ra
    // 0x80037B34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80037B34: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
