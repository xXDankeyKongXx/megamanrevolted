#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80236D54_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236D54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236D58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236D5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236D64: jal         0x802374BC
    // 0x80236D68: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    func_802374BC_ovl25(rdram, ctx);
        goto after_0;
    // 0x80236D68: lbu         $a0, 0x2B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2B);
    after_0:
    // 0x80236D6C: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80236D70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236D74: bne         $v0, $zero, L_80236D90
    if (ctx->r2 != 0) {
        // 0x80236D78: sw          $v0, 0x28($s0)
        MEM_W(0X28, ctx->r16) = ctx->r2;
            goto L_80236D90;
    }
    // 0x80236D78: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x80236D7C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80236D80: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80236D84: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80236D88: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80236D8C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80236D90:
    // 0x80236D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236D94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236D98: jr          $ra
    // 0x80236D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233238_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233238: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023323C: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x80233240: slti        $v0, $v0, 0x30
    ctx->r2 = SIGNED(ctx->r2) < 0X30 ? 1 : 0;
    // 0x80233244: beq         $v0, $zero, L_80233268
    if (ctx->r2 == 0) {
        // 0x80233248: nop
    
            goto L_80233268;
    }
    // 0x80233248: nop

    // 0x8023324C: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x80233250: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x80233254: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80233258: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x8023325C: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x80233260: j           L_80233274
    // 0x80233264: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
        goto L_80233274;
    // 0x80233264: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
L_80233268:
    // 0x80233268: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8023326C: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80233270: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
L_80233274:
    // 0x80233274: jr          $ra
    // 0x80233278: nop

    TRACE_RETURN()
    return;
    // 0x80233278: nop

;}
RECOMP_FUNC void func_8023A0B8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A0B8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023A0BC: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x8023A0C0: beq         $v1, $v0, L_8023A10C
    if (ctx->r3 == ctx->r2) {
        // 0x8023A0C4: slti        $v0, $v1, 0x1E1
        ctx->r2 = SIGNED(ctx->r3) < 0X1E1 ? 1 : 0;
            goto L_8023A10C;
    }
    // 0x8023A0C4: slti        $v0, $v1, 0x1E1
    ctx->r2 = SIGNED(ctx->r3) < 0X1E1 ? 1 : 0;
    // 0x8023A0C8: beq         $v0, $zero, L_8023A0E0
    if (ctx->r2 == 0) {
        // 0x8023A0CC: addiu       $v0, $zero, 0x186
        ctx->r2 = ADD32(0, 0X186);
            goto L_8023A0E0;
    }
    // 0x8023A0CC: addiu       $v0, $zero, 0x186
    ctx->r2 = ADD32(0, 0X186);
    // 0x8023A0D0: beq         $v1, $v0, L_8023A0F4
    if (ctx->r3 == ctx->r2) {
        // 0x8023A0D4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023A0F4;
    }
    // 0x8023A0D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023A0D8: j           L_8023A120
    // 0x8023A0DC: nop

        goto L_8023A120;
    // 0x8023A0DC: nop

L_8023A0E0:
    // 0x8023A0E0: addiu       $v0, $zero, 0x212
    ctx->r2 = ADD32(0, 0X212);
    // 0x8023A0E4: beq         $v1, $v0, L_8023A118
    if (ctx->r3 == ctx->r2) {
        // 0x8023A0E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023A118;
    }
    // 0x8023A0E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A0EC: j           L_8023A120
    // 0x8023A0F0: nop

        goto L_8023A120;
    // 0x8023A0F0: nop

L_8023A0F4:
    // 0x8023A0F4: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8023A0F8: sb          $v1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r3;
    // 0x8023A0FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A100: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A104: j           L_8023A120
    // 0x8023A108: sb          $v0, 0x445F($at)
    MEM_B(0X445F, ctx->r1) = ctx->r2;
        goto L_8023A120;
    // 0x8023A108: sb          $v0, 0x445F($at)
    MEM_B(0X445F, ctx->r1) = ctx->r2;
L_8023A10C:
    // 0x8023A10C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8023A110: j           L_8023A11C
    // 0x8023A114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8023A11C;
    // 0x8023A114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023A118:
    // 0x8023A118: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
L_8023A11C:
    // 0x8023A11C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_8023A120:
    // 0x8023A120: jr          $ra
    // 0x8023A124: nop

    TRACE_RETURN()
    return;
    // 0x8023A124: nop

;}
RECOMP_FUNC void func_80236864_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236864: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236868: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023686C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236870: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236874: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236878: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x8023687C: lui         $v1, 0x6666
    ctx->r3 = S32(0X6666 << 16);
    // 0x80236880: ori         $v1, $v1, 0x6667
    ctx->r3 = ctx->r3 | 0X6667;
    // 0x80236884: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236888: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023688C: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236890: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80236894: mfhi        $t0
    ctx->r8 = hi;
    // 0x80236898: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x8023689C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802368A0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802368A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802368A8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802368AC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x802368B0: bne         $a0, $zero, L_802369AC
    if (ctx->r4 != 0) {
        // 0x802368B4: nop
    
            goto L_802369AC;
    }
    // 0x802368B4: nop

    // 0x802368B8: jal         0x8004F144
    // 0x802368BC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802368BC: nop

    after_0:
    // 0x802368C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802368C4: beq         $s0, $zero, L_802369AC
    if (ctx->r16 == 0) {
        // 0x802368C8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802369AC;
    }
    // 0x802368C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802368CC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802368D0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802368D4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802368D8: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x802368DC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802368E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802368E4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802368E8: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x802368EC: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x802368F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802368F4: jal         0x8009A3B4
    // 0x802368F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802368F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802368FC: jal         0x800A3450
    // 0x80236900: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80236900: nop

    after_2:
    // 0x80236904: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80236908: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8023690C: beq         $v0, $zero, L_80236928
    if (ctx->r2 == 0) {
        // 0x80236910: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80236928;
    }
    // 0x80236910: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80236914: srl         $v0, $v1, 2
    ctx->r2 = S32(U32(ctx->r3) >> 2);
    // 0x80236918: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023691C: addiu       $v1, $zero, 0x300
    ctx->r3 = ADD32(0, 0X300);
    // 0x80236920: j           L_80236934
    // 0x80236924: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
        goto L_80236934;
    // 0x80236924: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
L_80236928:
    // 0x80236928: sll         $v0, $v1, 21
    ctx->r2 = S32(ctx->r3 << 21);
    // 0x8023692C: srl         $v0, $v0, 23
    ctx->r2 = S32(U32(ctx->r2) >> 23);
    // 0x80236930: addiu       $a3, $v0, 0x300
    ctx->r7 = ADD32(ctx->r2, 0X300);
L_80236934:
    // 0x80236934: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80236938: sra         $v0, $v1, 20
    ctx->r2 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8023693C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236940: beq         $v0, $zero, L_80236958
    if (ctx->r2 == 0) {
        // 0x80236944: sra         $v0, $v1, 22
        ctx->r2 = S32(SIGNED(ctx->r3) >> 22);
            goto L_80236958;
    }
    // 0x80236944: sra         $v0, $v1, 22
    ctx->r2 = S32(SIGNED(ctx->r3) >> 22);
    // 0x80236948: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023694C: addiu       $v1, $zero, 0x180
    ctx->r3 = ADD32(0, 0X180);
    // 0x80236950: j           L_80236960
    // 0x80236954: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
        goto L_80236960;
    // 0x80236954: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
L_80236958:
    // 0x80236958: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023695C: addiu       $a2, $v0, -0x180
    ctx->r6 = ADD32(ctx->r2, -0X180);
L_80236960:
    // 0x80236960: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x80236964: sra         $v0, $v1, 24
    ctx->r2 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236968: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023696C: beq         $v0, $zero, L_80236984
    if (ctx->r2 == 0) {
        // 0x80236970: sra         $v0, $v1, 26
        ctx->r2 = S32(SIGNED(ctx->r3) >> 26);
            goto L_80236984;
    }
    // 0x80236970: sra         $v0, $v1, 26
    ctx->r2 = S32(SIGNED(ctx->r3) >> 26);
    // 0x80236974: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236978: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8023697C: j           L_80236988
    // 0x80236980: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
        goto L_80236988;
    // 0x80236980: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
L_80236984:
    // 0x80236984: ori         $a1, $v0, 0xFF00
    ctx->r5 = ctx->r2 | 0XFF00;
L_80236988:
    // 0x80236988: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023698C: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x80236990: lhu         $a0, 0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4);
    // 0x80236994: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80236998: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8023699C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x802369A0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x802369A4: sh          $v1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r3;
    // 0x802369A8: sh          $a0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r4;
L_802369AC:
    // 0x802369AC: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x802369B0: addiu       $v1, $zero, 0x29
    ctx->r3 = ADD32(0, 0X29);
    // 0x802369B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802369B8: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802369BC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802369C0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802369C4: bne         $v0, $v1, L_802369D4
    if (ctx->r2 != ctx->r3) {
        // 0x802369C8: nop
    
            goto L_802369D4;
    }
    // 0x802369C8: nop

    // 0x802369CC: jal         0x8004F5C4
    // 0x802369D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x802369D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_802369D4:
    // 0x802369D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802369D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802369DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802369E0: jr          $ra
    // 0x802369E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802369E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239E18_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239E18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239E1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239E20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80239E28: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80239E2C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80239E30: beq         $v1, $v0, L_80239E68
    if (ctx->r3 == ctx->r2) {
        // 0x80239E34: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_80239E68;
    }
    // 0x80239E34: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x80239E38: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80239E3C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80239E40: jalr        $v0
    // 0x80239E44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239E44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80239E48: jal         0x8006072C
    // 0x80239E4C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_1;
    // 0x80239E4C: nop

    after_1:
    // 0x80239E50: bne         $v0, $zero, L_80239E68
    if (ctx->r2 != 0) {
        // 0x80239E54: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80239E68;
    }
    // 0x80239E54: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80239E58: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80239E5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239E60: bne         $v1, $v0, L_80239E80
    if (ctx->r3 != ctx->r2) {
        // 0x80239E64: nop
    
            goto L_80239E80;
    }
    // 0x80239E64: nop

L_80239E68:
    // 0x80239E68: jal         0x80036E48
    // 0x80239E6C: nop

    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80239E6C: nop

    after_2:
    // 0x80239E70: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80239E74: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80239E78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239E7C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80239E80:
    // 0x80239E80: jal         0x8005FB90
    // 0x80239E84: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x80239E84: nop

    after_3:
    // 0x80239E88: jal         0x80060018
    // 0x80239E8C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x80239E8C: nop

    after_4:
    // 0x80239E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239E98: jr          $ra
    // 0x80239E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225F6C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225F70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225F74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225F78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225F7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225F80: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225F84: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225F88: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80225F8C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225F90: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80225F94: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225F98: beq         $v1, $v0, L_80225FD4
    if (ctx->r3 == ctx->r2) {
        // 0x80225F9C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80225FD4;
    }
    // 0x80225F9C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80225FA0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80225FA4: beql        $v0, $zero, L_80225FBC
    if (ctx->r2 == 0) {
        // 0x80225FA8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80225FBC;
    }
    goto skip_0;
    // 0x80225FA8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    skip_0:
    // 0x80225FAC: beq         $v1, $zero, L_80225FF4
    if (ctx->r3 == 0) {
        // 0x80225FB0: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80225FF4;
    }
    // 0x80225FB0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80225FB4: j           L_80225FFC
    // 0x80225FB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80225FFC;
    // 0x80225FB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225FBC:
    // 0x80225FBC: beq         $v1, $v0, L_80225FDC
    if (ctx->r3 == ctx->r2) {
        // 0x80225FC0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80225FDC;
    }
    // 0x80225FC0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225FC4: beql        $v1, $v0, L_80225FF0
    if (ctx->r3 == ctx->r2) {
        // 0x80225FC8: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_80225FF0;
    }
    goto skip_1;
    // 0x80225FC8: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    skip_1:
    // 0x80225FCC: j           L_80225FFC
    // 0x80225FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80225FFC;
    // 0x80225FD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225FD4:
    // 0x80225FD4: j           L_80225FE0
    // 0x80225FD8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80225FE0;
    // 0x80225FD8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80225FDC:
    // 0x80225FDC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80225FE0:
    // 0x80225FE0: jal         0x8022636C
    // 0x80225FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022636C_ovl25(rdram, ctx);
        goto after_0;
    // 0x80225FE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80225FE8: j           L_80225FFC
    // 0x80225FEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80225FFC;
    // 0x80225FEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225FF0:
    // 0x80225FF0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_80225FF4:
    // 0x80225FF4: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80225FF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225FFC:
    // 0x80225FFC: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80226000: addiu       $v0, $zero, -0x1F40
    ctx->r2 = ADD32(0, -0X1F40);
    // 0x80226004: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226008: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022600C: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80226010: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80226014: jal         0x8004D5FC
    // 0x80226018: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_1;
    // 0x80226018: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022601C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226020: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226024: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226028: sh          $v0, 0x15C($a0)
    MEM_H(0X15C, ctx->r4) = ctx->r2;
    // 0x8022602C: sh          $v0, 0x15A($a0)
    MEM_H(0X15A, ctx->r4) = ctx->r2;
    // 0x80226030: sh          $v0, 0x158($a0)
    MEM_H(0X158, ctx->r4) = ctx->r2;
    // 0x80226034: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226038: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022603C: jal         0x80050294
    // 0x80226040: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80226040: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    after_2:
    // 0x80226044: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226048: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022604C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226050: jr          $ra
    // 0x80226054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AC6C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AC70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AC74: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AC78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AC7C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AC80: jal         0x8003B878
    // 0x8022AC84: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022AC84: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022AC88: lbu         $a0, 0x5($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X5);
    // 0x8022AC8C: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8022AC90: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022AC94: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022AC98: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022AC9C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022ACA0: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022ACA4: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022ACA8: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8022ACAC: lhu         $a0, 0xC($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0XC);
    // 0x8022ACB0: ori         $a1, $a1, 0x40
    ctx->r5 = ctx->r5 | 0X40;
    // 0x8022ACB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022ACB8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022ACBC: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022ACC0: lh          $a0, 0xE($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XE);
    // 0x8022ACC4: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022ACC8: ori         $v1, $v1, 0x5F
    ctx->r3 = ctx->r3 | 0X5F;
    // 0x8022ACCC: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022ACD0: addiu       $v1, $zero, 0x1F40
    ctx->r3 = ADD32(0, 0X1F40);
    // 0x8022ACD4: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x8022ACD8: addiu       $v1, $zero, 0x1F5F
    ctx->r3 = ADD32(0, 0X1F5F);
    // 0x8022ACDC: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x8022ACE0: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8022ACE4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022ACE8: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x8022ACEC: lhu         $a0, 0x8($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X8);
    // 0x8022ACF0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022ACF4: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022ACF8: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022ACFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AD00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AD04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AD08: jr          $ra
    // 0x8022AD0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AD0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802330AC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802330AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802330B0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802330B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802330B8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802330BC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802330C0: addiu       $a1, $a1, 0xFF8
    ctx->r5 = ADD32(ctx->r5, 0XFF8);
    // 0x802330C4: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x802330C8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802330CC: jal         0x8009A3B4
    // 0x802330D0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802330D0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    after_0:
    // 0x802330D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802330D8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802330DC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802330E0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802330E4: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x802330E8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802330EC: beq         $v1, $v0, L_80233134
    if (ctx->r3 == ctx->r2) {
        // 0x802330F0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80233134;
    }
    // 0x802330F0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802330F4: slti        $v0, $v1, 0xA
    ctx->r2 = SIGNED(ctx->r3) < 0XA ? 1 : 0;
    // 0x802330F8: beql        $v0, $zero, L_80233110
    if (ctx->r2 == 0) {
        // 0x802330FC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80233110;
    }
    goto skip_0;
    // 0x802330FC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_0:
    // 0x80233100: beq         $v1, $zero, L_80233120
    if (ctx->r3 == 0) {
        // 0x80233104: addiu       $v0, $zero, -0x30
        ctx->r2 = ADD32(0, -0X30);
            goto L_80233120;
    }
    // 0x80233104: addiu       $v0, $zero, -0x30
    ctx->r2 = ADD32(0, -0X30);
    // 0x80233108: j           L_80233148
    // 0x8023310C: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
        goto L_80233148;
    // 0x8023310C: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
L_80233110:
    // 0x80233110: beql        $v1, $v0, L_8023313C
    if (ctx->r3 == ctx->r2) {
        // 0x80233114: addiu       $s1, $zero, 0x2
        ctx->r17 = ADD32(0, 0X2);
            goto L_8023313C;
    }
    goto skip_1;
    // 0x80233114: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    skip_1:
    // 0x80233118: j           L_80233148
    // 0x8023311C: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
        goto L_80233148;
    // 0x8023311C: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
L_80233120:
    // 0x80233120: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80233124: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80233128: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x8023312C: j           L_80233144
    // 0x80233130: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_80233144;
    // 0x80233130: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_80233134:
    // 0x80233134: j           L_80233144
    // 0x80233138: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80233144;
    // 0x80233138: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8023313C:
    // 0x8023313C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80233140: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
L_80233144:
    // 0x80233144: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
L_80233148:
    // 0x80233148: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x8023314C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233150: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80233154: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80233158: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x8023315C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233160: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80233164: lhu         $v1, 0x4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4);
    // 0x80233168: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8023316C: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x80233170: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80233174: jal         0x8004D5FC
    // 0x80233178: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_1;
    // 0x80233178: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    after_1:
    // 0x8023317C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233180: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233184: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80233188: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8023318C: sh          $v0, 0x15C($a0)
    MEM_H(0X15C, ctx->r4) = ctx->r2;
    // 0x80233190: sh          $v0, 0x15A($a0)
    MEM_H(0X15A, ctx->r4) = ctx->r2;
    // 0x80233194: sh          $v0, 0x158($a0)
    MEM_H(0X158, ctx->r4) = ctx->r2;
    // 0x80233198: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023319C: jal         0x80050294
    // 0x802331A0: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802331A0: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    after_2:
    // 0x802331A4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802331A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802331AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802331B0: jr          $ra
    // 0x802331B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802331B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022C570_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C570: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022C574: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022C578: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8022C57C: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8022C580: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022C584: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C588: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022C58C: lw          $v0, -0x1B78($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B78);
    // 0x8022C590: jr          $ra
    // 0x8022C594: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022C594: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8023A590_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A594: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A598: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A59C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A5A0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023A5A4: bne         $v0, $zero, L_8023A600
    if (ctx->r2 != 0) {
        // 0x8023A5A8: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_8023A600;
    }
    // 0x8023A5A8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x8023A5AC: jal         0x8023AB14
    // 0x8023A5B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023A5B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8023A5B4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8023A5B8: jal         0x8023AB14
    // 0x8023A5BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023A5BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8023A5C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A5C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A5C8: sb          $v0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r2;
    // 0x8023A5CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A5D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A5D4: sb          $v0, 0x4497($at)
    MEM_B(0X4497, ctx->r1) = ctx->r2;
    // 0x8023A5D8: jal         0x8004F488
    // 0x8023A5DC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_2;
    // 0x8023A5DC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_2:
    // 0x8023A5E0: jal         0x8004F418
    // 0x8023A5E4: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8023A5E4: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_3:
    // 0x8023A5E8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023A5EC: jal         0x8005FA7C
    // 0x8023A5F0: addiu       $a0, $a0, -0xC64
    ctx->r4 = ADD32(ctx->r4, -0XC64);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x8023A5F0: addiu       $a0, $a0, -0xC64
    ctx->r4 = ADD32(ctx->r4, -0XC64);
    after_4:
    // 0x8023A5F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A5F8: jal         0x8023A980
    // 0x8023A5FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8023A980_ovl25(rdram, ctx);
        goto after_5;
    // 0x8023A5FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
