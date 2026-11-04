#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8023956C_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023956C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239570: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239574: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80239578: bne         $v0, $zero, L_80239590
    if (ctx->r2 != 0) {
        // 0x8023957C: nop
    
            goto L_80239590;
    }
    // 0x8023957C: nop

    // 0x80239580: jal         0x802395A4
    // 0x80239584: nop

    func_802395A4_ovl4(rdram, ctx);
        goto after_0;
    // 0x80239584: nop

    after_0:
    // 0x80239588: j           L_80239598
    // 0x8023958C: nop

        goto L_80239598;
    // 0x8023958C: nop

L_80239590:
    // 0x80239590: jal         0x8023960C
    // 0x80239594: nop

    func_8023960C_ovl4(rdram, ctx);
        goto after_1;
    // 0x80239594: nop

    after_1:
L_80239598:
    // 0x80239598: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023959C: jr          $ra
    // 0x802395A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802395A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231DC4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DC4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80231DC8: sh          $v0, 0x37C($a0)
    MEM_H(0X37C, ctx->r4) = ctx->r2;
    // 0x80231DCC: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x80231DD0: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80231DD4: jr          $ra
    // 0x80231DD8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80231DD8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8022A090_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A090: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A094: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A098: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A09C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022A0A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A0A4: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A0A8: andi        $v0, $v0, 0x100
    ctx->r2 = ctx->r2 & 0X100;
    // 0x8022A0AC: beq         $v0, $zero, L_8022A0D8
    if (ctx->r2 == 0) {
        // 0x8022A0B0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A0D8;
    }
    // 0x8022A0B0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A0B4: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022A0B8: jal         0x800540D0
    // 0x8022A0BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022A0BC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022A0C0: beq         $v0, $zero, L_8022A0D8
    if (ctx->r2 == 0) {
        // 0x8022A0C4: nop
    
            goto L_8022A0D8;
    }
    // 0x8022A0C4: nop

    // 0x8022A0C8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022A0CC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022A0D0: j           L_8022A0E4
    // 0x8022A0D4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_8022A0E4;
    // 0x8022A0D4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022A0D8:
    // 0x8022A0D8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A0DC: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
    // 0x8022A0E0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A0E4:
    // 0x8022A0E4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A0E8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022A0EC: beq         $v0, $zero, L_8022A0FC
    if (ctx->r2 == 0) {
        // 0x8022A0F0: nop
    
            goto L_8022A0FC;
    }
    // 0x8022A0F0: nop

    // 0x8022A0F4: jal         0x8022B194
    // 0x8022A0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B194_ovl4(rdram, ctx);
        goto after_1;
    // 0x8022A0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022A0FC:
    // 0x8022A0FC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A100: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022A104: beq         $v0, $zero, L_8022A168
    if (ctx->r2 == 0) {
        // 0x8022A108: nop
    
            goto L_8022A168;
    }
    // 0x8022A108: nop

    // 0x8022A10C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A110: sltiu       $v1, $v0, 0x2
    ctx->r3 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022A114: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8022A118: xori        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 ^ 0X6;
    // 0x8022A11C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022A120: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022A124: beq         $v1, $zero, L_8022A168
    if (ctx->r3 == 0) {
        // 0x8022A128: ori         $v0, $zero, 0xAFC8
        ctx->r2 = 0 | 0XAFC8;
            goto L_8022A168;
    }
    // 0x8022A128: ori         $v0, $zero, 0xAFC8
    ctx->r2 = 0 | 0XAFC8;
    // 0x8022A12C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022A130: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022A134: bne         $v0, $zero, L_8022A168
    if (ctx->r2 != 0) {
        // 0x8022A138: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022A168;
    }
    // 0x8022A138: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A13C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A140: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A144: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A148: andi        $v0, $v0, 0xFF3F
    ctx->r2 = ctx->r2 & 0XFF3F;
    // 0x8022A14C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022A150: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022A154: addiu       $v1, $zero, 0x96
    ctx->r3 = ADD32(0, 0X96);
    // 0x8022A158: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A15C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A160: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A164: sb          $v1, 0x17E1($at)
    MEM_B(0X17E1, ctx->r1) = ctx->r3;
L_8022A168:
    // 0x8022A168: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A16C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022A170: beq         $v0, $zero, L_8022A1B8
    if (ctx->r2 == 0) {
        // 0x8022A174: nop
    
            goto L_8022A1B8;
    }
    // 0x8022A174: nop

    // 0x8022A178: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022A17C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A180: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A184: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A188: lbu         $v0, 0x17E1($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X17E1);
    // 0x8022A18C: beq         $v0, $zero, L_8022A1B8
    if (ctx->r2 == 0) {
        // 0x8022A190: nop
    
            goto L_8022A1B8;
    }
    // 0x8022A190: nop

    // 0x8022A194: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A198: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022A19C: bne         $v0, $zero, L_8022A1AC
    if (ctx->r2 != 0) {
        // 0x8022A1A0: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022A1AC;
    }
    // 0x8022A1A0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022A1A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A1A8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022A1AC:
    // 0x8022A1AC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A1B0: andi        $v0, $v0, 0xFF7F
    ctx->r2 = ctx->r2 & 0XFF7F;
    // 0x8022A1B4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A1B8:
    // 0x8022A1B8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A1BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A1C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A1C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A1C8: lw          $v0, 0x80C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X80C);
    // 0x8022A1CC: jalr        $v0
    // 0x8022A1D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022A1D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A1D4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A1D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A1DC: beq         $v0, $zero, L_8022A298
    if (ctx->r2 == 0) {
        // 0x8022A1E0: nop
    
            goto L_8022A298;
    }
    // 0x8022A1E0: nop

    // 0x8022A1E4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A1E8: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x8022A1EC: beq         $v0, $zero, L_8022A248
    if (ctx->r2 == 0) {
        // 0x8022A1F0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022A248;
    }
    // 0x8022A1F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022A1F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A1F8: addu        $at, $at, $v0
    gpr jr_addend_8022A200 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A1FC: lw          $v0, 0x1558($at)
    ctx->r2 = ADD32(ctx->r1, 0X1558);
    // 0x8022A200: jr          $v0
    // 0x8022A204: nop

    switch (jr_addend_8022A200 >> 2) {
        case 0: goto L_8022A208; break;
        case 1: goto L_8022A214; break;
        case 2: goto L_8022A248; break;
        case 3: goto L_8022A248; break;
        case 4: goto L_8022A22C; break;
        case 5: goto L_8022A22C; break;
        case 6: goto L_8022A274; break;
        case 7: goto L_8022A248; break;
        case 8: goto L_8022A22C; break;
        case 9: goto L_8022A274; break;
        default: switch_error(__func__, 0x8022A200, 0x80241558);
    }
    // 0x8022A204: nop

L_8022A208:
    // 0x8022A208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A20C: j           L_8022A288
    // 0x8022A210: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A288;
    // 0x8022A210: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A214:
    // 0x8022A214: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A218: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022A21C: bne         $v0, $zero, L_8022A278
    if (ctx->r2 != 0) {
        // 0x8022A220: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022A278;
    }
    // 0x8022A220: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022A224: j           L_8022A288
    // 0x8022A228: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022A288;
    // 0x8022A228: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022A22C:
    // 0x8022A22C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A230: jal         0x8007A1B8
    // 0x8022A234: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x8022A234: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_3:
    // 0x8022A238: jal         0x8004F418
    // 0x8022A23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_4;
    // 0x8022A23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022A240: j           L_8022A28C
    // 0x8022A244: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022A28C;
    // 0x8022A244: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022A248:
    // 0x8022A248: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022A24C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A250: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A254: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A258: lbu         $v0, 0x17E1($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X17E1);
    // 0x8022A25C: bne         $v0, $zero, L_8022A278
    if (ctx->r2 != 0) {
        // 0x8022A260: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022A278;
    }
    // 0x8022A260: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022A264: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A268: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022A26C: beq         $v0, $zero, L_8022A280
    if (ctx->r2 == 0) {
        // 0x8022A270: nop
    
            goto L_8022A280;
    }
    // 0x8022A270: nop

L_8022A274:
    // 0x8022A274: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022A278:
    // 0x8022A278: j           L_8022A288
    // 0x8022A27C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022A288;
    // 0x8022A27C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022A280:
    // 0x8022A280: jal         0x8022B0D8
    // 0x8022A284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B0D8_ovl4(rdram, ctx);
        goto after_5;
    // 0x8022A284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8022A288:
    // 0x8022A288: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022A28C:
    // 0x8022A28C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A290: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022A294: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A298:
    // 0x8022A298: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8022A29C: beq         $v0, $zero, L_8022A2AC
    if (ctx->r2 == 0) {
        // 0x8022A2A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A2AC;
    }
    // 0x8022A2A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A2A4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A2A8: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8022A2AC:
    // 0x8022A2AC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022A2B0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8022A2B4: lbu         $a0, -0x2348($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2348);
    // 0x8022A2B8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8022A2BC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A2C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A2C4: lbu         $v0, 0x17E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X17E0);
    // 0x8022A2C8: beq         $v0, $a0, L_8022A314
    if (ctx->r2 == ctx->r4) {
        // 0x8022A2CC: nop
    
            goto L_8022A314;
    }
    // 0x8022A2CC: nop

    // 0x8022A2D0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A2D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A2D8: lbu         $v0, 0x17E1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X17E1);
    // 0x8022A2DC: beq         $v0, $zero, L_8022A314
    if (ctx->r2 == 0) {
        // 0x8022A2E0: nop
    
            goto L_8022A314;
    }
    // 0x8022A2E0: nop

    // 0x8022A2E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A2E8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022A2EC: sb          $a0, 0x17E0($at)
    MEM_B(0X17E0, ctx->r1) = ctx->r4;
    // 0x8022A2F0: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022A2F4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022A2F8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A2FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A300: lbu         $v0, 0x17E1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X17E1);
    // 0x8022A304: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A308: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A30C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022A310: sb          $v0, 0x17E1($at)
    MEM_B(0X17E1, ctx->r1) = ctx->r2;
L_8022A314:
    // 0x8022A314: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A318: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8022A31C: beq         $v0, $zero, L_8022A354
    if (ctx->r2 == 0) {
        // 0x8022A320: nop
    
            goto L_8022A354;
    }
    // 0x8022A320: nop

    // 0x8022A324: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022A328: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8022A32C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022A330: beq         $v0, $zero, L_8022A34C
    if (ctx->r2 == 0) {
        // 0x8022A334: sh          $v1, 0x6($s1)
        MEM_H(0X6, ctx->r17) = ctx->r3;
            goto L_8022A34C;
    }
    // 0x8022A334: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022A338: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A33C: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
    // 0x8022A340: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x8022A344: j           L_8022A354
    // 0x8022A348: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
        goto L_8022A354;
    // 0x8022A348: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022A34C:
    // 0x8022A34C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A350: sb          $v0, 0x108($s0)
    MEM_B(0X108, ctx->r16) = ctx->r2;
L_8022A354:
    // 0x8022A354: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A358: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A35C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A360: jr          $ra
    // 0x8022A364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A364: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022EDA4_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EDA4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8022EDA8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8022EDAC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022EDB0: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8022EDB4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8022EDB8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8022EDBC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8022EDC0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022EDC4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8022EDC8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022EDCC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022EDD0: addiu       $a0, $s4, 0x368
    ctx->r4 = ADD32(ctx->r20, 0X368);
    // 0x8022EDD4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022EDD8: addiu       $s5, $s4, 0x348
    ctx->r21 = ADD32(ctx->r20, 0X348);
    // 0x8022EDDC: addiu       $s6, $s4, 0xC4
    ctx->r22 = ADD32(ctx->r20, 0XC4);
    // 0x8022EDE0: addiu       $s1, $s4, 0x1D8
    ctx->r17 = ADD32(ctx->r20, 0X1D8);
    // 0x8022EDE4: addiu       $s3, $s4, 0x64
    ctx->r19 = ADD32(ctx->r20, 0X64);
    // 0x8022EDE8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022EDEC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022EDF0: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8022EDF4: jal         0x800540D0
    // 0x8022EDF8: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022EDF8: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    after_0:
    // 0x8022EDFC: beq         $v0, $zero, L_8022EE10
    if (ctx->r2 == 0) {
        // 0x8022EE00: nop
    
            goto L_8022EE10;
    }
    // 0x8022EE00: nop

    // 0x8022EE04: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022EE08: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022EE0C: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8022EE10:
    // 0x8022EE10: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x8022EE14: beq         $v0, $zero, L_8022EE20
    if (ctx->r2 == 0) {
        // 0x8022EE18: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022EE20;
    }
    // 0x8022EE18: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EE1C: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
L_8022EE20:
    // 0x8022EE20: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8022EE24: beq         $v0, $zero, L_8022EE30
    if (ctx->r2 == 0) {
        // 0x8022EE28: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022EE30;
    }
    // 0x8022EE28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EE2C: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
L_8022EE30:
    // 0x8022EE30: lw          $v1, 0x350($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X350);
    // 0x8022EE34: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022EE38: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022EE3C: and         $a1, $v1, $v0
    ctx->r5 = ctx->r3 & ctx->r2;
    // 0x8022EE40: beq         $a1, $zero, L_8022F090
    if (ctx->r5 == 0) {
        // 0x8022EE44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F090;
    }
    // 0x8022EE44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EE48: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022EE4C: bne         $v1, $v0, L_8022EE60
    if (ctx->r3 != ctx->r2) {
        // 0x8022EE50: nop
    
            goto L_8022EE60;
    }
    // 0x8022EE50: nop

    // 0x8022EE54: lbu         $v0, 0x1DC($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DC);
    // 0x8022EE58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EE5C: sb          $v0, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = ctx->r2;
L_8022EE60:
    // 0x8022EE60: lhu         $v0, 0x6E($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6E);
    // 0x8022EE64: lhu         $a0, 0x6E($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X6E);
    // 0x8022EE68: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022EE6C: sh          $v0, 0x6E($s4)
    MEM_H(0X6E, ctx->r20) = ctx->r2;
    // 0x8022EE70: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8022EE74: lh          $v1, 0x6E($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6E);
    // 0x8022EE78: sh          $a0, 0xB2($s4)
    MEM_H(0XB2, ctx->r20) = ctx->r4;
    // 0x8022EE7C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022EE80: bgtz        $v1, L_8022EE9C
    if (SIGNED(ctx->r3) > 0) {
        // 0x8022EE84: sh          $v0, 0x1D8($s4)
        MEM_H(0X1D8, ctx->r20) = ctx->r2;
            goto L_8022EE9C;
    }
    // 0x8022EE84: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
    // 0x8022EE88: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022EE8C: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8022EE90: sb          $v1, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r3;
    // 0x8022EE94: j           L_8022F334
    // 0x8022EE98: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_8022F334;
    // 0x8022EE98: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_8022EE9C:
    // 0x8022EE9C: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022EEA0: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8022EEA4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022EEA8: bne         $v0, $zero, L_8022EEDC
    if (ctx->r2 != 0) {
        // 0x8022EEAC: sh          $v1, 0x15E($s4)
        MEM_H(0X15E, ctx->r20) = ctx->r3;
            goto L_8022EEDC;
    }
    // 0x8022EEAC: sh          $v1, 0x15E($s4)
    MEM_H(0X15E, ctx->r20) = ctx->r3;
    // 0x8022EEB0: lbu         $v0, 0x2($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X2);
    // 0x8022EEB4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022EEB8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022EEBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EEC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EEC4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022EEC8: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8022EECC: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x8022EED0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022EED4: beq         $v0, $zero, L_8022EEF0
    if (ctx->r2 == 0) {
        // 0x8022EED8: nop
    
            goto L_8022EEF0;
    }
    // 0x8022EED8: nop

L_8022EEDC:
    // 0x8022EEDC: lw          $v0, 0x350($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X350);
    // 0x8022EEE0: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022EEE4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EEE8: beq         $v0, $zero, L_8022EFAC
    if (ctx->r2 == 0) {
        // 0x8022EEEC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022EFAC;
    }
    // 0x8022EEEC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022EEF0:
    // 0x8022EEF0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022EEF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EEF8: beq         $v1, $v0, L_8022F338
    if (ctx->r3 == ctx->r2) {
        // 0x8022EEFC: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022F338;
    }
    // 0x8022EEFC: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022EF00: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8022EF04: jal         0x8002A33C
    // 0x8022EF08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022EF08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022EF0C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022EF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EF14: addiu       $a1, $s5, 0x10
    ctx->r5 = ADD32(ctx->r21, 0X10);
    // 0x8022EF18: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022EF1C: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x8022EF20: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8022EF24: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022EF28: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8022EF2C: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x8022EF30: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8022EF34: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8022EF38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022EF3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022EF40: jal         0x8004FEA0
    // 0x8022EF44: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x8022EF44: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    after_2:
    // 0x8022EF48: addiu       $v1, $zero, 0xC0
    ctx->r3 = ADD32(0, 0XC0);
    // 0x8022EF4C: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x8022EF50: addiu       $v1, $zero, -0xC0
    ctx->r3 = ADD32(0, -0XC0);
    // 0x8022EF54: sh          $v1, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r3;
    // 0x8022EF58: lbu         $v1, 0x6($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X6);
    // 0x8022EF5C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022EF60: sb          $v1, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r3;
    // 0x8022EF64: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x8022EF68: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EF6C: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    // 0x8022EF70: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022EF74: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EF78: bne         $v0, $zero, L_8022EF94
    if (ctx->r2 != 0) {
        // 0x8022EF7C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022EF94;
    }
    // 0x8022EF7C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022EF80: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8022EF84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EF88: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022EF8C: j           L_8022F080
    // 0x8022EF90: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022F080;
    // 0x8022EF90: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022EF94:
    // 0x8022EF94: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8022EF98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EF9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EFA0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022EFA4: j           L_8022F080
    // 0x8022EFA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8022F080;
    // 0x8022EFA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8022EFAC:
    // 0x8022EFAC: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8022EFB0: jal         0x8002A33C
    // 0x8022EFB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022EFB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022EFB8: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x8022EFBC: beq         $v0, $zero, L_8022F008
    if (ctx->r2 == 0) {
        // 0x8022EFC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F008;
    }
    // 0x8022EFC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EFC4: lbu         $v1, 0x1DC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1DC);
    // 0x8022EFC8: bne         $v1, $v0, L_8022F338
    if (ctx->r3 != ctx->r2) {
        // 0x8022EFCC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022F338;
    }
    // 0x8022EFCC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EFD0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022EFD4: beq         $v1, $v0, L_8022F338
    if (ctx->r3 == ctx->r2) {
        // 0x8022EFD8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022F338;
    }
    // 0x8022EFD8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022EFDC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022EFE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EFE4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EFE8: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022EFEC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022EFF0: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x8022EFF4: jal         0x80050294
    // 0x8022EFF8: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022EFF8: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_4:
    // 0x8022EFFC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022F000: j           L_8022F334
    // 0x8022F004: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_8022F334;
    // 0x8022F004: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_8022F008:
    // 0x8022F008: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x8022F00C: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x8022F010: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022F014: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022F018: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
    // 0x8022F01C: sb          $zero, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = 0;
    // 0x8022F020: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F024: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022F028: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022F02C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022F030: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F034: jal         0x8004FAEC
    // 0x8022F038: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_5;
    // 0x8022F038: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022F03C: bne         $v0, $zero, L_8022F338
    if (ctx->r2 != 0) {
        // 0x8022F040: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022F338;
    }
    // 0x8022F040: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F044: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022F048: beq         $v1, $v0, L_8022F338
    if (ctx->r3 == ctx->r2) {
        // 0x8022F04C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F338;
    }
    // 0x8022F04C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F050: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x8022F054: lh          $a3, 0x382($s4)
    ctx->r7 = MEM_H(ctx->r20, 0X382);
    // 0x8022F058: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022F05C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F060: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022F064: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F068: jal         0x8004F820
    // 0x8022F06C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022F06C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    after_6:
    // 0x8022F070: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022F074: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022F078: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F07C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022F080:
    // 0x8022F080: jal         0x80050294
    // 0x8022F084: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022F084: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_7:
    // 0x8022F088: j           L_8022F338
    // 0x8022F08C: nop

        goto L_8022F338;
    // 0x8022F08C: nop

L_8022F090:
    // 0x8022F090: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022F094: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x8022F098: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022F09C: bne         $v0, $zero, L_8022F338
    if (ctx->r2 != 0) {
        // 0x8022F0A0: addiu       $v0, $v1, -0x4
        ctx->r2 = ADD32(ctx->r3, -0X4);
            goto L_8022F338;
    }
    // 0x8022F0A0: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
    // 0x8022F0A4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022F0A8: bne         $v0, $zero, L_8022F338
    if (ctx->r2 != 0) {
        // 0x8022F0AC: nop
    
            goto L_8022F338;
    }
    // 0x8022F0AC: nop

    // 0x8022F0B0: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022F0B4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022F0B8: bne         $v0, $zero, L_8022F338
    if (ctx->r2 != 0) {
        // 0x8022F0BC: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022F338;
    }
    // 0x8022F0BC: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022F0C0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F0C4: beq         $v1, $v0, L_8022F338
    if (ctx->r3 == ctx->r2) {
        // 0x8022F0C8: nop
    
            goto L_8022F338;
    }
    // 0x8022F0C8: nop

    // 0x8022F0CC: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022F0D0: beq         $v0, $zero, L_8022F0E0
    if (ctx->r2 == 0) {
        // 0x8022F0D4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F0E0;
    }
    // 0x8022F0D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F0D8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022F0DC: sb          $v0, 0x386($s4)
    MEM_B(0X386, ctx->r20) = ctx->r2;
