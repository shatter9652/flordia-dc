// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401412a0  size: 1047 bytes
// Name:    FUN_1401412a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401412a0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  char cVar25;
  float *pfVar26;
  uint uVar27;
  ulonglong uVar28;
  int iVar29;
  longlong *plVar30;
  bool bVar31;
  ulonglong uVar32;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar33;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [64];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  float fVar53;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  undefined1 in_ZMM5 [64];
  float fVar57;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar58 [32];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar59 [64];
  undefined8 unaff_XMM9_Qa;
  undefined1 auVar61 [12];
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar60 [64];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar62 [64];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  uint uVar63;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined1 auVar64 [64];
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined1 auVar65 [64];
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined *apuStack_190 [5];
  undefined4 auStack_168 [2];
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  float *pfStack_130;
  longlong *plStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  int aiStack_110 [2];
  undefined1 auStack_108 [16];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auVar51 [64];
  
  uVar3 = _DAT_14a943774;
  uVar27 = *(uint *)(param_1 + 0x14c);
  uStack_c8 = unaff_XMM6_Qa;
  uStack_c0 = unaff_XMM6_Qb;
  uStack_b8 = unaff_XMM7_Qa;
  uStack_b0 = unaff_XMM7_Qb;
  uStack_a8 = unaff_XMM8_Qa;
  uStack_a0 = unaff_XMM8_Qb;
  uStack_98 = unaff_XMM9_Qa;
  uStack_90 = unaff_XMM9_Qb;
  uStack_88 = unaff_XMM10_Qa;
  uStack_80 = unaff_XMM10_Qb;
  uStack_78 = unaff_XMM11_Qa;
  uStack_70 = unaff_XMM11_Qb;
  uStack_68 = unaff_XMM12_Qa;
  uStack_60 = unaff_XMM12_Qb;
  uStack_58 = unaff_XMM13_Qa;
  uStack_50 = unaff_XMM13_Qb;
  uStack_48 = unaff_XMM14_Qa;
  uStack_40 = unaff_XMM14_Qb;
  if (uVar27 == *(uint *)(param_1 + 0x148)) {
    uVar19 = 1;
    if (1 < uVar27) {
      uVar19 = uVar27 >> 1;
    }
    uStack_f0 = 0x140141330;
    lVar21 = func_0x000144d9c140(4,(ulonglong)(uVar19 + uVar27) * 4);
    if ((ulonglong)*(uint *)(param_1 + 0x14c) != 0) {
      uStack_f0 = 0x140141352;
      func_0x000145f40560(lVar21,*(undefined8 *)(param_1 + 0x150),
                          (ulonglong)*(uint *)(param_1 + 0x14c) << 2);
    }
    if (*(longlong *)(param_1 + 0x150) != 0) {
      uStack_f0 = 0x140141363;
      func_0x000144d9c130();
    }
    *(longlong *)(param_1 + 0x150) = lVar21;
    *(uint *)(param_1 + 0x148) = uVar19 + uVar27;
    uVar27 = *(uint *)(param_1 + 0x14c);
  }
  else {
    lVar21 = *(longlong *)(param_1 + 0x150);
  }
  auVar50 = in_ZMM5._0_32_;
  *(uint *)(param_1 + 0x14c) = uVar27 + 1;
  *(undefined4 *)(lVar21 + (ulonglong)uVar27 * 4) = uVar3;
  uVar32 = (ulonglong)*(uint *)(param_1 + 0x14c);
  if (*(uint *)(param_1 + 0x34) < *(uint *)(param_1 + 0x14c)) {
    uStack_f0 = 0x1401413b3;
    func_0x000145f40570(*(longlong *)(param_1 + 0x150),*(longlong *)(param_1 + 0x150) + 4,
                        uVar32 * 4 + -4);
    auVar50 = in_ZMM5._0_32_;
    uVar27 = *(int *)(param_1 + 0x14c) - 1;
    uVar32 = (ulonglong)uVar27;
    *(uint *)(param_1 + 0x14c) = uVar27;
  }
  if ((int)uVar32 == 0) {
    auVar34._0_12_ = ZEXT812(0);
    auVar34._12_4_ = 0;
  }
  else {
    auVar49._8_8_ = _DAT_145f437c0;
    auVar49._0_8_ = _DAT_145f437c0;
    auVar49._16_8_ = _DAT_145f437c0;
    auVar49._24_8_ = _DAT_145f437c0;
    auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    auVar45 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
    lVar21 = uVar32 - 1;
    auVar50 = vpcmpeqd_avx2(auVar50,auVar50);
    uVar28 = 0;
    auVar52._8_8_ = lVar21;
    auVar52._0_8_ = lVar21;
    auVar52._16_8_ = lVar21;
    auVar52._24_8_ = lVar21;
    auVar42 = ZEXT1664((undefined1  [16])0x0);
    do {
      auVar58._8_8_ = uVar28;
      auVar58._0_8_ = uVar28;
      auVar58._16_8_ = uVar28;
      auVar58._24_8_ = uVar28;
      auVar47 = vpor_avx2(auVar58,auVar5);
      auVar58 = vpor_avx2(auVar58,auVar45);
      auVar58 = vpcmpgtq_avx2(auVar58 ^ auVar49,auVar52 ^ auVar49);
      auVar47 = vpcmpgtq_avx2(auVar47 ^ auVar49,auVar52 ^ auVar49);
      auVar47 = vpackssdw_avx2(auVar47,auVar58);
      auVar34 = vpackssdw_avx(SUB3216(auVar47 ^ auVar50,0),SUB3216(auVar47 ^ auVar50,0x10));
      auVar34 = vpshufd_avx(auVar34,0xd8);
      auVar58 = vpmovzxwd_avx2(auVar34);
      auVar58 = vpslld_avx2(auVar58,0x1f);
      auVar58 = vmaskmovps_avx(auVar58,*(undefined1 (*) [32])
                                        (*(longlong *)(param_1 + 0x150) + uVar28 * 4));
      auVar40 = auVar42._0_32_;
      uVar28 = uVar28 + 8;
      auVar41._0_4_ = auVar58._0_4_ + auVar42._0_4_;
      auVar41._4_4_ = auVar58._4_4_ + auVar42._4_4_;
      auVar41._8_4_ = auVar58._8_4_ + auVar42._8_4_;
      auVar41._12_4_ = auVar58._12_4_ + auVar42._12_4_;
      auVar41._16_4_ = auVar58._16_4_ + auVar42._16_4_;
      auVar41._20_4_ = auVar58._20_4_ + auVar42._20_4_;
      auVar41._24_4_ = auVar58._24_4_ + auVar42._24_4_;
      auVar41._28_4_ = auVar58._28_4_ + auVar42._28_4_;
      auVar42 = ZEXT3264(auVar41);
    } while ((uVar32 + 7 & 0xfffffffffffffff8) != uVar28);
    auVar50 = vpermq_avx2(auVar47,0xd8);
    auVar50 = vblendvps_avx(auVar41,auVar40,auVar50);
    auVar34 = vhaddps_avx(auVar50._16_16_,auVar50._0_16_);
    auVar34 = vhaddps_avx(auVar34,auVar34);
    auVar34 = vhaddps_avx(auVar34,auVar34);
  }
  auVar59 = ZEXT464(*(uint *)(param_1 + 0x158));
  auVar60 = ZEXT464(_DAT_145fc6ed8);
  iVar22 = 0;
  lVar21 = 0x25;
  auVar42 = ZEXT1664(CONCAT124(auVar34._4_12_,auVar34._0_4_ / (float)uVar32));
  fVar53 = _DAT_146159f9c;
  uVar27 = _DAT_145fc6f10;
  uVar19 = _DAT_145fc6f10;
  uVar20 = _DAT_145fc6f10;
  uVar63 = _DAT_145fc6f10;
  fVar55 = _DAT_145fc6f00;
  fVar56 = _DAT_145fc6edc;
  do {
    fVar43 = *(float *)(param_1 + lVar21 * 4);
    auVar35._0_4_ = auVar60._0_4_ / (fVar43 * auVar42._0_4_);
    auVar35._4_12_ = auVar60._4_12_;
    auVar34 = vroundss_avx(auVar35,auVar35,9);
    iVar29 = (int)auVar34._0_4_;
    if (0xfe < iVar29) {
      iVar29 = 0xff;
    }
    if (iVar29 < 2) {
      iVar29 = 1;
    }
    auVar42 = ZEXT1664(auVar42._0_16_);
    auVar51 = ZEXT1664(CONCAT124(auVar60._4_12_,auVar60._0_4_ / fVar43));
    auVar59 = ZEXT1664(auVar59._0_16_);
    auVar60 = ZEXT1664(auVar60._0_16_);
    uStack_f0._0_4_ = 0x40141520;
    uStack_f0._4_4_ = 1;
    fVar33 = (float)func_0x000145f40820();
    uVar16 = uStack_60;
    uVar15 = uStack_68;
    uVar14 = uStack_70;
    uVar13 = uStack_78;
    uVar12 = uStack_80;
    uVar11 = uStack_88;
    uVar10 = uStack_90;
    uVar9 = uStack_98;
    uVar8 = uStack_a0;
    uVar7 = uStack_a8;
    uStack_d0 = uStack_b0;
    uStack_d8 = uStack_b8;
    uStack_e0 = uStack_c0;
    uStack_e8 = uStack_c8;
    fVar57 = auVar42._0_4_;
    if (fVar57 - fVar33 < fVar33) {
      fVar33 = fVar53 + (fVar57 - fVar33);
      auVar44._0_4_ = uVar27 ^ (uint)fVar33;
      auVar44._4_4_ = uVar19;
      auVar44._8_4_ = uVar20;
      auVar44._12_4_ = uVar63;
      auVar34 = vmaxss_avx(auVar44,ZEXT416((uint)fVar33));
      iVar29 = iVar29 + (uint)(fVar55 < auVar34._0_4_);
    }
    auVar36._0_4_ = auVar51._0_4_ / (float)iVar29;
    auVar36._4_12_ = auVar51._4_12_;
    auVar35 = vcmpss_avx(auVar42._0_16_,auVar36,1);
    auVar34 = vblendvps_avx(ZEXT416((uint)(fVar57 - auVar36._0_4_)),
                            ZEXT416((uint)(auVar36._0_4_ - fVar57)),auVar35);
    fVar33 = auVar36._0_4_ * auVar36._0_4_;
    if (auVar34._0_4_ < fVar33) {
      auVar46._0_4_ = uVar27 ^ (uint)fVar33;
      auVar46._4_4_ = uVar19;
      auVar46._8_4_ = uVar20;
      auVar46._12_4_ = uVar63;
      auVar35 = vcmpss_avx(auVar36,auVar59._0_16_,1);
      auVar34 = vblendvps_avx(auVar46,ZEXT416((uint)fVar33),auVar35);
      fVar33 = auVar34._0_4_ + auVar36._0_4_;
      auVar42 = ZEXT464((uint)fVar33);
      *(float *)(param_1 + 0x158) = fVar33;
    }
    auVar51 = ZEXT1664(auVar35);
    auVar50 = ZEXT1632(auVar35);
    fVar33 = auVar60._0_4_;
    auVar61 = auVar60._4_12_;
    if (*(char *)(param_1 + 0xf8) != '\0') {
      auVar42 = ZEXT1664(CONCAT124(auVar61,fVar33 / *(float *)(param_1 + 0x6c)));
    }
    fVar57 = auVar42._0_4_;
    auVar37._0_4_ = fVar33 / (fVar43 * fVar57);
    auVar37._4_12_ = auVar61;
    auVar34 = vroundss_avx(auVar37,auVar37,9);
    uVar18 = (uint)auVar34._0_4_;
    if (0xfe < (int)uVar18) {
      uVar18 = 0xff;
    }
    if ((int)uVar18 < 2) {
      uVar18 = 1;
    }
    if (*(char *)(param_1 + 0xf9) == '\x01') {
      auVar38._0_4_ = fVar33 / (fVar43 * *(float *)(param_1 + 0x2c));
      auVar38._4_12_ = auVar61;
      auVar34 = vroundss_avx(auVar38,auVar38,9);
      uVar18 = (uint)auVar34._0_4_;
      if (0xfe < (int)uVar18) {
        uVar18 = 0xff;
      }
      if ((int)uVar18 < 2) {
        uVar18 = 1;
      }
      fVar43 = fVar33 / (fVar57 * (float)(int)uVar18);
      auVar34 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 100)),ZEXT416((uint)(fVar56 * fVar43)));
      if (fVar43 < auVar34._0_4_) {
        auVar39._0_4_ = fVar33 / (auVar34._0_4_ * fVar57);
        auVar39._4_12_ = auVar61;
        auVar34 = vroundss_avx(auVar39,auVar39,9);
        uVar18 = (uint)auVar34._0_4_;
        if (0xfe < (int)uVar18) {
          uVar18 = 0xff;
        }
        if ((int)uVar18 < 2) {
          uVar18 = 1;
        }
      }
    }
    lVar23 = (longlong)iVar22;
    if ((iVar22 == 0) || (uVar18 != *(byte *)(param_1 + 0x13f + lVar23))) {
      *(char *)(param_1 + 0x140 + lVar23) = (char)uVar18;
      *(undefined4 *)(param_1 + 0x110 + lVar23 * 4) = *(undefined4 *)(param_1 + 0x6c + lVar21 * 4);
      iVar22 = iVar22 + 1;
    }
    lVar21 = lVar21 + 1;
  } while (lVar21 != 0x29);
  *(float *)(param_1 + 0x158) = fVar57;
  *(int *)(param_1 + 0xf4) = iVar22;
  uStack_68 = uStack_48;
  uStack_60 = uStack_40;
  uStack_78 = uStack_58;
  uStack_70 = uStack_50;
  uStack_88 = uVar15;
  uStack_80 = uVar16;
  uStack_98 = uVar13;
  uStack_90 = uVar14;
  uStack_a8 = uVar11;
  uStack_a0 = uVar12;
  uStack_b8 = uVar9;
  uStack_b0 = uVar10;
  uStack_c8 = uVar7;
  uStack_c0 = uVar8;
  uVar27 = *(uint *)(param_2 + 4);
  uVar28 = (ulonglong)uVar27;
  uStack_118 = (ulonglong)*(uint *)(param_1 + 0xf4);
  uVar32 = uStack_118;
  if ((uVar28 != 0) && (1 < (int)*(uint *)(param_1 + 0xf4))) {
    aiStack_110[1] = *(int *)(param_1 + 0xbc);
    fVar53 = *(float *)(param_1 + 0xc0);
    *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe8);
    fVar56 = *(float *)(param_1 + 0xe8) * *(float *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x130);
    fVar55 = *(float *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x134) = uVar3;
    *(undefined4 *)(param_1 + 0x138) = uVar3;
    *(undefined4 *)(param_1 + 0x13c) = uVar3;
    auVar42 = ZEXT464((uint)(fVar56 * *(float *)(param_1 + 0xc)));
    auStack_158 = ZEXT816(0);
    uStack_148 = 0;
    uStack_140 = 0;
    apuStack_190[2] = &UNK_1454a6893;
    lStack_138 = param_2;
    FUN_145468510(*(longlong *)(param_2 + 8),*(longlong *)(param_2 + 8) + uVar28 * 0x18,uVar28);
    uStack_160 = &UNK_1454a68ae;
    lVar21 = FUN_145647140();
    lVar21 = -lVar21;
    plVar30 = *(longlong **)(param_2 + 8);
    uVar3 = *(undefined4 *)(*plVar30 + 0x9c);
    *(undefined **)((longlong)apuStack_190 + lVar21 + 0x10) = &UNK_1454a68cb;
    lVar23 = FUN_144d9fa40(uVar3);
    if (lVar23 != 0) {
      *(int *)(auStack_158 + lVar21) = (int)plVar30[1];
    }
    if (uVar27 != 1) {
      pfVar26 = (float *)(plVar30 + 4);
      uVar32 = 1;
      do {
        uVar3 = *(undefined4 *)(*(longlong *)(pfVar26 + -2) + 0x9c);
        *(undefined **)((longlong)apuStack_190 + lVar21 + 0x10) = &UNK_1454a6913;
        lVar23 = FUN_144d9fa40(uVar3);
        if (lVar23 != 0) {
          *(float *)(auStack_158 + uVar32 * 4 + lVar21) =
               *(float *)(auStack_158 + uVar32 * 4 + lVar21 + -4) + *pfVar26;
        }
        uVar32 = uVar32 + 1;
        pfVar26 = pfVar26 + 6;
      } while (uVar28 != uVar32);
    }
    auVar50 = auVar51._0_32_;
    auStack_108._0_12_ = ZEXT812(0);
    auStack_108._12_4_ = 0;
    uVar32 = uStack_118;
    if (0 < aiStack_110[1]) {
      auVar62 = ZEXT464(_DAT_145fc6ed8);
      auVar66 = ZEXT464(_DAT_146159bd4);
      auVar60 = ZEXT464((uint)(fVar56 * fVar55));
      uVar28 = (ulonglong)((int)uStack_118 - 1);
      cVar25 = '\0';
      auVar65 = ZEXT1664(auVar42._0_16_);
      iVar22 = 0;
      bVar31 = false;
      uStack_f0._4_4_ = 0;
      pfStack_130 = (float *)(param_1 + 0x130);
      uStack_120 = uVar28;
      auVar67 = ZEXT464((uint)(fVar56 * fVar55));
      auVar59 = ZEXT1664(ZEXT416(_DAT_145fc6ed8));
      auVar64 = ZEXT1664(ZEXT416(_DAT_145fc6ed8));
      fVar55 = _DAT_145fc6edc;
      do {
        pfVar26 = pfStack_130;
        auVar34 = auVar59._0_16_;
        if (iVar22 == 0) {
          cVar17 = '\0';
          iVar29 = uStack_f0._4_4_;
code_r0x0001454a6a9d:
          uVar24 = 1;
          do {
            uVar19 = *(uint *)(auStack_108 + uVar24 * 4);
            uVar20 = uVar19;
            if ((int)uVar19 < (int)uVar27) {
              fVar56 = *(float *)(param_1 + 0x130 + uVar24 * 4) *
                       *(float *)(param_1 + 0x110 + uVar24 * 4);
              do {
                uVar20 = uVar19;
                if (fVar56 * fVar56 <= *(float *)(plVar30 + (ulonglong)uVar19 * 3 + 2)) break;
                uVar19 = uVar19 + 1;
                uVar20 = uVar27;
              } while (uVar27 != uVar19);
            }
            uVar1 = uVar24 + 1;
            *(uint *)(auStack_108 + uVar24 * 4) = uVar20;
            if (uVar24 < uVar28) {
              if ((int)uVar20 < (int)*(uint *)(auStack_108 + uVar1 * 4)) {
                uVar20 = *(uint *)(auStack_108 + uVar1 * 4);
              }
              *(uint *)(auStack_108 + uVar1 * 4) = uVar20;
            }
            uVar24 = uVar1;
            uStack_f0._4_4_ = iVar29;
          } while (uVar1 != uVar32);
        }
        else {
          auVar51 = ZEXT464(*(uint *)(param_1 + 0xec));
          *(undefined4 *)((longlong)auStack_168 + lVar21) = *(undefined4 *)(param_1 + 0xf0);
          *(float **)(auStack_158 + lVar21 + -8) = pfVar26;
          *(undefined **)((longlong)apuStack_190 + lVar21) = &UNK_1454a69de;
          cVar17 = FUN_140c653d0(auVar59._0_8_);
          auVar34 = auVar59._0_16_;
          plVar30 = *(longlong **)(lStack_138 + 8);
          uVar28 = uStack_120;
          iVar29 = uStack_f0._4_4_;
          if (iVar22 != 2) goto code_r0x0001454a6a9d;
          plStack_128 = plVar30;
          uVar24 = uVar32;
          do {
            uVar32 = (ulonglong)*(uint *)(auStack_108 + uVar24 * 4 + -4);
            fVar56 = *(float *)(param_1 + 300 + uVar24 * 4) *
                     *(float *)(param_1 + 0x10c + uVar24 * 4);
            pfVar26 = (float *)(plVar30 + uVar32 * 3 + -1);
            do {
              iVar22 = (int)uVar32;
              if ((iVar22 < 2) || ((int)uVar27 < (int)*(uint *)(auStack_108 + uVar24 * 4 + -4)))
              break;
              fVar43 = *pfVar26;
              pfVar26 = pfVar26 + -6;
              uVar32 = (ulonglong)(iVar22 - 1);
            } while (fVar56 * fVar56 < fVar43);
            *(int *)(auStack_108 + (uVar24 - 1) * 4) = iVar22;
            uVar32 = uStack_118;
            plVar30 = plStack_128;
            if (uVar24 == 2) break;
            if (aiStack_110[uVar24] < iVar22) {
              iVar22 = aiStack_110[uVar24];
            }
            aiStack_110[uVar24] = iVar22;
            bVar4 = 2 < (longlong)uVar24;
            uVar24 = uVar24 - 1;
          } while (bVar4);
        }
        auVar50 = auVar51._0_32_;
        fVar56 = 0.0;
        uVar24 = 0;
        do {
          uVar19 = *(uint *)(auStack_108 + uVar24 * 4);
          uVar20 = uVar27;
          if (uVar24 < uVar28) {
            uVar20 = *(uint *)(auStack_108 + uVar24 * 4 + 4);
          }
          if ((int)uVar19 < (int)uVar20) {
            fVar43 = *(float *)(auStack_158 + (longlong)(int)uVar20 * 4 + lVar21 + -4);
            if (0 < (int)uVar19) {
              fVar43 = fVar43 - *(float *)(auStack_158 + (ulonglong)uVar19 * 4 + lVar21 + -4);
            }
          }
          else {
            fVar43 = 0.0;
          }
          pbVar2 = (byte *)(param_1 + 0x140 + uVar24);
          uVar24 = uVar24 + 1;
          fVar56 = fVar43 / (float)*pbVar2 + fVar56;
        } while (uVar32 != uVar24);
        if (cVar25 == '\0') {
          fVar43 = auVar42._0_4_ - *(float *)(param_1 + 0x18);
          auVar65 = ZEXT464((uint)fVar43);
          fVar33 = auVar62._0_4_;
          if (fVar56 < fVar43) {
            if (*(float *)(param_1 + 0x130) < fVar33) {
              uVar19 = *(uint *)(param_1 + 0xf0);
              auVar34 = ZEXT416(uVar19);
            }
            else {
              uVar19 = *(uint *)(param_1 + 0xec);
              auVar34 = auVar62._0_16_;
            }
            auVar66 = ZEXT464(uVar19);
            auVar67 = ZEXT1664(auVar42._0_16_);
            cVar25 = (*(float *)(param_1 + 0x130) < fVar33) + '\x01';
          }
          else {
            if (fVar56 <= auVar60._0_4_) break;
            if (fVar33 < *pfStack_130) {
              fVar43 = *pfStack_130 + _DAT_145fc6f48;
              auVar48._0_4_ = (uint)fVar43 ^ _DAT_145fc6f10;
              auVar48._4_4_ = _DAT_145fc6f10;
              auVar48._8_4_ = _DAT_145fc6f10;
              auVar48._12_4_ = _DAT_145fc6f10;
              auVar51 = ZEXT1664(auVar48);
              auVar35 = vmaxss_avx(auVar48,ZEXT416((uint)fVar43));
              if (auVar35._0_4_ <= _DAT_145fc6f00) goto code_r0x0001454a6bfd;
              uVar19 = *(uint *)(param_1 + 0xec);
              cVar25 = '\x01';
              auVar34 = ZEXT416(uVar19);
            }
            else {
code_r0x0001454a6bfd:
              uVar19 = *(uint *)(param_1 + 0xf0);
              cVar25 = '\x02';
            }
            auVar66 = ZEXT464(uVar19);
            auVar65 = ZEXT464((uint)(auVar60._0_4_ - *(float *)(param_1 + 0x18)));
            auVar67 = ZEXT1664(auVar60._0_16_);
          }
        }
        auVar50 = auVar51._0_32_;
        fVar43 = auVar65._0_4_;
        if ((fVar43 <= fVar56) && (fVar56 <= auVar67._0_4_)) break;
        if (cVar25 == '\x01') {
          iVar22 = 1;
          if (fVar43 <= fVar56) {
            iVar22 = 2;
            goto code_r0x0001454a6c1d;
          }
code_r0x0001454a6b7f:
          auStack_158 = auStack_108;
          if (bVar31) {
            auVar64 = ZEXT1664(auVar34);
            auVar34 = auVar66._0_16_;
            goto code_r0x0001454a6c27;
          }
          if (cVar17 != '\0') break;
          auVar64 = ZEXT1664(auVar34);
          fVar56 = auVar34._0_4_ * fVar53;
          bVar31 = false;
        }
        else {
          iVar22 = 2;
          if (fVar43 <= fVar56) goto code_r0x0001454a6b7f;
          iVar22 = 1;
code_r0x0001454a6c1d:
          uStack_148 = auStack_108._0_8_;
          uStack_140 = auStack_108._8_8_;
code_r0x0001454a6c27:
          auVar6._8_8_ = uStack_140;
          auVar6._0_8_ = uStack_148;
          if (auStack_158 == auVar6) break;
          auVar66 = ZEXT1664(auVar34);
          bVar31 = true;
          fVar56 = (auVar34._0_4_ - auVar64._0_4_) * fVar55 + auVar64._0_4_;
        }
        auVar59 = ZEXT464((uint)fVar56);
        uStack_f0._4_4_ = uStack_f0._4_4_ + 1;
      } while (uStack_f0._4_4_ != aiStack_110[1]);
    }
  }
  if (0 < (int)uVar32) {
    lVar21 = uVar32 - 1;
    auVar45._8_8_ = _DAT_145f437c0;
    auVar45._0_8_ = _DAT_145f437c0;
    auVar45._16_8_ = _DAT_145f437c0;
    auVar45._24_8_ = _DAT_145f437c0;
    auVar50 = vpcmpeqd_avx2(auVar50,auVar50);
    uVar28 = 0;
    auVar47._8_8_ = lVar21;
    auVar47._0_8_ = lVar21;
    auVar47._16_8_ = lVar21;
    auVar47._24_8_ = lVar21;
    auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    do {
      auVar40._8_8_ = uVar28;
      auVar40._0_8_ = uVar28;
      auVar40._16_8_ = uVar28;
      auVar40._24_8_ = uVar28;
      auVar49 = vpor_avx2(auVar40,auVar5);
      auVar49 = vpcmpgtq_avx2(auVar49 ^ auVar45,auVar47 ^ auVar45);
      auVar34 = vpackssdw_avx(SUB3216(auVar49 ^ auVar50,0),SUB3216(auVar49 ^ auVar50,0x10));
      auVar35 = vmaskmovps_avx(auVar34,*(undefined1 (*) [16])(param_1 + 0x110 + uVar28 * 4));
      auVar44 = vmaskmovps_avx(auVar34,*(undefined1 (*) [16])(param_1 + 0x130 + uVar28 * 4));
      fVar53 = auVar44._0_4_ * auVar35._0_4_;
      fVar55 = auVar44._4_4_ * auVar35._4_4_;
      fVar56 = auVar44._8_4_ * auVar35._8_4_;
      fVar43 = auVar44._12_4_ * auVar35._12_4_;
      auVar54._0_4_ = fVar53 * fVar53;
      auVar54._4_4_ = fVar55 * fVar55;
      auVar54._8_4_ = fVar56 * fVar56;
      auVar54._12_4_ = fVar43 * fVar43;
      auVar34 = vmaskmovps_avx(auVar34,auVar54);
      *(undefined1 (*) [16])(param_1 + 0x120 + uVar28 * 4) = auVar34;
      uVar28 = uVar28 + 4;
    } while (((int)uVar32 + 3U & 0xfffffffc) != uVar28);
  }
  return;
}