L_8023A600:
    // 0x8023A600: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A604: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A608: jr          $ra
    // 0x8023A60C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A60C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279C0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279C0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802279C4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802279C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279CC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802279D0: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x802279D4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802279D8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802279DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802279E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802279E4: jal         0x8009A3B4
    // 0x802279E8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802279E8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x802279EC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802279F0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802279F4: jal         0x8009A3B4
    // 0x802279F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802279F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802279FC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80227A00: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80227A04: jal         0x8009A3B4
    // 0x80227A08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227A08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80227A0C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227A10: jal         0x800A3450
    // 0x80227A14: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80227A14: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80227A18: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A20: sh          $v0, 0x30E($s0)
    MEM_H(0X30E, ctx->r16) = ctx->r2;
    // 0x80227A24: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80227A28: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80227A2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227A30: lw          $v0, -0x2380($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2380);
    // 0x80227A34: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80227A38: jalr        $v0
    // 0x80227A3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80227A3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80227A40: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227A44: bne         $a1, $zero, L_80227B9C
    if (ctx->r5 != 0) {
        // 0x80227A48: nop
    
            goto L_80227B9C;
    }
    // 0x80227A48: nop

    // 0x80227A4C: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80227A50: bne         $v0, $zero, L_80227B20
    if (ctx->r2 != 0) {
        // 0x80227A54: nop
    
            goto L_80227B20;
    }
    // 0x80227A54: nop

    // 0x80227A58: lhu         $v0, 0x314($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X314);
    // 0x80227A5C: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80227A60: sra         $a0, $a1, 16
    ctx->r4 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80227A64: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227A68: bnel        $a0, $v0, L_80227ACC
    if (ctx->r4 != ctx->r2) {
        // 0x80227A6C: lui         $v0, 0x38E3
        ctx->r2 = S32(0X38E3 << 16);
            goto L_80227ACC;
    }
    goto skip_0;
    // 0x80227A6C: lui         $v0, 0x38E3
    ctx->r2 = S32(0X38E3 << 16);
    skip_0:
    // 0x80227A70: lh          $v1, 0x58($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X58);
    // 0x80227A74: beq         $v1, $zero, L_80227A98
    if (ctx->r3 == 0) {
        // 0x80227A78: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80227A98;
    }
    // 0x80227A78: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80227A7C: blezl       $v1, L_80227A88
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80227A80: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_80227A88;
    }
    goto skip_1;
    // 0x80227A80: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    skip_1:
    // 0x80227A84: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_80227A88:
    // 0x80227A88: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80227A8C: lh          $v0, 0x58($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X58);
    // 0x80227A90: bne         $v0, $zero, L_80227B64
    if (ctx->r2 != 0) {
        // 0x80227A94: nop
    
            goto L_80227B64;
    }
    // 0x80227A94: nop

L_80227A98:
    // 0x80227A98: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227A9C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80227AA0: bne         $v0, $zero, L_80227AB8
    if (ctx->r2 != 0) {
        // 0x80227AA4: nop
    
            goto L_80227AB8;
    }
    // 0x80227AA4: nop

    // 0x80227AA8: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80227AAC: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80227AB0: j           L_80227B60
    // 0x80227AB4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
        goto L_80227B60;
    // 0x80227AB4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
L_80227AB8:
    // 0x80227AB8: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80227ABC: srl         $v0, $v0, 6
    ctx->r2 = S32(U32(ctx->r2) >> 6);
    // 0x80227AC0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80227AC4: j           L_80227B60
    // 0x80227AC8: addiu       $v0, $v0, 0x12
    ctx->r2 = ADD32(ctx->r2, 0X12);
        goto L_80227B60;
    // 0x80227AC8: addiu       $v0, $v0, 0x12
    ctx->r2 = ADD32(ctx->r2, 0X12);
L_80227ACC:
    // 0x80227ACC: ori         $v0, $v0, 0x8E39
    ctx->r2 = ctx->r2 | 0X8E39;
    // 0x80227AD0: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227AD4: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80227AD8: mfhi        $t0
    ctx->r8 = hi;
    // 0x80227ADC: sra         $v1, $t0, 3
    ctx->r3 = S32(SIGNED(ctx->r8) >> 3);
    // 0x80227AE0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80227AE4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80227AE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227AEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227AF0: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80227AF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227AF8: lhu         $v1, 0x314($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X314);
    // 0x80227AFC: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x80227B00: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227B04: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227B08: lhu         $v0, -0x2350($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2350);
    // 0x80227B0C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227B10: andi        $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 & 0X7FFF;
    // 0x80227B14: sh          $v1, 0x314($s0)
    MEM_H(0X314, ctx->r16) = ctx->r3;
    // 0x80227B18: j           L_80227B64
    // 0x80227B1C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
        goto L_80227B64;
    // 0x80227B1C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
L_80227B20:
    // 0x80227B20: bgez        $v0, L_80227B44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227B24: nop
    
            goto L_80227B44;
    }
    // 0x80227B24: nop

    // 0x80227B28: lh          $v0, 0x58($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X58);
    // 0x80227B2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227B30: slti        $v0, $v0, -0x5F
    ctx->r2 = SIGNED(ctx->r2) < -0X5F ? 1 : 0;
    // 0x80227B34: bne         $v0, $zero, L_80227B60
    if (ctx->r2 != 0) {
        // 0x80227B38: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80227B60;
    }
    // 0x80227B38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80227B3C: j           L_80227B58
    // 0x80227B40: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
        goto L_80227B58;
    // 0x80227B40: addiu       $v0, $v1, -0x8
    ctx->r2 = ADD32(ctx->r3, -0X8);
L_80227B44:
    // 0x80227B44: lh          $v0, 0x58($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X58);
    // 0x80227B48: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227B4C: slti        $v0, $v0, 0x60
    ctx->r2 = SIGNED(ctx->r2) < 0X60 ? 1 : 0;
    // 0x80227B50: beq         $v0, $zero, L_80227B5C
    if (ctx->r2 == 0) {
        // 0x80227B54: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_80227B5C;
    }
    // 0x80227B54: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
L_80227B58:
    // 0x80227B58: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
L_80227B5C:
    // 0x80227B5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80227B60:
    // 0x80227B60: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
L_80227B64:
    // 0x80227B64: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80227B68: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227B6C: beq         $v0, $a1, L_80227B84
    if (ctx->r2 == ctx->r5) {
        // 0x80227B70: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B84;
    }
    // 0x80227B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B74: jal         0x800502EC
    // 0x80227B78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_5;
    // 0x80227B78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80227B7C: j           L_80227B8C
    // 0x80227B80: nop

        goto L_80227B8C;
    // 0x80227B80: nop

L_80227B84:
    // 0x80227B84: jal         0x800504EC
    // 0x80227B88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_6;
    // 0x80227B88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80227B8C:
    // 0x80227B8C: jal         0x8005129C
    // 0x80227B90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005129C_2C69C(rdram, ctx);
        goto after_7;
    // 0x80227B90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80227B94: j           L_80227BC4
    // 0x80227B98: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
        goto L_80227BC4;
    // 0x80227B98: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
L_80227B9C:
    // 0x80227B9C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80227BA0: beq         $v0, $a1, L_80227BB8
    if (ctx->r2 == ctx->r5) {
        // 0x80227BA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227BB8;
    }
    // 0x80227BA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227BA8: jal         0x80050294
    // 0x80227BAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_8;
    // 0x80227BAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x80227BB0: j           L_80227BC4
    // 0x80227BB4: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
        goto L_80227BC4;
    // 0x80227BB4: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
L_80227BB8:
    // 0x80227BB8: jal         0x8005044C
    // 0x80227BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x80227BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80227BC0: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
L_80227BC4:
    // 0x80227BC4: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80227BC8: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x80227BCC: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    // 0x80227BD0: addiu       $v0, $s1, 0x28
    ctx->r2 = ADD32(ctx->r17, 0X28);
    // 0x80227BD4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227BD8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80227BDC: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80227BE0: lhu         $a3, 0x8($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X8);
    // 0x80227BE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227BE8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80227BEC: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x80227BF0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80227BF4: lui         $v0, 0x588
    ctx->r2 = S32(0X588 << 16);
    // 0x80227BF8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80227BFC: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80227C00: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80227C04: jal         0x80051E18
    // 0x80227C08: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    func_80051E18_2D218(rdram, ctx);
        goto after_10;
    // 0x80227C08: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    after_10:
    // 0x80227C0C: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
    // 0x80227C10: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80227C14: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80227C18: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80227C1C: jr          $ra
    // 0x80227C20: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80227C20: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022F234_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F234: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F238: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F23C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F244: lh          $v0, 0x4E2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4E2);
    // 0x8022F248: bne         $v0, $zero, L_8022F264
    if (ctx->r2 != 0) {
        // 0x8022F24C: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_8022F264;
    }
    // 0x8022F24C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022F250: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F254: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022F258: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F25C: j           L_8022F284
    // 0x8022F260: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022F284;
    // 0x8022F260: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F264:
    // 0x8022F264: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022F268: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022F26C: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022F270: jal         0x8004DA90
    // 0x8022F274: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022F274: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022F278: lhu         $v0, 0x4E2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4E2);
    // 0x8022F27C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F280: sh          $v0, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = ctx->r2;
L_8022F284:
    // 0x8022F284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F288: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F28C: jr          $ra
    // 0x8022F290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253AC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253BC: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802253C0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802253C4: beq         $v0, $zero, L_8022543C
    if (ctx->r2 == 0) {
        // 0x802253C8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022543C;
    }
    // 0x802253C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802253CC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802253D0: addu        $at, $at, $v0
    gpr jr_addend_802253D8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802253D4: lw          $v0, 0xC10($at)
    ctx->r2 = ADD32(ctx->r1, 0XC10);
    // 0x802253D8: jr          $v0
    // 0x802253DC: nop

    switch (jr_addend_802253D8 >> 2) {
        case 0: goto L_802253E0; break;
        case 1: goto L_802253E8; break;
        case 2: goto L_80225400; break;
        case 3: goto L_80225418; break;
        case 4: goto L_8022543C; break;
        default: switch_error(__func__, 0x802253D8, 0x80240C10);
    }
    // 0x802253DC: nop

L_802253E0:
    // 0x802253E0: j           L_80225428
    // 0x802253E4: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
        goto L_80225428;
    // 0x802253E4: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
L_802253E8:
    // 0x802253E8: jal         0x8006033C
    // 0x802253EC: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802253EC: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_0:
    // 0x802253F0: beq         $v0, $zero, L_8022543C
    if (ctx->r2 == 0) {
        // 0x802253F4: addiu       $a0, $zero, 0x35
        ctx->r4 = ADD32(0, 0X35);
            goto L_8022543C;
    }
    // 0x802253F4: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x802253F8: j           L_80225428
    // 0x802253FC: nop

        goto L_80225428;
    // 0x802253FC: nop

L_80225400:
    // 0x80225400: jal         0x8006033C
    // 0x80225404: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225404: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_1:
    // 0x80225408: beq         $v0, $zero, L_8022543C
    if (ctx->r2 == 0) {
        // 0x8022540C: addiu       $a0, $zero, 0x36
        ctx->r4 = ADD32(0, 0X36);
            goto L_8022543C;
    }
    // 0x8022540C: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    // 0x80225410: j           L_80225428
    // 0x80225414: nop

        goto L_80225428;
    // 0x80225414: nop

L_80225418:
    // 0x80225418: jal         0x8006033C
    // 0x8022541C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022541C: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_2:
    // 0x80225420: beq         $v0, $zero, L_8022543C
    if (ctx->r2 == 0) {
        // 0x80225424: addiu       $a0, $zero, 0x37
        ctx->r4 = ADD32(0, 0X37);
            goto L_8022543C;
    }
    // 0x80225424: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
L_80225428:
    // 0x80225428: jal         0x80060690
    // 0x8022542C: nop

    func_80060690_3BA90(rdram, ctx);
        goto after_3;
    // 0x8022542C: nop

    after_3:
    // 0x80225430: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225434: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225438: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022543C:
    // 0x8022543C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225440: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225444: jr          $ra
    // 0x80225448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022544C: nop

;}
RECOMP_FUNC void func_802375A0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802375A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802375A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802375A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802375AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802375B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802375B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802375B8: lw          $v0, -0xD48($at)
    ctx->r2 = MEM_W(ctx->r1, -0XD48);
    // 0x802375BC: jalr        $v0
    // 0x802375C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802375C0: nop

    after_0:
    // 0x802375C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802375C8: jr          $ra
    // 0x802375CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802375CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FBFC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBFC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022FC00: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022FC04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FC08: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022FC0C: jal         0x8004EFE4
    // 0x8022FC10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022FC10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022FC14: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022FC18: beq         $s0, $zero, L_8022FCC8
    if (ctx->r16 == 0) {
        // 0x8022FC1C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FCC8;
    }
    // 0x8022FC1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FC20: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022FC24: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022FC28: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022FC2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FC30: addiu       $v0, $v0, 0x4D58
    ctx->r2 = ADD32(ctx->r2, 0X4D58);
    // 0x8022FC34: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022FC38: sw          $v0, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r2;
    // 0x8022FC3C: lhu         $v0, 0x1D0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1D0);
    // 0x8022FC40: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022FC44: lhu         $v0, 0x1D2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1D2);
    // 0x8022FC48: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
    // 0x8022FC4C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FC50: lhu         $v0, 0x1D4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1D4);
    // 0x8022FC54: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022FC58: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022FC5C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022FC60: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022FC64: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022FC68: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022FC6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FC70: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022FC74: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022FC78: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022FC7C: jal         0x800A3450
    // 0x8022FC80: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022FC80: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    after_1:
    // 0x8022FC84: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x8022FC88: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022FC8C: jal         0x800A3450
    // 0x8022FC90: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022FC90: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022FC94: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8022FC98: addiu       $s0, $s0, 0x8C
    ctx->r16 = ADD32(ctx->r16, 0X8C);
    // 0x8022FC9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022FCA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FCA4: jal         0x80031600
    // 0x8022FCA8: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x8022FCA8: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022FCAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FCB0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022FCB4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022FCB8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022FCBC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022FCC0: jal         0x80031DA8
    // 0x8022FCC4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8022FCC4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
L_8022FCC8:
    // 0x8022FCC8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022FCCC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022FCD0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022FCD4: jr          $ra
    // 0x8022FCD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022FCD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023C690_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C690: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023C694: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023C698: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x8023C69C: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x8023C6A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023C6A4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023C6A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8023C6AC: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8023C6B0: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023C6B4: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
    // 0x8023C6B8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8023C6BC: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8023C6C0: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8023C6C4: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
    // 0x8023C6C8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8023C6CC: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8023C6D0: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8023C6D4: sh          $v0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r2;
    // 0x8023C6D8: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8023C6DC: beq         $v0, $zero, L_8023C6F4
    if (ctx->r2 == 0) {
        // 0x8023C6E0: andi        $v0, $v1, 0x7
        ctx->r2 = ctx->r3 & 0X7;
            goto L_8023C6F4;
    }
    // 0x8023C6E0: andi        $v0, $v1, 0x7
    ctx->r2 = ctx->r3 & 0X7;
    // 0x8023C6E4: beq         $v0, $zero, L_8023C700
    if (ctx->r2 == 0) {
        // 0x8023C6E8: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_8023C700;
    }
    // 0x8023C6E8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8023C6EC: j           L_8023C708
    // 0x8023C6F0: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
        goto L_8023C708;
    // 0x8023C6F0: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_8023C6F4:
    // 0x8023C6F4: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x8023C6F8: bne         $v0, $zero, L_8023C704
    if (ctx->r2 != 0) {
        // 0x8023C6FC: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_8023C704;
    }
    // 0x8023C6FC: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_8023C700:
    // 0x8023C700: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8023C704:
    // 0x8023C704: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_8023C708:
    // 0x8023C708: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x8023C70C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8023C710: bne         $v1, $v0, L_8023C724
    if (ctx->r3 != ctx->r2) {
        // 0x8023C714: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8023C724;
    }
    // 0x8023C714: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023C718: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x8023C71C: j           L_8023C72C
    // 0x8023C720: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
        goto L_8023C72C;
    // 0x8023C720: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