L_8022F0E0:
    // 0x8022F0E0: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022F0E4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022F0E8: beq         $v0, $zero, L_8022F2F8
    if (ctx->r2 == 0) {
        // 0x8022F0EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F2F8;
    }
    // 0x8022F0EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F0F0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022F0F4: beq         $v1, $v0, L_8022F2B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022F0F8: addiu       $a0, $s4, 0x1C
        ctx->r4 = ADD32(ctx->r20, 0X1C);
            goto L_8022F2B4;
    }
    // 0x8022F0F8: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x8022F0FC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8022F100: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x8022F104: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F108: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022F10C: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022F110: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022F114: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F118: jal         0x8004FAEC
    // 0x8022F11C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_8;
    // 0x8022F11C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_8:
    // 0x8022F120: beq         $v0, $zero, L_8022F220
    if (ctx->r2 == 0) {
        // 0x8022F124: lui         $v0, 0x8
        ctx->r2 = S32(0X8 << 16);
            goto L_8022F220;
    }
    // 0x8022F124: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x8022F128: lw          $v1, 0x80($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X80);
    // 0x8022F12C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022F130: beq         $v0, $zero, L_8022F144
    if (ctx->r2 == 0) {
        // 0x8022F134: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F144;
    }
    // 0x8022F134: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F138: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022F13C: j           L_8022F2B4
    // 0x8022F140: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022F2B4;
    // 0x8022F140: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022F144:
    // 0x8022F144: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022F148: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x8022F14C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022F150: bne         $v0, $zero, L_8022F19C
    if (ctx->r2 != 0) {
        // 0x8022F154: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022F19C;
    }
    // 0x8022F154: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F158: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022F15C: bne         $v0, $zero, L_8022F19C
    if (ctx->r2 != 0) {
        // 0x8022F160: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022F19C;
    }
    // 0x8022F160: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F164: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022F168: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F16C: beq         $v1, $v0, L_8022F180
    if (ctx->r3 == ctx->r2) {
        // 0x8022F170: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F180;
    }
    // 0x8022F170: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F174: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022F178: j           L_8022F2AC
    // 0x8022F17C: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022F2AC;
    // 0x8022F17C: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022F180:
    // 0x8022F180: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022F184: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F188: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022F18C: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x8022F190: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x8022F194: j           L_8022F2AC
    // 0x8022F198: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
        goto L_8022F2AC;
    // 0x8022F198: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_8022F19C:
    // 0x8022F19C: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022F1A0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022F1A4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022F1A8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022F1AC: bne         $v0, $zero, L_8022F1C8
    if (ctx->r2 != 0) {
        // 0x8022F1B0: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022F1C8;
    }
    // 0x8022F1B0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F1B4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022F1B8: sb          $zero, 0x7($s6)
    MEM_B(0X7, ctx->r22) = 0;
    // 0x8022F1BC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022F1C0: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8022F1C4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022F1C8:
    // 0x8022F1C8: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
    // 0x8022F1CC: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022F1D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F1D4: beq         $v1, $v0, L_8022F2B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022F1D8: nop
    
            goto L_8022F2B4;
    }
    // 0x8022F1D8: nop

    // 0x8022F1DC: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022F1E0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022F1E4: bne         $v0, $zero, L_8022F2B4
    if (ctx->r2 != 0) {
        // 0x8022F1E8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F2B4;
    }
    // 0x8022F1E8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F1EC: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022F1F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F1F4: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x8022F1F8: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022F1FC: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8022F200: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022F204: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x8022F208: lbu         $a1, 0xAC($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0XAC);
    // 0x8022F20C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022F210: jal         0x80050294
    // 0x8022F214: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8022F214: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8022F218: j           L_8022F2B4
    // 0x8022F21C: nop

        goto L_8022F2B4;
    // 0x8022F21C: nop

L_8022F220:
    // 0x8022F220: lbu         $v1, 0xCA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022F224: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F228: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022F22C: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x8022F230: bne         $v1, $zero, L_8022F248
    if (ctx->r3 != 0) {
        // 0x8022F234: sb          $v0, 0xA($s4)
        MEM_B(0XA, ctx->r20) = ctx->r2;
            goto L_8022F248;
    }
    // 0x8022F234: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022F238: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022F23C: sb          $zero, 0xCB($s4)
    MEM_B(0XCB, ctx->r20) = 0;
    // 0x8022F240: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022F244: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8022F248:
    // 0x8022F248: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8022F24C: lw          $a0, 0x80($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X80);
    // 0x8022F250: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x8022F254: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022F258: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8022F25C: bne         $v0, $zero, L_8022F2B4
    if (ctx->r2 != 0) {
        // 0x8022F260: sh          $v1, 0x382($s4)
        MEM_H(0X382, ctx->r20) = ctx->r3;
            goto L_8022F2B4;
    }
    // 0x8022F260: sh          $v1, 0x382($s4)
    MEM_H(0X382, ctx->r20) = ctx->r3;
    // 0x8022F264: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022F268: bne         $v0, $zero, L_8022F2B4
    if (ctx->r2 != 0) {
        // 0x8022F26C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F2B4;
    }
    // 0x8022F26C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F270: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022F274: beq         $v1, $v0, L_8022F288
    if (ctx->r3 == ctx->r2) {
        // 0x8022F278: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F288;
    }
    // 0x8022F278: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F27C: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022F280: j           L_8022F2A0
    // 0x8022F284: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_8022F2A0;
    // 0x8022F284: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_8022F288:
    // 0x8022F288: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022F28C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F290: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022F294: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x8022F298: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x8022F29C: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_8022F2A0:
    // 0x8022F2A0: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022F2A4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022F2A8: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
L_8022F2AC:
    // 0x8022F2AC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F2B0: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
L_8022F2B4:
    // 0x8022F2B4: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8022F2B8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022F2BC: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x8022F2C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F2C4: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x8022F2C8: bne         $v0, $v1, L_8022F338
    if (ctx->r2 != ctx->r3) {
        // 0x8022F2CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F338;
    }
    // 0x8022F2CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F2D0: lbu         $v1, 0xAC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XAC);
    // 0x8022F2D4: beq         $v1, $v0, L_8022F338
    if (ctx->r3 == ctx->r2) {
        // 0x8022F2D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F338;
    }
    // 0x8022F2D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F2DC: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x8022F2E0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022F2E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F2E8: jal         0x80050294
    // 0x8022F2EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x8022F2EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8022F2F0: j           L_8022F338
    // 0x8022F2F4: nop

        goto L_8022F338;
    // 0x8022F2F4: nop

L_8022F2F8:
    // 0x8022F2F8: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8022F2FC: bne         $v0, $zero, L_8022F340
    if (ctx->r2 != 0) {
        // 0x8022F300: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022F340;
    }
    // 0x8022F300: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F304: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x8022F308: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F30C: bne         $v1, $v0, L_8022F338
    if (ctx->r3 != ctx->r2) {
        // 0x8022F310: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_8022F338;
    }
    // 0x8022F310: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022F314: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022F318: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x8022F31C: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x8022F320: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x8022F324: sb          $zero, 0xF($s4)
    MEM_B(0XF, ctx->r20) = 0;
    // 0x8022F328: sb          $v1, 0x385($s4)
    MEM_B(0X385, ctx->r20) = ctx->r3;
    // 0x8022F32C: sb          $zero, 0x384($s4)
    MEM_B(0X384, ctx->r20) = 0;
    // 0x8022F330: andi        $v0, $v0, 0x7E
    ctx->r2 = ctx->r2 & 0X7E;
L_8022F334:
    // 0x8022F334: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_8022F338:
    // 0x8022F338: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8022F33C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022F340:
    // 0x8022F340: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F344: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F348: lw          $v0, 0xABC($at)
    ctx->r2 = MEM_W(ctx->r1, 0XABC);
    // 0x8022F34C: jalr        $v0
    // 0x8022F350: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x8022F350: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_11:
    // 0x8022F354: lbu         $v1, 0xA6($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA6);
    // 0x8022F358: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x8022F35C: bne         $v0, $zero, L_8022F370
    if (ctx->r2 != 0) {
        // 0x8022F360: addiu       $a0, $zero, 0x159
        ctx->r4 = ADD32(0, 0X159);
            goto L_8022F370;
    }
    // 0x8022F360: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    // 0x8022F364: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8022F368: beq         $v0, $zero, L_8022F378
    if (ctx->r2 == 0) {
        // 0x8022F36C: addiu       $a0, $zero, 0x15A
        ctx->r4 = ADD32(0, 0X15A);
            goto L_8022F378;
    }
    // 0x8022F36C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
L_8022F370:
    // 0x8022F370: jal         0x8002A33C
    // 0x8022F374: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x8022F374: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_12:
L_8022F378:
    // 0x8022F378: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022F37C: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x8022F380: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022F384: bne         $v0, $zero, L_8022F3A0
    if (ctx->r2 != 0) {
        // 0x8022F388: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_8022F3A0;
    }
    // 0x8022F388: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8022F38C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022F390: beq         $v1, $v0, L_8022F3A0
    if (ctx->r3 == ctx->r2) {
        // 0x8022F394: nop
    
            goto L_8022F3A0;
    }
    // 0x8022F394: nop

    // 0x8022F398: jal         0x8023103C
    // 0x8022F39C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8023103C_ovl4(rdram, ctx);
        goto after_13;
    // 0x8022F39C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
L_8022F3A0:
    // 0x8022F3A0: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022F3A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F3A8: bnel        $v1, $v0, L_8022F430
    if (ctx->r3 != ctx->r2) {
        // 0x8022F3AC: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_8022F430;
    }
    goto skip_0;
    // 0x8022F3AC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_0:
    // 0x8022F3B0: lh          $v0, 0x15E($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X15E);
    // 0x8022F3B4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022F3B8: beq         $v0, $zero, L_8022F3D8
    if (ctx->r2 == 0) {
        // 0x8022F3BC: nop
    
            goto L_8022F3D8;
    }
    // 0x8022F3BC: nop

    // 0x8022F3C0: lb          $v0, 0x2($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2);
    // 0x8022F3C4: bne         $v0, $zero, L_8022F3D8
    if (ctx->r2 != 0) {
        // 0x8022F3C8: nop
    
            goto L_8022F3D8;
    }
    // 0x8022F3C8: nop

    // 0x8022F3CC: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022F3D0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022F3D4: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
L_8022F3D8:
    // 0x8022F3D8: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022F3DC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F3E0: bne         $v0, $zero, L_8022F430
    if (ctx->r2 != 0) {
        // 0x8022F3E4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_8022F430;
    }
    // 0x8022F3E4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022F3E8: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x8022F3EC: jal         0x8009A3B4
    // 0x8022F3F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022F3F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x8022F3F4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022F3F8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022F3FC: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022F400: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F404: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x8022F408: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F40C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022F410: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x8022F414: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F418: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022F41C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F420: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F424: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F428: j           L_8022F470
    // 0x8022F42C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
        goto L_8022F470;
    // 0x8022F42C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
L_8022F430:
    // 0x8022F430: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x8022F434: jal         0x8009A3B4
    // 0x8022F438: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8022F438: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x8022F43C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022F440: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022F444: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022F448: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F44C: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x8022F450: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F454: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022F458: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x8022F45C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F460: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022F464: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F468: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022F46C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8022F470:
    // 0x8022F470: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022F474: jal         0x80051E18
    // 0x8022F478: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_16;
    // 0x8022F478: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_16:
    // 0x8022F47C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8022F480: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F484: beq         $v0, $zero, L_8022F594
    if (ctx->r2 == 0) {
        // 0x8022F488: addiu       $a0, $s4, 0x228
        ctx->r4 = ADD32(ctx->r20, 0X228);
            goto L_8022F594;
    }
    // 0x8022F488: addiu       $a0, $s4, 0x228
    ctx->r4 = ADD32(ctx->r20, 0X228);
    // 0x8022F48C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022F490: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x8022F494: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8022F498: addiu       $v0, $zero, 0x4D0
    ctx->r2 = ADD32(0, 0X4D0);
    // 0x8022F49C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022F4A0: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x8022F4A4: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x8022F4A8: jal         0x800308E8
    // 0x8022F4AC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_17;
    // 0x8022F4AC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_17:
    // 0x8022F4B0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8022F4B4: lhu         $v0, 0x190($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X190);
    // 0x8022F4B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F4BC: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x8022F4C0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8022F4C4: lhu         $v0, 0x192($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X192);
    // 0x8022F4C8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022F4CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F4D0: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x8022F4D4: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8022F4D8: lhu         $v0, 0x194($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X194);
    // 0x8022F4DC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022F4E0: addiu       $s2, $s5, 0x18
    ctx->r18 = ADD32(ctx->r21, 0X18);
    // 0x8022F4E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F4E8: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022F4EC: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022F4F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F4F4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F4F8: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x8022F4FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F500: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x8022F504: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8022F508: lui         $s0, 0x508
    ctx->r16 = S32(0X508 << 16);
    // 0x8022F50C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022F510: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022F514: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x8022F518: jal         0x80051E18
    // 0x8022F51C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_18;
    // 0x8022F51C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_18:
    // 0x8022F520: addiu       $a0, $s4, 0x268
    ctx->r4 = ADD32(ctx->r20, 0X268);
    // 0x8022F524: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022F528: jal         0x800308E8
    // 0x8022F52C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800308E8_BCE8(rdram, ctx);
        goto after_19;
    // 0x8022F52C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_19:
    // 0x8022F530: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8022F534: lhu         $v0, 0x1A0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A0);
    // 0x8022F538: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F53C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x8022F540: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x8022F544: lhu         $v0, 0x1A2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A2);
    // 0x8022F548: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F54C: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x8022F550: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8022F554: lhu         $v0, 0x1A4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A4);
    // 0x8022F558: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F55C: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022F560: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022F564: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022F568: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022F56C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x8022F570: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F574: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x8022F578: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F57C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022F580: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022F584: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8022F588: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x8022F58C: jal         0x80051E18
    // 0x8022F590: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x8022F590: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_20:
L_8022F594:
    // 0x8022F594: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x8022F598: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F59C: beq         $v1, $v0, L_8022F5C4
    if (ctx->r3 == ctx->r2) {
        // 0x8022F5A0: nop
    
            goto L_8022F5C4;
    }
    // 0x8022F5A0: nop

    // 0x8022F5A4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022F5A8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F5AC: beq         $v0, $zero, L_8022F5C4
    if (ctx->r2 == 0) {
        // 0x8022F5B0: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8022F5C4;
    }
    // 0x8022F5B0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022F5B4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022F5B8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F5BC: jal         0x8003B564
    // 0x8022F5C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_21;
    // 0x8022F5C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_21:
L_8022F5C4:
    // 0x8022F5C4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8022F5C8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8022F5CC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8022F5D0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022F5D4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022F5D8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022F5DC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022F5E0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022F5E4: jr          $ra
    // 0x8022F5E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8022F5E8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8022FF24_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FF24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FF28: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022FF2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FF30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022FF34: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x8022FF38: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022FF3C: beq         $v0, $zero, L_80230000
    if (ctx->r2 == 0) {
        // 0x8022FF40: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_80230000;
    }
    // 0x8022FF40: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022FF44: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FF48: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022FF4C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022FF50: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022FF54: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022FF58: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FF5C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022FF60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FF64: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x8022FF68: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022FF6C: bne         $v0, $zero, L_8022FF78
    if (ctx->r2 != 0) {
        // 0x8022FF70: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8022FF78;
    }
    // 0x8022FF70: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022FF74: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022FF78:
    // 0x8022FF78: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022FF7C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FF80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FF84: jal         0x80050294
    // 0x8022FF88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022FF88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022FF8C: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022FF90: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022FF94: bne         $a0, $v0, L_8022FFDC
    if (ctx->r4 != ctx->r2) {
        // 0x8022FF98: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8022FFDC;
    }
    // 0x8022FF98: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8022FF9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FFA0: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022FFA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022FFA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FFAC: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022FFB0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022FFB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022FFB8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FFBC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022FFC0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022FFC4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022FFC8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022FFCC: jal         0x80050294
    // 0x8022FFD0: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FFD0: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022FFD4: j           L_8022FFF0
    // 0x8022FFD8: nop

        goto L_8022FFF0;
    // 0x8022FFD8: nop

L_8022FFDC:
    // 0x8022FFDC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022FFE0: bne         $v0, $zero, L_8022FFEC
    if (ctx->r2 != 0) {
        // 0x8022FFE4: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_8022FFEC;
    }
    // 0x8022FFE4: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x8022FFE8: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8022FFEC:
    // 0x8022FFEC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022FFF0:
    // 0x8022FFF0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FFF4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FFF8: j           L_8023005C
    // 0x8022FFFC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8023005C;
    // 0x8022FFFC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80230000:
    // 0x80230000: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x80230004: beq         $v0, $zero, L_8023002C
    if (ctx->r2 == 0) {
        // 0x80230008: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023002C;
    }
    // 0x80230008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023000C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80230010: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230014: jal         0x8004DA90
    // 0x80230018: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80230018: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8023001C: lbu         $v0, 0x385($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X385);
    // 0x80230020: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230024: j           L_8023005C
    // 0x80230028: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
        goto L_8023005C;
    // 0x80230028: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_8023002C:
    // 0x8023002C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80230030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230034: beq         $v1, $v0, L_80230050
    if (ctx->r3 == ctx->r2) {
        // 0x80230038: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80230050;
    }
    // 0x80230038: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023003C: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80230040: jal         0x8004DA90
    // 0x80230044: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80230044: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80230048: j           L_8023005C
    // 0x8023004C: nop

        goto L_8023005C;
    // 0x8023004C: nop

L_80230050:
    // 0x80230050: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80230054: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230058: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8023005C:
    // 0x8023005C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80230060: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230064: jr          $ra
    // 0x80230068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231DDC_ovl4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231DDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231DE0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80231DE4: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80231DE8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80231DEC: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80231DF0: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80231DF4: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x80231DF8: sh          $v0, 0x37E($a0)
    MEM_H(0X37E, ctx->r4) = ctx->r2;
    // 0x80231DFC: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80231E00: jr          $ra
    // 0x80231E04: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80231E04: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80227334_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227334: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227338: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022733C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227340: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227344: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227348: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022734C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227350: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80227354: bne         $v1, $zero, L_802273D8
    if (ctx->r3 != 0) {
        // 0x80227358: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802273D8;
    }
    // 0x80227358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022735C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227360: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80227364: addiu       $v0, $zero, -0x804
    ctx->r2 = ADD32(0, -0X804);
    // 0x80227368: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022736C: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80227370: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227374: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227378: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022737C: addiu       $v0, $zero, -0xE20
    ctx->r2 = ADD32(0, -0XE20);
    // 0x80227380: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227384: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80227388: lui         $v0, 0xF7FC
    ctx->r2 = S32(0XF7FC << 16);
    // 0x8022738C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227390: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80227394: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80227398: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022739C: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x802273A0: lui         $v0, 0xF1E0
    ctx->r2 = S32(0XF1E0 << 16);
    // 0x802273A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802273A8: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x802273AC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802273B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802273B4: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x802273B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802273BC: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x802273C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802273C4: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x802273C8: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802273CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802273D0: j           L_802273EC
    // 0x802273D4: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
        goto L_802273EC;
    // 0x802273D4: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
L_802273D8:
    // 0x802273D8: bne         $v1, $v0, L_802273EC
    if (ctx->r3 != ctx->r2) {
        // 0x802273DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802273EC;
    }
    // 0x802273DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802273E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802273E4: jal         0x80034844
    // 0x802273E8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_0;
    // 0x802273E8: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_0:
L_802273EC:
    // 0x802273EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802273F0: addiu       $a0, $a0, -0xCBE
    ctx->r4 = ADD32(ctx->r4, -0XCBE);
    // 0x802273F4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x802273F8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x802273FC: slti        $v0, $v0, 0x78
    ctx->r2 = SIGNED(ctx->r2) < 0X78 ? 1 : 0;
    // 0x80227400: beq         $v0, $zero, L_80227430
    if (ctx->r2 == 0) {
        // 0x80227404: nop
    
            goto L_80227430;
    }
    // 0x80227404: nop

    // 0x80227408: lhu         $v1, 0x124($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X124);
    // 0x8022740C: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x80227410: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80227414: addiu       $v0, $v0, -0x69
    ctx->r2 = ADD32(ctx->r2, -0X69);
    // 0x80227418: sltiu       $v0, $v0, 0xD
    ctx->r2 = ctx->r2 < 0XD ? 1 : 0;
    // 0x8022741C: beq         $v0, $zero, L_80227430
    if (ctx->r2 == 0) {
        // 0x80227420: nop
    
            goto L_80227430;
    }
    // 0x80227420: nop

    // 0x80227424: lhu         $v0, 0x12A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12A);
    // 0x80227428: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x8022742C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_80227430:
    // 0x80227430: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227434: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227438: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022743C: jr          $ra
    // 0x80227440: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227440: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80227444: nop

    // 0x80227448: nop

    // 0x8022744C: nop

;}
RECOMP_FUNC void func_80236988_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236988: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023698C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236990: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236998: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023699C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802369A0: jal         0x8004DA90
    // 0x802369A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802369A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802369A8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802369AC: bne         $v0, $zero, L_802369C4
    if (ctx->r2 != 0) {
        // 0x802369B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802369C4;
    }
    // 0x802369B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802369B4: jal         0x8005044C
    // 0x802369B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802369B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802369BC: j           L_802369D4
    // 0x802369C0: nop

        goto L_802369D4;
    // 0x802369C0: nop

