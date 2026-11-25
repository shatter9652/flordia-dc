// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401787d0  size: 1546 bytes
// Name:    FUN_1401787d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450322f0, FUN_145031fd0, FUN_144f463f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401787d0(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auVar8 [32];
  uint uVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong unaff_RBP;
  longlong lVar15;
  float *pfVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 in_ZMM3 [64];
  undefined1 auVar39 [64];
  undefined1 auVar43 [16];
  float fVar45;
  undefined1 auVar44 [32];
  undefined1 auVar46 [16];
  float fVar53;
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  undefined1 auVar50 [64];
  undefined1 in_ZMM8 [64];
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [64];
  undefined1 auVar59 [16];
  undefined1 auVar61 [64];
  float fVar62;
  float fVar64;
  float fVar65;
  undefined1 auVar63 [16];
  float fVar66;
  undefined1 in_ZMM13 [64];
  undefined1 auVar67 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_108 [16];
  undefined1 aauStack_f8 [3] [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_78 [16];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar60 [64];
  undefined1 auVar68 [64];
  
  auStack_78 = in_ZMM13._0_16_;
  auStack_c8 = in_ZMM8._0_16_;
  if ((*param_1 != 0) && ((param_2 != '\0' || (*(char *)(*param_1 + 0x26c) == '\0')))) {
    FUN_1450322f0();
    auVar29 = in_ZMM3._0_16_;
    auVar55 = ZEXT464((uint)*(float *)(param_1 + 5));
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x2c);
    auVar59._4_4_ = uVar3;
    auVar59._0_4_ = uVar3;
    auVar59._8_4_ = uVar3;
    auVar59._12_4_ = uVar3;
    auVar60 = ZEXT1664(auVar59);
    lVar14 = *param_1;
    lVar13 = lVar14 + 0x300;
    if ((ulonglong)*(uint *)((longlong)param_1 + 0xc) != 0) {
      fVar7 = *(float *)(param_1 + 5) * _DAT_146167e84;
      pfVar16 = (float *)param_1[2];
      lVar15 = (ulonglong)*(uint *)((longlong)param_1 + 0xc) << 6;
      auVar61 = ZEXT1264(ZEXT812(0));
      do {
        fVar23 = pfVar16[10];
        auVar67._4_4_ = fVar23;
        auVar67._0_4_ = fVar23;
        auVar67._8_4_ = fVar23;
        auVar67._12_4_ = fVar23;
        auVar68 = ZEXT1664(auVar67);
        auVar24._4_4_ = _DAT_146159ec4;
        auVar24._0_4_ = _DAT_146159ec4;
        auVar24._8_4_ = _DAT_146159ec4;
        auVar24._12_4_ = _DAT_146159ec4;
        auVar29 = vmaxps_avx(auVar67,auVar61._0_16_);
        auVar29 = vminps_avx(auVar29,auVar24);
        auVar50 = ZEXT1664(auVar29);
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),
                             *(undefined1 *)
                              (*(longlong *)
                                (lVar14 + 0x310 +
                                (ulonglong)(byte)(*(char *)(pfVar16 + 0xd) + 1) * 8) + 0x1d9));
        pfVar10 = (float *)FUN_145031fd0(lVar13);
        fVar45 = *pfVar10;
        fVar54 = pfVar10[1];
        fVar56 = pfVar10[2];
        fVar57 = pfVar10[3];
        fVar23 = pfVar10[4];
        fVar40 = pfVar10[5];
        fVar41 = pfVar10[6];
        fVar42 = pfVar10[7];
        pfVar10 = (float *)FUN_145031fd0(lVar13,unaff_RBP & 0xffffffff);
        auVar29._0_4_ = fVar45 * pfVar16[4];
        auVar29._4_4_ = fVar54 * pfVar16[5];
        auVar29._8_4_ = fVar56 * pfVar16[6];
        auVar29._12_4_ = fVar57 * pfVar16[7];
        auVar35._0_4_ = fVar23 * *pfVar16;
        auVar35._4_4_ = fVar40 * pfVar16[1];
        auVar35._8_4_ = fVar41 * pfVar16[2];
        auVar35._12_4_ = fVar42 * pfVar16[3];
        auVar25._0_4_ = pfVar16[4] * *pfVar10;
        auVar25._4_4_ = pfVar16[5] * pfVar10[1];
        auVar25._8_4_ = pfVar16[6] * pfVar10[2];
        auVar25._12_4_ = pfVar16[7] * pfVar10[3];
        auVar17._0_4_ = *pfVar16 * pfVar10[4];
        auVar17._4_4_ = pfVar16[1] * pfVar10[5];
        auVar17._8_4_ = pfVar16[2] * pfVar10[6];
        auVar17._12_4_ = pfVar16[3] * pfVar10[7];
        auVar24 = auVar61._0_16_;
        auVar29 = vblendps_avx(auVar29,auVar24,8);
        auVar59 = vblendps_avx(auVar35,auVar24,8);
        auVar18 = vhaddps_avx(auVar29,auVar29);
        auVar19 = vhaddps_avx(auVar59,auVar59);
        auVar29 = vblendps_avx(auVar25,auVar24,8);
        auVar59 = vblendps_avx(auVar17,auVar24,8);
        auVar29 = vhaddps_avx(auVar29,auVar29);
        auVar59 = vhaddps_avx(auVar59,auVar59);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        auVar19 = vhaddps_avx(auVar19,auVar19);
        auVar39 = ZEXT1664(auVar19);
        auVar29 = vhaddps_avx(auVar29,auVar29);
        auVar59 = vhaddps_avx(auVar59,auVar59);
        auVar30._0_4_ = auVar19._0_4_ + auVar18._0_4_;
        auVar30._4_4_ = auVar19._4_4_ + auVar18._4_4_;
        auVar30._8_4_ = auVar19._8_4_ + auVar18._8_4_;
        auVar30._12_4_ = auVar19._12_4_ + auVar18._12_4_;
        auVar18._0_4_ = auVar29._0_4_ + auVar59._0_4_;
        auVar18._4_4_ = auVar29._4_4_ + auVar59._4_4_;
        auVar18._8_4_ = auVar29._8_4_ + auVar59._8_4_;
        auVar18._12_4_ = auVar29._12_4_ + auVar59._12_4_;
        auVar29 = vminps_avx(auVar68._0_16_,auVar24);
        auVar59 = vsubps_avx(auVar30,auVar18);
        fVar23 = pfVar16[0xb];
        auVar31._4_4_ = fVar23;
        auVar31._0_4_ = fVar23;
        auVar31._8_4_ = fVar23;
        auVar31._12_4_ = fVar23;
        fVar40 = pfVar16[0xc];
        auVar19._0_4_ =
             -((auVar50._0_4_ * fVar7 + auVar60._0_4_ * auVar29._0_4_ + auVar59._0_4_) * fVar40) +
             fVar23;
        auVar19._4_4_ =
             -((auVar50._4_4_ * fVar7 + auVar60._4_4_ * auVar29._4_4_ + auVar59._4_4_) * fVar40) +
             fVar23;
        auVar19._8_4_ =
             -((auVar50._8_4_ * fVar7 + auVar60._8_4_ * auVar29._8_4_ + auVar59._8_4_) * fVar40) +
             fVar23;
        auVar19._12_4_ =
             -((auVar50._12_4_ * fVar7 + auVar60._12_4_ * auVar29._12_4_ + auVar59._12_4_) * fVar40)
             + fVar23;
        auVar29 = vminps_avx(auVar19,auVar24);
        pfVar16[0xb] = auVar29._0_4_;
        aauStack_f8[0] = vsubps_avx(auVar29,auVar31);
        FUN_144f463f0(lVar13,pfVar16,aauStack_f8);
        auVar29 = auVar39._0_16_;
        auVar59 = auVar60._0_16_;
        pfVar16 = pfVar16 + 0x10;
        lVar15 = lVar15 + -0x40;
      } while (lVar15 != 0);
    }
    uVar5 = _DAT_145fc6f10;
    if ((ulonglong)*(uint *)((longlong)param_1 + 0x1c) != 0) {
      pfVar16 = (float *)param_1[4];
      lVar15 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x50;
      do {
        fVar7 = pfVar16[0x10];
        fVar23 = auVar55._0_4_ * pfVar16[0x11];
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),
                             *(undefined1 *)
                              (*(longlong *)
                                (lVar14 + 0x310 +
                                (ulonglong)(byte)(*(char *)(pfVar16 + 0xd) + 1) * 8) + 0x1d9));
        auVar61 = ZEXT1664(CONCAT412(fVar23,CONCAT48(fVar23,CONCAT44(fVar23,fVar23))));
        fVar23 = pfVar16[0x12] * auVar55._0_4_ + pfVar16[0x13];
        fVar40 = pfVar16[0x12] * pfVar16[10];
        auVar63._4_4_ = fVar23;
        auVar63._0_4_ = fVar23;
        auVar63._8_4_ = fVar23;
        auVar63._12_4_ = fVar23;
        auVar29 = vrcpps_avx(auVar63);
        fVar62 = auVar29._0_4_;
        fVar64 = auVar29._4_4_;
        fVar65 = auVar29._8_4_;
        fVar66 = auVar29._12_4_;
        fVar62 = -((fVar62 * fVar23 - _DAT_145fc6ed8) * fVar62) + fVar62;
        fVar64 = -((fVar64 * fVar23 - _DAT_145fc6ed8) * fVar64) + fVar64;
        fVar65 = -((fVar65 * fVar23 - _DAT_145fc6ed8) * fVar65) + fVar65;
        fVar66 = -((fVar66 * fVar23 - _DAT_145fc6ed8) * fVar66) + fVar66;
        fStack_138 = auVar59._0_4_;
        fStack_134 = auVar59._4_4_;
        fStack_130 = auVar59._8_4_;
        fStack_12c = auVar59._12_4_;
        fStack_138 = fVar62 * fStack_138;
        fStack_134 = fVar64 * fStack_134;
        fStack_130 = fVar65 * fStack_130;
        fStack_12c = fVar66 * fStack_12c;
        fVar51 = fVar40;
        fVar52 = fVar40;
        fVar53 = fVar40;
        fVar69 = _DAT_145fc6ed8;
        fVar70 = _DAT_145fc6ed8;
        fVar71 = _DAT_145fc6ed8;
        fVar72 = _DAT_145fc6ed8;
        pfVar10 = (float *)FUN_145031fd0(lVar13);
        auVar55 = ZEXT1664(auVar55._0_16_);
        fVar54 = *pfVar10;
        fVar56 = pfVar10[1];
        fVar57 = pfVar10[2];
        fVar58 = pfVar10[3];
        fVar23 = pfVar10[4];
        fVar41 = pfVar10[5];
        fVar42 = pfVar10[6];
        fVar45 = pfVar10[7];
        pfVar10 = (float *)FUN_145031fd0(lVar13,unaff_RBP & 0xffffffff);
        auVar43._0_12_ = ZEXT812(0);
        auVar43._12_4_ = 0;
        auVar32._0_4_ = fVar54 * pfVar16[4];
        auVar32._4_4_ = fVar56 * pfVar16[5];
        auVar32._8_4_ = fVar57 * pfVar16[6];
        auVar32._12_4_ = fVar58 * pfVar16[7];
        auVar36._0_4_ = fVar23 * *pfVar16;
        auVar36._4_4_ = fVar41 * pfVar16[1];
        auVar36._8_4_ = fVar42 * pfVar16[2];
        auVar36._12_4_ = fVar45 * pfVar16[3];
        auVar26._0_4_ = pfVar16[4] * *pfVar10;
        auVar26._4_4_ = pfVar16[5] * pfVar10[1];
        auVar26._8_4_ = pfVar16[6] * pfVar10[2];
        auVar26._12_4_ = pfVar16[7] * pfVar10[3];
        auVar20._0_4_ = *pfVar16 * pfVar10[4];
        auVar20._4_4_ = pfVar16[1] * pfVar10[5];
        auVar20._8_4_ = pfVar16[2] * pfVar10[6];
        auVar20._12_4_ = pfVar16[3] * pfVar10[7];
        auVar55 = ZEXT1664(auVar55._0_16_);
        auVar29 = vblendps_avx(auVar32,auVar43,8);
        auVar18 = vblendps_avx(auVar36,auVar43,8);
        auVar19 = vhaddps_avx(auVar29,auVar29);
        auVar17 = vhaddps_avx(auVar18,auVar18);
        auVar29 = vblendps_avx(auVar26,auVar43,8);
        auVar18 = vblendps_avx(auVar20,auVar43,8);
        auVar19 = vhaddps_avx(auVar19,auVar19);
        auVar17 = vhaddps_avx(auVar17,auVar17);
        auVar29 = vhaddps_avx(auVar29,auVar29);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        fVar23 = pfVar16[0xc];
        auVar37._4_4_ = fVar23;
        auVar37._0_4_ = fVar23;
        auVar37._8_4_ = fVar23;
        auVar37._12_4_ = fVar23;
        auVar29 = vhaddps_avx(auVar29,auVar29);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        auVar33._0_4_ = fVar62 * fVar40 + fVar7 + auVar19._0_4_ + auVar17._0_4_;
        auVar33._4_4_ = fVar64 * fVar51 + fVar7 + auVar19._4_4_ + auVar17._4_4_;
        auVar33._8_4_ = fVar65 * fVar52 + fVar7 + auVar19._8_4_ + auVar17._8_4_;
        auVar33._12_4_ = fVar66 * fVar53 + fVar7 + auVar19._12_4_ + auVar17._12_4_;
        auVar21._0_4_ = auVar29._0_4_ + auVar18._0_4_;
        auVar21._4_4_ = auVar29._4_4_ + auVar18._4_4_;
        auVar21._8_4_ = auVar29._8_4_ + auVar18._8_4_;
        auVar21._12_4_ = auVar29._12_4_ + auVar18._12_4_;
        fVar7 = pfVar16[0xb];
        auVar27._4_4_ = fVar7;
        auVar27._0_4_ = fVar7;
        auVar27._8_4_ = fVar7;
        auVar27._12_4_ = fVar7;
        auVar29 = vrcpps_avx(auVar37);
        auVar18 = vsubps_avx(auVar33,auVar21);
        fVar40 = auVar29._0_4_;
        fVar41 = auVar29._4_4_;
        fVar42 = auVar29._8_4_;
        fVar45 = auVar29._12_4_;
        auVar38._0_4_ = fStack_138 + -((fVar40 * fVar23 - fVar69) * fVar40) + fVar40;
        auVar38._4_4_ = fStack_134 + -((fVar41 * fVar23 - fVar70) * fVar41) + fVar41;
        auVar38._8_4_ = fStack_130 + -((fVar42 * fVar23 - fVar71) * fVar42) + fVar42;
        auVar38._12_4_ = fStack_12c + -((fVar45 * fVar23 - fVar72) * fVar45) + fVar45;
        auVar34._0_4_ = auVar61._0_4_ ^ uVar5;
        auVar34._4_4_ = auVar61._4_4_ ^ uVar5;
        auVar34._8_4_ = auVar61._8_4_ ^ uVar5;
        auVar34._12_4_ = auVar61._12_4_ ^ uVar5;
        auVar29 = vrcpps_avx(auVar38);
        fVar23 = auVar29._0_4_;
        fVar40 = auVar29._4_4_;
        fVar41 = auVar29._8_4_;
        fVar42 = auVar29._12_4_;
        fVar23 = (fVar23 * auVar38._0_4_ - fVar69) * fVar23 - fVar23;
        fVar40 = (fVar40 * auVar38._4_4_ - fVar70) * fVar40 - fVar40;
        fVar41 = (fVar41 * auVar38._8_4_ - fVar71) * fVar41 - fVar41;
        fVar42 = (fVar42 * auVar38._12_4_ - fVar72) * fVar42 - fVar42;
        auVar60 = ZEXT1664(CONCAT412(fVar42,CONCAT48(fVar41,CONCAT44(fVar40,fVar23))));
        auVar22._0_4_ = fVar23 * (fVar7 * fStack_138 + auVar18._0_4_) + fVar7;
        auVar22._4_4_ = fVar40 * (fVar7 * fStack_134 + auVar18._4_4_) + fVar7;
        auVar22._8_4_ = fVar41 * (fVar7 * fStack_130 + auVar18._8_4_) + fVar7;
        auVar22._12_4_ = fVar42 * (fVar7 * fStack_12c + auVar18._12_4_) + fVar7;
        auVar29 = vmaxps_avx(auVar22,auVar34);
        auVar29 = vminps_avx(auVar29,auVar61._0_16_);
        pfVar16[0xb] = auVar29._0_4_;
        auStack_108 = vsubps_avx(auVar29,auVar27);
        FUN_144f463f0(lVar13,pfVar16,auStack_108);
        auVar29 = auVar60._0_16_;
        pfVar16 = pfVar16 + 0x14;
        lVar15 = lVar15 + -0x50;
      } while (lVar15 != 0);
    }
    if (param_2 != '\0') {
      if ((ulonglong)*(uint *)(lVar14 + 0x414) != 0) {
        auVar28._8_8_ = _DAT_145f437c0;
        auVar28._0_8_ = _DAT_145f437c0;
        auVar44._8_8_ = _DAT_145f437c0;
        auVar44._0_8_ = _DAT_145f437c0;
        auVar44._16_8_ = _DAT_145f437c0;
        auVar44._24_8_ = _DAT_145f437c0;
        auVar29 = vpcmpeqd_avx(auVar29,auVar29);
        uVar11 = (ulonglong)*(uint *)(lVar14 + 0x414) + 0x1fffffffffffffff;
        uVar12 = uVar11 & 0x1fffffffffffffff;
        lVar13 = 0;
        auVar46._8_8_ = uVar12;
        auVar46._0_8_ = uVar12;
        auVar47._16_8_ = uVar12;
        auVar47._0_16_ = auVar46;
        auVar47._24_8_ = uVar12;
        auVar8 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
        auVar59 = vpor_avx(auVar46,auVar28);
        auVar47 = vpor_avx2(auVar47,auVar44);
        do {
          auVar48._8_8_ = lVar13;
          auVar48._0_8_ = lVar13;
          auVar49._16_8_ = lVar13;
          auVar49._0_16_ = auVar48;
          auVar49._24_8_ = lVar13;
          auVar18 = vpcmpgtq_avx(auVar48 ^ auVar28,auVar59);
          if ((~auVar18._0_4_ & 1) != 0) {
            *(undefined4 *)(*(longlong *)(lVar14 + 0x418 + lVar13 * 8) + 0x388) = 0;
          }
          auVar49 = vpor_avx2(auVar49,auVar8);
          auVar18 = vpcmpgtq_avx(auVar49._0_16_ ^ auVar28,auVar59);
          auVar18 = vpshufd_avx(auVar18,0xaa);
          if (((auVar18[4] ^ auVar29[4]) & 1) != 0) {
            *(undefined4 *)(*(longlong *)(lVar14 + 0x420 + lVar13 * 8) + 0x388) = 0;
          }
          auVar49 = vpcmpgtq_avx2(auVar49 ^ auVar44,auVar47);
          if (((auVar49[0x10] ^ auVar29[8]) & 1) != 0) {
            *(undefined4 *)(*(longlong *)(lVar14 + 0x428 + lVar13 * 8) + 0x388) = 0;
          }
          auVar18 = vpshufd_avx(auVar49._16_16_,0xaa);
          if (((auVar18[0xc] ^ auVar29[0xc]) & 1) != 0) {
            *(undefined4 *)(*(longlong *)(lVar14 + 0x430 + lVar13 * 8) + 0x388) = 0;
          }
          lVar13 = lVar13 + 4;
        } while ((uVar12 + 4) - (ulonglong)((uint)uVar11 & 3) != lVar13);
      }
      uVar9 = _DAT_145fc6f4c;
      uVar5 = *(uint *)((longlong)param_1 + 0xc);
      if ((ulonglong)uVar5 != 0) {
        lVar13 = param_1[2];
        lVar15 = 0;
        do {
          if (*(char *)(lVar13 + 0x35 + lVar15) == '\0') {
            uVar4 = *(uint *)(lVar13 + 0x2c + lVar15);
          }
          else {
            uVar4 = *(uint *)(lVar13 + 0x2c + lVar15);
            lVar6 = *(longlong *)(lVar14 + 0x418 + (ulonglong)*(byte *)(lVar13 + 0x34 + lVar15) * 8)
            ;
            *(float *)(lVar6 + 0x388) = (float)(uVar4 & uVar9) + *(float *)(lVar6 + 0x388);
          }
          puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar15);
          lVar15 = lVar15 + 0x40;
          *(uint *)*puVar1 = uVar4;
        } while ((ulonglong)uVar5 << 6 != lVar15);
      }
      uVar5 = *(uint *)((longlong)param_1 + 0x1c);
      if ((ulonglong)uVar5 != 0) {
        lVar13 = param_1[4];
        lVar14 = 0;
        do {
          puVar2 = (undefined4 *)(lVar13 + 0x2c + lVar14);
          puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar14);
          lVar14 = lVar14 + 0x50;
          *(undefined4 *)*puVar1 = *puVar2;
        } while ((ulonglong)uVar5 * 0x50 != lVar14);
      }
    }
  }
  return;
}