L_8023C724:
    // 0x8023C724: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8023C728: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8023C72C:
    // 0x8023C72C: lbu         $v0, 0x7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7);
    // 0x8023C730: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023C734: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023C738: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
    // 0x8023C73C: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8023C740: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8023C744: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023C748: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
    // 0x8023C74C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8023C750: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8023C754: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023C758: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x8023C75C: jal         0x8003055C
    // 0x8023C760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x8023C760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023C764: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C768: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8023C76C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8023C770: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8023C774: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023C778: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x8023C77C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8023C780: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8023C784: jal         0x8002FD30
    // 0x8023C788: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x8023C788: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x8023C78C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C790: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8023C794: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023C798: jal         0x8002FD30
    // 0x8023C79C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x8023C79C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x8023C7A0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023C7A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023C7A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023C7AC: jr          $ra
    // 0x8023C7B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023C7B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C5C0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C5C4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C5C8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022C5CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022C5D0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C5D4: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022C5D8: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8022C5DC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C5E0: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C5E4: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x8022C5E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C5EC: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022C5F0: beq         $a0, $v0, L_8022C60C
    if (ctx->r4 == ctx->r2) {
        // 0x8022C5F4: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022C60C;
    }
    // 0x8022C5F4: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022C5F8: bne         $a0, $v0, L_8022C608
    if (ctx->r4 != ctx->r2) {
        // 0x8022C5FC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022C608;
    }
    // 0x8022C5FC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022C600: j           L_8022C60C
    // 0x8022C604: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_8022C60C;
    // 0x8022C604: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_8022C608:
    // 0x8022C608: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8022C60C:
    // 0x8022C60C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022C610: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8022C614: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C618: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C61C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022C620: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022C624: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022C628: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022C62C: beq         $a0, $v1, L_8022C654
    if (ctx->r4 == ctx->r3) {
        // 0x8022C630: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022C654;
    }
    // 0x8022C630: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022C634: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022C638: jal         0x8003B85C
    // 0x8022C63C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022C63C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022C640: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022C644: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x8022C648: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x8022C64C: jal         0x8003B840
    // 0x8022C650: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x8022C650: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_8022C654:
    // 0x8022C654: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x8022C658: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022C65C: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8022C660: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8022C664: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022C668: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x8022C66C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x8022C670: beq         $v1, $v0, L_8022C68C
    if (ctx->r3 == ctx->r2) {
        // 0x8022C674: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8022C68C;
    }
    // 0x8022C674: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022C678: bne         $v1, $v0, L_8022C688
    if (ctx->r3 != ctx->r2) {
        // 0x8022C67C: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022C688;
    }
    // 0x8022C67C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022C680: j           L_8022C68C
    // 0x8022C684: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_8022C68C;
    // 0x8022C684: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_8022C688:
    // 0x8022C688: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_8022C68C:
    // 0x8022C68C: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x8022C690: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022C694: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C698: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022C69C: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x8022C6A0: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8022C6A4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022C6A8: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022C6AC: beq         $a0, $v1, L_8022C6D4
    if (ctx->r4 == ctx->r3) {
        // 0x8022C6B0: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_8022C6D4;
    }
    // 0x8022C6B0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x8022C6B4: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x8022C6B8: jal         0x8003B85C
    // 0x8022C6BC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x8022C6BC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022C6C0: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022C6C4: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x8022C6C8: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x8022C6CC: jal         0x8003B840
    // 0x8022C6D0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022C6D0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022C6D4:
    // 0x8022C6D4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022C6D8: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x8022C6DC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022C6E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C6E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C6E8: jr          $ra
    // 0x8022C6EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C6EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235040_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235044: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235048: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023504C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235050: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235054: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235058: lw          $v0, -0x1110($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1110);
    // 0x8023505C: jalr        $v0
    // 0x80235060: addiu       $a1, $a0, 0xD4
    ctx->r5 = ADD32(ctx->r4, 0XD4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235060: addiu       $a1, $a0, 0xD4
    ctx->r5 = ADD32(ctx->r4, 0XD4);
    after_0:
    // 0x80235064: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235068: jr          $ra
    // 0x8023506C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023506C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BDFC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BDFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BE00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BE04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023BE08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023BE0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BE10: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x8023BE14: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023BE18: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8023BE1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BE20: beq         $v1, $v0, L_8023BF14
    if (ctx->r3 == ctx->r2) {
        // 0x8023BE24: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023BF14;
    }
    // 0x8023BE24: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023BE28: beql        $v0, $zero, L_8023BE40
    if (ctx->r2 == 0) {
        // 0x8023BE2C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BE40;
    }
    goto skip_0;
    // 0x8023BE2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023BE30: beq         $v1, $zero, L_8023BE58
    if (ctx->r3 == 0) {
        // 0x8023BE34: nop
    
            goto L_8023BE58;
    }
    // 0x8023BE34: nop

    // 0x8023BE38: j           L_8023BFF8
    // 0x8023BE3C: nop

        goto L_8023BFF8;
    // 0x8023BE3C: nop

L_8023BE40:
    // 0x8023BE40: beq         $v1, $v0, L_8023BF60
    if (ctx->r3 == ctx->r2) {
        // 0x8023BE44: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BF60;
    }
    // 0x8023BE44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BE48: beq         $v1, $v0, L_8023BF7C
    if (ctx->r3 == ctx->r2) {
        // 0x8023BE4C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023BF7C;
    }
    // 0x8023BE4C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023BE50: j           L_8023BFF8
    // 0x8023BE54: nop

        goto L_8023BFF8;
    // 0x8023BE54: nop

L_8023BE58:
    // 0x8023BE58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023BE5C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023BE60: bne         $v0, $zero, L_8023BFF8
    if (ctx->r2 != 0) {
        // 0x8023BE64: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BFF8;
    }
    // 0x8023BE64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BE68: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023BE6C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8023BE70: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x8023BE74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BE78: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8023BE7C: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023BE80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BE84: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8023BE88: lui         $v0, 0xFA3F
    ctx->r2 = S32(0XFA3F << 16);
    // 0x8023BE8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BE90: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8023BE94: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023BE98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BE9C: sb          $s0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r16;
    // 0x8023BEA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BEA4: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x8023BEA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BEAC: sh          $zero, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = 0;
    // 0x8023BEB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BEB4: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x8023BEB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BEBC: sw          $zero, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = 0;
    // 0x8023BEC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BEC4: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x8023BEC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BECC: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x8023BED0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BED4: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x8023BED8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BEDC: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x8023BEE0: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8023BEE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BEE8: jal         0x80054578
    // 0x8023BEEC: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    func_80054578_2F978(rdram, ctx);
        goto after_0;
    // 0x8023BEEC: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    after_0:
    // 0x8023BEF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BEF4: jal         0x80034844
    // 0x8023BEF8: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    func_80034844_FC44(rdram, ctx);
        goto after_1;
    // 0x8023BEF8: sb          $s0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r16;
    after_1:
    // 0x8023BEFC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023BF00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023BF04: jal         0x80036B00
    // 0x8023BF08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_2;
    // 0x8023BF08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8023BF0C: j           L_8023BF6C
    // 0x8023BF10: nop

        goto L_8023BF6C;
    // 0x8023BF10: nop

L_8023BF14:
    // 0x8023BF14: jal         0x80070050
    // 0x8023BF18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x8023BF18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023BF1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023BF20: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x8023BF24: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8023BF28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BF2C: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x8023BF30: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x8023BF34: jal         0x8004CB2C
    // 0x8023BF38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_4;
    // 0x8023BF38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_4:
    // 0x8023BF3C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023BF40: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023BF44: beq         $v0, $zero, L_8023BF54
    if (ctx->r2 == 0) {
        // 0x8023BF48: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BF54;
    }
    // 0x8023BF48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BF4C: j           L_8023BFF8
    // 0x8023BF50: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023BFF8;
    // 0x8023BF50: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023BF54:
    // 0x8023BF54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BF58: j           L_8023BFF8
    // 0x8023BF5C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023BFF8;
    // 0x8023BF5C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023BF60:
    // 0x8023BF60: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x8023BF64: jal         0x80036340
    // 0x8023BF68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80036340_11740(rdram, ctx);
        goto after_5;
    // 0x8023BF68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
L_8023BF6C:
    // 0x8023BF6C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8023BF70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BF74: j           L_8023BFF8
    // 0x8023BF78: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023BFF8;
    // 0x8023BF78: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023BF7C:
    // 0x8023BF7C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023BF80: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x8023BF84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BF88: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023BF8C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023BF90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BF94: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023BF98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BF9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BFA0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8023BFA4: addiu       $v0, $zero, -0x5C1
    ctx->r2 = ADD32(0, -0X5C1);
    // 0x8023BFA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BFAC: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8023BFB0: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023BFB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BFB8: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8023BFBC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BFC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BFC4: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8023BFC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BFCC: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8023BFD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BFD4: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023BFD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BFDC: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023BFE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BFE4: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023BFE8: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x8023BFEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BFF0: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8023BFF4: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8023BFF8:
    // 0x8023BFF8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023BFFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C000: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C004: jr          $ra
    // 0x8023C008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802376BC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802376BC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802376C0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x802376C4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802376C8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802376CC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x802376D0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x802376D4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x802376D8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x802376DC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x802376E0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802376E4: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x802376E8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802376EC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802376F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802376F4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802376F8: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x802376FC: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x80237700: lhu         $s5, -0xE0C($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0XE0C);
    // 0x80237704: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80237708: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8023770C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80237710: lhu         $s6, -0xE0A($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0XE0A);
    // 0x80237714: jal         0x800874D0
    // 0x80237718: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x80237718: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8023771C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80237720: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80237724: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80237728: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023772C: addiu       $a0, $a0, 0x1230
    ctx->r4 = ADD32(ctx->r4, 0X1230);
    // 0x80237730: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x80237734: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237738: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023773C: lbu         $v1, -0xD68($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0XD68);
    // 0x80237740: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80237744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237748: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023774C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80237750: jal         0x80086F94
    // 0x80237754: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x80237754: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x80237758: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8023775C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80237760: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80237764: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237768: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023776C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237770: lhu         $v0, -0xE08($at)
    ctx->r2 = MEM_HU(ctx->r1, -0XE08);
    // 0x80237774: beq         $v0, $zero, L_80237990
    if (ctx->r2 == 0) {
        // 0x80237778: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80237990;
    }
    // 0x80237778: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8023777C:
    // 0x8023777C: bgez        $s6, L_80237788
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80237780: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_80237788;
    }
    // 0x80237780: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80237784: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_80237788:
    // 0x80237788: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023778C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80237790: beq         $v0, $zero, L_80237A4C
    if (ctx->r2 == 0) {
        // 0x80237794: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_80237A4C;
    }
    // 0x80237794: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80237798: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023779C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x802377A0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x802377A4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x802377A8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802377AC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802377B0: jal         0x800874D0
    // 0x802377B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x802377B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x802377B8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802377BC: jal         0x80087248
    // 0x802377C0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x802377C0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x802377C4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802377C8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802377CC: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x802377D0: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x802377D4: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x802377D8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802377DC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802377E0: jal         0x800874D0
    // 0x802377E4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x802377E4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x802377E8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802377EC: jal         0x80087248
    // 0x802377F0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x802377F0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x802377F4: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x802377F8: bgez        $s5, L_80237804
    if (SIGNED(ctx->r21) >= 0) {
        // 0x802377FC: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80237804;
    }
    // 0x802377FC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80237800: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_80237804:
    // 0x80237804: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x80237808: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023780C: jal         0x800874D0
    // 0x80237810: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x80237810: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x80237814: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80237818: jal         0x80087248
    // 0x8023781C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x8023781C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x80237820: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80237824: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80237828: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x8023782C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80237830: bnel        $v0, $zero, L_8023777C
    if (ctx->r2 != 0) {
        // 0x80237834: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023777C;
    }
    goto skip_0;
    // 0x80237834: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80237838: beq         $a1, $zero, L_80237988
    if (ctx->r5 == 0) {
        // 0x8023783C: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_80237988;
    }
    // 0x8023783C: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x80237840: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x80237844: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x80237848: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_8023784C:
    // 0x8023784C: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x80237850: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x80237854: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x80237858: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8023785C: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x80237860: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x80237864: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x80237868: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023786C: mflo        $a3
    ctx->r7 = lo;
    // 0x80237870: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x80237874: nop

    // 0x80237878: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8023787C: bne         $a1, $zero, L_80237888
    if (ctx->r5 != 0) {
        // 0x80237880: nop
    
            goto L_80237888;
    }
    // 0x80237880: nop

    // 0x80237884: break       7
    do_break(2149808260);
L_80237888:
    // 0x80237888: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023788C: bne         $a1, $at, L_802378A0
    if (ctx->r5 != ctx->r1) {
        // 0x80237890: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802378A0;
    }
    // 0x80237890: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80237894: bne         $a3, $at, L_802378A0
    if (ctx->r7 != ctx->r1) {
        // 0x80237898: nop
    
            goto L_802378A0;
    }
    // 0x80237898: nop

    // 0x8023789C: break       6
    do_break(2149808284);
L_802378A0:
    // 0x802378A0: mflo        $a3
    ctx->r7 = lo;
    // 0x802378A4: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x802378A8: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x802378AC: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x802378B0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802378B4: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x802378B8: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802378BC: mflo        $v0
    ctx->r2 = lo;
    // 0x802378C0: nop

    // 0x802378C4: nop

    // 0x802378C8: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x802378CC: bne         $a1, $zero, L_802378D8
    if (ctx->r5 != 0) {
        // 0x802378D0: nop
    
            goto L_802378D8;
    }
    // 0x802378D0: nop

    // 0x802378D4: break       7
    do_break(2149808340);
L_802378D8:
    // 0x802378D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802378DC: bne         $a1, $at, L_802378F0
    if (ctx->r5 != ctx->r1) {
        // 0x802378E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802378F0;
    }
    // 0x802378E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802378E4: bne         $v0, $at, L_802378F0
    if (ctx->r2 != ctx->r1) {
        // 0x802378E8: nop
    
            goto L_802378F0;
    }
    // 0x802378E8: nop

    // 0x802378EC: break       6
    do_break(2149808364);
L_802378F0:
    // 0x802378F0: mflo        $v0
    ctx->r2 = lo;
    // 0x802378F4: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x802378F8: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x802378FC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80237900: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80237904: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80237908: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023790C: mflo        $v1
    ctx->r3 = lo;
    // 0x80237910: nop

    // 0x80237914: nop

    // 0x80237918: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8023791C: bne         $a1, $zero, L_80237928
    if (ctx->r5 != 0) {
        // 0x80237920: nop
    
            goto L_80237928;
    }
    // 0x80237920: nop

    // 0x80237924: break       7
    do_break(2149808420);
L_80237928:
    // 0x80237928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023792C: bne         $a1, $at, L_80237940
    if (ctx->r5 != ctx->r1) {
        // 0x80237930: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80237940;
    }
    // 0x80237930: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80237934: bne         $v1, $at, L_80237940
    if (ctx->r3 != ctx->r1) {
        // 0x80237938: nop
    
            goto L_80237940;
    }
    // 0x80237938: nop

    // 0x8023793C: break       6
    do_break(2149808444);
L_80237940:
    // 0x80237940: mflo        $v1
    ctx->r3 = lo;
    // 0x80237944: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x80237948: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8023794C: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x80237950: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x80237954: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x80237958: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8023795C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x80237960: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80237964: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x80237968: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8023796C: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80237970: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80237974: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80237978: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8023797C: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x80237980: bne         $v0, $zero, L_8023784C
    if (ctx->r2 != 0) {
        // 0x80237984: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_8023784C;
    }
    // 0x80237984: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_80237988:
    // 0x80237988: j           L_8023777C
    // 0x8023798C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023777C;
    // 0x8023798C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80237990:
    // 0x80237990: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80237994: bne         $v0, $zero, L_80237A4C
    if (ctx->r2 != 0) {
        // 0x80237998: nop
    
            goto L_80237A4C;
    }
    // 0x80237998: nop

L_8023799C:
    // 0x8023799C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x802379A0: bltzl       $v0, L_802379A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802379A4: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_802379A8;
    }
    goto skip_1;
    // 0x802379A4: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_802379A8:
    // 0x802379A8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802379AC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802379B0: beq         $v0, $zero, L_80237A4C
    if (ctx->r2 == 0) {
        // 0x802379B4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_80237A4C;
    }
    // 0x802379B4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802379B8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x802379BC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x802379C0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x802379C4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x802379C8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802379CC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802379D0: jal         0x800874D0
    // 0x802379D4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x802379D4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x802379D8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802379DC: jal         0x80087248
    // 0x802379E0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x802379E0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x802379E4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802379E8: bgez        $s5, L_802379F4
    if (SIGNED(ctx->r21) >= 0) {
        // 0x802379EC: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_802379F4;
    }
    // 0x802379EC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x802379F0: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_802379F4:
    // 0x802379F4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x802379F8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802379FC: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x80237A00: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x80237A04: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80237A08: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80237A0C: jal         0x800874D0
    // 0x80237A10: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x80237A10: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x80237A14: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80237A18: jal         0x80087248
    // 0x80237A1C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x80237A1C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x80237A20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80237A24: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80237A28: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80237A2C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80237A30: bnel        $v0, $zero, L_8023799C
    if (ctx->r2 != 0) {
        // 0x80237A34: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023799C;
    }
    goto skip_2;
    // 0x80237A34: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x80237A38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237A3C: jal         0x80099F90
    // 0x80237A40: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x80237A40: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x80237A44: j           L_8023799C
    // 0x80237A48: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023799C;
    // 0x80237A48: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80237A4C:
    // 0x80237A4C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80237A50: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80237A54: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80237A58: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80237A5C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80237A60: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80237A64: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80237A68: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80237A6C: jr          $ra
    // 0x80237A70: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80237A70: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8022EAC4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EAC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EAC8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EACC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022EAD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EAD4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EAD8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EADC: lw          $v0, -0x1640($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1640);
    // 0x8022EAE0: jalr        $v0
    // 0x8022EAE4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EAE4: nop

    after_0:
    // 0x8022EAE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EAEC: jr          $ra
    // 0x8022EAF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EAF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238140_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238144: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238148: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023814C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238150: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238154: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238158: lw          $v0, -0xCB0($at)
    ctx->r2 = MEM_W(ctx->r1, -0XCB0);
    // 0x8023815C: jalr        $v0
    // 0x80238160: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238160: nop

    after_0:
    // 0x80238164: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238168: jr          $ra
    // 0x8023816C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023816C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233ABC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233AC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233AC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233ACC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80233AD0: beq         $v1, $zero, L_80233AF4
    if (ctx->r3 == 0) {
        // 0x80233AD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233AF4;
    }
    // 0x80233AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233AD8: bne         $v1, $v0, L_80233AE8
    if (ctx->r3 != ctx->r2) {
        // 0x80233ADC: addiu       $a0, $zero, 0x142
        ctx->r4 = ADD32(0, 0X142);
            goto L_80233AE8;
    }
    // 0x80233ADC: addiu       $a0, $zero, 0x142
    ctx->r4 = ADD32(0, 0X142);
    // 0x80233AE0: jal         0x8002A33C
    // 0x80233AE4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80233AE4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
L_80233AE8:
    // 0x80233AE8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80233AEC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233AF0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80233AF4:
    // 0x80233AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233AF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233AFC: jr          $ra
    // 0x80233B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A488_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023A48C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023A490: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023A494: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023A498: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A49C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8023A4A0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8023A4A4: beq         $v1, $v0, L_8023A530
    if (ctx->r3 == ctx->r2) {
        // 0x8023A4A8: slti        $v0, $v1, 0x1F
        ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
            goto L_8023A530;
    }
    // 0x8023A4A8: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x8023A4AC: beql        $v0, $zero, L_8023A4C4
    if (ctx->r2 == 0) {
        // 0x8023A4B0: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8023A4C4;
    }
    goto skip_0;
    // 0x8023A4B0: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x8023A4B4: beq         $v1, $zero, L_8023A4D4
    if (ctx->r3 == 0) {
        // 0x8023A4B8: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_8023A4D4;
    }
    // 0x8023A4B8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8023A4BC: j           L_8023A548
    // 0x8023A4C0: nop

        goto L_8023A548;
    // 0x8023A4C0: nop

L_8023A4C4:
    // 0x8023A4C4: beql        $v1, $v0, L_8023A540
    if (ctx->r3 == ctx->r2) {
        // 0x8023A4C8: sb          $zero, 0x6($s1)
        MEM_B(0X6, ctx->r17) = 0;
            goto L_8023A540;
    }
    goto skip_1;
    // 0x8023A4C8: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    skip_1:
    // 0x8023A4CC: j           L_8023A548
    // 0x8023A4D0: nop

        goto L_8023A548;
    // 0x8023A4D0: nop

L_8023A4D4:
    // 0x8023A4D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A4D8: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x8023A4DC: jal         0x8023AB14
    // 0x8023A4E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8023AB14_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023A4E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8023A4E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023A4E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A4EC: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
    // 0x8023A4F0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023A4F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023A4F8: sb          $v0, 0x445F($at)
    MEM_B(0X445F, ctx->r1) = ctx->r2;
    // 0x8023A4FC: jal         0x8004F418
    // 0x8023A500: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8023A500: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    after_1:
    // 0x8023A504: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023A508: addiu       $s0, $s0, -0xBB0
    ctx->r16 = ADD32(ctx->r16, -0XBB0);
    // 0x8023A50C: jal         0x8005FA7C
    // 0x8023A510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8023A510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023A514: jal         0x8005FA7C
    // 0x8023A518: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8023A518: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8023A51C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A520: jal         0x8023A980
    // 0x8023A524: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8023A980_ovl25(rdram, ctx);
        goto after_4;
    // 0x8023A524: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8023A528: j           L_8023A548
    // 0x8023A52C: nop

        goto L_8023A548;
    // 0x8023A52C: nop