L_802369C4:
    // 0x802369C4: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x802369C8: jal         0x80050294
    // 0x802369CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802369CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802369D0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_802369D4:
    // 0x802369D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802369D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802369DC: jr          $ra
    // 0x802369E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802369E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BCFC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BCFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BD00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BD04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BD08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BD0C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022BD10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BD14: bne         $v1, $v0, L_8022BD8C
    if (ctx->r3 != ctx->r2) {
        // 0x8022BD18: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022BD8C;
    }
    // 0x8022BD18: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022BD1C: jal         0x8022BA70
    // 0x8022BD20: nop

    func_8022BA70_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022BD20: nop

    after_0:
    // 0x8022BD24: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022BD28: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022BD2C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8022BD30: beq         $v0, $v1, L_8022BD74
    if (ctx->r2 == ctx->r3) {
        // 0x8022BD34: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022BD74;
    }
    // 0x8022BD34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BD38: jal         0x800616FC
    // 0x8022BD3C: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022BD3C: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_1:
    // 0x8022BD40: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022BD44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BD48: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022BD4C: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8022BD50: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BD54: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022BD58: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022BD5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BD60: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022BD64: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x8022BD68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BD6C: j           L_8022BDB0
    // 0x8022BD70: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
        goto L_8022BDB0;
    // 0x8022BD70: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_8022BD74:
    // 0x8022BD74: jal         0x80036E48
    // 0x8022BD78: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x8022BD78: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_2:
    // 0x8022BD7C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022BD80: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022BD84: j           L_8022BDB0
    // 0x8022BD88: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022BDB0;
    // 0x8022BD88: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022BD8C:
    // 0x8022BD8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BD90: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022BD94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022BD98: bne         $v0, $zero, L_8022BDB0
    if (ctx->r2 != 0) {
        // 0x8022BD9C: nop
    
            goto L_8022BDB0;
    }
    // 0x8022BD9C: nop

    // 0x8022BDA0: jal         0x80036E48
    // 0x8022BDA4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x8022BDA4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_3:
    // 0x8022BDA8: jal         0x800600F8
    // 0x8022BDAC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_4;
    // 0x8022BDAC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_4:
L_8022BDB0:
    // 0x8022BDB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BDB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BDB8: jr          $ra
    // 0x8022BDBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BDBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802342CC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802342CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802342D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802342D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802342D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802342DC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802342E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802342E4: beq         $v1, $v0, L_80234328
    if (ctx->r3 == ctx->r2) {
        // 0x802342E8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80234328;
    }
    // 0x802342E8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802342EC: beql        $v0, $zero, L_80234304
    if (ctx->r2 == 0) {
        // 0x802342F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80234304;
    }
    goto skip_0;
    // 0x802342F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802342F4: beq         $v1, $zero, L_80234314
    if (ctx->r3 == 0) {
        // 0x802342F8: addiu       $a0, $s0, 0x180
        ctx->r4 = ADD32(ctx->r16, 0X180);
            goto L_80234314;
    }
    // 0x802342F8: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
    // 0x802342FC: j           L_8023443C
    // 0x80234300: nop

        goto L_8023443C;
    // 0x80234300: nop

L_80234304:
    // 0x80234304: beq         $v1, $v0, L_8023438C
    if (ctx->r3 == ctx->r2) {
        // 0x80234308: nop
    
            goto L_8023438C;
    }
    // 0x80234308: nop

    // 0x8023430C: j           L_8023443C
    // 0x80234310: nop

        goto L_8023443C;
    // 0x80234310: nop

L_80234314:
    // 0x80234314: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234318: jal         0x80234DCC
    // 0x8023431C: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
    func_80234DCC_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023431C: sh          $v0, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r2;
    after_0:
    // 0x80234320: j           L_8023437C
    // 0x80234324: nop

        goto L_8023437C;
    // 0x80234324: nop

L_80234328:
    // 0x80234328: lhu         $v1, 0x330($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X330);
    // 0x8023432C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80234330: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80234334: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80234338: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023433C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80234340: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80234344: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x80234348: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8023434C: jal         0x80234DCC
    // 0x80234350: sh          $v1, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r3;
    func_80234DCC_ovl5(rdram, ctx);
        goto after_1;
    // 0x80234350: sh          $v1, 0x330($s0)
    MEM_H(0X330, ctx->r16) = ctx->r3;
    after_1:
    // 0x80234354: lh          $v0, 0x330($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X330);
    // 0x80234358: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8023435C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80234360: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80234364: addiu       $a0, $a0, 0x180
    ctx->r4 = ADD32(ctx->r4, 0X180);
    // 0x80234368: jal         0x80234DCC
    // 0x8023436C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    func_80234DCC_ovl5(rdram, ctx);
        goto after_2;
    // 0x8023436C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_2:
    // 0x80234370: lh          $v0, 0x330($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X330);
    // 0x80234374: bne         $v0, $zero, L_8023443C
    if (ctx->r2 != 0) {
        // 0x80234378: nop
    
            goto L_8023443C;
    }
    // 0x80234378: nop

L_8023437C:
    // 0x8023437C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234380: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234384: j           L_8023443C
    // 0x80234388: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023443C;
    // 0x80234388: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023438C:
    // 0x8023438C: jal         0x8004EEAC
    // 0x80234390: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_3;
    // 0x80234390: nop

    after_3:
    // 0x80234394: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80234398: beq         $v1, $zero, L_80234408
    if (ctx->r3 == 0) {
        // 0x8023439C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234408;
    }
    // 0x8023439C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802343A0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802343A4: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x802343A8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x802343AC: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x802343B0: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x802343B4: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x802343B8: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x802343BC: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x802343C0: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x802343C4: addiu       $v0, $v0, -0xC0
    ctx->r2 = ADD32(ctx->r2, -0XC0);
    // 0x802343C8: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x802343CC: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x802343D0: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x802343D4: lh          $v0, 0x180($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X180);
    // 0x802343D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802343DC: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802343E0: lh          $v0, 0x182($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X182);
    // 0x802343E4: addiu       $a0, $v1, 0x54
    ctx->r4 = ADD32(ctx->r3, 0X54);
    // 0x802343E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802343EC: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x802343F0: lh          $v0, 0x184($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X184);
    // 0x802343F4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802343F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802343FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234400: jal         0x8009A3B4
    // 0x80234404: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80234404: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    after_4:
L_80234408:
    // 0x80234408: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x8023440C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80234410: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x80234414: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80234418: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8023441C: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x80234420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234424: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80234428: jal         0x8007A1B8
    // 0x8023442C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8007A1B8_555B8(rdram, ctx);
        goto after_5;
    // 0x8023442C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_5:
    // 0x80234430: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80234434: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80234438: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8023443C:
    // 0x8023443C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234440: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80234444: jr          $ra
    // 0x80234448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238B94_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238B98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238B9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238BA4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80238BA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238BAC: addiu       $v0, $zero, -0x32
    ctx->r2 = ADD32(0, -0X32);
    // 0x80238BB0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80238BB4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80238BB8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80238BBC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80238BC0: jal         0x8004D5D4
    // 0x80238BC4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80238BC4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80238BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238BCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80238BD0: jal         0x80050294
    // 0x80238BD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80238BD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80238BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238BDC: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    // 0x80238BE0: jal         0x80239590
    // 0x80238BE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80239590_ovl5(rdram, ctx);
        goto after_2;
    // 0x80238BE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80238BE8: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80238BEC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80238BF0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80238BF4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80238BF8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80238BFC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80238C00: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80238C04: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80238C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238C0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80238C10: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80238C14: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80238C18: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80238C1C: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x80238C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238C24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238C28: jr          $ra
    // 0x80238C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238EB8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238EB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238EBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238EC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238EC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238EC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238ECC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238ED0: bne         $v0, $zero, L_80238F08
    if (ctx->r2 != 0) {
        // 0x80238ED4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80238F08;
    }
    // 0x80238ED4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80238ED8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80238EDC: jal         0x80050294
    // 0x80238EE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80238EE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238EE8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238EEC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80238EF0: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80238EF4: jal         0x80239590
    // 0x80238EF8: sb          $v0, 0x118($s0)
    MEM_B(0X118, ctx->r16) = ctx->r2;
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80238EF8: sb          $v0, 0x118($s0)
    MEM_B(0X118, ctx->r16) = ctx->r2;
    after_1:
    // 0x80238EFC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238F00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238F04: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238F08:
    // 0x80238F08: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80238F0C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80238F10: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80238F14: bne         $v1, $v0, L_80238F28
    if (ctx->r3 != ctx->r2) {
        // 0x80238F18: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80238F28;
    }
    // 0x80238F18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238F1C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238F20: jal         0x80239590
    // 0x80238F24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_80239590_ovl5(rdram, ctx);
        goto after_2;
    // 0x80238F24: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
L_80238F28:
    // 0x80238F28: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238F2C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238F30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238F34: jr          $ra
    // 0x80238F38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238F38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238E50_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238E50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80238E54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238E58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238E5C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80238E60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238E64: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238E68: bne         $v0, $zero, L_80238EA4
    if (ctx->r2 != 0) {
        // 0x80238E6C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80238EA4;
    }
    // 0x80238E6C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80238E70: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80238E74: jal         0x80050294
    // 0x80238E78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80238E78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80238E7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238E80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238E84: jal         0x80239590
    // 0x80238E88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80238E88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80238E8C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80238E90: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80238E94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238E98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80238E9C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80238EA0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80238EA4:
    // 0x80238EA4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238EA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238EAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238EB0: jr          $ra
    // 0x80238EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C2E8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C2E8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C2EC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022C2F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C2F4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C2F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022C2FC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022C300: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022C304: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C308: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C30C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C310: jal         0x8009A3B4
    // 0x8022C314: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C314: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C318: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C31C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C320: jal         0x8009A3B4
    // 0x8022C324: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C324: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C328: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C32C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C330: jal         0x8009A3B4
    // 0x8022C334: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C334: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C338: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C33C: jal         0x800A3450
    // 0x8022C340: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022C340: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022C344: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C348: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x8022C34C: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x8022C350: andi        $v1, $v1, 0x104
    ctx->r3 = ctx->r3 & 0X104;
    // 0x8022C354: bne         $v1, $v0, L_8022C364
    if (ctx->r3 != ctx->r2) {
        // 0x8022C358: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022C364;
    }
    // 0x8022C358: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022C35C: jal         0x8022CDA8
    // 0x8022C360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022CDA8_ovl5(rdram, ctx);
        goto after_4;
    // 0x8022C360: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_8022C364:
    // 0x8022C364: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C368: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C36C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C370: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C374: lw          $v0, 0x541C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X541C);
    // 0x8022C378: jalr        $v0
    // 0x8022C37C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022C37C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C380: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022C384: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022C388: beq         $v0, $zero, L_8022C3C8
    if (ctx->r2 == 0) {
        // 0x8022C38C: nop
    
            goto L_8022C3C8;
    }
    // 0x8022C38C: nop

    // 0x8022C390: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022C394: bltz        $v1, L_8022C3B8
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022C398: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8022C3B8;
    }
    // 0x8022C398: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8022C39C: bne         $v0, $zero, L_8022C3B4
    if (ctx->r2 != 0) {
        // 0x8022C3A0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022C3B4;
    }
    // 0x8022C3A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C3A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022C3A8: bnel        $v1, $v0, L_8022C3BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022C3AC: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8022C3BC;
    }
    goto skip_0;
    // 0x8022C3AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
    // 0x8022C3B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022C3B4:
    // 0x8022C3B4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022C3B8:
    // 0x8022C3B8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022C3BC:
    // 0x8022C3BC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022C3C0: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022C3C4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022C3C8:
    // 0x8022C3C8: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x8022C3CC: bne         $v0, $zero, L_8022C3FC
    if (ctx->r2 != 0) {
        // 0x8022C3D0: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8022C3FC;
    }
    // 0x8022C3D0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022C3D4: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022C3D8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022C3DC: beq         $v0, $zero, L_8022C3FC
    if (ctx->r2 == 0) {
        // 0x8022C3E0: nop
    
            goto L_8022C3FC;
    }
    // 0x8022C3E0: nop

    // 0x8022C3E4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022C3E8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022C3EC: bne         $v0, $zero, L_8022C3FC
    if (ctx->r2 != 0) {
        // 0x8022C3F0: nop
    
            goto L_8022C3FC;
    }
    // 0x8022C3F0: nop

    // 0x8022C3F4: jal         0x8004F418
    // 0x8022C3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x8022C3F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022C3FC:
    // 0x8022C3FC: lh          $v0, 0xA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XA);
    // 0x8022C400: beq         $v0, $zero, L_8022C410
    if (ctx->r2 == 0) {
        // 0x8022C404: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022C410;
    }
    // 0x8022C404: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C408: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022C40C: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_8022C410:
    // 0x8022C410: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x8022C414: beq         $v0, $zero, L_8022C420
    if (ctx->r2 == 0) {
        // 0x8022C418: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022C420;
    }
    // 0x8022C418: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C41C: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
L_8022C420:
    // 0x8022C420: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022C424: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C428: beq         $v0, $a1, L_8022C440
    if (ctx->r2 == ctx->r5) {
        // 0x8022C42C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C440;
    }
    // 0x8022C42C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C430: jal         0x80050294
    // 0x8022C434: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x8022C434: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022C438: j           L_8022C448
    // 0x8022C43C: nop

        goto L_8022C448;
    // 0x8022C43C: nop

L_8022C440:
    // 0x8022C440: jal         0x8005044C
    // 0x8022C444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022C444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022C448:
    // 0x8022C448: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C44C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C450: beq         $v0, $zero, L_8022C468
    if (ctx->r2 == 0) {
        // 0x8022C454: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C468;
    }
    // 0x8022C454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C458: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022C45C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022C460: jal         0x8003B564
    // 0x8022C464: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022C464: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_8022C468:
    // 0x8022C468: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C46C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022C470: beq         $v0, $zero, L_8022C4E0
    if (ctx->r2 == 0) {
        // 0x8022C474: nop
    
            goto L_8022C4E0;
    }
    // 0x8022C474: nop

    // 0x8022C478: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022C47C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C480: beq         $v0, $zero, L_8022C4E0
    if (ctx->r2 == 0) {
        // 0x8022C484: addiu       $s1, $s2, 0xC
        ctx->r17 = ADD32(ctx->r18, 0XC);
            goto L_8022C4E0;
    }
    // 0x8022C484: addiu       $s1, $s2, 0xC
    ctx->r17 = ADD32(ctx->r18, 0XC);
    // 0x8022C488: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C48C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C490: jal         0x8009A3B4
    // 0x8022C494: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8022C494: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8022C498: lhu         $v0, 0xE($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XE);
    // 0x8022C49C: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022C4A0: sh          $v0, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r2;
    // 0x8022C4A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C4A8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022C4AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C4B0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022C4B4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C4B8: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x8022C4BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C4C0: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022C4C4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022C4C8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022C4CC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022C4D0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C4D4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022C4D8: jal         0x80051E18
    // 0x8022C4DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x8022C4DC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_11:
L_8022C4E0:
    // 0x8022C4E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C4E4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022C4E8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022C4EC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022C4F0: jr          $ra
    // 0x8022C4F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022C4F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80241CEC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241CEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80241CF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80241CF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80241CF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80241CFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241D00: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80241D04: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80241D08: beq         $v0, $zero, L_80241DEC
    if (ctx->r2 == 0) {
        // 0x80241D0C: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_80241DEC;
    }
    // 0x80241D0C: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80241D10: bne         $v0, $zero, L_80241DD0
    if (ctx->r2 != 0) {
        // 0x80241D14: nop
    
            goto L_80241DD0;
    }
    // 0x80241D14: nop

    // 0x80241D18: jal         0x8004F144
    // 0x80241D1C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80241D1C: nop

    after_0:
    // 0x80241D20: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80241D24: beq         $s0, $zero, L_80241DD0
    if (ctx->r16 == 0) {
        // 0x80241D28: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80241DD0;
    }
    // 0x80241D28: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80241D2C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80241D30: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80241D34: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80241D38: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80241D3C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80241D40: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80241D44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241D48: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80241D4C: jal         0x800A3450
    // 0x80241D50: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80241D50: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x80241D54: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x80241D58: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80241D5C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241D60: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80241D64: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80241D68: jal         0x800A3450
    // 0x80241D6C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80241D6C: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x80241D70: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80241D74: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80241D78: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241D7C: jal         0x800A3450
    // 0x80241D80: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80241D80: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80241D84: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80241D88: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80241D8C: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80241D90: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80241D94: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80241D98: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80241D9C: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x80241DA0: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80241DA4: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80241DA8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80241DAC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80241DB0: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80241DB4: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80241DB8: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80241DBC: jal         0x800A3450
    // 0x80241DC0: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80241DC0: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x80241DC4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80241DC8: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80241DCC: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80241DD0:
    // 0x80241DD0: jal         0x800A3450
    // 0x80241DD4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80241DD4: nop

    after_5:
    // 0x80241DD8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80241DDC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80241DE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80241DE4: j           L_80241DF4
    // 0x80241DE8: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80241DF4;
    // 0x80241DE8: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80241DEC:
    // 0x80241DEC: jal         0x8004F5C4
    // 0x80241DF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x80241DF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80241DF4:
    // 0x80241DF4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80241DF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80241DFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80241E00: jr          $ra
    // 0x80241E04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80241E04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802395D4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802395D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802395D8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802395DC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802395E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802395E4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802395E8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802395EC: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x802395F0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x802395F4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802395F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802395FC: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80239600: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80239604: beq         $v1, $v0, L_80239620
    if (ctx->r3 == ctx->r2) {
        // 0x80239608: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80239620;
    }
    // 0x80239608: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8023960C: bne         $v1, $v0, L_8023961C
    if (ctx->r3 != ctx->r2) {
        // 0x80239610: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023961C;
    }
    // 0x80239610: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80239614: j           L_80239620
    // 0x80239618: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_80239620;
    // 0x80239618: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_8023961C:
    // 0x8023961C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80239620:
    // 0x80239620: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80239624: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80239628: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023962C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239630: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80239634: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80239638: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8023963C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239640: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80239644: beq         $a0, $v1, L_8023966C
    if (ctx->r4 == ctx->r3) {
        // 0x80239648: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8023966C;
    }
    // 0x80239648: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8023964C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80239650: jal         0x8003B85C
    // 0x80239654: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80239654: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80239658: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8023965C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80239660: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80239664: jal         0x8003B840
    // 0x80239668: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80239668: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8023966C:
    // 0x8023966C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80239670: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x80239674: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80239678: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8023967C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80239680: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239684: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80239688: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x8023968C: beq         $v1, $v0, L_802396A8
    if (ctx->r3 == ctx->r2) {
        // 0x80239690: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_802396A8;
    }
    // 0x80239690: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80239694: bne         $v1, $v0, L_802396A4
    if (ctx->r3 != ctx->r2) {
        // 0x80239698: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802396A4;
    }
    // 0x80239698: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023969C: j           L_802396A8
    // 0x802396A0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_802396A8;
    // 0x802396A0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802396A4:
    // 0x802396A4: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_802396A8:
    // 0x802396A8: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x802396AC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802396B0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802396B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802396B8: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x802396BC: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x802396C0: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x802396C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802396C8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802396CC: beq         $a0, $v1, L_802396F4
    if (ctx->r4 == ctx->r3) {
        // 0x802396D0: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_802396F4;
    }
    // 0x802396D0: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802396D4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x802396D8: jal         0x8003B85C
    // 0x802396DC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802396DC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x802396E0: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802396E4: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802396E8: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802396EC: jal         0x8003B840
    // 0x802396F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802396F0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802396F4:
    // 0x802396F4: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x802396F8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802396FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80239700: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80239704: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80239708: jr          $ra
    // 0x8023970C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023970C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802390EC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802390EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802390F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802390F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802390F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802390FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239100: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239104: bne         $v0, $zero, L_80239134
    if (ctx->r2 != 0) {
        // 0x80239108: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80239134;
    }
    // 0x80239108: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8023910C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80239110: jal         0x80050294
    // 0x80239114: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80239114: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80239118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023911C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239120: jal         0x80239590
    // 0x80239124: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80239124: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_1:
    // 0x80239128: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023912C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239130: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80239134:
    // 0x80239134: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80239138: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023913C: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80239140: bne         $v1, $v0, L_80239160
    if (ctx->r3 != ctx->r2) {
        // 0x80239144: addiu       $v0, $zero, 0x5C
        ctx->r2 = ADD32(0, 0X5C);
            goto L_80239160;
    }
    // 0x80239144: addiu       $v0, $zero, 0x5C
    ctx->r2 = ADD32(0, 0X5C);
    // 0x80239148: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023914C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239150: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80239154: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80239158: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023915C: addiu       $v0, $zero, 0x5C
    ctx->r2 = ADD32(0, 0X5C);
L_80239160:
    // 0x80239160: bne         $v1, $v0, L_80239174
    if (ctx->r3 != ctx->r2) {
        // 0x80239164: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239174;
    }
    // 0x80239164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239168: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023916C: jal         0x80239590
    // 0x80239170: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_80239590_ovl5(rdram, ctx);
        goto after_2;
    // 0x80239170: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_2:
L_80239174:
    // 0x80239174: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239178: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023917C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239180: jr          $ra
    // 0x80239184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80239184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239458_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239458: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023945C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239460: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239464: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239468: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023946C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239470: bne         $v0, $zero, L_802394A0
    if (ctx->r2 != 0) {
        // 0x80239474: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802394A0;
    }
    // 0x80239474: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80239478: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8023947C: jal         0x80050294
    // 0x80239480: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80239480: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80239484: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239488: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023948C: jal         0x80239590
    // 0x80239490: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80239490: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80239494: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239498: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023949C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802394A0:
    // 0x802394A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802394A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802394A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802394AC: jr          $ra
    // 0x802394B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802394B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FC24_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FC24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FC28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FC2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FC30: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FC34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FC38: lh          $a0, 0x5E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X5E);
    // 0x8022FC3C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022FC40: jal         0x8004FA7C
    // 0x8022FC44: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022FC44: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x8022FC48: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FC4C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022FC50: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022FC54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FC58: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FC5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FC60: bne         $v0, $zero, L_8022FCB4
    if (ctx->r2 != 0) {
        // 0x8022FC64: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022FCB4;
    }
    // 0x8022FC64: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022FC68: jal         0x8003516C
    // 0x8022FC6C: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022FC6C: nop

    after_1:
    // 0x8022FC70: bne         $v0, $zero, L_8022FCB4
    if (ctx->r2 != 0) {
        // 0x8022FC74: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FCB4;
    }
    // 0x8022FC74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FC78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022FC7C: jal         0x80050294
    // 0x8022FC80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022FC80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022FC84: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FC88: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FC8C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022FC90: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022FC94: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022FC98: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022FC9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022FCA0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022FCA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FCA8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8022FCAC: j           L_8022FCBC
    // 0x8022FCB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022FCBC;
    // 0x8022FCB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FCB4:
    // 0x8022FCB4: jal         0x8005044C
    // 0x8022FCB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8022FCB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8022FCBC:
    // 0x8022FCBC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FCC0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FCC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FCC8: jr          $ra
    // 0x8022FCCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FCCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C4F8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C4F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C4FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C500: jal         0x8004F418
    // 0x8022C504: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C504: nop

    after_0:
    // 0x8022C508: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C50C: jr          $ra
    // 0x8022C510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234E28_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234E28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234E2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234E30: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80234E34: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80234E38: jal         0x8004EFE4
    // 0x80234E3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80234E3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80234E40: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80234E44: beq         $s0, $zero, L_80234EB4
    if (ctx->r16 == 0) {
        // 0x80234E48: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80234EB4;
    }
    // 0x80234E48: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80234E4C: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80234E50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234E54: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80234E58: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80234E5C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80234E60: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80234E64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234E68: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80234E6C: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80234E70: jal         0x8009A3B4
    // 0x80234E74: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234E74: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_1:
    // 0x80234E78: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80234E7C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80234E80: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x80234E84: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    // 0x80234E88: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80234E8C: sh          $zero, 0x64($s0)
    MEM_H(0X64, ctx->r16) = 0;
    // 0x80234E90: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80234E94: sw          $zero, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = 0;
    // 0x80234E98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234E9C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234EA0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80234EA4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80234EA8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80234EAC: jal         0x8002A33C
    // 0x80234EB0: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80234EB0: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_2:
L_80234EB4:
    // 0x80234EB4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80234EB8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234EBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234EC0: jr          $ra
    // 0x80234EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802259D0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259D0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802259D4: bne         $v0, $zero, L_802259E0
    if (ctx->r2 != 0) {
        // 0x802259D8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802259E0;
    }
    // 0x802259D8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802259DC: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_802259E0:
    // 0x802259E0: jr          $ra
    // 0x802259E4: nop

    TRACE_RETURN()
    return;
    // 0x802259E4: nop

;}
RECOMP_FUNC void func_80236878_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236878: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023687C: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80236880: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80236884: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80236888: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023688C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80236890: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80236894: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80236898: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023689C: bne         $v0, $s2, L_80236944
    if (ctx->r2 != ctx->r18) {
        // 0x802368A0: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_80236944;
    }
    // 0x802368A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802368A4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802368A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802368AC: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x802368B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802368B4: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x802368B8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802368BC: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x802368C0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802368C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802368C8: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x802368CC: lh          $v0, 0x180($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X180);
    // 0x802368D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802368D4: lh          $v0, 0x182($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X182);
    // 0x802368D8: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x802368DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802368E0: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x802368E4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802368E8: lh          $v0, 0x184($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X184);
    // 0x802368EC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x802368F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802368F4: jal         0x8004EC38
    // 0x802368F8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x802368F8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x802368FC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80236900: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80236904: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80236908: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023690C: jal         0x80034FCC
    // 0x80236910: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_1;
    // 0x80236910: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_1:
    // 0x80236914: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80236918: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023691C: jal         0x80050294
    // 0x80236920: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80236920: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80236924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236928: jal         0x8004EC38
    // 0x8023692C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8023692C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80236930: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236934: sh          $v0, 0x74F0($at)
    MEM_H(0X74F0, ctx->r1) = ctx->r2;
    // 0x80236938: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023693C: j           L_80236970
    // 0x80236940: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
        goto L_80236970;
    // 0x80236940: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_80236944:
    // 0x80236944: lb          $v0, 0xD($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XD);
    // 0x80236948: bne         $v0, $zero, L_80236960
    if (ctx->r2 != 0) {
        // 0x8023694C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80236960;
    }
    // 0x8023694C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80236950: jal         0x8005044C
    // 0x80236954: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80236954: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x80236958: j           L_80236970
    // 0x8023695C: nop

        goto L_80236970;
    // 0x8023695C: nop

L_80236960:
    // 0x80236960: lb          $a1, 0xE($s2)
    ctx->r5 = MEM_B(ctx->r18, 0XE);
    // 0x80236964: jal         0x80050294
    // 0x80236968: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80236968: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8023696C: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
L_80236970:
    // 0x80236970: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80236974: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80236978: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023697C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80236980: jr          $ra
    // 0x80236984: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80236984: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023633C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023633C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236340: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236344: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023634C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236350: bne         $v0, $zero, L_8023636C
    if (ctx->r2 != 0) {
        // 0x80236354: nop
    
            goto L_8023636C;
    }
    // 0x80236354: nop

    // 0x80236358: jal         0x802364CC
    // 0x8023635C: nop

    func_802364CC_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023635C: nop

    after_0:
    // 0x80236360: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236364: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236368: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023636C:
    // 0x8023636C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236370: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236374: jr          $ra
    // 0x80236378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E18_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E18: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80226E1C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80226E20: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80226E24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226E28: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226E2C: addiu       $v1, $v1, 0x73D0
    ctx->r3 = ADD32(ctx->r3, 0X73D0);
    // 0x80226E30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226E34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226E38: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80226E3C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80226E40: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80226E44: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80226E48: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x80226E4C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226E50: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80226E54: lw          $v1, 0x3BF4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3BF4);
    // 0x80226E58: jr          $ra
    // 0x80226E5C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80226E5C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
;}
RECOMP_FUNC void func_802378EC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802378EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802378F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802378F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802378F8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802378FC: addiu       $s2, $s0, 0x2C
    ctx->r18 = ADD32(ctx->r16, 0X2C);
    // 0x80237900: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80237904: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237908: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023790C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237910: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237914: jal         0x8009A3B4
    // 0x80237918: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80237918: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023791C: lbu         $a1, 0xB($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XB);
    // 0x80237920: jal         0x80237CF4
    // 0x80237924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80237CF4_ovl5(rdram, ctx);
        goto after_1;
    // 0x80237924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237928: lbu         $t0, 0xB($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XB);
    // 0x8023792C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80237930: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80237934: andi        $v1, $t0, 0xFF
    ctx->r3 = ctx->r8 & 0XFF;
    // 0x80237938: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023793C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237940: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80237944: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237948: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023794C: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237950: mflo        $a1
    ctx->r5 = lo;
    // 0x80237954: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80237958: nop

    // 0x8023795C: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237960: mflo        $a2
    ctx->r6 = lo;
    // 0x80237964: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80237968: lhu         $v1, 0x2C8($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C8);
    // 0x8023796C: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80237970: mflo        $a3
    ctx->r7 = lo;
    // 0x80237974: lhu         $v0, 0x2CA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2CA);
    // 0x80237978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023797C: sb          $t0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r8;
    // 0x80237980: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x80237984: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80237988: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8023798C: lhu         $v1, 0x2CC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2CC);
    // 0x80237990: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x80237994: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80237998: sra         $a3, $a3, 12
    ctx->r7 = S32(SIGNED(ctx->r7) >> 12);
    // 0x8023799C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802379A0: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x802379A4: jal         0x800504EC
    // 0x802379A8: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_2;
    // 0x802379A8: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    after_2:
    // 0x802379AC: jal         0x8005129C
    // 0x802379B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_3;
    // 0x802379B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802379B4: jal         0x80237C64
    // 0x802379B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80237C64_ovl5(rdram, ctx);
        goto after_4;
    // 0x802379B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802379BC: beq         $v0, $zero, L_80237A1C
    if (ctx->r2 == 0) {
        // 0x802379C0: nop
    
            goto L_80237A1C;
    }
    // 0x802379C0: nop

    // 0x802379C4: jal         0x8002A46C
    // 0x802379C8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_8002A46C_586C(rdram, ctx);
        goto after_5;
    // 0x802379C8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_5:
    // 0x802379CC: addiu       $a0, $zero, 0x140
    ctx->r4 = ADD32(0, 0X140);
    // 0x802379D0: jal         0x8002A33C
    // 0x802379D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802379D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802379D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802379DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802379E0: jal         0x8009A3B4
    // 0x802379E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802379E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802379E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802379EC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802379F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802379F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802379F8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802379FC: jal         0x800502EC
    // 0x80237A00: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_8;
    // 0x80237A00: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_8:
    // 0x80237A04: jal         0x8005129C
    // 0x80237A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_9;
    // 0x80237A08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80237A0C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80237A10: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237A14: j           L_80237A74
    // 0x80237A18: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_80237A74;
    // 0x80237A18: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80237A1C:
    // 0x80237A1C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80237A20: sltiu       $v0, $v0, 0x14
    ctx->r2 = ctx->r2 < 0X14 ? 1 : 0;
    // 0x80237A24: bne         $v0, $zero, L_80237A60
    if (ctx->r2 != 0) {
        // 0x80237A28: nop
    
            goto L_80237A60;
    }
    // 0x80237A28: nop

    // 0x80237A2C: jal         0x8002A46C
    // 0x80237A30: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_8002A46C_586C(rdram, ctx);
        goto after_10;
    // 0x80237A30: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_10:
    // 0x80237A34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237A38: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237A3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237A40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237A48: jal         0x800502EC
    // 0x80237A4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_11;
    // 0x80237A4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x80237A50: jal         0x8005129C
    // 0x80237A54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_12;
    // 0x80237A54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80237A58: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80237A5C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237A60:
    // 0x80237A60: jal         0x80237C98
    // 0x80237A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80237C98_ovl5(rdram, ctx);
        goto after_13;
    // 0x80237A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x80237A68: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80237A6C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237A70: sw          $v0, 0x2DC($s0)
    MEM_W(0X2DC, ctx->r16) = ctx->r2;
L_80237A74:
    // 0x80237A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237A78: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237A7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237A80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237A84: jr          $ra
    // 0x80237A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237A88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236170_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236170: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80236174: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80236178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023617C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236180: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236184: bne         $v0, $zero, L_802361B4
    if (ctx->r2 != 0) {
        // 0x80236188: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802361B4;
    }
    // 0x80236188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023618C: jal         0x80034E3C
    // 0x80236190: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_0;
    // 0x80236190: nop

    after_0:
    // 0x80236194: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236198: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023619C: jal         0x80050294
    // 0x802361A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802361A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802361A4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802361A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802361AC: j           L_802361BC
    // 0x802361B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802361BC;
    // 0x802361B0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802361B4:
    // 0x802361B4: jal         0x8005044C
    // 0x802361B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x802361B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802361BC:
    // 0x802361BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802361C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802361C4: jr          $ra
    // 0x802361C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802361C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DA14_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DA14: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8023DA18: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8023DA1C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023DA20: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8023DA24: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8023DA28: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8023DA2C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023DA30: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DA34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DA38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DA3C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023DA40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DA44: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023DA48: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023DA4C: jal         0x80071110
    // 0x8023DA50: lbu         $a1, 0x66B2($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X66B2);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x8023DA50: lbu         $a1, 0x66B2($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X66B2);
    after_0:
    // 0x8023DA54: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023DA58: beq         $v1, $zero, L_8023DAC8
    if (ctx->r3 == 0) {
        // 0x8023DA5C: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8023DAC8;
    }
    // 0x8023DA5C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8023DA60: bne         $v1, $v0, L_8023DD30
    if (ctx->r3 != ctx->r2) {
        // 0x8023DA64: nop
    
            goto L_8023DD30;
    }
    // 0x8023DA64: nop

    // 0x8023DA68: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023DA6C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DA70: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DA74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DA78: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023DA7C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8023DA80: lw          $v0, 0xC8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC8);
    // 0x8023DA84: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023DA88: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023DA8C: lw          $v1, 0x66B4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X66B4);
    // 0x8023DA90: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023DA94: beql        $v0, $zero, L_8023DACC
    if (ctx->r2 == 0) {
        // 0x8023DA98: addiu       $a0, $s2, 0x34
        ctx->r4 = ADD32(ctx->r18, 0X34);
            goto L_8023DACC;
    }
    goto skip_0;
    // 0x8023DA98: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    skip_0:
    // 0x8023DA9C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023DAA0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023DAA4: lbu         $v0, 0x66AC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X66AC);
    // 0x8023DAA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DAAC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023DAB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023DAB4: lw          $v0, 0x67D4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X67D4);
    // 0x8023DAB8: jalr        $v0
    // 0x8023DABC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023DABC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8023DAC0: jal         0x8004F4F8
    // 0x8023DAC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x8023DAC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
L_8023DAC8:
    // 0x8023DAC8: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
L_8023DACC:
    // 0x8023DACC: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8023DAD0: jal         0x8009A3B4
    // 0x8023DAD4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023DAD4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8023DAD8: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8023DADC: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8023DAE0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023DAE4: jal         0x8009A3B4
    // 0x8023DAE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023DAE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8023DAEC: addiu       $a0, $s2, 0xF0
    ctx->r4 = ADD32(ctx->r18, 0XF0);
    // 0x8023DAF0: addiu       $s0, $s2, 0xE8
    ctx->r16 = ADD32(ctx->r18, 0XE8);
    // 0x8023DAF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023DAF8: jal         0x8009A3B4
    // 0x8023DAFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023DAFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8023DB00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DB04: addiu       $s0, $s2, 0xE0
    ctx->r16 = ADD32(ctx->r18, 0XE0);
    // 0x8023DB08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023DB0C: jal         0x8009A3B4
    // 0x8023DB10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023DB10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8023DB14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DB18: addiu       $s0, $s2, 0xD8
    ctx->r16 = ADD32(ctx->r18, 0XD8);
    // 0x8023DB1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023DB20: jal         0x8009A3B4
    // 0x8023DB24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8023DB24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8023DB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DB2C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023DB30: jal         0x8009A3B4
    // 0x8023DB34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023DB34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8023DB38: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x8023DB3C: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x8023DB40: beq         $v1, $zero, L_8023DD30
    if (ctx->r3 == 0) {
        // 0x8023DB44: sb          $v0, 0xB($s2)
        MEM_B(0XB, ctx->r18) = ctx->r2;
            goto L_8023DD30;
    }
    // 0x8023DB44: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x8023DB48: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x8023DB4C: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x8023DB50: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8023DB54: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023DB58: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x8023DB5C: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x8023DB60: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x8023DB64: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8023DB68: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x8023DB6C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8023DB70: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x8023DB74: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x8023DB78: lh          $a0, 0x4($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X4);
    // 0x8023DB7C: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8023DB80: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x8023DB84: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x8023DB88: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8023DB8C: bne         $v1, $zero, L_8023DBB0
    if (ctx->r3 != 0) {
        // 0x8023DB90: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_8023DBB0;
    }
    // 0x8023DB90: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023DB94: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x8023DB98: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8023DB9C: bne         $v0, $zero, L_8023DBB0
    if (ctx->r2 != 0) {
        // 0x8023DBA0: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_8023DBB0;
    }
    // 0x8023DBA0: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x8023DBA4: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8023DBA8: beq         $v0, $zero, L_8023DBD8
    if (ctx->r2 == 0) {
        // 0x8023DBAC: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8023DBD8;
    }
    // 0x8023DBAC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8023DBB0:
    // 0x8023DBB0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8023DBB4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8023DBB8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8023DBBC: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023DBC0: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8023DBC4: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x8023DBC8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8023DBCC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8023DBD0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8023DBD4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8023DBD8:
    // 0x8023DBD8: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8023DBDC: jal         0x80032308
    // 0x8023DBE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032308_D708(rdram, ctx);
        goto after_9;
    // 0x8023DBE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8023DBE4: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023DBE8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023DBEC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023DBF0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DBF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DBF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DBFC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023DC00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DC04: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8023DC08: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8023DC0C: lw          $a3, 0x6698($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X6698);
    // 0x8023DC10: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023DC14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023DC18: lw          $v0, 0x669C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X669C);
    // 0x8023DC1C: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x8023DC20: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8023DC24: jal         0x80051B48
    // 0x8023DC28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_10;
    // 0x8023DC28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x8023DC2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023DC30: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8023DC34: jal         0x8009A3B4
    // 0x8023DC38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8023DC38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8023DC3C: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x8023DC40: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x8023DC44: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DC48: mflo        $v0
    ctx->r2 = lo;
    // 0x8023DC4C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023DC50: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8023DC54: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x8023DC58: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DC5C: mflo        $v0
    ctx->r2 = lo;
    // 0x8023DC60: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023DC64: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8023DC68: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x8023DC6C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023DC70: mflo        $v0
    ctx->r2 = lo;
    // 0x8023DC74: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023DC78: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x8023DC7C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023DC80: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x8023DC84: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DC88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DC8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DC90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023DC94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DC98: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023DC9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023DCA0: lh          $v1, 0x6694($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X6694);
    // 0x8023DCA4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023DCA8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023DCAC: lhu         $a1, 0x6696($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X6696);
    // 0x8023DCB0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8023DCB4: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8023DCB8: bnel        $v0, $zero, L_8023DCC4
    if (ctx->r2 != 0) {
        // 0x8023DCBC: sh          $a0, 0x6E($s2)
        MEM_H(0X6E, ctx->r18) = ctx->r4;
            goto L_8023DCC4;
    }
    goto skip_1;
    // 0x8023DCBC: sh          $a0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r4;
    skip_1:
    // 0x8023DCC0: sh          $a1, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r5;
L_8023DCC4:
    // 0x8023DCC4: jal         0x8023DF60
    // 0x8023DCC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8023DF60_ovl5(rdram, ctx);
        goto after_12;
    // 0x8023DCC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_12:
    // 0x8023DCCC: lh          $v0, 0x44($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X44);
    // 0x8023DCD0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x8023DCD4: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x8023DCD8: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x8023DCDC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023DCE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023DCE4: lh          $v0, 0x46($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X46);
    // 0x8023DCE8: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x8023DCEC: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x8023DCF0: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023DCF4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8023DCF8: sw          $a1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r5;
    // 0x8023DCFC: lhu         $a0, 0x24($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X24);
    // 0x8023DD00: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023DD04: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023DD08: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x8023DD0C: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8023DD10: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8023DD14: sh          $a0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r4;
    // 0x8023DD18: sh          $a0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r4;
    // 0x8023DD1C: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8023DD20: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x8023DD24: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x8023DD28: j           L_8023DD7C
    // 0x8023DD2C: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
        goto L_8023DD7C;
    // 0x8023DD2C: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
L_8023DD30:
    // 0x8023DD30: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023DD34: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DD38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DD3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DD40: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023DD44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DD48: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023DD4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023DD50: lbu         $v0, 0x66AC($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X66AC);
    // 0x8023DD54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DD58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023DD5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023DD60: lw          $v0, 0x67D4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X67D4);
    // 0x8023DD64: jalr        $v0
    // 0x8023DD68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x8023DD68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_13:
    // 0x8023DD6C: jal         0x8004F4F8
    // 0x8023DD70: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_14;
    // 0x8023DD70: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_14:
    // 0x8023DD74: j           L_8023DDC8
    // 0x8023DD78: nop

        goto L_8023DDC8;
    // 0x8023DD78: nop

L_8023DD7C:
    // 0x8023DD7C: jal         0x8023DEBC
    // 0x8023DD80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8023DEBC_ovl5(rdram, ctx);
        goto after_15;
    // 0x8023DD80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_15:
    // 0x8023DD84: jal         0x8023E06C
    // 0x8023DD88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8023E06C_ovl5(rdram, ctx);
        goto after_16;
    // 0x8023DD88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x8023DD8C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023DD90: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023DD94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023DD98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DD9C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023DDA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DDA4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023DDA8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023DDAC: lbu         $v0, 0x66AC($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X66AC);
    // 0x8023DDB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023DDB4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023DDB8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023DDBC: lw          $v0, 0x67CC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X67CC);
    // 0x8023DDC0: jalr        $v0
    // 0x8023DDC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x8023DDC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
L_8023DDC8:
    // 0x8023DDC8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8023DDCC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8023DDD0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023DDD4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8023DDD8: jr          $ra
    // 0x8023DDDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8023DDDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022D684_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D688: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D68C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D694: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022D698: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D69C: jal         0x8004DA90
    // 0x8022D6A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022D6A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022D6A4: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x8022D6A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D6AC: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x8022D6B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D6B4: bne         $v0, $zero, L_8022D6EC
    if (ctx->r2 != 0) {
        // 0x8022D6B8: nop
    
            goto L_8022D6EC;
    }
    // 0x8022D6B8: nop

    // 0x8022D6BC: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022D6C0: beq         $v0, $zero, L_8022D6D4
    if (ctx->r2 == 0) {
        // 0x8022D6C4: nop
    
            goto L_8022D6D4;
    }
    // 0x8022D6C4: nop

    // 0x8022D6C8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022D6CC: j           L_8022D6DC
    // 0x8022D6D0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_8022D6DC;
    // 0x8022D6D0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_8022D6D4:
    // 0x8022D6D4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022D6D8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022D6DC:
    // 0x8022D6DC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022D6E0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022D6E4: j           L_8022D73C
    // 0x8022D6E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022D73C;
    // 0x8022D6E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022D6EC:
    // 0x8022D6EC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022D6F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D6F4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022D6F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D6FC: bne         $v0, $zero, L_8022D70C
    if (ctx->r2 != 0) {
        // 0x8022D700: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D70C;
    }
    // 0x8022D700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D704: j           L_8022D73C
    // 0x8022D708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022D73C;
    // 0x8022D708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D70C:
    // 0x8022D70C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022D710: jal         0x8022F614
    // 0x8022D714: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022F614_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022D714: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x8022D718: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D71C: beq         $v0, $zero, L_8022D740
    if (ctx->r2 == 0) {
        // 0x8022D720: nop
    
            goto L_8022D740;
    }
    // 0x8022D720: nop

    // 0x8022D724: jal         0x8022F578
    // 0x8022D728: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022F578_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022D728: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022D72C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D730: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022D734: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022D738: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022D73C:
    // 0x8022D73C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D740:
    // 0x8022D740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D744: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D748: jr          $ra
    // 0x8022D74C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D74C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023DDE0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023DDE0: jr          $ra
    // 0x8023DDE4: nop

    TRACE_RETURN()
    return;
    // 0x8023DDE4: nop

;}
RECOMP_FUNC void func_8023B4DC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B4DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B4E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B4E4: jal         0x8004F684
    // 0x8023B4E8: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8023B4E8: nop

    after_0:
    // 0x8023B4EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B4F0: jr          $ra
    // 0x8023B4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023B4F8: nop

    // 0x8023B4FC: nop

;}
RECOMP_FUNC void func_8023F9B8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F9B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F9BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F9C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023F9C4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023F9C8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8023F9CC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023F9D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023F9D4: jal         0x80040F30
    // 0x8023F9D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x8023F9D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023F9DC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8023F9E0: beq         $s2, $zero, L_8023FB50
    if (ctx->r18 == 0) {
        // 0x8023F9E4: andi        $v0, $s2, 0x1000
        ctx->r2 = ctx->r18 & 0X1000;
            goto L_8023FB50;
    }
    // 0x8023F9E4: andi        $v0, $s2, 0x1000
    ctx->r2 = ctx->r18 & 0X1000;
    // 0x8023F9E8: beq         $v0, $zero, L_8023FAE8
    if (ctx->r2 == 0) {
        // 0x8023F9EC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8023FAE8;
    }
    // 0x8023F9EC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023F9F0: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x8023F9F4: bltzl       $v0, L_8023FA10
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023F9F8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8023FA10;
    }
    goto skip_0;
    // 0x8023F9F8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8023F9FC: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x8023FA00: bnel        $v0, $zero, L_8023FA20
    if (ctx->r2 != 0) {
        // 0x8023FA04: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_8023FA20;
    }
    goto skip_1;
    // 0x8023FA04: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    skip_1:
    // 0x8023FA08: j           L_8023FA3C
    // 0x8023FA0C: nop

        goto L_8023FA3C;
    // 0x8023FA0C: nop

L_8023FA10:
    // 0x8023FA10: slti        $v0, $v0, 0xA01
    ctx->r2 = SIGNED(ctx->r2) < 0XA01 ? 1 : 0;
    // 0x8023FA14: beq         $v0, $zero, L_8023FA3C
    if (ctx->r2 == 0) {
        // 0x8023FA18: nop
    
            goto L_8023FA3C;
    }
    // 0x8023FA18: nop

    // 0x8023FA1C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_8023FA20:
    // 0x8023FA20: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x8023FA24: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x8023FA28: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x8023FA2C: sh          $zero, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = 0;
    // 0x8023FA30: sh          $zero, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = 0;
    // 0x8023FA34: j           L_8023FA7C
    // 0x8023FA38: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
        goto L_8023FA7C;
    // 0x8023FA38: sh          $zero, 0x50($s1)
    MEM_H(0X50, ctx->r17) = 0;
L_8023FA3C:
    // 0x8023FA3C: lh          $v1, 0x46($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X46);
    // 0x8023FA40: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023FA44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023FA48: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023FA4C: bltzl       $v0, L_8023FA54
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023FA50: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8023FA54;
    }
    goto skip_2;
    // 0x8023FA50: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_8023FA54:
    // 0x8023FA54: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x8023FA58: lhu         $v0, 0x44($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X44);
    // 0x8023FA5C: sh          $v1, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r3;
    // 0x8023FA60: lhu         $v1, 0x48($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X48);
    // 0x8023FA64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FA68: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8023FA6C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023FA70: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x8023FA74: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8023FA78: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
L_8023FA7C:
    // 0x8023FA7C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023FA80: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023FA84: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023FA88: bne         $v1, $v0, L_8023FB08
    if (ctx->r3 != ctx->r2) {
        // 0x8023FA8C: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_8023FB08;
    }
    // 0x8023FA8C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x8023FA90: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8023FA94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023FA98: bne         $v1, $v0, L_8023FB08
    if (ctx->r3 != ctx->r2) {
        // 0x8023FA9C: nop
    
            goto L_8023FB08;
    }
    // 0x8023FA9C: nop

    // 0x8023FAA0: jal         0x8004F568
    // 0x8023FAA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x8023FAA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023FAA8: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    // 0x8023FAAC: jal         0x8002A33C
    // 0x8023FAB0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023FAB0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8023FAB4: jal         0x8004F144
    // 0x8023FAB8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8023FAB8: nop

    after_3:
    // 0x8023FABC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023FAC0: beq         $s0, $zero, L_8023FAD4
    if (ctx->r16 == 0) {
        // 0x8023FAC4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023FAD4;
    }
    // 0x8023FAC4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023FAC8: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x8023FACC: jal         0x8009A3B4
    // 0x8023FAD0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023FAD0: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_4:
L_8023FAD4:
    // 0x8023FAD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023FAD8: jal         0x8023FCAC
    // 0x8023FADC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8023FCAC_ovl5(rdram, ctx);
        goto after_5;
    // 0x8023FADC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023FAE0: j           L_8023FB48
    // 0x8023FAE4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
        goto L_8023FB48;
    // 0x8023FAE4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_8023FAE8:
    // 0x8023FAE8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023FAEC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023FAF0: bne         $v1, $v0, L_8023FB08
    if (ctx->r3 != ctx->r2) {
        // 0x8023FAF4: addiu       $a0, $zero, 0xB3
        ctx->r4 = ADD32(0, 0XB3);
            goto L_8023FB08;
    }
    // 0x8023FAF4: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    // 0x8023FAF8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8023FAFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023FB00: beq         $v1, $v0, L_8023FB10
    if (ctx->r3 == ctx->r2) {
        // 0x8023FB04: nop
    
            goto L_8023FB10;
    }
    // 0x8023FB04: nop

L_8023FB08:
    // 0x8023FB08: jal         0x8002A33C
    // 0x8023FB0C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8023FB0C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_8023FB10:
    // 0x8023FB10: jal         0x8004F144
    // 0x8023FB14: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x8023FB14: nop

    after_7:
    // 0x8023FB18: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023FB1C: beq         $s0, $zero, L_8023FB44
    if (ctx->r16 == 0) {
        // 0x8023FB20: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023FB44;
    }
    // 0x8023FB20: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023FB24: addiu       $a1, $s1, 0x88
    ctx->r5 = ADD32(ctx->r17, 0X88);
    // 0x8023FB28: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8023FB2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023FB30: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023FB34: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8023FB38: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8023FB3C: jal         0x8009A3B4
    // 0x8023FB40: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023FB40: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_8:
L_8023FB44:
    // 0x8023FB44: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
L_8023FB48:
    // 0x8023FB48: jal         0x80040834
    // 0x8023FB4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_9;
    // 0x8023FB4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
L_8023FB50:
    // 0x8023FB50: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x8023FB54: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023FB58: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FB5C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023FB60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023FB64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023FB68: jr          $ra
    // 0x8023FB6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023FB6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022DCB4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DCB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DCB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DCBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DCC0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022DCC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022DCC8: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022DCCC: bne         $v0, $zero, L_8022DD0C
    if (ctx->r2 != 0) {
        // 0x8022DCD0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022DD0C;
    }
    // 0x8022DCD0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022DCD4: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022DCD8: bne         $v0, $zero, L_8022DD00
    if (ctx->r2 != 0) {
        // 0x8022DCDC: nop
    
            goto L_8022DD00;
    }
    // 0x8022DCDC: nop

    // 0x8022DCE0: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x8022DCE4: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022DCE8: bne         $v1, $v0, L_8022DD00
    if (ctx->r3 != ctx->r2) {
        // 0x8022DCEC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022DD00;
    }
    // 0x8022DCEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DCF0: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x8022DCF4: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022DCF8: j           L_8022DD3C
    // 0x8022DCFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022DD3C;
    // 0x8022DCFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022DD00:
    // 0x8022DD00: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x8022DD04: beq         $v0, $zero, L_8022DD6C
    if (ctx->r2 == 0) {
        // 0x8022DD08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DD6C;
    }
    // 0x8022DD08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022DD0C:
    // 0x8022DD0C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022DD10: bne         $v0, $zero, L_8022DD6C
    if (ctx->r2 != 0) {
        // 0x8022DD14: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DD6C;
    }
    // 0x8022DD14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DD18: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022DD1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DD20: bne         $v1, $v0, L_8022DD6C
    if (ctx->r3 != ctx->r2) {
        // 0x8022DD24: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022DD6C;
    }
    // 0x8022DD24: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x8022DD28: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022DD2C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022DD30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DD34: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022DD38: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022DD3C:
    // 0x8022DD3C: jal         0x8009A3B4
    // 0x8022DD40: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DD40: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022DD44: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022DD48: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022DD4C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022DD50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DD54: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022DD58: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022DD5C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022DD60: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022DD64: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022DD68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022DD6C:
    // 0x8022DD6C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022DD70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DD74: jal         0x8004DA90
    // 0x8022DD78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022DD78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022DD7C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022DD80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DD84: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022DD88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DD8C: bne         $v0, $zero, L_8022DDBC
    if (ctx->r2 != 0) {
        // 0x8022DD90: nop
    
            goto L_8022DDBC;
    }
    // 0x8022DD90: nop

    // 0x8022DD94: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DD98: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022DD9C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DDA0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022DDA4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022DDA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DDAC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022DDB0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022DDB4: j           L_8022DE0C
    // 0x8022DDB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022DE0C;
    // 0x8022DDB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DDBC:
    // 0x8022DDBC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022DDC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DDC4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022DDC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DDCC: bne         $v0, $zero, L_8022DDDC
    if (ctx->r2 != 0) {
        // 0x8022DDD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DDDC;
    }
    // 0x8022DDD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DDD4: j           L_8022DE0C
    // 0x8022DDD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022DE0C;
    // 0x8022DDD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DDDC:
    // 0x8022DDDC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022DDE0: jal         0x8022F614
    // 0x8022DDE4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022F614_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022DDE4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x8022DDE8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DDEC: beq         $v0, $zero, L_8022DE10
    if (ctx->r2 == 0) {
        // 0x8022DDF0: nop
    
            goto L_8022DE10;
    }
    // 0x8022DDF0: nop

    // 0x8022DDF4: jal         0x8022F578
    // 0x8022DDF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022F578_ovl5(rdram, ctx);
        goto after_3;
    // 0x8022DDF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x8022DDFC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DE00: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022DE04: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022DE08: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022DE0C:
    // 0x8022DE0C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DE10:
    // 0x8022DE10: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DE14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DE18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DE1C: jr          $ra
    // 0x8022DE20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DE20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023ABC8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023ABC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023ABCC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023ABD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023ABD4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023ABD8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023ABDC: lhu         $v0, 0x440($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X440);
    // 0x8023ABE0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023ABE4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023ABE8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023ABEC: beq         $v0, $zero, L_8023AC04
    if (ctx->r2 == 0) {
        // 0x8023ABF0: addiu       $s1, $s0, 0x440
        ctx->r17 = ADD32(ctx->r16, 0X440);
            goto L_8023AC04;
    }
    // 0x8023ABF0: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023ABF4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023ABF8: addiu       $a1, $a1, 0x6464
    ctx->r5 = ADD32(ctx->r5, 0X6464);
    // 0x8023ABFC: j           L_8023AC0C
    // 0x8023AC00: addiu       $a0, $s0, 0x490
    ctx->r4 = ADD32(ctx->r16, 0X490);
        goto L_8023AC0C;
    // 0x8023AC00: addiu       $a0, $s0, 0x490
    ctx->r4 = ADD32(ctx->r16, 0X490);
L_8023AC04:
    // 0x8023AC04: addiu       $a0, $s0, 0x490
    ctx->r4 = ADD32(ctx->r16, 0X490);
    // 0x8023AC08: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
L_8023AC0C:
    // 0x8023AC0C: jal         0x8009A3B4
    // 0x8023AC10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023AC10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8023AC14: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8023AC18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AC1C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8023AC20: beq         $v1, $v0, L_8023AC68
    if (ctx->r3 == ctx->r2) {
        // 0x8023AC24: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023AC68;
    }
    // 0x8023AC24: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023AC28: beql        $v0, $zero, L_8023AC40
    if (ctx->r2 == 0) {
        // 0x8023AC2C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023AC40;
    }
    goto skip_0;
    // 0x8023AC2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023AC30: beq         $v1, $zero, L_8023AC50
    if (ctx->r3 == 0) {
        // 0x8023AC34: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8023AC50;
    }
    // 0x8023AC34: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023AC38: j           L_8023AECC
    // 0x8023AC3C: nop

        goto L_8023AECC;
    // 0x8023AC3C: nop

L_8023AC40:
    // 0x8023AC40: beq         $v1, $v0, L_8023ACCC
    if (ctx->r3 == ctx->r2) {
        // 0x8023AC44: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8023ACCC;
    }
    // 0x8023AC44: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023AC48: j           L_8023AECC
    // 0x8023AC4C: nop

        goto L_8023AECC;
    // 0x8023AC4C: nop

L_8023AC50:
    // 0x8023AC50: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023AC54: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023AC58: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8023AC5C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023AC60: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023AC64: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023AC68:
    // 0x8023AC68: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8023AC6C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023AC70: addiu       $a1, $s1, 0x50
    ctx->r5 = ADD32(ctx->r17, 0X50);
    // 0x8023AC74: jal         0x8004F820
    // 0x8023AC78: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8023AC78: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_1:
    // 0x8023AC7C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023AC80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AC84: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023AC88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AC8C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023AC90: slti        $v0, $v0, 0x60
    ctx->r2 = SIGNED(ctx->r2) < 0X60 ? 1 : 0;
    // 0x8023AC94: beq         $v0, $zero, L_8023AECC
    if (ctx->r2 == 0) {
        // 0x8023AC98: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8023AECC;
    }
    // 0x8023AC98: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023AC9C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8023ACA0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023ACA4: beq         $v0, $zero, L_8023ACB8
    if (ctx->r2 == 0) {
        // 0x8023ACA8: nop
    
            goto L_8023ACB8;
    }
    // 0x8023ACA8: nop

    // 0x8023ACAC: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x8023ACB0: beq         $v0, $zero, L_8023AD94
    if (ctx->r2 == 0) {
        // 0x8023ACB4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023AD94;
    }
    // 0x8023ACB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023ACB8:
    // 0x8023ACB8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023ACBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023ACC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023ACC4: j           L_8023AECC
    // 0x8023ACC8: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
        goto L_8023AECC;
    // 0x8023ACC8: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
L_8023ACCC:
    // 0x8023ACCC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023ACD0: addiu       $a1, $s1, 0x50
    ctx->r5 = ADD32(ctx->r17, 0X50);
    // 0x8023ACD4: jal         0x8004F820
    // 0x8023ACD8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023ACD8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_2:
    // 0x8023ACDC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8023ACE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023ACE4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023ACE8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8023ACEC: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x8023ACF0: bne         $v0, $zero, L_8023AD84
    if (ctx->r2 != 0) {
        // 0x8023ACF4: nop
    
            goto L_8023AD84;
    }
    // 0x8023ACF4: nop

    // 0x8023ACF8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023ACFC: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023AD00: bne         $v0, $zero, L_8023AD1C
    if (ctx->r2 != 0) {
        // 0x8023AD04: lui         $v0, 0x7
        ctx->r2 = S32(0X7 << 16);
            goto L_8023AD1C;
    }
    // 0x8023AD04: lui         $v0, 0x7
    ctx->r2 = S32(0X7 << 16);
    // 0x8023AD08: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8023AD0C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023AD10: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023AD14: beq         $v0, $zero, L_8023AD94
    if (ctx->r2 == 0) {
        // 0x8023AD18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023AD94;
    }
    // 0x8023AD18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023AD1C:
    // 0x8023AD1C: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x8023AD20: bne         $v0, $zero, L_8023AD84
    if (ctx->r2 != 0) {
        // 0x8023AD24: lui         $v1, 0x500
        ctx->r3 = S32(0X500 << 16);
            goto L_8023AD84;
    }
    // 0x8023AD24: lui         $v1, 0x500
    ctx->r3 = S32(0X500 << 16);
    // 0x8023AD28: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8023AD2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023AD30: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x8023AD34: bne         $v0, $v1, L_8023AD84
    if (ctx->r2 != ctx->r3) {
        // 0x8023AD38: lui         $v0, 0x7
        ctx->r2 = S32(0X7 << 16);
            goto L_8023AD84;
    }
    // 0x8023AD38: lui         $v0, 0x7
    ctx->r2 = S32(0X7 << 16);
    // 0x8023AD3C: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x8023AD40: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023AD44: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8023AD48: bne         $v0, $zero, L_8023AD58
    if (ctx->r2 != 0) {
        // 0x8023AD4C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023AD58;
    }
    // 0x8023AD4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023AD50: j           L_8023AD94
    // 0x8023AD54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023AD94;
    // 0x8023AD54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023AD58:
    // 0x8023AD58: lhu         $v1, 0x88($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X88);
    // 0x8023AD5C: beq         $v1, $v0, L_8023AD7C
    if (ctx->r3 == ctx->r2) {
        // 0x8023AD60: lui         $v0, 0x1F
        ctx->r2 = S32(0X1F << 16);
            goto L_8023AD7C;
    }
    // 0x8023AD60: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x8023AD64: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023AD68: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8023AD6C: bne         $v0, $zero, L_8023AD94
    if (ctx->r2 != 0) {
        // 0x8023AD70: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023AD94;
    }
    // 0x8023AD70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023AD74: j           L_8023AD94
    // 0x8023AD78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8023AD94;
    // 0x8023AD78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023AD7C:
    // 0x8023AD7C: j           L_8023AD94
    // 0x8023AD80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8023AD94;
    // 0x8023AD80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8023AD84:
    // 0x8023AD84: jal         0x8023AEE0
    // 0x8023AD88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023AEE0_ovl5(rdram, ctx);
        goto after_3;
    // 0x8023AD88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023AD8C: beq         $v0, $zero, L_8023ADA8
    if (ctx->r2 == 0) {
        // 0x8023AD90: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023ADA8;
    }
    // 0x8023AD90: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8023AD94:
    // 0x8023AD94: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023AD98: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023AD9C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023ADA0: j           L_8023AECC
    // 0x8023ADA4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8023AECC;
    // 0x8023ADA4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023ADA8:
    // 0x8023ADA8: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    // 0x8023ADAC: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8023ADB0: beql        $v0, $zero, L_8023ADD0
    if (ctx->r2 == 0) {
        // 0x8023ADB4: sh          $zero, 0x80($s1)
        MEM_H(0X80, ctx->r17) = 0;
            goto L_8023ADD0;
    }
    goto skip_1;
    // 0x8023ADB4: sh          $zero, 0x80($s1)
    MEM_H(0X80, ctx->r17) = 0;
    skip_1:
    // 0x8023ADB8: lhu         $v1, 0x80($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X80);
    // 0x8023ADBC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023ADC0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023ADC4: andi        $v0, $v0, 0xFBFF
    ctx->r2 = ctx->r2 & 0XFBFF;
    // 0x8023ADC8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023ADCC: sh          $v1, 0x80($s1)
    MEM_H(0X80, ctx->r17) = ctx->r3;