L_8023A530:
    // 0x8023A530: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8023A534: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A538: j           L_8023A548
    // 0x8023A53C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_8023A548;
    // 0x8023A53C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_8023A540:
    // 0x8023A540: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023A544: sw          $zero, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = 0;
L_8023A548:
    // 0x8023A548: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8023A54C: beq         $v0, $zero, L_8023A57C
    if (ctx->r2 == 0) {
        // 0x8023A550: nop
    
            goto L_8023A57C;
    }
    // 0x8023A550: nop

    // 0x8023A554: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023A558: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8023A55C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023A560: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023A564: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A568: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A56C: lh          $v0, -0x528($at)
    ctx->r2 = MEM_H(ctx->r1, -0X528);
    // 0x8023A570: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023A574: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023A578: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
L_8023A57C:
    // 0x8023A57C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A580: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A584: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A588: jr          $ra
    // 0x8023A58C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A58C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802314B0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802314B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802314B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802314B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802314BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802314C0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802314C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802314C8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802314CC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802314D0: bne         $v0, $zero, L_80231514
    if (ctx->r2 != 0) {
        // 0x802314D4: addiu       $s2, $zero, -0x1
        ctx->r18 = ADD32(0, -0X1);
            goto L_80231514;
    }
    // 0x802314D4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x802314D8: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x802314DC: lbu         $v0, 0x13E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X13E);
    // 0x802314E0: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x802314E4: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x802314E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802314EC: sb          $v0, 0x13E($s0)
    MEM_B(0X13E, ctx->r16) = ctx->r2;
    // 0x802314F0: andi        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 & 0X40;
    // 0x802314F4: beq         $v0, $zero, L_80231508
    if (ctx->r2 == 0) {
        // 0x802314F8: sh          $v1, 0x1C($s0)
        MEM_H(0X1C, ctx->r16) = ctx->r3;
            goto L_80231508;
    }
    // 0x802314F8: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x802314FC: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x80231500: j           L_80231604
    // 0x80231504: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_80231604;
    // 0x80231504: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80231508:
    // 0x80231508: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023150C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231510: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80231514:
    // 0x80231514: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80231518: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x8023151C: sra         $a0, $a1, 16
    ctx->r4 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80231520: slti        $v0, $a0, 0x100
    ctx->r2 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x80231524: beq         $v0, $zero, L_8023157C
    if (ctx->r2 == 0) {
        // 0x80231528: slti        $v0, $a0, 0xC0
        ctx->r2 = SIGNED(ctx->r4) < 0XC0 ? 1 : 0;
            goto L_8023157C;
    }
    // 0x80231528: slti        $v0, $a0, 0xC0
    ctx->r2 = SIGNED(ctx->r4) < 0XC0 ? 1 : 0;
    // 0x8023152C: beq         $v0, $zero, L_8023156C
    if (ctx->r2 == 0) {
        // 0x80231530: lui         $v0, 0x2AAA
        ctx->r2 = S32(0X2AAA << 16);
            goto L_8023156C;
    }
    // 0x80231530: lui         $v0, 0x2AAA
    ctx->r2 = S32(0X2AAA << 16);
    // 0x80231534: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80231538: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023153C: sra         $v0, $a1, 31
    ctx->r2 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80231540: mfhi        $a3
    ctx->r7 = hi;
    // 0x80231544: sra         $v1, $a3, 2
    ctx->r3 = S32(SIGNED(ctx->r7) >> 2);
    // 0x80231548: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023154C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80231550: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231554: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231558: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8023155C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231560: bne         $v0, $zero, L_8023156C
    if (ctx->r2 != 0) {
        // 0x80231564: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8023156C;
    }
    // 0x80231564: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80231568: sra         $s2, $v0, 16
    ctx->r18 = S32(SIGNED(ctx->r2) >> 16);
L_8023156C:
    // 0x8023156C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80231570: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231574: j           L_8023158C
    // 0x80231578: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
        goto L_8023158C;
    // 0x80231578: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_8023157C:
    // 0x8023157C: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80231580: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231584: jal         0x80232700
    // 0x80231588: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80232700_ovl25(rdram, ctx);
        goto after_0;
    // 0x80231588: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
L_8023158C:
    // 0x8023158C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231590: beq         $s2, $v0, L_802315A4
    if (ctx->r18 == ctx->r2) {
        // 0x80231594: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802315A4;
    }
    // 0x80231594: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231598: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023159C: jal         0x802329B8
    // 0x802315A0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_802329B8_ovl25(rdram, ctx);
        goto after_1;
    // 0x802315A0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_1:
L_802315A4:
    // 0x802315A4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802315A8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802315AC: beq         $v0, $zero, L_802315D4
    if (ctx->r2 == 0) {
        // 0x802315B0: nop
    
            goto L_802315D4;
    }
    // 0x802315B0: nop

    // 0x802315B4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802315B8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802315BC: bne         $v0, $zero, L_802315D4
    if (ctx->r2 != 0) {
        // 0x802315C0: nop
    
            goto L_802315D4;
    }
    // 0x802315C0: nop

    // 0x802315C4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802315C8: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x802315CC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802315D0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_802315D4:
    // 0x802315D4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802315D8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802315DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802315E0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802315E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802315E8: lh          $v1, -0x2400($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2400);
    // 0x802315EC: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802315F0: sra         $v1, $v1, 6
    ctx->r3 = S32(SIGNED(ctx->r3) >> 6);
    // 0x802315F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802315F8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802315FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231600: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_80231604:
    // 0x80231604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231608: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023160C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231610: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231614: jr          $ra
    // 0x80231618: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231618: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229ED0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229ED0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229ED4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229ED8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80229EDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229EE0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80229EE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229EE8: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80229EEC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229EF0: jal         0x8004EF48
    // 0x80229EF4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_8004EF48_2A348(rdram, ctx);
        goto after_0;
    // 0x80229EF4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80229EF8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229EFC: bne         $a0, $zero, L_80229F0C
    if (ctx->r4 != 0) {
        // 0x80229F00: addu        $s2, $s1, $zero
        ctx->r18 = ADD32(ctx->r17, 0);
            goto L_80229F0C;
    }
    // 0x80229F00: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x80229F04: j           L_8022A1A4
    // 0x80229F08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022A1A4;
    // 0x80229F08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229F0C:
    // 0x80229F0C: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80229F10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229F14: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80229F18: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x80229F1C: sb          $a2, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r6;
    // 0x80229F20: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x80229F24: sb          $s2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r18;
    // 0x80229F28: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80229F2C: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x80229F30: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80229F34: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x80229F38: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
    // 0x80229F3C: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80229F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F44: beq         $v1, $v0, L_80229F94
    if (ctx->r3 == ctx->r2) {
        // 0x80229F48: addiu       $t0, $a0, 0x88
        ctx->r8 = ADD32(ctx->r4, 0X88);
            goto L_80229F94;
    }
    // 0x80229F48: addiu       $t0, $a0, 0x88
    ctx->r8 = ADD32(ctx->r4, 0X88);
    // 0x80229F4C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229F50: beql        $v0, $zero, L_80229F68
    if (ctx->r2 == 0) {
        // 0x80229F54: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229F68;
    }
    goto skip_0;
    // 0x80229F54: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229F58: beq         $v1, $zero, L_80229F80
    if (ctx->r3 == 0) {
        // 0x80229F5C: lui         $v0, 0x2E40
        ctx->r2 = S32(0X2E40 << 16);
            goto L_80229F80;
    }
    // 0x80229F5C: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80229F60: j           L_80229FFC
    // 0x80229F64: nop

        goto L_80229FFC;
    // 0x80229F64: nop

L_80229F68:
    // 0x80229F68: beq         $v1, $v0, L_80229FB4
    if (ctx->r3 == ctx->r2) {
        // 0x80229F6C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229FB4;
    }
    // 0x80229F6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229F70: beq         $v1, $v0, L_80229FDC
    if (ctx->r3 == ctx->r2) {
        // 0x80229F74: lui         $v0, 0x2E80
        ctx->r2 = S32(0X2E80 << 16);
            goto L_80229FDC;
    }
    // 0x80229F74: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x80229F78: j           L_80229FFC
    // 0x80229F7C: nop

        goto L_80229FFC;
    // 0x80229F7C: nop

L_80229F80:
    // 0x80229F80: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80229F84: sw          $v0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r2;
    // 0x80229F88: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80229F8C: j           L_80229FA8
    // 0x80229F90: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
        goto L_80229FA8;
    // 0x80229F90: sb          $zero, 0x88($a0)
    MEM_B(0X88, ctx->r4) = 0;
L_80229F94:
    // 0x80229F94: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80229F98: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80229F9C: sw          $v0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r2;
    // 0x80229FA0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80229FA4: sb          $a2, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r6;
L_80229FA8:
    // 0x80229FA8: sb          $a1, 0x96($a0)
    MEM_B(0X96, ctx->r4) = ctx->r5;
    // 0x80229FAC: j           L_8022A00C
    // 0x80229FB0: sb          $v0, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r2;
        goto L_8022A00C;
    // 0x80229FB0: sb          $v0, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r2;
L_80229FB4:
    // 0x80229FB4: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80229FB8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80229FBC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229FC0: sb          $v0, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r2;
    // 0x80229FC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229FC8: sb          $v0, 0x96($a0)
    MEM_B(0X96, ctx->r4) = ctx->r2;
    // 0x80229FCC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80229FD0: sw          $v1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r3;
    // 0x80229FD4: j           L_8022A00C
    // 0x80229FD8: sb          $v0, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r2;
        goto L_8022A00C;
    // 0x80229FD8: sb          $v0, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r2;
L_80229FDC:
    // 0x80229FDC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80229FE0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80229FE4: sw          $v0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r2;
    // 0x80229FE8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80229FEC: sb          $v1, 0x88($a0)
    MEM_B(0X88, ctx->r4) = ctx->r3;
    // 0x80229FF0: sb          $a2, 0x96($a0)
    MEM_B(0X96, ctx->r4) = ctx->r6;
    // 0x80229FF4: j           L_8022A00C
    // 0x80229FF8: sb          $v0, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r2;
        goto L_8022A00C;
    // 0x80229FF8: sb          $v0, 0x8A($a0)
    MEM_B(0X8A, ctx->r4) = ctx->r2;
L_80229FFC:
    // 0x80229FFC: jal         0x8004F488
    // 0x8022A000: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x8022A000: nop

    after_1:
    // 0x8022A004: j           L_8022A1A4
    // 0x8022A008: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022A1A4;
    // 0x8022A008: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022A00C:
    // 0x8022A00C: addiu       $v0, $zero, 0x3FF
    ctx->r2 = ADD32(0, 0X3FF);
    // 0x8022A010: sh          $v0, 0xC($t0)
    MEM_H(0XC, ctx->r8) = ctx->r2;
    // 0x8022A014: lbu         $v0, 0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X1);
    // 0x8022A018: sh          $zero, 0x12($t0)
    MEM_H(0X12, ctx->r8) = 0;
    // 0x8022A01C: sb          $v0, 0x1($t0)
    MEM_B(0X1, ctx->r8) = ctx->r2;
    // 0x8022A020: sll         $v0, $s2, 24
    ctx->r2 = S32(ctx->r18 << 24);
    // 0x8022A024: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A028: bne         $v1, $zero, L_8022A130
    if (ctx->r3 != 0) {
        // 0x8022A02C: nop
    
            goto L_8022A130;
    }
    // 0x8022A02C: nop

    // 0x8022A030: lbu         $v0, 0x2($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X2);
    // 0x8022A034: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022A038: beq         $v0, $zero, L_8022A1A0
    if (ctx->r2 == 0) {
        // 0x8022A03C: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_8022A1A0;
    }
    // 0x8022A03C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A040: addiu       $s3, $zero, 0x7
    ctx->r19 = ADD32(0, 0X7);
    // 0x8022A044: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8022A048: addiu       $s2, $s2, 0xE28
    ctx->r18 = ADD32(ctx->r18, 0XE28);
    // 0x8022A04C: addiu       $t9, $s0, 0x10
    ctx->r25 = ADD32(ctx->r16, 0X10);
    // 0x8022A050: addiu       $t8, $s0, 0x70
    ctx->r24 = ADD32(ctx->r16, 0X70);
    // 0x8022A054: addiu       $s1, $s0, 0x78
    ctx->r17 = ADD32(ctx->r16, 0X78);
    // 0x8022A058: addiu       $t7, $s0, 0x50
    ctx->r15 = ADD32(ctx->r16, 0X50);
    // 0x8022A05C: addiu       $t6, $s0, 0x60
    ctx->r14 = ADD32(ctx->r16, 0X60);
    // 0x8022A060: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
L_8022A064:
    // 0x8022A064: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x8022A068: sb          $s3, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r19;
    // 0x8022A06C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A070: sll         $v0, $v1, 7
    ctx->r2 = S32(ctx->r3 << 7);
    // 0x8022A074: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8022A078: addu        $t5, $t0, $v0
    ctx->r13 = ADD32(ctx->r8, ctx->r2);
    // 0x8022A07C: sltiu       $t4, $v1, 0x9
    ctx->r12 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8022A080: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022A084: addu        $v1, $v1, $s2
    gpr jr_addend_8022A0A8 = ctx->r3;
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x8022A088: addiu       $t3, $s0, 0x8
    ctx->r11 = ADD32(ctx->r16, 0X8);
    // 0x8022A08C: addiu       $t2, $s0, 0x58
    ctx->r10 = ADD32(ctx->r16, 0X58);
    // 0x8022A090: addiu       $t1, $s0, 0x68
    ctx->r9 = ADD32(ctx->r16, 0X68);
L_8022A094:
    // 0x8022A094: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022A098: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A09C: beq         $t4, $zero, L_8022A0F4
    if (ctx->r12 == 0) {
        // 0x8022A0A0: addu        $a1, $t5, $v0
        ctx->r5 = ADD32(ctx->r13, ctx->r2);
            goto L_8022A0F4;
    }
    // 0x8022A0A0: addu        $a1, $t5, $v0
    ctx->r5 = ADD32(ctx->r13, ctx->r2);
    // 0x8022A0A4: lw          $v0, 0x0($v1)
    ctx->r2 = ADD32(ctx->r3, 0X0);
    // 0x8022A0A8: jr          $v0
    // 0x8022A0AC: nop

    switch (jr_addend_8022A0A8 >> 2) {
        case 0: goto L_8022A0B0; break;
        case 1: goto L_8022A0C8; break;
        case 2: goto L_8022A0E0; break;
        case 3: goto L_8022A0B8; break;
        case 4: goto L_8022A0D0; break;
        case 5: goto L_8022A0E8; break;
        case 6: goto L_8022A0C0; break;
        case 7: goto L_8022A0D8; break;
        case 8: goto L_8022A0F0; break;
        default: switch_error(__func__, 0x8022A0A8, 0x80240E28);
    }
    // 0x8022A0AC: nop

L_8022A0B0:
    // 0x8022A0B0: j           L_8022A0F4
    // 0x8022A0B4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
        goto L_8022A0F4;
    // 0x8022A0B4: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
L_8022A0B8:
    // 0x8022A0B8: j           L_8022A0F4
    // 0x8022A0BC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
        goto L_8022A0F4;
    // 0x8022A0BC: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
L_8022A0C0:
    // 0x8022A0C0: j           L_8022A0F4
    // 0x8022A0C4: sw          $s1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r17;
        goto L_8022A0F4;
    // 0x8022A0C4: sw          $s1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r17;
L_8022A0C8:
    // 0x8022A0C8: j           L_8022A0F4
    // 0x8022A0CC: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
        goto L_8022A0F4;
    // 0x8022A0CC: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
L_8022A0D0:
    // 0x8022A0D0: j           L_8022A0F4
    // 0x8022A0D4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
        goto L_8022A0F4;
    // 0x8022A0D4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_8022A0D8:
    // 0x8022A0D8: j           L_8022A0F4
    // 0x8022A0DC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
        goto L_8022A0F4;
    // 0x8022A0DC: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_8022A0E0:
    // 0x8022A0E0: j           L_8022A0F4
    // 0x8022A0E4: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
        goto L_8022A0F4;
    // 0x8022A0E4: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
L_8022A0E8:
    // 0x8022A0E8: j           L_8022A0F4
    // 0x8022A0EC: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
        goto L_8022A0F4;
    // 0x8022A0EC: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
L_8022A0F0:
    // 0x8022A0F0: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
L_8022A0F4:
    // 0x8022A0F4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022A0F8: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022A0FC: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022A100: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8022A104: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
    // 0x8022A108: bne         $v0, $zero, L_8022A094
    if (ctx->r2 != 0) {
        // 0x8022A10C: sh          $zero, 0x6($a1)
        MEM_H(0X6, ctx->r5) = 0;
            goto L_8022A094;
    }
    // 0x8022A10C: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x8022A110: lbu         $v1, 0x2($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X2);
    // 0x8022A114: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8022A118: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x8022A11C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022A120: bne         $v0, $zero, L_8022A064
    if (ctx->r2 != 0) {
        // 0x8022A124: andi        $v1, $a3, 0xFF
        ctx->r3 = ctx->r7 & 0XFF;
            goto L_8022A064;
    }
    // 0x8022A124: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x8022A128: j           L_8022A1A4
    // 0x8022A12C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
        goto L_8022A1A4;
    // 0x8022A12C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_8022A130:
    // 0x8022A130: lbu         $v0, 0x2($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X2);
    // 0x8022A134: beq         $v0, $zero, L_8022A1A0
    if (ctx->r2 == 0) {
        // 0x8022A138: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_8022A1A0;
    }
    // 0x8022A138: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A13C: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
L_8022A140:
    // 0x8022A140: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x8022A144: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
    // 0x8022A148: sb          $t1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r9;
    // 0x8022A14C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A150: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x8022A154: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x8022A158: addu        $v1, $t0, $v1
    ctx->r3 = ADD32(ctx->r8, ctx->r3);
L_8022A15C:
    // 0x8022A15C: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022A160: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022A164: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A168: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022A16C: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x8022A170: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022A174: sw          $s0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r16;
    // 0x8022A178: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8022A17C: sb          $zero, 0x5($a1)
    MEM_B(0X5, ctx->r5) = 0;
    // 0x8022A180: bne         $v0, $zero, L_8022A15C
    if (ctx->r2 != 0) {
        // 0x8022A184: sh          $zero, 0x6($a1)
        MEM_H(0X6, ctx->r5) = 0;
            goto L_8022A15C;
    }
    // 0x8022A184: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x8022A188: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8022A18C: lbu         $v1, 0x2($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X2);
    // 0x8022A190: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x8022A194: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022A198: bne         $v0, $zero, L_8022A140
    if (ctx->r2 != 0) {
        // 0x8022A19C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_8022A140;
    }
    // 0x8022A19C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_8022A1A0:
    // 0x8022A1A0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_8022A1A4:
    // 0x8022A1A4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022A1A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A1AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A1B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A1B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A1B8: jr          $ra
    // 0x8022A1BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A1BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023C170_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C170: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023C174: bne         $v0, $zero, L_8023C18C
    if (ctx->r2 != 0) {
        // 0x8023C178: nop
    
            goto L_8023C18C;
    }
    // 0x8023C178: nop

    // 0x8023C17C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8023C180: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8023C184: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023C188: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8023C18C:
    // 0x8023C18C: jr          $ra
    // 0x8023C190: nop

    TRACE_RETURN()
    return;
    // 0x8023C190: nop

;}
RECOMP_FUNC void func_8023C540_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C540: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023C544: lhu         $v1, 0x4DE8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4DE8);
    // 0x8023C548: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023C54C: lhu         $a0, 0x4DEA($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X4DEA);
    // 0x8023C550: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8023C554: lhu         $a2, 0x4DEC($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X4DEC);
    // 0x8023C558: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8023C55C: lhu         $a3, 0x4DF2($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X4DF2);
    // 0x8023C560: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023C564: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C568: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023C56C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023C570: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C574: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023C578: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023C57C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C580: sb          $a1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r5;
    // 0x8023C584: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C588: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023C58C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C590: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023C594: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C598: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023C59C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C5A0: sh          $v1, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r3;
    // 0x8023C5A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C5A8: sh          $a0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r4;
    // 0x8023C5AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C5B0: sh          $a2, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r6;
    // 0x8023C5B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023C5B8: jr          $ra
    // 0x8023C5BC: sh          $a3, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x8023C5BC: sh          $a3, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r7;
;}
RECOMP_FUNC void func_802298A8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802298AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802298B0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802298B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802298B8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802298BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802298C0: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x802298C4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802298C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802298CC: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x802298D0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802298D4: bne         $v0, $v1, L_802299C8
    if (ctx->r2 != ctx->r3) {
        // 0x802298D8: nop
    
            goto L_802299C8;
    }
    // 0x802298D8: nop

    // 0x802298DC: jal         0x8004F144
    // 0x802298E0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802298E0: nop

    after_0:
    // 0x802298E4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802298E8: beq         $s1, $zero, L_802299C8
    if (ctx->r17 == 0) {
        // 0x802298EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802299C8;
    }
    // 0x802298EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802298F0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802298F4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x802298F8: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x802298FC: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80229900: jal         0x800A3450
    // 0x80229904: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80229904: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x80229908: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022990C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229910: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80229914: jal         0x800A3450
    // 0x80229918: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80229918: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022991C: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80229920: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229924: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229928: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x8022992C: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x80229930: jal         0x800A3450
    // 0x80229934: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80229934: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_3:
    // 0x80229938: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8022993C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80229940: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80229944: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229948: sw          $a0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r4;
    // 0x8022994C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229950: jal         0x800A3450
    // 0x80229954: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80229954: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    after_4:
    // 0x80229958: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022995C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80229960: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80229964: sb          $v0, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r2;
    // 0x80229968: sb          $zero, 0x23($s1)
    MEM_B(0X23, ctx->r17) = 0;
    // 0x8022996C: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x80229970: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229974: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80229978: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
    // 0x8022997C: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x80229980: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80229984: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x80229988: sw          $s2, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r18;
    // 0x8022998C: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x80229990: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80229994: blez        $v0, L_802299B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80229998: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802299B8;
    }
    // 0x80229998: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8022999C:
    // 0x8022999C: jal         0x802297D0
    // 0x802299A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802297D0_ovl25(rdram, ctx);
        goto after_5;
    // 0x802299A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x802299A4: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x802299A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802299AC: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802299B0: bne         $v0, $zero, L_8022999C
    if (ctx->r2 != 0) {
        // 0x802299B4: nop
    
            goto L_8022999C;
    }
    // 0x802299B4: nop

L_802299B8:
    // 0x802299B8: jal         0x800A3450
    // 0x802299BC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x802299BC: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_6:
    // 0x802299C0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802299C4: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_802299C8:
    // 0x802299C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802299CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802299D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802299D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802299D8: jr          $ra
    // 0x802299DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802299DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80237F64_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237F64: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80237F68: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80237F6C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237F70: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80237F74: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80237F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237F7C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80237F80: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x80237F84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237F88: jal         0x8003BA58
    // 0x80237F8C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x80237F8C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80237F90: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80237F94: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80237F98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237F9C: jal         0x8003BB80
    // 0x80237FA0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x80237FA0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237FA4: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80237FA8: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x80237FAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237FB0: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80237FB4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237FB8: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80237FBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237FC0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80237FC4: lbu         $v1, -0xCFB($at)
    ctx->r3 = MEM_BU(ctx->r1, -0XCFB);
    // 0x80237FC8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237FCC: bne         $v0, $v1, L_80237FEC
    if (ctx->r2 != ctx->r3) {
        // 0x80237FD0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80237FEC;
    }
    // 0x80237FD0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80237FD4: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80237FD8: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80237FDC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80237FE0: bne         $v1, $v0, L_80237FEC
    if (ctx->r3 != ctx->r2) {
        // 0x80237FE4: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_80237FEC;
    }
    // 0x80237FE4: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80237FE8: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80237FEC:
    // 0x80237FEC: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80237FF0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80237FF4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237FF8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80237FFC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80238000: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238004: lbu         $v1, -0xD18($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0XD18);
    // 0x80238008: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8023800C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x80238010: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80238014: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238018: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023801C: addiu       $v1, $v0, 0x2E
    ctx->r3 = ADD32(ctx->r2, 0X2E);
    // 0x80238020: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238024: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x80238028: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x8023802C: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x80238030: jal         0x8003BC68
    // 0x80238034: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80238034: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x80238038: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8023803C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80238040: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80238044: jr          $ra
    // 0x80238048: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80238048: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80239B70_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239B74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239B78: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80239B7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239B80: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239B84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239B88: lw          $v0, -0xC70($at)
    ctx->r2 = MEM_W(ctx->r1, -0XC70);
    // 0x80239B8C: jalr        $v0
    // 0x80239B90: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239B90: nop

    after_0:
    // 0x80239B94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239B98: jr          $ra
    // 0x80239B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802332FC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802332FC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80233300: bne         $v0, $zero, L_80233324
    if (ctx->r2 != 0) {
        // 0x80233304: addiu       $v0, $zero, -0xBB8
        ctx->r2 = ADD32(0, -0XBB8);
            goto L_80233324;
    }
    // 0x80233304: addiu       $v0, $zero, -0xBB8
    ctx->r2 = ADD32(0, -0XBB8);
    // 0x80233308: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8023330C: sh          $zero, 0x58($a0)
    MEM_H(0X58, ctx->r4) = 0;
    // 0x80233310: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
    // 0x80233314: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80233318: sh          $zero, 0x18($a0)
    MEM_H(0X18, ctx->r4) = 0;
    // 0x8023331C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233320: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
L_80233324:
    // 0x80233324: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80233328: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8023332C: jr          $ra
    // 0x80233330: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80233330: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80233334: nop

    // 0x80233338: nop

    // 0x8023333C: nop

;}
RECOMP_FUNC void func_80225450_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225454: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225458: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022545C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225460: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225468: jal         0x8009A3B4
    // 0x8022546C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022546C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80225470: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80225474: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225478: jal         0x8009A3B4
    // 0x8022547C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022547C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80225480: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80225484: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225488: jal         0x8009A3B4
    // 0x8022548C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022548C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80225490: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80225494: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225498: bne         $v1, $zero, L_802254EC
    if (ctx->r3 != 0) {
        // 0x8022549C: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_802254EC;
    }
    // 0x8022549C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802254A0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802254A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802254A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802254AC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802254B0: jal         0x8004D5D4
    // 0x802254B4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x802254B4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x802254B8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802254BC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802254C0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802254C4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802254C8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802254CC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802254D0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802254D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802254D8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802254DC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802254E0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802254E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802254E8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_802254EC:
    // 0x802254EC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802254F0: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802254F4: beq         $a1, $v0, L_8022550C
    if (ctx->r5 == ctx->r2) {
        // 0x802254F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022550C;
    }
    // 0x802254F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802254FC: jal         0x80050294
    // 0x80225500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80225500: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80225504: j           L_80225514
    // 0x80225508: nop

        goto L_80225514;
    // 0x80225508: nop

L_8022550C:
    // 0x8022550C: jal         0x8005044C
    // 0x80225510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80225510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_80225514:
    // 0x80225514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225518: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022551C: jr          $ra
    // 0x80225520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225524: nop

    // 0x80225528: nop

    // 0x8022552C: nop

;}
RECOMP_FUNC void func_80234350_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234350: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234354: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234358: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023435C: lui         $t3, 0x3D48
    ctx->r11 = S32(0X3D48 << 16);
    // 0x80234360: ori         $t3, $t3, 0x2E
    ctx->r11 = ctx->r11 | 0X2E;
    // 0x80234364: lui         $t2, 0x2E40
    ctx->r10 = S32(0X2E40 << 16);
    // 0x80234368: ori         $t2, $t2, 0xE040
    ctx->r10 = ctx->r10 | 0XE040;
    // 0x8023436C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80234370: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80234374: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80234378: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023437C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80234380: lhu         $a3, 0x1C($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X1C);
    // 0x80234384: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x80234388: lhu         $t1, 0x24($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X24);
    // 0x8023438C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80234390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234394: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80234398: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8023439C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802343A0: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802343A4: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x802343A8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802343AC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x802343B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802343B4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802343B8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802343BC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802343C0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802343C4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802343C8: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x802343CC: sw          $t3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r11;
    // 0x802343D0: sw          $t2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r10;
    // 0x802343D4: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x802343D8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802343DC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x802343E0: sh          $a3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r7;
    // 0x802343E4: sh          $a3, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r7;
    // 0x802343E8: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x802343EC: sh          $t0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r8;
    // 0x802343F0: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x802343F4: jal         0x8009A3B4
    // 0x802343F8: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802343F8: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    after_0:
    // 0x802343FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80234400: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80234404: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234408: jal         0x8009A3B4
    // 0x8023440C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023440C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80234410: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x80234414: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234418: jal         0x8002A33C
    // 0x8023441C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023441C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    after_2:
    // 0x80234420: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80234424: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234428: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023442C: jr          $ra
    // 0x80234430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EFC8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EFC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EFCC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EFD0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022EFD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EFD8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EFDC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EFE0: lw          $v0, -0x162C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X162C);
    // 0x8022EFE4: jalr        $v0
    // 0x8022EFE8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EFE8: nop

    after_0:
    // 0x8022EFEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EFF0: jr          $ra
    // 0x8022EFF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EFF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802262AC_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262AC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802262B0: bne         $v0, $zero, L_802262D4
    if (ctx->r2 != 0) {
        // 0x802262B4: addiu       $v1, $zero, -0x1F40
        ctx->r3 = ADD32(0, -0X1F40);
            goto L_802262D4;
    }
    // 0x802262B4: addiu       $v1, $zero, -0x1F40
    ctx->r3 = ADD32(0, -0X1F40);
    // 0x802262B8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802262BC: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x802262C0: addiu       $v1, $zero, -0x1B58
    ctx->r3 = ADD32(0, -0X1B58);
    // 0x802262C4: sh          $zero, 0x14($a0)
    MEM_H(0X14, ctx->r4) = 0;
    // 0x802262C8: sh          $v1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r3;
    // 0x802262CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802262D0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802262D4:
    // 0x802262D4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802262D8: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802262DC: slti        $v0, $v1, 0x6E
    ctx->r2 = SIGNED(ctx->r3) < 0X6E ? 1 : 0;
    // 0x802262E0: beq         $v0, $zero, L_8022631C
    if (ctx->r2 == 0) {
        // 0x802262E4: slti        $v0, $v1, 0x86
        ctx->r2 = SIGNED(ctx->r3) < 0X86 ? 1 : 0;
            goto L_8022631C;
    }
    // 0x802262E4: slti        $v0, $v1, 0x86
    ctx->r2 = SIGNED(ctx->r3) < 0X86 ? 1 : 0;
    // 0x802262E8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802262EC: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802262F0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802262F4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802262F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802262FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226300: lhu         $v0, -0x2400($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2400);
    // 0x80226304: lhu         $v1, 0x16($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X16);
    // 0x80226308: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022630C: sra         $v0, $v0, 26
    ctx->r2 = S32(SIGNED(ctx->r2) >> 26);
    // 0x80226310: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226314: j           L_80226364
    // 0x80226318: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
        goto L_80226364;
    // 0x80226318: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
L_8022631C:
    // 0x8022631C: beq         $v0, $zero, L_80226334
    if (ctx->r2 == 0) {
        // 0x80226320: slti        $v0, $v1, 0xA6
        ctx->r2 = SIGNED(ctx->r3) < 0XA6 ? 1 : 0;
            goto L_80226334;
    }
    // 0x80226320: slti        $v0, $v1, 0xA6
    ctx->r2 = SIGNED(ctx->r3) < 0XA6 ? 1 : 0;
    // 0x80226324: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x80226328: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8022632C: j           L_80226364
    // 0x80226330: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
        goto L_80226364;
    // 0x80226330: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
L_80226334:
    // 0x80226334: beq         $v0, $zero, L_80226358
    if (ctx->r2 == 0) {
        // 0x80226338: nop
    
            goto L_80226358;
    }
    // 0x80226338: nop

    // 0x8022633C: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x80226340: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x80226344: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
    // 0x80226348: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x8022634C: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x80226350: j           L_80226364
    // 0x80226354: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
        goto L_80226364;
    // 0x80226354: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
L_80226358:
    // 0x80226358: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8022635C: addiu       $v0, $v0, -0x19
    ctx->r2 = ADD32(ctx->r2, -0X19);
    // 0x80226360: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
L_80226364:
    // 0x80226364: jr          $ra
    // 0x80226368: nop

    TRACE_RETURN()
    return;
    // 0x80226368: nop

;}
RECOMP_FUNC void func_80231C4C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C4C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80231C50: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80231C54: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80231C58: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80231C5C: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x80231C60: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80231C64: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80231C68: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80231C6C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80231C70: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80231C74: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x80231C78: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80231C7C: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x80231C80: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80231C84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80231C88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80231C8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231C90: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x80231C94: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
L_80231C98:
    // 0x80231C98: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231C9C: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    // 0x80231CA0: lbu         $a0, 0x130($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X130);
    // 0x80231CA4: bne         $a0, $zero, L_80231DC0
    if (ctx->r4 != 0) {
        // 0x80231CA8: nop
    
            goto L_80231DC0;
    }
    // 0x80231CA8: nop

    // 0x80231CAC: jal         0x8004F144
    // 0x80231CB0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231CB0: nop

    after_0:
    // 0x80231CB4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80231CB8: beql        $s2, $zero, L_80231DAC
    if (ctx->r18 == 0) {
        // 0x80231CBC: sll         $v0, $s4, 16
        ctx->r2 = S32(ctx->r20 << 16);
            goto L_80231DAC;
    }
    goto skip_0;
    // 0x80231CBC: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    skip_0:
    // 0x80231CC0: sb          $s6, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r22;
    // 0x80231CC4: beq         $s0, $s6, L_80231D1C
    if (ctx->r16 == ctx->r22) {
        // 0x80231CC8: sb          $zero, 0x4($s2)
        MEM_B(0X4, ctx->r18) = 0;
            goto L_80231D1C;
    }
    // 0x80231CC8: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x80231CCC: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80231CD0: beq         $v0, $zero, L_80231CE8
    if (ctx->r2 == 0) {
        // 0x80231CD4: nop
    
            goto L_80231CE8;
    }
    // 0x80231CD4: nop

    // 0x80231CD8: beq         $s0, $zero, L_80231D10
    if (ctx->r16 == 0) {
        // 0x80231CDC: addiu       $v0, $s3, 0x20
        ctx->r2 = ADD32(ctx->r19, 0X20);
            goto L_80231D10;
    }
    // 0x80231CDC: addiu       $v0, $s3, 0x20
    ctx->r2 = ADD32(ctx->r19, 0X20);
    // 0x80231CE0: j           L_80231D44
    // 0x80231CE4: addiu       $a0, $s2, 0x38
    ctx->r4 = ADD32(ctx->r18, 0X38);
        goto L_80231D44;
    // 0x80231CE4: addiu       $a0, $s2, 0x38
    ctx->r4 = ADD32(ctx->r18, 0X38);
L_80231CE8:
    // 0x80231CE8: beq         $s0, $fp, L_80231D00
    if (ctx->r16 == ctx->r30) {
        // 0x80231CEC: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80231D00;
    }
    // 0x80231CEC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80231CF0: beq         $s0, $v0, L_80231D2C
    if (ctx->r16 == ctx->r2) {
        // 0x80231CF4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80231D2C;
    }
    // 0x80231CF4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231CF8: j           L_80231D44
    // 0x80231CFC: addiu       $a0, $s2, 0x38
    ctx->r4 = ADD32(ctx->r18, 0X38);
        goto L_80231D44;
    // 0x80231CFC: addiu       $a0, $s2, 0x38
    ctx->r4 = ADD32(ctx->r18, 0X38);
L_80231D00:
    // 0x80231D00: addiu       $v0, $s3, 0x30
    ctx->r2 = ADD32(ctx->r19, 0X30);
    // 0x80231D04: sb          $s5, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r21;
    // 0x80231D08: j           L_80231D38
    // 0x80231D0C: sb          $s6, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r22;
        goto L_80231D38;
    // 0x80231D0C: sb          $s6, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r22;
L_80231D10:
    // 0x80231D10: sb          $s5, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r21;
    // 0x80231D14: j           L_80231D38
    // 0x80231D18: sb          $fp, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r30;
        goto L_80231D38;
    // 0x80231D18: sb          $fp, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r30;
L_80231D1C:
    // 0x80231D1C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231D20: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    // 0x80231D24: j           L_80231D34
    // 0x80231D28: addiu       $v0, $s3, 0x28
    ctx->r2 = ADD32(ctx->r19, 0X28);
        goto L_80231D34;
    // 0x80231D28: addiu       $v0, $s3, 0x28
    ctx->r2 = ADD32(ctx->r19, 0X28);
L_80231D2C:
    // 0x80231D2C: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    // 0x80231D30: addiu       $v0, $s3, 0x68
    ctx->r2 = ADD32(ctx->r19, 0X68);
L_80231D34:
    // 0x80231D34: sb          $s5, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r21;
L_80231D38:
    // 0x80231D38: sb          $zero, 0xE($s2)
    MEM_B(0XE, ctx->r18) = 0;
    // 0x80231D3C: j           L_80231DA8
    // 0x80231D40: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
        goto L_80231DA8;
    // 0x80231D40: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