L_8023ADD0:
    // 0x8023ADD0: jal         0x8003E934
    // 0x8023ADD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8023ADD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023ADD8: lhu         $v1, 0x80($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X80);
    // 0x8023ADDC: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x8023ADE0: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x8023ADE4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023ADE8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023ADEC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023ADF0: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8023ADF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023ADF8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023ADFC: bltzl       $v0, L_8023AE18
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023AE00: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8023AE18;
    }
    goto skip_2;
    // 0x8023AE00: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
    // 0x8023AE04: slti        $v0, $v0, 0x41
    ctx->r2 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x8023AE08: beq         $v0, $zero, L_8023AE24
    if (ctx->r2 == 0) {
        // 0x8023AE0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023AE24;
    }
    // 0x8023AE0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AE10: j           L_8023AE5C
    // 0x8023AE14: nop

        goto L_8023AE5C;
    // 0x8023AE14: nop

L_8023AE18:
    // 0x8023AE18: slti        $v0, $v0, 0x41
    ctx->r2 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x8023AE1C: bne         $v0, $zero, L_8023AE5C
    if (ctx->r2 != 0) {
        // 0x8023AE20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023AE5C;
    }
    // 0x8023AE20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023AE24:
    // 0x8023AE24: lh          $v0, 0x4E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4E);
    // 0x8023AE28: bgez        $v0, L_8023AE44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023AE2C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023AE44;
    }
    // 0x8023AE2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023AE30: slti        $v0, $v0, -0x8
    ctx->r2 = SIGNED(ctx->r2) < -0X8 ? 1 : 0;
    // 0x8023AE34: beq         $v0, $zero, L_8023AE50
    if (ctx->r2 == 0) {
        // 0x8023AE38: addiu       $v0, $zero, -0x80
        ctx->r2 = ADD32(0, -0X80);
            goto L_8023AE50;
    }
    // 0x8023AE38: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8023AE3C: j           L_8023AE58
    // 0x8023AE40: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
        goto L_8023AE58;
    // 0x8023AE40: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
L_8023AE44:
    // 0x8023AE44: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x8023AE48: beq         $v0, $zero, L_8023AE54
    if (ctx->r2 == 0) {
        // 0x8023AE4C: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8023AE54;
    }
    // 0x8023AE4C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8023AE50:
    // 0x8023AE50: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
L_8023AE54:
    // 0x8023AE54: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
L_8023AE58:
    // 0x8023AE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023AE5C:
    // 0x8023AE5C: lhu         $a1, 0x4C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4C);
    // 0x8023AE60: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023AE64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023AE68: lhu         $a2, 0x4E($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4E);
    // 0x8023AE6C: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x8023AE70: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023AE74: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023AE78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023AE7C: lh          $v1, -0x2400($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2400);
    // 0x8023AE80: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023AE84: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8023AE88: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023AE8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AE90: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8023AE94: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8023AE98: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023AE9C: jal         0x8004DA90
    // 0x8023AEA0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8023AEA0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_5:
    // 0x8023AEA4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8023AEA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AEAC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8023AEB0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023AEB4: lh          $v0, 0x4C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4C);
    // 0x8023AEB8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023AEBC: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8023AEC0: beq         $v0, $zero, L_8023AECC
    if (ctx->r2 == 0) {
        // 0x8023AEC4: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_8023AECC;
    }
    // 0x8023AEC4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8023AEC8: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
L_8023AECC:
    // 0x8023AECC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023AED0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023AED4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023AED8: jr          $ra
    // 0x8023AEDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023AEDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F614_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F614: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022F618: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022F61C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F620: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022F624: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022F628: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x8022F62C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022F630: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x8022F634: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022F638: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022F63C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022F640: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022F644: jal         0x8004DC2C
    // 0x8022F648: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8022F648: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x8022F64C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8022F650: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022F654: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F658: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022F65C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x8022F660: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022F664: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8022F668: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022F66C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F670: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x8022F674: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8022F678: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022F67C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022F680: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022F684: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8022F688: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022F68C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8022F690: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8022F694: beq         $a0, $zero, L_8022F6A4
    if (ctx->r4 == 0) {
        // 0x8022F698: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F6A4;
    }
    // 0x8022F698: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F69C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x8022F6A0: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_8022F6A4:
    // 0x8022F6A4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022F6A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F6AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F6B0: jr          $ra
    // 0x8022F6B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022F6B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022F6B8: nop

    // 0x8022F6BC: nop

;}
RECOMP_FUNC void func_8022AA90_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA90: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022AA94: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022AA98: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022AA9C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8022AAA0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8022AAA4: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8022AAA8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8022AAAC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8022AAB0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022AAB4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022AAB8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022AABC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022AAC0: lw          $s0, 0x24($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X24);
    // 0x8022AAC4: lbu         $v1, 0x5($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AAC8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022AACC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022AAD0: lui         $s3, 0x8021
    ctx->r19 = S32(0X8021 << 16);
    // 0x8022AAD4: addiu       $s3, $s3, 0x9D0
    ctx->r19 = ADD32(ctx->r19, 0X9D0);
    // 0x8022AAD8: sltiu       $v0, $v1, 0x13
    ctx->r2 = ctx->r3 < 0X13 ? 1 : 0;
    // 0x8022AADC: beq         $v0, $zero, L_8022B26C
    if (ctx->r2 == 0) {
        // 0x8022AAE0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022B26C;
    }
    // 0x8022AAE0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022AAE4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AAE8: addu        $at, $at, $v0
    gpr jr_addend_8022AAF0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AAEC: lw          $v0, 0x7060($at)
    ctx->r2 = ADD32(ctx->r1, 0X7060);
    // 0x8022AAF0: jr          $v0
    // 0x8022AAF4: nop

    switch (jr_addend_8022AAF0 >> 2) {
        case 0: goto L_8022AAF8; break;
        case 1: goto L_8022AB10; break;
        case 2: goto L_8022AB70; break;
        case 3: goto L_8022ABA4; break;
        case 4: goto L_8022AC30; break;
        case 5: goto L_8022AC68; break;
        case 6: goto L_8022AD48; break;
        case 7: goto L_8022AD7C; break;
        case 8: goto L_8022AE78; break;
        case 9: goto L_8022AF5C; break;
        case 10: goto L_8022AFD0; break;
        case 11: goto L_8022AFF4; break;
        case 12: goto L_8022B0C4; break;
        case 13: goto L_8022B100; break;
        case 14: goto L_8022B134; break;
        case 15: goto L_8022B170; break;
        case 16: goto L_8022B1A4; break;
        case 17: goto L_8022B1CC; break;
        case 18: goto L_8022B20C; break;
        default: switch_error(__func__, 0x8022AAF0, 0x80247060);
    }
    // 0x8022AAF4: nop

L_8022AAF8:
    // 0x8022AAF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022AAFC: jal         0x800616FC
    // 0x8022AB00: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x8022AB00: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x8022AB04: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AB08: j           L_8022B204
    // 0x8022AB0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022AB0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AB10:
    // 0x8022AB10: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AB14: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022AB18: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022AB1C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AB20: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022AB24: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8022B26C;
    }
    // 0x8022AB24: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022AB28: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022AB2C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022AB30: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022AB34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AB38: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8022AB3C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AB40: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x8022AB44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AB48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AB4C: addiu       $v0, $v0, -0x102
    ctx->r2 = ADD32(ctx->r2, -0X102);
    // 0x8022AB50: jal         0x8003501C
    // 0x8022AB54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8003501C_1041C(rdram, ctx);
        goto after_1;
    // 0x8022AB54: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022AB58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AB5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AB60: sb          $v0, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = ctx->r2;
    // 0x8022AB64: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AB68: j           L_8022B204
    // 0x8022AB6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022AB6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AB70:
    // 0x8022AB70: jal         0x8003516C
    // 0x8022AB74: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_2;
    // 0x8022AB74: nop

    after_2:
    // 0x8022AB78: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022AB7C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022B26C;
    }
    // 0x8022AB7C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022AB80: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x8022AB84: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AB88: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022AB8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AB90: jal         0x800616FC
    // 0x8022AB94: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x8022AB94: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022AB98: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AB9C: j           L_8022B204
    // 0x8022ABA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022ABA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022ABA4:
    // 0x8022ABA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ABA8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022ABAC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022ABB0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022ABB4: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022ABB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B26C;
    }
    // 0x8022ABB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ABBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABC0: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022ABC4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022ABC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABCC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022ABD0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022ABD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABD8: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022ABDC: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x8022ABE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABE4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022ABE8: addiu       $v0, $zero, 0x9E1
    ctx->r2 = ADD32(0, 0X9E1);
    // 0x8022ABEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABF0: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022ABF4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022ABF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ABFC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022AC00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AC04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AC08: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x8022AC0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AC10: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022AC14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AC18: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022AC1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022AC20: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022AC24: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AC28: j           L_8022B204
    // 0x8022AC2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022AC2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AC30:
    // 0x8022AC30: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022AC34: addiu       $a1, $a1, 0x47CC
    ctx->r5 = ADD32(ctx->r5, 0X47CC);
    // 0x8022AC38: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x8022AC3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AC40: bne         $v1, $v0, L_8022B26C
    if (ctx->r3 != ctx->r2) {
        // 0x8022AC44: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022B26C;
    }
    // 0x8022AC44: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022AC48: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022AC4C: jal         0x80034E74
    // 0x8022AC50: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    func_80034E74_10274(rdram, ctx);
        goto after_4;
    // 0x8022AC50: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    after_4:
    // 0x8022AC54: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AC58: sb          $zero, 0x7440($at)
    MEM_B(0X7440, ctx->r1) = 0;
    // 0x8022AC5C: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AC60: j           L_8022B204
    // 0x8022AC64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022AC64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AC68:
    // 0x8022AC68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AC6C: lb          $v0, 0x47CC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CC);
    // 0x8022AC70: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022AC74: nop
    
            goto L_8022B26C;
    }
    // 0x8022AC74: nop

    // 0x8022AC78: jal         0x8004EEAC
    // 0x8022AC7C: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_5;
    // 0x8022AC7C: nop

    after_5:
    // 0x8022AC80: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022AC84: beq         $s0, $zero, L_8022ACEC
    if (ctx->r16 == 0) {
        // 0x8022AC88: addiu       $v0, $zero, 0x2C2
        ctx->r2 = ADD32(0, 0X2C2);
            goto L_8022ACEC;
    }
    // 0x8022AC88: addiu       $v0, $zero, 0x2C2
    ctx->r2 = ADD32(0, 0X2C2);
    // 0x8022AC8C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022AC90: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022AC94: addiu       $v0, $zero, -0x301
    ctx->r2 = ADD32(0, -0X301);
    // 0x8022AC98: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AC9C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022ACA0: addiu       $v0, $zero, 0x7D0
    ctx->r2 = ADD32(0, 0X7D0);
    // 0x8022ACA4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022ACA8: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8022ACAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ACB0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022ACB4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022ACB8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022ACBC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022ACC0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022ACC4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8022ACC8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022ACCC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022ACD0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022ACD4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022ACD8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022ACDC: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022ACE0: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022ACE4: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8022ACE8: sw          $s0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r16;
L_8022ACEC:
    // 0x8022ACEC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022ACF0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022ACF4: jal         0x8005F6B4
    // 0x8022ACF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_6;
    // 0x8022ACF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8022ACFC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022AD00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AD04: sw          $v0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r2;
    // 0x8022AD08: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022AD0C: addiu       $v0, $v0, -0x84
    ctx->r2 = ADD32(ctx->r2, -0X84);
    // 0x8022AD10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AD14: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x8022AD18: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022AD1C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022AD20: sw          $v0, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r2;
    // 0x8022AD24: lui         $v0, 0xFFE0
    ctx->r2 = S32(0XFFE0 << 16);
    // 0x8022AD28: sw          $zero, 0x44($s3)
    MEM_W(0X44, ctx->r19) = 0;
    // 0x8022AD2C: sw          $v0, 0x48($s3)
    MEM_W(0X48, ctx->r19) = ctx->r2;
    // 0x8022AD30: addiu       $v1, $v1, 0x120
    ctx->r3 = ADD32(ctx->r3, 0X120);
    // 0x8022AD34: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AD38: sw          $v1, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r3;
    // 0x8022AD3C: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AD40: j           L_8022B204
    // 0x8022AD44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022AD44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AD48:
    // 0x8022AD48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AD4C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022AD50: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022AD54: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022B26C;
    }
    // 0x8022AD54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022AD58: addiu       $a1, $zero, 0x6C
    ctx->r5 = ADD32(0, 0X6C);
    // 0x8022AD5C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AD60: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022AD64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AD68: jal         0x800616FC
    // 0x8022AD6C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_7;
    // 0x8022AD6C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022AD70: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AD74: j           L_8022B204
    // 0x8022AD78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022AD78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AD7C:
    // 0x8022AD7C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AD80: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022AD84: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022AD88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AD8C: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022AD90: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_8022B26C;
    }
    // 0x8022AD90: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x8022AD94: addiu       $fp, $zero, -0x3E8
    ctx->r30 = ADD32(0, -0X3E8);
    // 0x8022AD98: addiu       $s7, $zero, 0x400
    ctx->r23 = ADD32(0, 0X400);
    // 0x8022AD9C: addiu       $s6, $zero, 0x500
    ctx->r22 = ADD32(0, 0X500);
    // 0x8022ADA0: addu        $s4, $s2, $zero
    ctx->r20 = ADD32(ctx->r18, 0);
    // 0x8022ADA4: addiu       $s1, $zero, 0x1DDF
    ctx->r17 = ADD32(0, 0X1DDF);
    // 0x8022ADA8: lui         $v0, 0x930
    ctx->r2 = S32(0X930 << 16);
    // 0x8022ADAC: sw          $v0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r2;
    // 0x8022ADB0: lui         $v0, 0xF8EB
    ctx->r2 = S32(0XF8EB << 16);
    // 0x8022ADB4: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x8022ADB8: lui         $v0, 0x6DB
    ctx->r2 = S32(0X6DB << 16);
    // 0x8022ADBC: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
    // 0x8022ADC0: lui         $v0, 0x610
    ctx->r2 = S32(0X610 << 16);
    // 0x8022ADC4: sw          $v0, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r2;
    // 0x8022ADC8: lui         $v0, 0x154
    ctx->r2 = S32(0X154 << 16);
    // 0x8022ADCC: sw          $v0, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r2;
    // 0x8022ADD0: lui         $v0, 0xFFE0
    ctx->r2 = S32(0XFFE0 << 16);
    // 0x8022ADD4: sw          $v0, 0x48($s3)
    MEM_W(0X48, ctx->r19) = ctx->r2;
L_8022ADD8:
    // 0x8022ADD8: jal         0x8004EFE4
    // 0x8022ADDC: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_8;
    // 0x8022ADDC: nop

    after_8:
    // 0x8022ADE0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022ADE4: beql        $a1, $zero, L_8022AE40
    if (ctx->r5 == 0) {
        // 0x8022ADE8: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8022AE40;
    }
    goto skip_0;
    // 0x8022ADE8: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    skip_0:
    // 0x8022ADEC: sh          $s1, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r17;
    // 0x8022ADF0: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x8022ADF4: addiu       $t0, $zero, -0x301
    ctx->r8 = ADD32(0, -0X301);
    // 0x8022ADF8: sh          $t0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r8;
    // 0x8022ADFC: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x8022AE00: sh          $fp, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r30;
    // 0x8022AE04: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x8022AE08: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8022AE0C: sb          $t0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r8;
    // 0x8022AE10: addiu       $t0, $zero, 0x29
    ctx->r8 = ADD32(0, 0X29);
    // 0x8022AE14: sb          $t0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r8;
    // 0x8022AE18: sh          $s7, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r23;
    // 0x8022AE1C: sh          $s6, 0x44($a1)
    MEM_H(0X44, ctx->r5) = ctx->r22;
    // 0x8022AE20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AE24: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AE28: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022AE2C: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x8022AE30: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x8022AE34: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
    // 0x8022AE38: sw          $a1, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r5;
    // 0x8022AE3C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_8022AE40:
    // 0x8022AE40: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8022AE44: slti        $v0, $s5, 0x2
    ctx->r2 = SIGNED(ctx->r21) < 0X2 ? 1 : 0;
    // 0x8022AE48: bne         $v0, $zero, L_8022ADD8
    if (ctx->r2 != 0) {
        // 0x8022AE4C: addiu       $s1, $s1, 0x35C
        ctx->r17 = ADD32(ctx->r17, 0X35C);
            goto L_8022ADD8;
    }
    // 0x8022AE4C: addiu       $s1, $s1, 0x35C
    ctx->r17 = ADD32(ctx->r17, 0X35C);
    // 0x8022AE50: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    // 0x8022AE54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022AE58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AE5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AE60: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022AE64: jal         0x8002A2F8
    // 0x8022AE68: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_9;
    // 0x8022AE68: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    after_9:
    // 0x8022AE6C: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AE70: j           L_8022B204
    // 0x8022AE74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022AE74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AE78:
    // 0x8022AE78: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x8022AE7C: lh          $v0, 0x14($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X14);
    // 0x8022AE80: slti        $v0, $v0, 0xBB8
    ctx->r2 = SIGNED(ctx->r2) < 0XBB8 ? 1 : 0;
    // 0x8022AE84: beq         $v0, $zero, L_8022B26C
    if (ctx->r2 == 0) {
        // 0x8022AE88: lui         $v0, 0x2FA
        ctx->r2 = S32(0X2FA << 16);
            goto L_8022B26C;
    }
    // 0x8022AE88: lui         $v0, 0x2FA
    ctx->r2 = S32(0X2FA << 16);
    // 0x8022AE8C: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022AE90: sw          $v0, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->r2;
    // 0x8022AE94: lui         $v0, 0xFC72
    ctx->r2 = S32(0XFC72 << 16);
    // 0x8022AE98: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x8022AE9C: lui         $v0, 0x8C6
    ctx->r2 = S32(0X8C6 << 16);
    // 0x8022AEA0: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
    // 0x8022AEA4: lui         $v0, 0x8D0
    ctx->r2 = S32(0X8D0 << 16);
    // 0x8022AEA8: sw          $v0, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->r2;
    // 0x8022AEAC: lui         $v0, 0x34
    ctx->r2 = S32(0X34 << 16);
    // 0x8022AEB0: sw          $v0, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r2;
    // 0x8022AEB4: lui         $v0, 0xFFE0
    ctx->r2 = S32(0XFFE0 << 16);
    // 0x8022AEB8: sw          $v0, 0x48($s3)
    MEM_W(0X48, ctx->r19) = ctx->r2;
    // 0x8022AEBC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AEC0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022AEC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AEC8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022AECC: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8022AED0: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    // 0x8022AED4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022AED8: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022AEDC: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x8022AEE0: sh          $v1, 0x43A($s1)
    MEM_H(0X43A, ctx->r17) = ctx->r3;
    // 0x8022AEE4: sh          $v0, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r2;
    // 0x8022AEE8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022AEEC: lh          $v1, 0x438($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X438);
    // 0x8022AEF0: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x8022AEF4: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x8022AEF8: lh          $v0, 0x43A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X43A);
    // 0x8022AEFC: lh          $a2, 0x43C($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X43C);
    // 0x8022AF00: addiu       $a0, $s1, 0x438
    ctx->r4 = ADD32(ctx->r17, 0X438);
    // 0x8022AF04: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AF08: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x8022AF0C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AF10: sw          $v1, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r3;
    // 0x8022AF14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AF18: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022AF1C: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x8022AF20: jal         0x8004EC38
    // 0x8022AF24: sw          $a2, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r6;
    func_8004EC38_2A038(rdram, ctx);
        goto after_10;
    // 0x8022AF24: sw          $a2, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r6;
    after_10:
    // 0x8022AF28: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    // 0x8022AF2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022AF30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AF34: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
    // 0x8022AF38: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022AF3C: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x8022AF40: jal         0x8002A2F8
    // 0x8022AF44: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_11;
    // 0x8022AF44: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_11:
    // 0x8022AF48: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8022AF4C: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x8022AF50: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AF54: j           L_8022B204
    // 0x8022AF58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022AF58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AF5C:
    // 0x8022AF5C: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x8022AF60: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022AF64: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x8022AF68: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AF6C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x8022AF70: addiu       $s1, $v0, 0x14
    ctx->r17 = ADD32(ctx->r2, 0X14);
    // 0x8022AF74: jal         0x8004F820
    // 0x8022AF78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_12;
    // 0x8022AF78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_12:
    // 0x8022AF7C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AF80: slti        $v0, $a2, 0x200
    ctx->r2 = SIGNED(ctx->r6) < 0X200 ? 1 : 0;
    // 0x8022AF84: beq         $v0, $zero, L_8022AFB8
    if (ctx->r2 == 0) {
        // 0x8022AF88: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022AFB8;
    }
    // 0x8022AF88: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022AF8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022AF90: jal         0x8004F820
    // 0x8022AF94: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x8022AF94: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_13:
    // 0x8022AF98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022AF9C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022AFA0: blez        $v0, L_8022B26C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022AFA4: nop
    
            goto L_8022B26C;
    }
    // 0x8022AFA4: nop

    // 0x8022AFA8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AFAC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022AFB0: j           L_8022B26C
    // 0x8022AFB4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022B26C;
    // 0x8022AFB4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022AFB8:
    // 0x8022AFB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022AFBC: jal         0x800616FC
    // 0x8022AFC0: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_14;
    // 0x8022AFC0: addiu       $a1, $zero, 0x6D
    ctx->r5 = ADD32(0, 0X6D);
    after_14:
    // 0x8022AFC4: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AFC8: j           L_8022B204
    // 0x8022AFCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022AFCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022AFD0:
    // 0x8022AFD0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AFD4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022AFD8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022AFDC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AFE0: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022AFE4: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022B26C;
    }
    // 0x8022AFE4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8022AFE8: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022AFEC: j           L_8022B200
    // 0x8022AFF0: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
        goto L_8022B200;
    // 0x8022AFF0: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_8022AFF4:
    // 0x8022AFF4: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x8022AFF8: beq         $v0, $zero, L_8022B068
    if (ctx->r2 == 0) {
        // 0x8022AFFC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B068;
    }
    // 0x8022AFFC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B000: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B004: ldc1        $f0, 0x70B0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X70B0);
    // 0x8022B008: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8022B00C: lwc1        $f2, 0x10($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X10);
    // 0x8022B010: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x8022B014: lwc1        $f4, 0x18($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X18);
    // 0x8022B018: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x8022B01C: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
    // 0x8022B020: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B024: ldc1        $f6, 0x70B8($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X70B8);
    // 0x8022B028: lw          $v1, 0x44($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X44);
    // 0x8022B02C: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x8022B030: add.d       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = ctx->f4.d + ctx->f6.d;
    // 0x8022B034: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B038: ldc1        $f6, 0x70C0($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, 0X70C0);
    // 0x8022B03C: lwc1        $f0, 0x40($s3)
    ctx->f0.u32l = MEM_W(ctx->r19, 0X40);
    // 0x8022B040: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x8022B044: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B048: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
    // 0x8022B04C: sw          $v1, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r3;
    // 0x8022B050: trunc.w.d   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8022B054: swc1        $f6, 0x10($s3)
    MEM_W(0X10, ctx->r19) = ctx->f6.u32l;
    // 0x8022B058: trunc.w.d   $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.u32l = TRUNC_W_D(ctx->f4.d);
    // 0x8022B05C: swc1        $f2, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->f2.u32l;
    // 0x8022B060: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8022B064: swc1        $f2, 0x40($s3)
    MEM_W(0X40, ctx->r19) = ctx->f2.u32l;
L_8022B068:
    // 0x8022B068: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B06C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B070: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022B074: jal         0x8004F820
    // 0x8022B078: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_15;
    // 0x8022B078: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_15:
    // 0x8022B07C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B080: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022B084: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022B088: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B08C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8022B090: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022B094: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B098: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022B09C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022B0A0: beq         $v1, $zero, L_8022B26C
    if (ctx->r3 == 0) {
        // 0x8022B0A4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022B26C;
    }
    // 0x8022B0A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B0A8: jal         0x800616FC
    // 0x8022B0AC: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_16;
    // 0x8022B0AC: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    after_16:
    // 0x8022B0B0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022B0B4: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022B0B8: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022B0BC: j           L_8022B204
    // 0x8022B0C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022B0C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B0C4:
    // 0x8022B0C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B0C8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022B0CC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022B0D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B0D4: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022B0D8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022B26C;
    }
    // 0x8022B0D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B0DC: jal         0x800616FC
    // 0x8022B0E0: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_17;
    // 0x8022B0E0: addiu       $a1, $zero, 0x6F
    ctx->r5 = ADD32(0, 0X6F);
    after_17:
    // 0x8022B0E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B0E8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022B0EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B0F0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022B0F4: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022B0F8: j           L_8022B204
    // 0x8022B0FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022B0FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B100:
    // 0x8022B100: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B104: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022B108: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022B10C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B110: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022B114: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022B26C;
    }
    // 0x8022B114: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B118: jal         0x800616FC
    // 0x8022B11C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_18;
    // 0x8022B11C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_18:
    // 0x8022B120: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022B124: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022B128: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022B12C: j           L_8022B204
    // 0x8022B130: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022B130: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B134:
    // 0x8022B134: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B138: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022B13C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022B140: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B144: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022B148: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022B26C;
    }
    // 0x8022B148: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B14C: jal         0x800616FC
    // 0x8022B150: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_19;
    // 0x8022B150: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    after_19:
    // 0x8022B154: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B158: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022B15C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B160: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022B164: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022B168: j           L_8022B204
    // 0x8022B16C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022B16C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B170:
    // 0x8022B170: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B174: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022B178: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022B17C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B180: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022B184: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022B26C;
    }
    // 0x8022B184: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B188: jal         0x800616FC
    // 0x8022B18C: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_20;
    // 0x8022B18C: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    after_20:
    // 0x8022B190: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022B194: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022B198: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022B19C: j           L_8022B204
    // 0x8022B1A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B204;
    // 0x8022B1A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B1A4:
    // 0x8022B1A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B1A8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022B1AC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022B1B0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B1B4: bne         $v0, $zero, L_8022B26C
    if (ctx->r2 != 0) {
        // 0x8022B1B8: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_8022B26C;
    }
    // 0x8022B1B8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022B1BC: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022B1C0: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022B1C4: j           L_8022B1FC
    // 0x8022B1C8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
        goto L_8022B1FC;
    // 0x8022B1C8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
L_8022B1CC:
    // 0x8022B1CC: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x8022B1D0: beq         $v0, $zero, L_8022B1EC
    if (ctx->r2 == 0) {
        // 0x8022B1D4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B1EC;
    }
    // 0x8022B1D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B1D8: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8022B1DC: lhu         $v0, 0x442($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X442);
    // 0x8022B1E0: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8022B1E4: j           L_8022B26C
    // 0x8022B1E8: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
        goto L_8022B26C;
    // 0x8022B1E8: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
L_8022B1EC:
    // 0x8022B1EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B1F0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022B1F4: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022B1F8: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
L_8022B1FC:
    // 0x8022B1FC: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_8022B200:
    // 0x8022B200: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B204:
    // 0x8022B204: j           L_8022B26C
    // 0x8022B208: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
        goto L_8022B26C;
    // 0x8022B208: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
L_8022B20C:
    // 0x8022B20C: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x8022B210: beq         $v0, $zero, L_8022B25C
    if (ctx->r2 == 0) {
        // 0x8022B214: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B25C;
    }
    // 0x8022B214: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B218: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8022B21C: lhu         $v0, 0x438($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X438);
    // 0x8022B220: lhu         $v1, 0x43C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X43C);
    // 0x8022B224: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x8022B228: sh          $v0, 0x438($s1)
    MEM_H(0X438, ctx->r17) = ctx->r2;
    // 0x8022B22C: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022B230: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022B234: sh          $v1, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r3;
    // 0x8022B238: lh          $v1, 0x438($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X438);
    // 0x8022B23C: lh          $a0, 0x43C($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X43C);
    // 0x8022B240: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022B244: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B248: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022B24C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022B250: sw          $v1, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r3;
    // 0x8022B254: j           L_8022B26C
    // 0x8022B258: sw          $a0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r4;
        goto L_8022B26C;
    // 0x8022B258: sw          $a0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r4;
L_8022B25C:
    // 0x8022B25C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8022B260: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
    // 0x8022B264: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B268: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022B26C:
    // 0x8022B26C: jal         0x8006072C
    // 0x8022B270: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_21;
    // 0x8022B270: nop

    after_21:
    // 0x8022B274: beq         $v0, $zero, L_8022B2D0
    if (ctx->r2 == 0) {
        // 0x8022B278: nop
    
            goto L_8022B2D0;
    }
    // 0x8022B278: nop

    // 0x8022B27C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B280: lb          $v0, 0x47CC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CC);
    // 0x8022B284: bne         $v0, $zero, L_8022B2D0
    if (ctx->r2 != 0) {
        // 0x8022B288: nop
    
            goto L_8022B2D0;
    }
    // 0x8022B288: nop

    // 0x8022B28C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B290: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022B294: bne         $v0, $zero, L_8022B2D0
    if (ctx->r2 != 0) {
        // 0x8022B298: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B2D0;
    }
    // 0x8022B298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B29C: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8022B2A0: bne         $v1, $v0, L_8022B2D0
    if (ctx->r3 != ctx->r2) {
        // 0x8022B2A4: nop
    
            goto L_8022B2D0;
    }
    // 0x8022B2A4: nop

    // 0x8022B2A8: jal         0x80061798
    // 0x8022B2AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_22;
    // 0x8022B2AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_22:
    // 0x8022B2B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B2B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022B2B8: jal         0x80036B00
    // 0x8022B2BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_23;
    // 0x8022B2BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_23:
    // 0x8022B2C0: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8022B2C4: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
    // 0x8022B2C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B2CC: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8022B2D0:
    // 0x8022B2D0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022B2D4: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8022B2D8: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8022B2DC: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8022B2E0: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B2E4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022B2E8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022B2EC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022B2F0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B2F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022B2F8: jr          $ra
    // 0x8022B2FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022B2FC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80231520_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231524: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231528: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023152C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231530: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80231534: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231538: jal         0x8004DA90
    // 0x8023153C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8023153C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80231540: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80231544: bne         $v0, $zero, L_8023155C
    if (ctx->r2 != 0) {
        // 0x80231548: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023155C;
    }
    // 0x80231548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023154C: jal         0x8005044C
    // 0x80231550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80231550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231554: j           L_8023156C
    // 0x80231558: nop

        goto L_8023156C;
    // 0x80231558: nop

L_8023155C:
    // 0x8023155C: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80231560: jal         0x80050294
    // 0x80231564: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80231564: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80231568: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8023156C:
    // 0x8023156C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231570: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231574: jr          $ra
    // 0x80231578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802355F0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802355F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802355F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802355F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802355FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80235600: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235608: jal         0x8009A3B4
    // 0x8023560C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023560C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80235610: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80235614: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80235618: jal         0x8009A3B4
    // 0x8023561C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023561C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80235620: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80235624: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80235628: jal         0x8009A3B4
    // 0x8023562C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023562C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80235630: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80235634: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235638: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023563C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235640: lw          $v0, 0x5EF0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5EF0);
    // 0x80235644: jalr        $v0
    // 0x80235648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80235648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023564C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80235650: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80235654: beq         $v0, $zero, L_8023566C
    if (ctx->r2 == 0) {
        // 0x80235658: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023566C;
    }
    // 0x80235658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023565C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80235660: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80235664: jal         0x8003B564
    // 0x80235668: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80235668: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8023566C:
    // 0x8023566C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80235670: beq         $v0, $zero, L_80235688
    if (ctx->r2 == 0) {
        // 0x80235674: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80235688;
    }
    // 0x80235674: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235678: jal         0x8005044C
    // 0x8023567C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8023567C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80235680: j           L_8023568C
    // 0x80235684: nop

        goto L_8023568C;
    // 0x80235684: nop

L_80235688:
    // 0x80235688: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023568C:
    // 0x8023568C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235690: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235694: jr          $ra
    // 0x80235698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228F64_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228F68: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80228F6C: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x80228F70: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80228F74: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80228F78: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80228F7C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228F80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228F84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228F88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228F8C: lw          $v0, 0x10($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X10);
    // 0x80228F90: bne         $v0, $zero, L_802290B0
    if (ctx->r2 != 0) {
        // 0x80228F94: addiu       $v0, $zero, -0x4E
        ctx->r2 = ADD32(0, -0X4E);
            goto L_802290B0;
    }
    // 0x80228F94: addiu       $v0, $zero, -0x4E
    ctx->r2 = ADD32(0, -0X4E);
    // 0x80228F98: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80228F9C: addiu       $s0, $s0, 0x4990
    ctx->r16 = ADD32(ctx->r16, 0X4990);
    // 0x80228FA0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80228FA4: addiu       $s3, $zero, -0x51
    ctx->r19 = ADD32(0, -0X51);
    // 0x80228FA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FAC: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80228FB0: lui         $v0, 0xFFB2
    ctx->r2 = S32(0XFFB2 << 16);
    // 0x80228FB4: lui         $s4, 0xFFFF
    ctx->r20 = S32(0XFFFF << 16);
    // 0x80228FB8: lui         $s5, 0xFFAF
    ctx->r21 = S32(0XFFAF << 16);
    // 0x80228FBC: addiu       $s1, $zero, 0x800
    ctx->r17 = ADD32(0, 0X800);
    // 0x80228FC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FC4: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80228FC8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228FCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FD0: sh          $s2, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r18;
    // 0x80228FD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FD8: sh          $s3, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r19;
    // 0x80228FDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FE0: sw          $s4, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r20;
    // 0x80228FE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FE8: sw          $s5, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r21;
    // 0x80228FEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FF0: sh          $s1, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r17;
    // 0x80228FF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228FF8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80228FFC: jal         0x8005FA7C
    // 0x80229000: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80229000: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80229004: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80229008: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8022900C: lw          $v1, 0x24($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X24);
    // 0x80229010: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
    // 0x80229014: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80229018: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x8022901C: sh          $s2, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r18;
    // 0x80229020: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80229024: sh          $s3, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r19;
    // 0x80229028: lw          $v1, 0x24($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X24);
    // 0x8022902C: lui         $v0, 0x51
    ctx->r2 = S32(0X51 << 16);
    // 0x80229030: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80229034: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80229038: sw          $s4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r20;
    // 0x8022903C: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80229040: sw          $s5, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r21;
    // 0x80229044: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80229048: sh          $s1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r17;
    // 0x8022904C: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80229050: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80229054: lw          $v1, 0x24($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X24);
    // 0x80229058: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022905C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80229060: lw          $v0, 0x24($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X24);
    // 0x80229064: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229068: jal         0x8005FA7C
    // 0x8022906C: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8022906C: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    after_1:
    // 0x80229070: jal         0x8005FA7C
    // 0x80229074: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80229074: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_2:
    // 0x80229078: jal         0x8005FA7C
    // 0x8022907C: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8022907C: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    after_3:
    // 0x80229080: lw          $v0, 0x28($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X28);
    // 0x80229084: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80229088: lw          $v0, 0x28($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X28);
    // 0x8022908C: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    // 0x80229090: lw          $v0, 0x2C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X2C);
    // 0x80229094: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x80229098: lw          $v0, 0x2C($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X2C);
    // 0x8022909C: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    // 0x802290A0: lw          $v0, 0x30($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X30);
    // 0x802290A4: sh          $s1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r17;
    // 0x802290A8: lw          $v0, 0x30($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X30);
    // 0x802290AC: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
L_802290B0:
    // 0x802290B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802290B4: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x802290B8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802290BC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802290C0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802290C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802290C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802290CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802290D0: jr          $ra
    // 0x802290D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802290D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022FBC8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBC8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022FBCC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022FBD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FBD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FBD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FBDC: bne         $v0, $zero, L_8022FC0C
    if (ctx->r2 != 0) {
        // 0x8022FBE0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022FC0C;
    }
    // 0x8022FBE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FBE4: jal         0x80034E3C
    // 0x8022FBE8: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_0;
    // 0x8022FBE8: nop

    after_0:
    // 0x8022FBEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FBF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022FBF4: jal         0x80050294
    // 0x8022FBF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FBF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022FBFC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FC00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FC04: j           L_8022FC14
    // 0x8022FC08: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022FC14;
    // 0x8022FC08: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FC0C:
    // 0x8022FC0C: jal         0x8005044C
    // 0x8022FC10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8022FC10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8022FC14:
    // 0x8022FC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FC18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FC1C: jr          $ra
    // 0x8022FC20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FC20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802355B8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802355B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802355BC: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x802355C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802355C4: bne         $v0, $a0, L_802355DC
    if (ctx->r2 != ctx->r4) {
        // 0x802355C8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_802355DC;
    }
    // 0x802355C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802355CC: jal         0x8006036C
    // 0x802355D0: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x802355D0: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_0:
    // 0x802355D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802355D8: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
L_802355DC:
    // 0x802355DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802355E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802355E4: jr          $ra
    // 0x802355E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802355E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802355EC: nop

;}
RECOMP_FUNC void func_80241440_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241440: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80241444: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80241448: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024144C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80241450: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80241454: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80241458: beq         $v1, $zero, L_80241470
    if (ctx->r3 == 0) {
        // 0x8024145C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80241470;
    }
    // 0x8024145C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241460: beq         $v1, $v0, L_80241518
    if (ctx->r3 == ctx->r2) {
        // 0x80241464: nop
    
            goto L_80241518;
    }
    // 0x80241464: nop

    // 0x80241468: j           L_80241664
    // 0x8024146C: nop

        goto L_80241664;
    // 0x8024146C: nop

L_80241470:
    // 0x80241470: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80241474: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80241478: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x8024147C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80241480: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80241484: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80241488: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8024148C: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x80241490: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    // 0x80241494: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80241498: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8024149C: sw          $zero, 0x64($s1)
    MEM_W(0X64, ctx->r17) = 0;
    // 0x802414A0: sw          $zero, 0x70($s1)
    MEM_W(0X70, ctx->r17) = 0;
    // 0x802414A4: sw          $zero, 0x74($s1)
    MEM_W(0X74, ctx->r17) = 0;
    // 0x802414A8: sw          $v1, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r3;
    // 0x802414AC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802414B0: jal         0x8009A3B4
    // 0x802414B4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802414B4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x802414B8: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x802414BC: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x802414C0: jal         0x80031600
    // 0x802414C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x802414C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802414C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802414CC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802414D0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802414D4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802414D8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802414DC: jal         0x80031DA8
    // 0x802414E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x802414E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x802414E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802414E8: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802414EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802414F0: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x802414F4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802414F8: jal         0x8004D5D4
    // 0x802414FC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x802414FC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_3:
    // 0x80241500: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80241504: addiu       $v1, $zero, 0x29
    ctx->r3 = ADD32(0, 0X29);
    // 0x80241508: sb          $v1, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r3;
    // 0x8024150C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80241510: j           L_80241664
    // 0x80241514: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80241664;
    // 0x80241514: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80241518:
    // 0x80241518: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8024151C: bne         $v0, $zero, L_802415D0
    if (ctx->r2 != 0) {
        // 0x80241520: addiu       $v0, $zero, 0x800
        ctx->r2 = ADD32(0, 0X800);
            goto L_802415D0;
    }
    // 0x80241520: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80241524: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x80241528: bne         $v1, $v0, L_8024155C
    if (ctx->r3 != ctx->r2) {
        // 0x8024152C: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_8024155C;
    }
    // 0x8024152C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80241530: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80241534: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80241538: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024153C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241540: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80241544: lh          $v0, 0x6E60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6E60);
    // 0x80241548: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8024154C: bne         $v1, $zero, L_8024158C
    if (ctx->r3 != 0) {
        // 0x80241550: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8024158C;
    }
    // 0x80241550: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80241554: j           L_80241588
    // 0x80241558: nop

        goto L_80241588;
    // 0x80241558: nop

L_8024155C:
    // 0x8024155C: bne         $v1, $v0, L_8024158C
    if (ctx->r3 != ctx->r2) {
        // 0x80241560: nop
    
            goto L_8024158C;
    }
    // 0x80241560: nop

    // 0x80241564: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80241568: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8024156C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80241570: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80241574: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80241578: lh          $v0, 0x6E60($at)
    ctx->r2 = MEM_H(ctx->r1, 0X6E60);
    // 0x8024157C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80241580: bne         $v0, $zero, L_8024158C
    if (ctx->r2 != 0) {
        // 0x80241584: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8024158C;
    }
    // 0x80241584: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80241588:
    // 0x80241588: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_8024158C:
    // 0x8024158C: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80241590: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80241594: bne         $v1, $v0, L_80241604
    if (ctx->r3 != ctx->r2) {
        // 0x80241598: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80241604;
    }
    // 0x80241598: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8024159C: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x802415A0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802415A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802415A8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802415AC: lh          $v1, 0x6E62($at)
    ctx->r3 = MEM_H(ctx->r1, 0X6E62);
    // 0x802415B0: bne         $v1, $zero, L_802415C8
    if (ctx->r3 != 0) {
        // 0x802415B4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_802415C8;
    }
    // 0x802415B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802415B8: jal         0x8004F4F8
    // 0x802415BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x802415BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x802415C0: j           L_80241664
    // 0x802415C4: nop

        goto L_80241664;
    // 0x802415C4: nop

L_802415C8:
    // 0x802415C8: j           L_80241600
    // 0x802415CC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
        goto L_80241600;
    // 0x802415CC: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_802415D0:
    // 0x802415D0: lb          $v1, 0xC($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XC);
    // 0x802415D4: lhu         $a0, 0x56($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X56);
    // 0x802415D8: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x802415DC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802415E0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802415E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802415E8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802415EC: lhu         $v1, 0x6E62($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X6E62);
    // 0x802415F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802415F4: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x802415F8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x802415FC: sh          $a0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r4;
L_80241600:
    // 0x80241600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80241604:
    // 0x80241604: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80241608: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8024160C: jal         0x8004DA90
    // 0x80241610: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x80241610: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x80241614: jal         0x8003E934
    // 0x80241618: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80241618: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8024161C: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80241620: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80241624: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80241628: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8024162C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80241630: jal         0x8009A3B4
    // 0x80241634: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80241634: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    after_7:
    // 0x80241638: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x8024163C: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80241640: jal         0x80031600
    // 0x80241644: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_8;
    // 0x80241644: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80241648: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024164C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80241650: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80241654: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80241658: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024165C: jal         0x80031DA8
    // 0x80241660: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_9;
    // 0x80241660: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_9:
L_80241664:
    // 0x80241664: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80241668: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8024166C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80241670: jr          $ra
    // 0x80241674: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80241674: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80241678: nop

    // 0x8024167C: nop