L_80231D44:
    // 0x80231D44: sll         $s0, $s4, 16
    ctx->r16 = S32(ctx->r20 << 16);
    // 0x80231D48: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80231D4C: sll         $s1, $s0, 3
    ctx->r17 = S32(ctx->r16 << 3);
    // 0x80231D50: addu        $a1, $s1, $s3
    ctx->r5 = ADD32(ctx->r17, ctx->r19);
    // 0x80231D54: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x80231D58: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231D5C: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80231D60: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231D64: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x80231D68: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80231D6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231D70: jal         0x8009A3B4
    // 0x80231D74: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231D74: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    after_1:
    // 0x80231D78: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80231D7C: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x80231D80: addu        $a1, $s3, $s1
    ctx->r5 = ADD32(ctx->r19, ctx->r17);
    // 0x80231D84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231D88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80231D8C: sb          $v0, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r2;
    // 0x80231D90: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80231D94: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80231D98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80231D9C: addu        $s0, $t2, $s0
    ctx->r16 = ADD32(ctx->r10, ctx->r16);
    // 0x80231DA0: jal         0x8002A33C
    // 0x80231DA4: sb          $v0, 0xFB($s0)
    MEM_B(0XFB, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80231DA4: sb          $v0, 0xFB($s0)
    MEM_B(0XFB, ctx->r16) = ctx->r2;
    after_2:
L_80231DA8:
    // 0x80231DA8: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
L_80231DAC:
    // 0x80231DAC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231DB0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80231DB4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231DB8: j           L_80231DEC
    // 0x80231DBC: sb          $v1, 0x130($v0)
    MEM_B(0X130, ctx->r2) = ctx->r3;
        goto L_80231DEC;
    // 0x80231DBC: sb          $v1, 0x130($v0)
    MEM_B(0X130, ctx->r2) = ctx->r3;
L_80231DC0:
    // 0x80231DC0: bne         $a0, $s6, L_80231DF0
    if (ctx->r4 != ctx->r22) {
        // 0x80231DC4: addiu       $v0, $s4, 0x1
        ctx->r2 = ADD32(ctx->r20, 0X1);
            goto L_80231DF0;
    }
    // 0x80231DC4: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x80231DC8: xori        $v0, $s0, 0x2
    ctx->r2 = ctx->r16 ^ 0X2;
    // 0x80231DCC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80231DD0: sltiu       $v1, $s0, 0x1
    ctx->r3 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80231DD4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80231DD8: bnel        $v0, $zero, L_80231DEC
    if (ctx->r2 != 0) {
        // 0x80231DDC: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_80231DEC;
    }
    goto skip_1;
    // 0x80231DDC: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_1:
    // 0x80231DE0: bne         $s0, $a0, L_80231DF0
    if (ctx->r16 != ctx->r4) {
        // 0x80231DE4: addiu       $v0, $s4, 0x1
        ctx->r2 = ADD32(ctx->r20, 0X1);
            goto L_80231DF0;
    }
    // 0x80231DE4: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x80231DE8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_80231DEC:
    // 0x80231DEC: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
L_80231DF0:
    // 0x80231DF0: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80231DF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231DF8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231DFC: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80231E00: bne         $v0, $zero, L_80231C98
    if (ctx->r2 != 0) {
        // 0x80231E04: sll         $v0, $s4, 16
        ctx->r2 = S32(ctx->r20 << 16);
            goto L_80231C98;
    }
    // 0x80231E04: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x80231E08: sll         $v0, $s7, 16
    ctx->r2 = S32(ctx->r23 << 16);
    // 0x80231E0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231E10: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80231E14: bne         $v0, $v1, L_80231E38
    if (ctx->r2 != ctx->r3) {
        // 0x80231E18: sll         $v0, $s7, 16
        ctx->r2 = S32(ctx->r23 << 16);
            goto L_80231E38;
    }
    // 0x80231E18: sll         $v0, $s7, 16
    ctx->r2 = S32(ctx->r23 << 16);
    // 0x80231E1C: lbu         $v0, 0x141($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X141);
    // 0x80231E20: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80231E24: bnel        $v0, $zero, L_80231E38
    if (ctx->r2 != 0) {
        // 0x80231E28: sll         $v0, $s7, 16
        ctx->r2 = S32(ctx->r23 << 16);
            goto L_80231E38;
    }
    goto skip_2;
    // 0x80231E28: sll         $v0, $s7, 16
    ctx->r2 = S32(ctx->r23 << 16);
    skip_2:
    // 0x80231E2C: lbu         $v0, 0x140($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X140);
    // 0x80231E30: j           L_80231E60
    // 0x80231E34: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
        goto L_80231E60;
    // 0x80231E34: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_80231E38:
    // 0x80231E38: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231E3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231E40: bne         $v0, $v1, L_80231E64
    if (ctx->r2 != ctx->r3) {
        // 0x80231E44: nop
    
            goto L_80231E64;
    }
    // 0x80231E44: nop

    // 0x80231E48: lbu         $v0, 0x141($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X141);
    // 0x80231E4C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80231E50: bne         $v0, $zero, L_80231E64
    if (ctx->r2 != 0) {
        // 0x80231E54: nop
    
            goto L_80231E64;
    }
    // 0x80231E54: nop

    // 0x80231E58: lbu         $v0, 0x140($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X140);
    // 0x80231E5C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_80231E60:
    // 0x80231E60: sb          $v0, 0x140($s3)
    MEM_B(0X140, ctx->r19) = ctx->r2;
L_80231E64:
    // 0x80231E64: lhu         $v0, 0x142($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X142);
    // 0x80231E68: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231E6C: beq         $v0, $zero, L_80231F88
    if (ctx->r2 == 0) {
        // 0x80231E70: addiu       $s4, $zero, 0x3
        ctx->r20 = ADD32(0, 0X3);
            goto L_80231F88;
    }
    // 0x80231E70: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x80231E74: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x80231E78: lui         $t1, 0x8024
    ctx->r9 = S32(0X8024 << 16);
    // 0x80231E7C: addiu       $t1, $t1, 0xFD0
    ctx->r9 = ADD32(ctx->r9, 0XFD0);
    // 0x80231E80: addiu       $a3, $zero, -0x2
    ctx->r7 = ADD32(0, -0X2);
    // 0x80231E84: addiu       $a2, $zero, -0x3
    ctx->r6 = ADD32(0, -0X3);
    // 0x80231E88: addiu       $a1, $zero, -0x5
    ctx->r5 = ADD32(0, -0X5);
    // 0x80231E8C: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
L_80231E90:
    // 0x80231E90: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231E94: addu        $v1, $s3, $a0
    ctx->r3 = ADD32(ctx->r19, ctx->r4);
    // 0x80231E98: lbu         $v0, 0x130($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X130);
    // 0x80231E9C: beq         $v0, $t0, L_80231F6C
    if (ctx->r2 == ctx->r8) {
        // 0x80231EA0: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80231F6C;
    }
    // 0x80231EA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231EA4: sb          $v0, 0x130($v1)
    MEM_B(0X130, ctx->r3) = ctx->r2;
    // 0x80231EA8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231EAC: bne         $v0, $t0, L_80231F70
    if (ctx->r2 != ctx->r8) {
        // 0x80231EB0: addiu       $v0, $s4, 0x1
        ctx->r2 = ADD32(ctx->r20, 0X1);
            goto L_80231F70;
    }
    // 0x80231EB0: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x80231EB4: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x80231EB8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80231EBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231EC0: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x80231EC4: sb          $zero, 0xFB($v0)
    MEM_B(0XFB, ctx->r2) = 0;
    // 0x80231EC8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80231ECC: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80231ED0: lhu         $v1, 0xB8($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0XB8);
    // 0x80231ED4: sh          $v1, 0xA0($v0)
    MEM_H(0XA0, ctx->r2) = ctx->r3;
    // 0x80231ED8: addiu       $v0, $s4, -0x3
    ctx->r2 = ADD32(ctx->r20, -0X3);
    // 0x80231EDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231EE0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231EE4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80231EE8: beq         $v0, $zero, L_80231F6C
    if (ctx->r2 == 0) {
        // 0x80231EEC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80231F6C;
    }
    // 0x80231EEC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80231EF0: addu        $v0, $v0, $t1
    gpr jr_addend_80231EF8 = ctx->r2;
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80231EF4: lw          $v0, 0x0($v0)
    ctx->r2 = ADD32(ctx->r2, 0X0);
    // 0x80231EF8: jr          $v0
    // 0x80231EFC: nop

    switch (jr_addend_80231EF8 >> 2) {
        case 0: goto L_80231F00; break;
        case 1: goto L_80231F14; break;
        case 2: goto L_80231F28; break;
        case 3: goto L_80231F3C; break;
        case 4: goto L_80231F4C; break;
        case 5: goto L_80231F5C; break;
        default: switch_error(__func__, 0x80231EF8, 0x80240FD0);
    }
    // 0x80231EFC: nop

L_80231F00:
    // 0x80231F00: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x80231F04: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80231F08: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x80231F0C: j           L_80231F6C
    // 0x80231F10: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
        goto L_80231F6C;
    // 0x80231F10: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80231F14:
    // 0x80231F14: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x80231F18: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80231F1C: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x80231F20: j           L_80231F6C
    // 0x80231F24: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
        goto L_80231F6C;
    // 0x80231F24: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80231F28:
    // 0x80231F28: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x80231F2C: lbu         $v0, 0xC($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XC);
    // 0x80231F30: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x80231F34: j           L_80231F6C
    // 0x80231F38: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
        goto L_80231F6C;
    // 0x80231F38: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80231F3C:
    // 0x80231F3C: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x80231F40: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x80231F44: j           L_80231F68
    // 0x80231F48: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
        goto L_80231F68;
    // 0x80231F48: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
L_80231F4C:
    // 0x80231F4C: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x80231F50: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x80231F54: j           L_80231F68
    // 0x80231F58: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
        goto L_80231F68;
    // 0x80231F58: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
L_80231F5C:
    // 0x80231F5C: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x80231F60: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x80231F64: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
L_80231F68:
    // 0x80231F68: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_80231F6C:
    // 0x80231F6C: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
L_80231F70:
    // 0x80231F70: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80231F74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231F78: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231F7C: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x80231F80: bne         $v0, $zero, L_80231E90
    if (ctx->r2 != 0) {
        // 0x80231F84: sll         $v0, $s4, 16
        ctx->r2 = S32(ctx->r20 << 16);
            goto L_80231E90;
    }
    // 0x80231F84: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
L_80231F88:
    // 0x80231F88: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80231F8C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80231F90: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80231F94: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80231F98: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80231F9C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80231FA0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80231FA4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80231FA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80231FAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231FB0: jr          $ra
    // 0x80231FB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80231FB4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802261B0_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261B0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802261B4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802261B8: slti        $v0, $v1, 0x18
    ctx->r2 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x802261BC: beq         $v0, $zero, L_802261D4
    if (ctx->r2 == 0) {
        // 0x802261C0: slti        $v0, $v1, 0x38
        ctx->r2 = SIGNED(ctx->r3) < 0X38 ? 1 : 0;
            goto L_802261D4;
    }
    // 0x802261C0: slti        $v0, $v1, 0x38
    ctx->r2 = SIGNED(ctx->r3) < 0X38 ? 1 : 0;
    // 0x802261C4: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x802261C8: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x802261CC: j           L_80226204
    // 0x802261D0: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
        goto L_80226204;
    // 0x802261D0: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
L_802261D4:
    // 0x802261D4: beq         $v0, $zero, L_802261F8
    if (ctx->r2 == 0) {
        // 0x802261D8: nop
    
            goto L_802261F8;
    }
    // 0x802261D8: nop

    // 0x802261DC: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x802261E0: lhu         $v1, 0x14($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X14);
    // 0x802261E4: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x802261E8: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x802261EC: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x802261F0: j           L_80226204
    // 0x802261F4: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
        goto L_80226204;
    // 0x802261F4: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
L_802261F8:
    // 0x802261F8: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x802261FC: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80226200: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
L_80226204:
    // 0x80226204: jr          $ra
    // 0x80226208: nop

    TRACE_RETURN()
    return;
    // 0x80226208: nop

;}
RECOMP_FUNC void func_8023BA80_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BA80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BA84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BA88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023BA8C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023BA90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BA94: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x8023BA98: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023BA9C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8023BAA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BAA4: beq         $v1, $v0, L_8023BB30
    if (ctx->r3 == ctx->r2) {
        // 0x8023BAA8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8023BB30;
    }
    // 0x8023BAA8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8023BAAC: beql        $v0, $zero, L_8023BAC4
    if (ctx->r2 == 0) {
        // 0x8023BAB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023BAC4;
    }
    goto skip_0;
    // 0x8023BAB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023BAB4: beq         $v1, $zero, L_8023BADC
    if (ctx->r3 == 0) {
        // 0x8023BAB8: addiu       $a0, $zero, 0x5E
        ctx->r4 = ADD32(0, 0X5E);
            goto L_8023BADC;
    }
    // 0x8023BAB8: addiu       $a0, $zero, 0x5E
    ctx->r4 = ADD32(0, 0X5E);
    // 0x8023BABC: j           L_8023BC14
    // 0x8023BAC0: nop

        goto L_8023BC14;
    // 0x8023BAC0: nop

L_8023BAC4:
    // 0x8023BAC4: beq         $v1, $v0, L_8023BB48
    if (ctx->r3 == ctx->r2) {
        // 0x8023BAC8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BB48;
    }
    // 0x8023BAC8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BACC: beq         $v1, $v0, L_8023BBE4
    if (ctx->r3 == ctx->r2) {
        // 0x8023BAD0: nop
    
            goto L_8023BBE4;
    }
    // 0x8023BAD0: nop

    // 0x8023BAD4: j           L_8023BC14
    // 0x8023BAD8: nop

        goto L_8023BC14;
    // 0x8023BAD8: nop

L_8023BADC:
    // 0x8023BADC: jal         0x8004CB2C
    // 0x8023BAE0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x8023BAE0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x8023BAE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023BAE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023BAEC: jal         0x8005F6B4
    // 0x8023BAF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x8023BAF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023BAF4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023BAF8: addiu       $a0, $a0, 0x150
    ctx->r4 = ADD32(ctx->r4, 0X150);
    // 0x8023BAFC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023BB00: addiu       $v0, $v0, 0x1F0
    ctx->r2 = ADD32(ctx->r2, 0X1F0);
    // 0x8023BB04: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023BB08: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8023BB0C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023BB10: addiu       $v0, $v0, 0x23C
    ctx->r2 = ADD32(ctx->r2, 0X23C);
    // 0x8023BB14: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x8023BB18: jal         0x8005FA7C
    // 0x8023BB1C: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8023BB1C: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_2:
    // 0x8023BB20: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8023BB24: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8023BB28: j           L_8023BBD8
    // 0x8023BB2C: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
        goto L_8023BBD8;
    // 0x8023BB2C: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_8023BB30:
    // 0x8023BB30: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023BB34: jal         0x8005FA7C
    // 0x8023BB38: addiu       $a0, $a0, 0x164
    ctx->r4 = ADD32(ctx->r4, 0X164);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8023BB38: addiu       $a0, $a0, 0x164
    ctx->r4 = ADD32(ctx->r4, 0X164);
    after_3:
    // 0x8023BB3C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8023BB40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BB44: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023BB48:
    // 0x8023BB48: jal         0x8006FF84
    // 0x8023BB4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_4;
    // 0x8023BB4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023BB50: beq         $v0, $zero, L_8023BC14
    if (ctx->r2 == 0) {
        // 0x8023BB54: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023BC14;
    }
    // 0x8023BB54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BB58: lbu         $v1, 0xBD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XBD);
    // 0x8023BB5C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8023BB60: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023BB64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BB68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023BB6C: sb          $v0, 0x76($s0)
    MEM_B(0X76, ctx->r16) = ctx->r2;
    // 0x8023BB70: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8023BB74: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8023BB78: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x8023BB7C: sb          $v1, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r3;
    // 0x8023BB80: sb          $a0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r4;
    // 0x8023BB84: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8023BB88: addiu       $v0, $zero, -0x29C1
    ctx->r2 = ADD32(0, -0X29C1);
    // 0x8023BB8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023BB90: sh          $v0, 0x43A($s0)
    MEM_H(0X43A, ctx->r16) = ctx->r2;
    // 0x8023BB94: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8023BB98: sh          $v0, 0x43C($s0)
    MEM_H(0X43C, ctx->r16) = ctx->r2;
    // 0x8023BB9C: lui         $v0, 0xD63F
    ctx->r2 = S32(0XD63F << 16);
    // 0x8023BBA0: sw          $v0, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r2;
    // 0x8023BBA4: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x8023BBA8: sw          $v0, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r2;
    // 0x8023BBAC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023BBB0: sh          $v0, 0x442($s0)
    MEM_H(0X442, ctx->r16) = ctx->r2;
    // 0x8023BBB4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8023BBB8: sh          $zero, 0x438($s0)
    MEM_H(0X438, ctx->r16) = 0;
    // 0x8023BBBC: sw          $zero, 0x428($s0)
    MEM_W(0X428, ctx->r16) = 0;
    // 0x8023BBC0: sh          $zero, 0x440($s0)
    MEM_H(0X440, ctx->r16) = 0;
    // 0x8023BBC4: sh          $zero, 0x444($s0)
    MEM_H(0X444, ctx->r16) = 0;
    // 0x8023BBC8: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x8023BBCC: jal         0x80036E48
    // 0x8023BBD0: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x8023BBD0: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
    after_5:
    // 0x8023BBD4: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
L_8023BBD8:
    // 0x8023BBD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BBDC: j           L_8023BC14
    // 0x8023BBE0: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8023BC14;
    // 0x8023BBE0: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_8023BBE4:
    // 0x8023BBE4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023BBE8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023BBEC: bne         $v0, $zero, L_8023BC14
    if (ctx->r2 != 0) {
        // 0x8023BBF0: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8023BC14;
    }
    // 0x8023BBF0: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8023BBF4: jal         0x80036B1C
    // 0x8023BBF8: ori         $a0, $a0, 0x4C01
    ctx->r4 = ctx->r4 | 0X4C01;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_6;
    // 0x8023BBF8: ori         $a0, $a0, 0x4C01
    ctx->r4 = ctx->r4 | 0X4C01;
    after_6:
    // 0x8023BBFC: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x8023BC00: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x8023BC04: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x8023BC08: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x8023BC0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023BC10: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
L_8023BC14:
    // 0x8023BC14: jal         0x8006072C
    // 0x8023BC18: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_7;
    // 0x8023BC18: nop

    after_7:
    // 0x8023BC1C: beq         $v0, $zero, L_8023BC30
    if (ctx->r2 == 0) {
        // 0x8023BC20: nop
    
            goto L_8023BC30;
    }
    // 0x8023BC20: nop

    // 0x8023BC24: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023BC28: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023BC2C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023BC30:
    // 0x8023BC30: jal         0x8005FB90
    // 0x8023BC34: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x8023BC34: nop

    after_8:
    // 0x8023BC38: jal         0x80060018
    // 0x8023BC3C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_9;
    // 0x8023BC3C: nop

    after_9:
    // 0x8023BC40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023BC44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BC48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BC4C: jr          $ra
    // 0x8023BC50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BC50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B258_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B258: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B25C: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8022B260: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x8022B264: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8022B268: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022B26C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B270: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022B274: lw          $v0, -0x1DE4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1DE4);
    // 0x8022B278: jr          $ra
    // 0x8022B27C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022B27C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8023B1D4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B1D4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023B1D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B1DC: bne         $v1, $v0, L_8023B1F8
    if (ctx->r3 != ctx->r2) {
        // 0x8023B1E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023B1F8;
    }
    // 0x8023B1E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B1E4: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x8023B1E8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8023B1EC: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x8023B1F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023B1F4: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8023B1F8:
    // 0x8023B1F8: jr          $ra
    // 0x8023B1FC: nop

    TRACE_RETURN()
    return;
    // 0x8023B1FC: nop