;}
RECOMP_FUNC void func_8023B014_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B014: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x8023B018: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B01C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023B020: lh          $a1, 0x646C($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X646C);
    // 0x8023B024: lhu         $a0, 0x18($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X18);
    // 0x8023B028: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8023B02C: lh          $a2, 0x6470($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X6470);
    // 0x8023B030: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023B034: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8023B038: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8023B03C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023B040: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023B044: lh          $a1, 0x646E($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X646E);
    // 0x8023B048: sra         $a0, $a0, 25
    ctx->r4 = S32(SIGNED(ctx->r4) >> 25);
    // 0x8023B04C: sltu        $v1, $v1, $a2
    ctx->r3 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x8023B050: beq         $v1, $zero, L_8023B068
    if (ctx->r3 == 0) {
        // 0x8023B054: subu        $a0, $a0, $a1
        ctx->r4 = SUB32(ctx->r4, ctx->r5);
            goto L_8023B068;
    }
    // 0x8023B054: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x8023B058: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B05C: lh          $v0, 0x6472($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6472);
    // 0x8023B060: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x8023B064: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_8023B068:
    // 0x8023B068: jr          $ra
    // 0x8023B06C: nop

    TRACE_RETURN()
    return;
    // 0x8023B06C: nop

;}
RECOMP_FUNC void func_8023E1A0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E1A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023E1A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023E1A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023E1AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023E1B0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023E1B4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023E1B8: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8023E1BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023E1C0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023E1C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E1C8: lw          $v1, 0x6BA8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6BA8);
    // 0x8023E1CC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8023E1D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023E1D4: sw          $v1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r3;
    // 0x8023E1D8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023E1DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023E1E0: lw          $v1, 0x6BD4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6BD4);
    // 0x8023E1E4: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8023E1E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023E1EC: sw          $v1, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = ctx->r3;
    // 0x8023E1F0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023E1F4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023E1F8: lw          $a1, 0x6C00($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6C00);
    // 0x8023E1FC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023E200: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023E204: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x8023E208: lw          $a2, 0xD4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XD4);
    // 0x8023E20C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023E210: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023E214: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023E218: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023E21C: sw          $a1, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = ctx->r5;
    // 0x8023E220: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023E224: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023E228: lw          $a0, 0xD4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD4);
    // 0x8023E22C: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x8023E230: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x8023E234: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8023E238: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023E23C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023E240: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023E244: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x8023E248: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x8023E24C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023E250: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023E254: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x8023E258: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8023E25C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023E260: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8023E264: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8023E268: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023E26C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023E270: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023E274: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x8023E278: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E27C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023E280: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023E284: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8023E288: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x8023E28C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023E290: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023E294: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8023E298: lw          $a1, 0xD4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XD4);
    // 0x8023E29C: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x8023E2A0: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8023E2A4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023E2A8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8023E2AC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8023E2B0: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x8023E2B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8023E2B8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023E2BC: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x8023E2C0: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8023E2C4: sb          $v0, 0xDD($s0)
    MEM_B(0XDD, ctx->r16) = ctx->r2;
    // 0x8023E2C8: jal         0x8009A3B4
    // 0x8023E2CC: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023E2CC: sb          $v0, 0xDC($s0)
    MEM_B(0XDC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023E2D0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023E2D4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023E2D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023E2DC: jal         0x8009A3B4
    // 0x8023E2E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023E2E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8023E2E4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023E2E8: addiu       $s2, $s0, 0x54
    ctx->r18 = ADD32(ctx->r16, 0X54);
    // 0x8023E2EC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023E2F0: jal         0x8009A3B4
    // 0x8023E2F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023E2F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023E2F8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023E2FC: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x8023E300: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8023E304: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8023E308: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8023E30C: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x8023E310: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023E314: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E318: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8023E31C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E320: sb          $zero, 0xDF($s0)
    MEM_B(0XDF, ctx->r16) = 0;
    // 0x8023E324: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023E328: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023E32C: jal         0x8003ECF0
    // 0x8023E330: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_3;
    // 0x8023E330: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023E334: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E338: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023E33C: jal         0x8023ED58
    // 0x8023E340: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8023ED58_ovl5(rdram, ctx);
        goto after_4;
    // 0x8023E340: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_4:
    // 0x8023E344: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8023E348: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8023E34C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023E350: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023E354: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E358: jal         0x8009A3B4
    // 0x8023E35C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023E35C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_5:
    // 0x8023E360: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023E364: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8023E368: jal         0x80031428
    // 0x8023E36C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031428_C828(rdram, ctx);
        goto after_6;
    // 0x8023E36C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8023E370: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E374: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023E378: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023E37C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023E380: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023E384: jal         0x80031DA8
    // 0x8023E388: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_7;
    // 0x8023E388: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_7:
    // 0x8023E38C: lui         $a2, 0x80
    ctx->r6 = S32(0X80 << 16);
    // 0x8023E390: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023E394: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x8023E398: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x8023E39C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023E3A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023E3A4: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x8023E3A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E3AC: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8023E3B0: sw          $a2, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r6;
    // 0x8023E3B4: jal         0x8004D5D4
    // 0x8023E3B8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_8;
    // 0x8023E3B8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_8:
    // 0x8023E3BC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023E3C0: sh          $zero, 0xEC($s0)
    MEM_H(0XEC, ctx->r16) = 0;
    // 0x8023E3C4: sh          $zero, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = 0;
    // 0x8023E3C8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023E3CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E3D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023E3D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E3D8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023E3DC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023E3E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023E3E4: jr          $ra
    // 0x8023E3E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023E3E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80239550_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239554: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239558: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023955C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239560: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239564: bne         $v0, $zero, L_80239580
    if (ctx->r2 != 0) {
        // 0x80239568: addiu       $a1, $zero, 0xF
        ctx->r5 = ADD32(0, 0XF);
            goto L_80239580;
    }
    // 0x80239568: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x8023956C: jal         0x80050294
    // 0x80239570: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80239570: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80239574: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239578: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023957C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80239580:
    // 0x80239580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239584: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239588: jr          $ra
    // 0x8023958C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023958C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235B2C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235B2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80235B30: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80235B34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80235B38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235B3C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235B40: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80235B44: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80235B48: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80235B4C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80235B50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80235B54: bne         $v0, $s1, L_80235C38
    if (ctx->r2 != ctx->r17) {
        // 0x80235B58: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80235C38;
    }
    // 0x80235B58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235B5C: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80235B60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235B64: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80235B68: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x80235B6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80235B70: jal         0x8004F820
    // 0x80235B74: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80235B74: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x80235B78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235B7C: bgez        $v0, L_80235BA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80235B80: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80235BA8;
    }
    // 0x80235B80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235B84: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80235B88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80235B8C: jal         0x8004F820
    // 0x80235B90: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80235B90: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80235B94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235B98: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80235B9C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80235BA0: j           L_80235BC0
    // 0x80235BA4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80235BC0;
    // 0x80235BA4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80235BA8:
    // 0x80235BA8: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80235BAC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80235BB0: jal         0x8004F820
    // 0x80235BB4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80235BB4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80235BB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235BBC: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80235BC0:
    // 0x80235BC0: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x80235BC4: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80235BC8: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80235BCC: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x80235BD0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80235BD4: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80235BD8: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80235BDC: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x80235BE0: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x80235BE4: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80235BE8: addiu       $s0, $s0, 0x74C0
    ctx->r16 = ADD32(ctx->r16, 0X74C0);
    // 0x80235BEC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80235BF0: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x80235BF4: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80235BF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235BFC: sw          $v0, 0x74C4($at)
    MEM_W(0X74C4, ctx->r1) = ctx->r2;
    // 0x80235C00: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x80235C04: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80235C08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235C0C: sw          $v0, 0x74C8($at)
    MEM_W(0X74C8, ctx->r1) = ctx->r2;
    // 0x80235C10: jal         0x8004EC38
    // 0x80235C14: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x80235C14: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80235C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235C1C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80235C20: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80235C24: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80235C28: jal         0x80034FCC
    // 0x80235C2C: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x80235C2C: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x80235C30: j           L_80235C3C
    // 0x80235C34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80235C3C;
    // 0x80235C34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80235C38:
    // 0x80235C38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80235C3C:
    // 0x80235C3C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80235C40: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80235C44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80235C48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235C4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235C50: jr          $ra
    // 0x80235C54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80235C54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80235C58: nop

    // 0x80235C5C: nop

;}
RECOMP_FUNC void func_80230B7C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230B80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230B84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230B88: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80230B8C: addiu       $a0, $a0, -0x3A50
    ctx->r4 = ADD32(ctx->r4, -0X3A50);
    // 0x80230B90: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230B94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230B98: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80230B9C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80230BA0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80230BA4: bne         $v0, $zero, L_80230BB0
    if (ctx->r2 != 0) {
        // 0x80230BA8: addiu       $v0, $zero, 0x1B
        ctx->r2 = ADD32(0, 0X1B);
            goto L_80230BB0;
    }
    // 0x80230BA8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80230BAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230BB0:
    // 0x80230BB0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230BB4: sltiu       $v0, $v1, 0x1C
    ctx->r2 = ctx->r3 < 0X1C ? 1 : 0;
    // 0x80230BB8: beq         $v0, $zero, L_80230ED0
    if (ctx->r2 == 0) {
        // 0x80230BBC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80230ED0;
    }
    // 0x80230BBC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230BC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230BC4: addu        $at, $at, $v0
    gpr jr_addend_80230BCC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230BC8: lw          $v0, 0x71A0($at)
    ctx->r2 = ADD32(ctx->r1, 0X71A0);
    // 0x80230BCC: jr          $v0
    // 0x80230BD0: nop

    switch (jr_addend_80230BCC >> 2) {
        case 0: goto L_80230BD4; break;
        case 1: goto L_80230BE8; break;
        case 2: goto L_80230C10; break;
        case 3: goto L_80230C54; break;
        case 4: goto L_80230C78; break;
        case 5: goto L_80230C54; break;
        case 6: goto L_80230C84; break;
        case 7: goto L_80230C90; break;
        case 8: goto L_80230CC8; break;
        case 9: goto L_80230C54; break;
        case 10: goto L_80230D0C; break;
        case 11: goto L_80230D18; break;
        case 12: goto L_80230D70; break;
        case 13: goto L_80230C90; break;
        case 14: goto L_80230DC0; break;
        case 15: goto L_80230DDC; break;
        case 16: goto L_80230C54; break;
        case 17: goto L_80230E3C; break;
        case 18: goto L_80230C54; break;
        case 19: goto L_80230E54; break;
        case 20: goto L_80230C54; break;
        case 21: goto L_80230E60; break;
        case 22: goto L_80230C54; break;
        case 23: goto L_80230E6C; break;
        case 24: goto L_80230C54; break;
        case 25: goto L_80230E78; break;
        case 26: goto L_80230C90; break;
        case 27: goto L_80230EB0; break;
        default: switch_error(__func__, 0x80230BCC, 0x802471A0);
    }
    // 0x80230BD0: nop

L_80230BD4:
    // 0x80230BD4: jal         0x80231040
    // 0x80230BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231040_ovl5(rdram, ctx);
        goto after_0;
    // 0x80230BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230BDC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230BE0: j           L_80230EA8
    // 0x80230BE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80230EA8;
    // 0x80230BE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230BE8:
    // 0x80230BE8: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80230BEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230BF0: bne         $v1, $v0, L_80230ED0
    if (ctx->r3 != ctx->r2) {
        // 0x80230BF4: nop
    
            goto L_80230ED0;
    }
    // 0x80230BF4: nop

    // 0x80230BF8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230BFC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230C00: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80230C04: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230C08: j           L_80230EA8
    // 0x80230C0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80230EA8;
    // 0x80230C0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230C10:
    // 0x80230C10: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230C14: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80230C18: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230C1C: jal         0x8004F820
    // 0x80230C20: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80230C20: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_1:
    // 0x80230C24: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230C28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230C2C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230C30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230C34: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230C38: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80230ED0;
    }
    // 0x80230C38: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230C3C: jal         0x8003516C
    // 0x80230C40: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_2;
    // 0x80230C40: nop

    after_2:
    // 0x80230C44: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230C48: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80230ED0;
    }
    // 0x80230C48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230C4C: j           L_80230E80
    // 0x80230C50: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
        goto L_80230E80;
    // 0x80230C50: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
L_80230C54:
    // 0x80230C54: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230C58: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230C5C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230C60: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230C64: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230C68: nop
    
            goto L_80230ED0;
    }
    // 0x80230C68: nop

    // 0x80230C6C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230C70: j           L_80230EA8
    // 0x80230C74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80230EA8;
    // 0x80230C74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230C78:
    // 0x80230C78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230C7C: j           L_80230E80
    // 0x80230C80: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
        goto L_80230E80;
    // 0x80230C80: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
L_80230C84:
    // 0x80230C84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230C88: j           L_80230E80
    // 0x80230C8C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
        goto L_80230E80;
    // 0x80230C8C: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
L_80230C90:
    // 0x80230C90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230C94: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230C98: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230C9C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230CA0: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230CA4: nop
    
            goto L_80230ED0;
    }
    // 0x80230CA4: nop

    // 0x80230CA8: jal         0x800600F8
    // 0x80230CAC: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x80230CAC: nop

    after_3:
    // 0x80230CB0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230CB4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230CB8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80230CBC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230CC0: j           L_80230EA8
    // 0x80230CC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80230EA8;
    // 0x80230CC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230CC8:
    // 0x80230CC8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230CCC: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80230CD0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230CD4: jal         0x8004F820
    // 0x80230CD8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80230CD8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
    // 0x80230CDC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230CE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230CE4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230CE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230CEC: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230CF0: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80230ED0;
    }
    // 0x80230CF0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230CF4: jal         0x8003516C
    // 0x80230CF8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x80230CF8: nop

    after_5:
    // 0x80230CFC: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230D00: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80230ED0;
    }
    // 0x80230D00: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230D04: j           L_80230E80
    // 0x80230D08: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
        goto L_80230E80;
    // 0x80230D08: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
L_80230D0C:
    // 0x80230D0C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230D10: j           L_80230E80
    // 0x80230D14: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
        goto L_80230E80;
    // 0x80230D14: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
L_80230D18:
    // 0x80230D18: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230D1C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230D20: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230D24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230D28: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230D2C: nop
    
            goto L_80230ED0;
    }
    // 0x80230D2C: nop

    // 0x80230D30: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80230D34: slti        $v0, $v1, 0x103
    ctx->r2 = SIGNED(ctx->r3) < 0X103 ? 1 : 0;
    // 0x80230D38: bne         $v0, $zero, L_80230D60
    if (ctx->r2 != 0) {
        // 0x80230D3C: slti        $v0, $v1, 0x100
        ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
            goto L_80230D60;
    }
    // 0x80230D3C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x80230D40: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230D44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230D48: jal         0x800600F8
    // 0x80230D4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_6;
    // 0x80230D4C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_6:
    // 0x80230D50: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230D54: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230D58: j           L_80230ED0
    // 0x80230D5C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_80230ED0;
    // 0x80230D5C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80230D60:
    // 0x80230D60: beq         $v0, $zero, L_80230ED0
    if (ctx->r2 == 0) {
        // 0x80230D64: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_80230ED0;
    }
    // 0x80230D64: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80230D68: j           L_80230ED0
    // 0x80230D6C: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
        goto L_80230ED0;
    // 0x80230D6C: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
L_80230D70:
    // 0x80230D70: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230D74: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80230D78: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230D7C: jal         0x8004F820
    // 0x80230D80: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_7;
    // 0x80230D80: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_7:
    // 0x80230D84: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230D88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230D8C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230D90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230D94: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230D98: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80230ED0;
    }
    // 0x80230D98: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230D9C: jal         0x8003516C
    // 0x80230DA0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x80230DA0: nop

    after_8:
    // 0x80230DA4: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230DA8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80230ED0;
    }
    // 0x80230DA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230DAC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230DB0: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x80230DB4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230DB8: j           L_80230E80
    // 0x80230DBC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_80230E80;
    // 0x80230DBC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80230DC0:
    // 0x80230DC0: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80230DC4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80230DC8: bne         $v1, $v0, L_80230ED0
    if (ctx->r3 != ctx->r2) {
        // 0x80230DCC: nop
    
            goto L_80230ED0;
    }
    // 0x80230DCC: nop

    // 0x80230DD0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230DD4: j           L_80230EA8
    // 0x80230DD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80230EA8;
    // 0x80230DD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230DDC:
    // 0x80230DDC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230DE0: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80230DE4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80230DE8: jal         0x8004F820
    // 0x80230DEC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_9;
    // 0x80230DEC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
    // 0x80230DF0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80230DF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230DF8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80230DFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230E00: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230E04: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80230ED0;
    }
    // 0x80230E04: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80230E08: jal         0x8003516C
    // 0x80230E0C: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_10;
    // 0x80230E0C: nop

    after_10:
    // 0x80230E10: bne         $v0, $zero, L_80230ED0
    if (ctx->r2 != 0) {
        // 0x80230E14: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80230ED0;
    }
    // 0x80230E14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230E18: jal         0x800616FC
    // 0x80230E1C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_11;
    // 0x80230E1C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_11:
    // 0x80230E20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E24: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230E28: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80230E2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230E30: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230E34: j           L_80230E94
    // 0x80230E38: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_80230E94;
    // 0x80230E38: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80230E3C:
    // 0x80230E3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230E40: jal         0x800616FC
    // 0x80230E44: addiu       $a1, $zero, 0x59
    ctx->r5 = ADD32(0, 0X59);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_12;
    // 0x80230E44: addiu       $a1, $zero, 0x59
    ctx->r5 = ADD32(0, 0X59);
    after_12:
    // 0x80230E48: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230E4C: j           L_80230EA8
    // 0x80230E50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80230EA8;
    // 0x80230E50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230E54:
    // 0x80230E54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230E58: j           L_80230E80
    // 0x80230E5C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
        goto L_80230E80;
    // 0x80230E5C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
L_80230E60:
    // 0x80230E60: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230E64: j           L_80230E80
    // 0x80230E68: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
        goto L_80230E80;
    // 0x80230E68: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
L_80230E6C:
    // 0x80230E6C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230E70: j           L_80230E80
    // 0x80230E74: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
        goto L_80230E80;
    // 0x80230E74: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
L_80230E78:
    // 0x80230E78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230E7C: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
L_80230E80:
    // 0x80230E80: jal         0x800616FC
    // 0x80230E84: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_13;
    // 0x80230E84: nop

    after_13:
    // 0x80230E88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E8C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80230E90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80230E94:
    // 0x80230E94: jal         0x80050294
    // 0x80230E98: nop

    func_80050294_2B694(rdram, ctx);
        goto after_14;
    // 0x80230E98: nop

    after_14:
    // 0x80230E9C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230EA0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230EA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80230EA8:
    // 0x80230EA8: j           L_80230ED0
    // 0x80230EAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80230ED0;
    // 0x80230EAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230EB0:
    // 0x80230EB0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80230EB4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80230EB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230EBC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80230EC0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230EC4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80230EC8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80230ECC: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
L_80230ED0:
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
RECOMP_FUNC void func_8023B6FC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B6FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023B700: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023B704: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023B708: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023B70C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023B710: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8023B714: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x8023B718: beq         $v0, $zero, L_8023B76C
    if (ctx->r2 == 0) {
        // 0x8023B71C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023B76C;
    }
    // 0x8023B71C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8023B720: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8023B724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023B728: jal         0x8002C678
    // 0x8023B72C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8023B72C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8023B730: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023B734: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8023B738: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8023B73C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8023B740: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B744: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8023B748: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023B74C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8023B750: mfhi        $a2
    ctx->r6 = hi;
    // 0x8023B754: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8023B758: nop

    // 0x8023B75C: jal         0x800319B4
    // 0x8023B760: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8023B760: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8023B764: j           L_8023B774
    // 0x8023B768: nop

        goto L_8023B774;
    // 0x8023B768: nop

L_8023B76C:
    // 0x8023B76C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B770: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8023B774:
    // 0x8023B774: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8023B778: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023B77C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023B780: jr          $ra
    // 0x8023B784: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023B784: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022C120_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C120: jr          $ra
    // 0x8022C124: nop

    TRACE_RETURN()
    return;
    // 0x8022C124: nop

    // 0x8022C128: nop

    // 0x8022C12C: nop

;}
RECOMP_FUNC void func_8022C514_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C514: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C518: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022C51C: beq         $v1, $zero, L_8022C538
    if (ctx->r3 == 0) {
        // 0x8022C520: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022C538;
    }
    // 0x8022C520: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022C524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C528: beq         $v1, $v0, L_8022C544
    if (ctx->r3 == ctx->r2) {
        // 0x8022C52C: nop
    
            goto L_8022C544;
    }
    // 0x8022C52C: nop

    // 0x8022C530: j           L_8022C570
    // 0x8022C534: nop

        goto L_8022C570;
    // 0x8022C534: nop

L_8022C538:
    // 0x8022C538: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C53C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022C540: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8022C544:
    // 0x8022C544: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x8022C548: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8022C54C: bne         $v0, $zero, L_8022C56C
    if (ctx->r2 != 0) {
        // 0x8022C550: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_8022C56C;
    }
    // 0x8022C550: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x8022C554: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x8022C558: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022C55C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022C560: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C564: beq         $v0, $zero, L_8022C570
    if (ctx->r2 == 0) {
        // 0x8022C568: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_8022C570;
    }
    // 0x8022C568: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
L_8022C56C:
    // 0x8022C56C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022C570:
    // 0x8022C570: jr          $ra
    // 0x8022C574: nop

    TRACE_RETURN()
    return;
    // 0x8022C574: nop

;}