;}
RECOMP_FUNC void func_8022AF80_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AF84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AF88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AF8C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022AF90: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AF94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AF98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022AF9C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AFA0: jal         0x8009A3B4
    // 0x8022AFA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AFA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022AFA8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022AFAC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022AFB0: jal         0x8009A3B4
    // 0x8022AFB4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AFB4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022AFB8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022AFBC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022AFC0: jal         0x8009A3B4
    // 0x8022AFC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AFC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AFC8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022AFCC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022AFD0: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8022AFD4: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x8022AFD8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022AFDC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022AFE0: beq         $v0, $zero, L_8022B208
    if (ctx->r2 == 0) {
        // 0x8022AFE4: addiu       $s2, $s0, 0x4E0
        ctx->r18 = ADD32(ctx->r16, 0X4E0);
            goto L_8022B208;
    }
    // 0x8022AFE4: addiu       $s2, $s0, 0x4E0
    ctx->r18 = ADD32(ctx->r16, 0X4E0);
    // 0x8022AFE8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022AFEC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AFF0: addu        $at, $at, $v0
    gpr jr_addend_8022AFF8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AFF4: lw          $v0, 0xE50($at)
    ctx->r2 = ADD32(ctx->r1, 0XE50);
    // 0x8022AFF8: jr          $v0
    // 0x8022AFFC: nop

    switch (jr_addend_8022AFF8 >> 2) {
        case 0: goto L_8022B000; break;
        case 1: goto L_8022B070; break;
        case 2: goto L_8022B0A8; break;
        case 3: goto L_8022B134; break;
        case 4: goto L_8022B16C; break;
        default: switch_error(__func__, 0x8022AFF8, 0x80240E50);
    }
    // 0x8022AFFC: nop

L_8022B000:
    // 0x8022B000: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B008: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B00C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B010: jal         0x8004D5D4
    // 0x8022B014: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022B014: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022B018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B01C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B020: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B024: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B028: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B02C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B030: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B034: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B038: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B03C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B040: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B044: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B048: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022B04C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022B050: jal         0x8022B258
    // 0x8022B054: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    func_8022B258_ovl25(rdram, ctx);
        goto after_4;
    // 0x8022B054: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    after_4:
    // 0x8022B058: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B05C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B060: jal         0x8022B280
    // 0x8022B064: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022B280_ovl25(rdram, ctx);
        goto after_5;
    // 0x8022B064: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022B068: j           L_8022B15C
    // 0x8022B06C: nop

        goto L_8022B15C;
    // 0x8022B06C: nop

L_8022B070:
    // 0x8022B070: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B074: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022B078: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022B07C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B080: bne         $v1, $v0, L_8022B20C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B084: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B20C;
    }
    // 0x8022B084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B088: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022B08C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B090: bne         $v1, $v0, L_8022B20C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B094: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_8022B20C;
    }
    // 0x8022B094: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B098: jal         0x8022B280
    // 0x8022B09C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022B280_ovl25(rdram, ctx);
        goto after_6;
    // 0x8022B09C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x8022B0A0: j           L_8022B15C
    // 0x8022B0A4: nop

        goto L_8022B15C;
    // 0x8022B0A4: nop

L_8022B0A8:
    // 0x8022B0A8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022B0AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B0B0: bne         $v1, $v0, L_8022B0F4
    if (ctx->r3 != ctx->r2) {
        // 0x8022B0B4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B0F4;
    }
    // 0x8022B0B4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B0B8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022B0BC: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022B0C0: bne         $v1, $v0, L_8022B0F0
    if (ctx->r3 != ctx->r2) {
        // 0x8022B0C4: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B0F0;
    }
    // 0x8022B0C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B0CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B0D0: jal         0x8022B258
    // 0x8022B0D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022B258_ovl25(rdram, ctx);
        goto after_7;
    // 0x8022B0D4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_7:
    // 0x8022B0D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B0DC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B0E0: jal         0x8022B280
    // 0x8022B0E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8022B280_ovl25(rdram, ctx);
        goto after_8;
    // 0x8022B0E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x8022B0E8: j           L_8022B20C
    // 0x8022B0EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022B20C;
    // 0x8022B0EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B0F0:
    // 0x8022B0F0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
L_8022B0F4:
    // 0x8022B0F4: bne         $v1, $v0, L_8022B20C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B0F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B20C;
    }
    // 0x8022B0F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B0FC: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022B100: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B104: bne         $v1, $v0, L_8022B20C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B108: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_8022B20C;
    }
    // 0x8022B108: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B10C: jal         0x8022B258
    // 0x8022B110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8022B258_ovl25(rdram, ctx);
        goto after_9;
    // 0x8022B110: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x8022B114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B118: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B11C: jal         0x8022B280
    // 0x8022B120: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8022B280_ovl25(rdram, ctx);
        goto after_10;
    // 0x8022B120: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x8022B124: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B128: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022B12C: j           L_8022B160
    // 0x8022B130: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
        goto L_8022B160;
    // 0x8022B130: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
L_8022B134:
    // 0x8022B134: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B138: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022B13C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022B140: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B144: bne         $v1, $v0, L_8022B20C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B148: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B20C;
    }
    // 0x8022B148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B14C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022B150: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022B154: bne         $v1, $v0, L_8022B20C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B158: nop
    
            goto L_8022B20C;
    }
    // 0x8022B158: nop

L_8022B15C:
    // 0x8022B15C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
L_8022B160:
    // 0x8022B160: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B164: j           L_8022B208
    // 0x8022B168: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022B208;
    // 0x8022B168: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B16C:
    // 0x8022B16C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022B170: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B174: bne         $v1, $v0, L_8022B1B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022B178: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B1B4;
    }
    // 0x8022B178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B17C: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8022B180: bne         $v1, $v0, L_8022B1A0
    if (ctx->r3 != ctx->r2) {
        // 0x8022B184: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022B1A0;
    }
    // 0x8022B184: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022B188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B18C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B190: jal         0x8022B280
    // 0x8022B194: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022B280_ovl25(rdram, ctx);
        goto after_11;
    // 0x8022B194: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_11:
    // 0x8022B198: j           L_8022B1B4
    // 0x8022B19C: nop

        goto L_8022B1B4;
    // 0x8022B19C: nop

L_8022B1A0:
    // 0x8022B1A0: bne         $v1, $v0, L_8022B1B4
    if (ctx->r3 != ctx->r2) {
        // 0x8022B1A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B1B4;
    }
    // 0x8022B1A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B1A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022B1AC: jal         0x8022B258
    // 0x8022B1B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8022B258_ovl25(rdram, ctx);
        goto after_12;
    // 0x8022B1B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_12:
L_8022B1B4:
    // 0x8022B1B4: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022B1B8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B1BC: beq         $v1, $v0, L_8022B1F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B1C0: slti        $v0, $v1, 0x12
        ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
            goto L_8022B1F8;
    }
    // 0x8022B1C0: slti        $v0, $v1, 0x12
    ctx->r2 = SIGNED(ctx->r3) < 0X12 ? 1 : 0;
    // 0x8022B1C4: beq         $v0, $zero, L_8022B1DC
    if (ctx->r2 == 0) {
        // 0x8022B1C8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B1DC;
    }
    // 0x8022B1C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B1CC: beq         $v1, $v0, L_8022B204
    if (ctx->r3 == ctx->r2) {
        // 0x8022B1D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B204;
    }
    // 0x8022B1D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B1D4: j           L_8022B20C
    // 0x8022B1D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022B20C;
    // 0x8022B1D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B1DC:
    // 0x8022B1DC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x8022B1E0: beq         $v1, $v0, L_8022B200
    if (ctx->r3 == ctx->r2) {
        // 0x8022B1E4: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8022B200;
    }
    // 0x8022B1E4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022B1E8: beq         $v1, $v0, L_8022B204
    if (ctx->r3 == ctx->r2) {
        // 0x8022B1EC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022B204;
    }
    // 0x8022B1EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B1F0: j           L_8022B20C
    // 0x8022B1F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8022B20C;
    // 0x8022B1F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B1F8:
    // 0x8022B1F8: j           L_8022B204
    // 0x8022B1FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022B204;
    // 0x8022B1FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022B200:
    // 0x8022B200: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022B204:
    // 0x8022B204: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
L_8022B208:
    // 0x8022B208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022B20C:
    // 0x8022B20C: jal         0x8022B2A8
    // 0x8022B210: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022B2A8_ovl25(rdram, ctx);
        goto after_13;
    // 0x8022B210: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_13:
    // 0x8022B214: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B218: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022B21C: beq         $a1, $v0, L_8022B238
    if (ctx->r5 == ctx->r2) {
        // 0x8022B220: nop
    
            goto L_8022B238;
    }
    // 0x8022B220: nop

    // 0x8022B224: lh          $a2, 0x2($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X2);
    // 0x8022B228: jal         0x80050294
    // 0x8022B22C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_14;
    // 0x8022B22C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x8022B230: j           L_8022B240
    // 0x8022B234: nop

        goto L_8022B240;
    // 0x8022B234: nop

L_8022B238:
    // 0x8022B238: jal         0x8005044C
    // 0x8022B23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_15;
    // 0x8022B23C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
L_8022B240:
    // 0x8022B240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B244: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022B248: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B24C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B250: jr          $ra
    // 0x8022B254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BC70_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BC70: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022BC74: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022BC78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BC7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BC80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BC84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BC88: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022BC8C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022BC90: beq         $v1, $v0, L_8022BD48
    if (ctx->r3 == ctx->r2) {
        // 0x8022BC94: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_8022BD48;
    }
    // 0x8022BC94: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BC98: slti        $v0, $v1, 0x65
    ctx->r2 = SIGNED(ctx->r3) < 0X65 ? 1 : 0;
    // 0x8022BC9C: beq         $v0, $zero, L_8022BCD8
    if (ctx->r2 == 0) {
        // 0x8022BCA0: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_8022BCD8;
    }
    // 0x8022BCA0: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022BCA4: beq         $v1, $v0, L_8022BD2C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BCA8: slti        $v0, $v1, 0x2E
        ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
            goto L_8022BD2C;
    }
    // 0x8022BCA8: slti        $v0, $v1, 0x2E
    ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
    // 0x8022BCAC: beq         $v0, $zero, L_8022BCC4
    if (ctx->r2 == 0) {
        // 0x8022BCB0: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022BCC4;
    }
    // 0x8022BCB0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022BCB4: beq         $v1, $v0, L_8022BD10
    if (ctx->r3 == ctx->r2) {
        // 0x8022BCB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BD10;
    }
    // 0x8022BCB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BCBC: j           L_8022BD8C
    // 0x8022BCC0: nop

        goto L_8022BD8C;
    // 0x8022BCC0: nop

L_8022BCC4:
    // 0x8022BCC4: addiu       $v0, $zero, 0x5F
    ctx->r2 = ADD32(0, 0X5F);
    // 0x8022BCC8: beq         $v1, $v0, L_8022BD3C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BCCC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BD3C;
    }
    // 0x8022BCCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BCD0: j           L_8022BD8C
    // 0x8022BCD4: nop

        goto L_8022BD8C;
    // 0x8022BCD4: nop

L_8022BCD8:
    // 0x8022BCD8: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8022BCDC: beq         $v1, $v0, L_8022BD6C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BCE0: slti        $v0, $v1, 0x8D
        ctx->r2 = SIGNED(ctx->r3) < 0X8D ? 1 : 0;
            goto L_8022BD6C;
    }
    // 0x8022BCE0: slti        $v0, $v1, 0x8D
    ctx->r2 = SIGNED(ctx->r3) < 0X8D ? 1 : 0;
    // 0x8022BCE4: beq         $v0, $zero, L_8022BCFC
    if (ctx->r2 == 0) {
        // 0x8022BCE8: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022BCFC;
    }
    // 0x8022BCE8: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022BCEC: beq         $v1, $v0, L_8022BD58
    if (ctx->r3 == ctx->r2) {
        // 0x8022BCF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BD58;
    }
    // 0x8022BCF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BCF4: j           L_8022BD8C
    // 0x8022BCF8: nop

        goto L_8022BD8C;
    // 0x8022BCF8: nop

L_8022BCFC:
    // 0x8022BCFC: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x8022BD00: beq         $v1, $v0, L_8022BD7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BD04: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BD7C;
    }
    // 0x8022BD04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD08: j           L_8022BD8C
    // 0x8022BD0C: nop

        goto L_8022BD8C;
    // 0x8022BD0C: nop

L_8022BD10:
    // 0x8022BD10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022BD14: jal         0x80050294
    // 0x8022BD18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022BD18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022BD1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BD24: j           L_8022BD84
    // 0x8022BD28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8022BD84;
    // 0x8022BD28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022BD2C:
    // 0x8022BD2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BD34: j           L_8022BD84
    // 0x8022BD38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8022BD84;
    // 0x8022BD38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8022BD3C:
    // 0x8022BD3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BD40: j           L_8022BD84
    // 0x8022BD44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_8022BD84;
    // 0x8022BD44: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8022BD48:
    // 0x8022BD48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BD50: j           L_8022BD84
    // 0x8022BD54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
        goto L_8022BD84;
    // 0x8022BD54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_8022BD58:
    // 0x8022BD58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022BD5C: jal         0x80050294
    // 0x8022BD60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022BD60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022BD64: j           L_8022BD8C
    // 0x8022BD68: nop

        goto L_8022BD8C;
    // 0x8022BD68: nop

L_8022BD6C:
    // 0x8022BD6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BD70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BD74: j           L_8022BD84
    // 0x8022BD78: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_8022BD84;
    // 0x8022BD78: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_8022BD7C:
    // 0x8022BD7C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BD80: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_8022BD84:
    // 0x8022BD84: jal         0x8022BDA0
    // 0x8022BD88: nop

    func_8022BDA0_ovl25(rdram, ctx);
        goto after_2;
    // 0x8022BD88: nop

    after_2:
L_8022BD8C:
    // 0x8022BD8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BD90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BD94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BD98: jr          $ra
    // 0x8022BD9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BD9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023111C_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023111C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231120: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231124: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231128: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023112C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231130: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231134: bne         $v0, $zero, L_80231158
    if (ctx->r2 != 0) {
        // 0x80231138: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80231158;
    }
    // 0x80231138: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8023113C: sh          $zero, 0x18($s1)
    MEM_H(0X18, ctx->r17) = 0;
    // 0x80231140: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231144: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80231148: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8023114C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80231150: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231154: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231158:
    // 0x80231158: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023115C: xori        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 ^ 0X2;
    // 0x80231160: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80231164: xori        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 ^ 0X4;
    // 0x80231168: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023116C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80231170: beq         $v1, $zero, L_80231188
    if (ctx->r3 == 0) {
        // 0x80231174: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231188;
    }
    // 0x80231174: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231178: jal         0x80232284
    // 0x8023117C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80232284_ovl25(rdram, ctx);
        goto after_0;
    // 0x8023117C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80231180: j           L_80231190
    // 0x80231184: nop

        goto L_80231190;
    // 0x80231184: nop

L_80231188:
    // 0x80231188: jal         0x80232394
    // 0x8023118C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80232394_ovl25(rdram, ctx);
        goto after_1;
    // 0x8023118C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
L_80231190:
    // 0x80231190: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80231194: lhu         $a1, 0x4C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4C);
    // 0x80231198: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8023119C: lhu         $a2, 0x4E($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X4E);
    // 0x802311A0: lhu         $a0, 0x48($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X48);
    // 0x802311A4: lhu         $a3, 0x50($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X50);
    // 0x802311A8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802311AC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802311B0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802311B4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x802311B8: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x802311BC: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x802311C0: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802311C4: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x802311C8: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x802311CC: sh          $a0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r4;
    // 0x802311D0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x802311D4: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x802311D8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802311DC: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x802311E0: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x802311E4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802311E8: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802311EC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x802311F0: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x802311F4: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x802311F8: beq         $v0, $zero, L_8023128C
    if (ctx->r2 == 0) {
        // 0x802311FC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023128C;
    }
    // 0x802311FC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80231200: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80231204: beq         $v1, $v0, L_8023126C
    if (ctx->r3 == ctx->r2) {
        // 0x80231208: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_8023126C;
    }
    // 0x80231208: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x8023120C: beq         $v0, $zero, L_80231224
    if (ctx->r2 == 0) {
        // 0x80231210: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231224;
    }
    // 0x80231210: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231214: beq         $v1, $v0, L_80231270
    if (ctx->r3 == ctx->r2) {
        // 0x80231218: addiu       $v0, $zero, -0xC00
        ctx->r2 = ADD32(0, -0XC00);
            goto L_80231270;
    }
    // 0x80231218: addiu       $v0, $zero, -0xC00
    ctx->r2 = ADD32(0, -0XC00);
    // 0x8023121C: j           L_80231280
    // 0x80231220: nop

        goto L_80231280;
    // 0x80231220: nop

L_80231224:
    // 0x80231224: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231228: beq         $v1, $v0, L_80231244
    if (ctx->r3 == ctx->r2) {
        // 0x8023122C: addiu       $v0, $zero, -0x1000
        ctx->r2 = ADD32(0, -0X1000);
            goto L_80231244;
    }
    // 0x8023122C: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80231230: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231234: beq         $v1, $v0, L_80231258
    if (ctx->r3 == ctx->r2) {
        // 0x80231238: addiu       $v0, $zero, 0x1000
        ctx->r2 = ADD32(0, 0X1000);
            goto L_80231258;
    }
    // 0x80231238: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8023123C: j           L_80231280
    // 0x80231240: nop

        goto L_80231280;
    // 0x80231240: nop

L_80231244:
    // 0x80231244: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80231248: addiu       $v0, $zero, -0x340
    ctx->r2 = ADD32(0, -0X340);
    // 0x8023124C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80231250: j           L_8023127C
    // 0x80231254: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
        goto L_8023127C;
    // 0x80231254: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
L_80231258:
    // 0x80231258: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8023125C: addiu       $v0, $zero, -0x340
    ctx->r2 = ADD32(0, -0X340);
    // 0x80231260: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80231264: j           L_8023127C
    // 0x80231268: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
        goto L_8023127C;
    // 0x80231268: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
L_8023126C:
    // 0x8023126C: addiu       $v0, $zero, -0xC00
    ctx->r2 = ADD32(0, -0XC00);
L_80231270:
    // 0x80231270: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80231274: addiu       $v0, $zero, 0x1800
    ctx->r2 = ADD32(0, 0X1800);
    // 0x80231278: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
L_8023127C:
    // 0x8023127C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80231280:
    // 0x80231280: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80231284: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80231288: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
L_8023128C:
    // 0x8023128C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80231290: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80231294: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80231298: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023129C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802312A0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802312A4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802312A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802312AC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802312B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802312B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802312B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802312BC: jr          $ra
    // 0x802312C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802312C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BB90_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BB90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BB94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BB98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BB9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BBA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BBA4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BBA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BBAC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022BBB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BBB4: lw          $v0, -0x1D30($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1D30);
    // 0x8022BBB8: jalr        $v0
    // 0x8022BBBC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022BBBC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x8022BBC0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022BBC4: bne         $v0, $zero, L_8022BBD8
    if (ctx->r2 != 0) {
        // 0x8022BBC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BBD8;
    }
    // 0x8022BBC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BBCC: jal         0x8005044C
    // 0x8022BBD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022BBD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022BBD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022BBD8:
    // 0x8022BBD8: jal         0x8022BDE4
    // 0x8022BBDC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022BDE4_ovl25(rdram, ctx);
        goto after_2;
    // 0x8022BBDC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022BBE0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BBE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BBE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BBEC: jr          $ra
    // 0x8022BBF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BBF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238DD4_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238DD4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80238DD8: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x80238DDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80238DE0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80238DE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80238DE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80238DEC: lw          $v0, 0x28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28);
    // 0x80238DF0: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80238DF4: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80238DF8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80238DFC: sh          $v0, -0x3BBA($at)
    MEM_H(-0X3BBA, ctx->r1) = ctx->r2;
    // 0x80238E00: jal         0x8004EEAC
    // 0x80238E04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80238E04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80238E08: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80238E0C: beq         $s0, $zero, L_80238F40
    if (ctx->r16 == 0) {
        // 0x80238E10: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80238F40;
    }
    // 0x80238E10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80238E14: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80238E18: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80238E1C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80238E20: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x80238E24: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80238E28: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80238E2C: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80238E30: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
    // 0x80238E34: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80238E38: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80238E3C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80238E40: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80238E44: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80238E48: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80238E4C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238E50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238E54: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80238E58: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80238E5C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80238E60: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80238E64: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80238E68: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80238E6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238E70: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80238E74: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80238E78: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80238E7C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80238E80: jal         0x8009A3B4
    // 0x80238E84: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80238E84: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x80238E88: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80238E8C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80238E90: jal         0x8009A3B4
    // 0x80238E94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80238E94: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80238E98: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80238E9C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80238EA0: jal         0x8009A3B4
    // 0x80238EA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80238EA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80238EA8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238EAC: bne         $v0, $zero, L_80238ED8
    if (ctx->r2 != 0) {
        // 0x80238EB0: sw          $s1, 0x328($s0)
        MEM_W(0X328, ctx->r16) = ctx->r17;
            goto L_80238ED8;
    }
    // 0x80238EB0: sw          $s1, 0x328($s0)
    MEM_W(0X328, ctx->r16) = ctx->r17;
    // 0x80238EB4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80238EB8: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x80238EBC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80238EC0: sh          $v0, -0x3BBC($at)
    MEM_H(-0X3BBC, ctx->r1) = ctx->r2;
    // 0x80238EC4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238EC8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80238ECC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80238ED0: j           L_80238F38
    // 0x80238ED4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_80238F38;
    // 0x80238ED4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_80238ED8:
    // 0x80238ED8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80238EDC: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x80238EE0: lw          $v0, 0x28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28);
    // 0x80238EE4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80238EE8: addiu       $a1, $a1, -0x3BBC
    ctx->r5 = ADD32(ctx->r5, -0X3BBC);
    // 0x80238EEC: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80238EF0: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80238EF4: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80238EF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238EFC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80238F00: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80238F04: lh          $v1, -0x3BBA($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3BBA);
    // 0x80238F08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238F0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238F10: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80238F14: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80238F18: bnel        $v1, $zero, L_80238F20
    if (ctx->r3 != 0) {
        // 0x80238F1C: sh          $a0, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r4;
            goto L_80238F20;
    }
    goto skip_0;
    // 0x80238F1C: sh          $a0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r4;
    skip_0:
L_80238F20:
    // 0x80238F20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238F24: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80238F28: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80238F2C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80238F30: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80238F34: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80238F38:
    // 0x80238F38: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238F3C: sw          $s0, 0x3230($at)
    MEM_W(0X3230, ctx->r1) = ctx->r16;
L_80238F40:
    // 0x80238F40: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80238F44: lw          $v0, 0x298($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X298);
    // 0x80238F48: lw          $v0, 0x28($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28);
    // 0x80238F4C: lbu         $a2, 0xA($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0XA);
    // 0x80238F50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80238F54: jal         0x8004A234
    // 0x80238F58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004A234_25634(rdram, ctx);
        goto after_4;
    // 0x80238F58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x80238F5C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80238F60: bne         $v0, $zero, L_80239020
    if (ctx->r2 != 0) {
        // 0x80238F64: nop
    
            goto L_80239020;
    }
    // 0x80238F64: nop

    // 0x80238F68: jal         0x8004EEAC
    // 0x80238F6C: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_5;
    // 0x80238F6C: nop

    after_5:
    // 0x80238F70: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80238F74: beq         $s0, $zero, L_80239154
    if (ctx->r16 == 0) {
        // 0x80238F78: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_80239154;
    }
    // 0x80238F78: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80238F7C: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80238F80: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80238F84: addiu       $v0, $zero, -0xC00
    ctx->r2 = ADD32(0, -0XC00);
    // 0x80238F88: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80238F8C: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x80238F90: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238F94: addiu       $v0, $zero, 0x3070
    ctx->r2 = ADD32(0, 0X3070);
    // 0x80238F98: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80238F9C: lh          $t0, 0x18($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X18);
    // 0x80238FA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80238FA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238FA8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80238FAC: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x80238FB0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80238FB4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80238FB8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80238FBC: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80238FC0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80238FC4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80238FC8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80238FCC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80238FD0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80238FD4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80238FD8: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80238FDC: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80238FE0: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    // 0x80238FE4: jal         0x8009A3B4
    // 0x80238FE8: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80238FE8: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    after_6:
    // 0x80238FEC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80238FF0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80238FF4: jal         0x8009A3B4
    // 0x80238FF8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80238FF8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x80238FFC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80239000: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80239004: jal         0x8009A3B4
    // 0x80239008: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80239008: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8023900C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239010: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80239014: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239018: j           L_80239154
    // 0x8023901C: sw          $s0, 0x3234($at)
    MEM_W(0X3234, ctx->r1) = ctx->r16;
        goto L_80239154;
    // 0x8023901C: sw          $s0, 0x3234($at)
    MEM_W(0X3234, ctx->r1) = ctx->r16;
L_80239020:
    // 0x80239020: jal         0x8004EF48
    // 0x80239024: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_9;
    // 0x80239024: nop

    after_9:
    // 0x80239028: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023902C: beq         $s0, $zero, L_80239154
    if (ctx->r16 == 0) {
        // 0x80239030: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_80239154;
    }
    // 0x80239030: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80239034: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x80239038: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8023903C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239040: bne         $v1, $v0, L_80239084
    if (ctx->r3 != ctx->r2) {
        // 0x80239044: lui         $v1, 0x2C00
        ctx->r3 = S32(0X2C00 << 16);
            goto L_80239084;
    }
    // 0x80239044: lui         $v1, 0x2C00
    ctx->r3 = S32(0X2C00 << 16);
    // 0x80239048: ori         $v1, $v1, 0x4000
    ctx->r3 = ctx->r3 | 0X4000;
    // 0x8023904C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239050: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239054: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239058: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x8023905C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80239060: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80239064: addiu       $v0, $zero, -0x1A00
    ctx->r2 = ADD32(0, -0X1A00);
    // 0x80239068: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023906C: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x80239070: sb          $t0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r8;
    // 0x80239074: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80239078: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023907C: j           L_802390C0
    // 0x80239080: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
        goto L_802390C0;
    // 0x80239080: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
L_80239084:
    // 0x80239084: ori         $v1, $v1, 0x4080
    ctx->r3 = ctx->r3 | 0X4080;
    // 0x80239088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023908C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239090: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239094: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x80239098: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023909C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802390A0: addiu       $v0, $zero, -0x800
    ctx->r2 = ADD32(0, -0X800);
    // 0x802390A4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802390A8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802390AC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802390B0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802390B4: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x802390B8: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x802390BC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_802390C0:
    // 0x802390C0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802390C4: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802390C8: jal         0x8004A00C
    // 0x802390CC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004A00C_2540C(rdram, ctx);
        goto after_10;
    // 0x802390CC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_10:
    // 0x802390D0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802390D4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802390D8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802390DC: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x802390E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802390E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802390E8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x802390EC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802390F0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802390F4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802390F8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802390FC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80239100: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239104: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80239108: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8023910C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80239110: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80239114: jal         0x8009A3B4
    // 0x80239118: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80239118: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_11:
    // 0x8023911C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80239120: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80239124: jal         0x8009A3B4
    // 0x80239128: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80239128: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_12:
    // 0x8023912C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80239130: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80239134: jal         0x8009A3B4
    // 0x80239138: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80239138: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x8023913C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80239140: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80239144: beql        $v1, $v0, L_8023914C
    if (ctx->r3 == ctx->r2) {
        // 0x80239148: sw          $s1, 0x3C0($s0)
        MEM_W(0X3C0, ctx->r16) = ctx->r17;
            goto L_8023914C;
    }
    goto skip_1;
    // 0x80239148: sw          $s1, 0x3C0($s0)
    MEM_W(0X3C0, ctx->r16) = ctx->r17;
    skip_1:
L_8023914C:
    // 0x8023914C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239150: sw          $s0, 0x3238($at)
    MEM_W(0X3238, ctx->r1) = ctx->r16;
L_80239154:
    // 0x80239154: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80239158: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023915C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80239160: jr          $ra
    // 0x80239164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80239164: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F2C8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F2CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F2D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F2D4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022F2D8: jal         0x8022F604
    // 0x8022F2DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8022F604_ovl25(rdram, ctx);
        goto after_0;
    // 0x8022F2DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022F2E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F2E4: bne         $v0, $zero, L_8022F318
    if (ctx->r2 != 0) {
        // 0x8022F2E8: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022F318;
    }
    // 0x8022F2E8: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022F2EC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022F2F0: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8022F2F4: bne         $v0, $zero, L_8022F318
    if (ctx->r2 != 0) {
        // 0x8022F2F8: nop
    
            goto L_8022F318;
    }
    // 0x8022F2F8: nop

    // 0x8022F2FC: jal         0x80036B58
    // 0x8022F300: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8022F300: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8022F304: jal         0x80049EDC
    // 0x8022F308: nop

    func_80049EDC_252DC(rdram, ctx);
        goto after_2;
    // 0x8022F308: nop

    after_2:
    // 0x8022F30C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F310: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F314: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F318:
    // 0x8022F318: lh          $v0, 0x2($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X2);
    // 0x8022F31C: bne         $v0, $zero, L_8022F358
    if (ctx->r2 != 0) {
        // 0x8022F320: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F358;
    }
    // 0x8022F320: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F324: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F328: beq         $v0, $zero, L_8022F360
    if (ctx->r2 == 0) {
        // 0x8022F32C: nop
    
            goto L_8022F360;
    }
    // 0x8022F32C: nop

    // 0x8022F330: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022F334: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8022F338: bne         $v0, $zero, L_8022F360
    if (ctx->r2 != 0) {
        // 0x8022F33C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F360;
    }
    // 0x8022F33C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F340: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022F344: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F348: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F34C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F350: j           L_8022F360
    // 0x8022F354: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022F360;
    // 0x8022F354: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022F358:
    // 0x8022F358: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022F35C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_8022F360:
    // 0x8022F360: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F364: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F368: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F36C: jr          $ra
    // 0x8022F370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F370: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229550_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229550: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229554: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229558: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022955C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80229560: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80229564: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80229568: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022956C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229570: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229574: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80229578: bne         $v0, $zero, L_8022962C
    if (ctx->r2 != 0) {
        // 0x8022957C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022962C;
    }
    // 0x8022957C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229580: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80229584: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80229588: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022958C: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x80229590: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x80229594: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x80229598: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022959C: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x802295A0: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x802295A4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802295A8: jal         0x8004D5D4
    // 0x802295AC: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802295AC: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_0:
    // 0x802295B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802295B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802295B8: jal         0x80050294
    // 0x802295BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802295BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802295C0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802295C4: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x802295C8: addiu       $s4, $zero, 0x1A
    ctx->r20 = ADD32(0, 0X1A);
    // 0x802295CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802295D0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802295D4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_802295D8:
    // 0x802295D8: addiu       $s2, $s3, 0x1
    ctx->r18 = ADD32(ctx->r19, 0X1);
L_802295DC:
    // 0x802295DC: jal         0x8004F144
    // 0x802295E0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x802295E0: nop

    after_2:
    // 0x802295E4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802295E8: beq         $v1, $zero, L_80229608
    if (ctx->r3 == 0) {
        // 0x802295EC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80229608;
    }
    // 0x802295EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802295F0: sb          $s5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r21;
    // 0x802295F4: sb          $s4, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r20;
    // 0x802295F8: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x802295FC: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80229600: sb          $s2, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r18;
    // 0x80229604: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_80229608:
    // 0x80229608: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022960C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80229610: bne         $v0, $zero, L_802295DC
    if (ctx->r2 != 0) {
        // 0x80229614: nop
    
            goto L_802295DC;
    }
    // 0x80229614: nop

    // 0x80229618: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022961C: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80229620: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80229624: bnel        $v0, $zero, L_802295D8
    if (ctx->r2 != 0) {
        // 0x80229628: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802295D8;
    }
    goto skip_0;
    // 0x80229628: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
L_8022962C:
    // 0x8022962C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229630: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80229634: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80229638: bne         $v1, $v0, L_8022964C
    if (ctx->r3 != ctx->r2) {
        // 0x8022963C: nop
    
            goto L_8022964C;
    }
    // 0x8022963C: nop

    // 0x80229640: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80229644: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229648: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8022964C:
    // 0x8022964C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80229650: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80229654: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80229658: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022965C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229660: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229664: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229668: jr          $ra
    // 0x8022966C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022966C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80232C10_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232C14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232C18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232C1C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232C20: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232C28: jal         0x8009A3B4
    // 0x80232C2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80232C2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80232C30: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80232C34: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232C38: jal         0x8009A3B4
    // 0x80232C3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232C3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80232C40: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80232C44: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80232C48: jal         0x8009A3B4
    // 0x80232C4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232C4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80232C50: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232C54: bne         $v0, $zero, L_80232CB0
    if (ctx->r2 != 0) {
        // 0x80232C58: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232CB0;
    }
    // 0x80232C58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232C5C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232C60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232C64: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232C68: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232C6C: jal         0x8004D5FC
    // 0x80232C70: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5FC_289FC(rdram, ctx);
        goto after_3;
    // 0x80232C70: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_3:
    // 0x80232C74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232C78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232C80: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80232C84: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80232C88: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80232C8C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80232C90: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80232C94: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232C98: jal         0x80050294
    // 0x80232C9C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80232C9C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_4:
    // 0x80232CA0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232CA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232CA8: j           L_80232CDC
    // 0x80232CAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80232CDC;
    // 0x80232CAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80232CB0:
    // 0x80232CB0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80232CB4: bne         $v1, $v0, L_80232CD4
    if (ctx->r3 != ctx->r2) {
        // 0x80232CB8: nop
    
            goto L_80232CD4;
    }
    // 0x80232CB8: nop

    // 0x80232CBC: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80232CC0: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80232CC4: addiu       $v0, $v0, -0x18
    ctx->r2 = ADD32(ctx->r2, -0X18);
    // 0x80232CC8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232CCC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80232CD0: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
L_80232CD4:
    // 0x80232CD4: jal         0x8005044C
    // 0x80232CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80232CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_80232CDC:
    // 0x80232CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232CE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232CE4: jr          $ra
    // 0x80232CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80232CEC: nop

;}
RECOMP_FUNC void func_802325F8_ovl25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802325F8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802325FC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80232600: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80232604: bne         $a2, $v0, L_802326AC
    if (ctx->r6 != ctx->r2) {
        // 0x80232608: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802326AC;
    }
    // 0x80232608: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8023260C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80232610: addiu       $t1, $zero, 0x422F
    ctx->r9 = ADD32(0, 0X422F);
L_80232614:
    // 0x80232614: lh          $v0, 0x6E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6E);
    // 0x80232618: blez        $v0, L_80232678
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023261C: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_80232678;
    }
    // 0x8023261C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x80232620: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232624: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80232628: beql        $v0, $zero, L_8023267C
    if (ctx->r2 == 0) {
        // 0x8023262C: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_8023267C;
    }
    goto skip_0;
    // 0x8023262C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    skip_0:
    // 0x80232630: blez        $a2, L_80232678
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80232634: sll         $v0, $a2, 1
        ctx->r2 = S32(ctx->r6 << 1);
            goto L_80232678;
    }
    // 0x80232634: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80232638: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8023263C: lh          $v0, 0x9E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X9E);
    // 0x80232640: bgtz        $v0, L_80232680
    if (SIGNED(ctx->r2) > 0) {
        // 0x80232644: sll         $v0, $a2, 3
        ctx->r2 = S32(ctx->r6 << 3);
            goto L_80232680;
    }
    // 0x80232644: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x80232648: lbu         $v1, 0x1F($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1F);
    // 0x8023264C: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x80232650: beq         $v0, $zero, L_80232668
    if (ctx->r2 == 0) {
        // 0x80232654: sll         $v0, $a2, 3
        ctx->r2 = S32(ctx->r6 << 3);
            goto L_80232668;
    }
    // 0x80232654: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x80232658: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8023265C: addiu       $v1, $v1, 0x4210
    ctx->r3 = ADD32(ctx->r3, 0X4210);
    // 0x80232660: j           L_80232688
    // 0x80232664: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
        goto L_80232688;
    // 0x80232664: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
L_80232668:
    // 0x80232668: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8023266C: subu        $v1, $t1, $v1
    ctx->r3 = SUB32(ctx->r9, ctx->r3);
    // 0x80232670: j           L_80232688
    // 0x80232674: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
        goto L_80232688;
    // 0x80232674: sh          $v1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r3;
L_80232678:
    // 0x80232678: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
L_8023267C:
    // 0x8023267C: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
L_80232680:
    // 0x80232680: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80232684: sh          $a3, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r7;
L_80232688:
    // 0x80232688: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x8023268C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80232690: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232694: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232698: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x8023269C: beq         $v0, $zero, L_802326F8
    if (ctx->r2 == 0) {
        // 0x802326A0: nop
    
            goto L_802326F8;
    }
    // 0x802326A0: nop

    // 0x802326A4: j           L_80232614
    // 0x802326A8: nop

        goto L_80232614;
    // 0x802326A8: nop

L_802326AC:
    // 0x802326AC: bne         $a2, $v0, L_802326EC
    if (ctx->r6 != ctx->r2) {
        // 0x802326B0: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_802326EC;
    }
    // 0x802326B0: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x802326B4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x802326B8: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
L_802326BC:
    // 0x802326BC: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x802326C0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x802326C4: sh          $a3, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r7;
    // 0x802326C8: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x802326CC: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x802326D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802326D4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802326D8: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x802326DC: bne         $v0, $zero, L_802326BC
    if (ctx->r2 != 0) {
        // 0x802326E0: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_802326BC;
    }
    // 0x802326E0: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x802326E4: j           L_802326F8
    // 0x802326E8: nop

        goto L_802326F8;
    // 0x802326E8: nop

L_802326EC:
    // 0x802326EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802326F0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x802326F4: sh          $a3, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r7;
L_802326F8:
    // 0x802326F8: jr          $ra
    // 0x802326FC: nop

    TRACE_RETURN()
    return;
    // 0x802326FC: nop

;}
