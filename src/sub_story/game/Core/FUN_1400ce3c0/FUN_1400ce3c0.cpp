// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ce3c0  size: 1115 bytes
// Name:    FUN_1400ce3c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e58e0, FUN_1400cefc0, FUN_1400cb830, FUN_1400ce820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ce3c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint param_5
                  )

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  short sVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  short sVar21;
  undefined1 auVar19 [16];
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar32 [64];
  uint auStack_138 [6];
  undefined4 uStack_120;
  undefined1 auStack_108 [16];
  undefined1 auStack_e8 [16];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  
  lVar9 = param_2[4];
  if ((lVar9 == 0) ||
     ((((*(uint *)(lVar9 + 0x10) & 0x20) == 0 || (*(longlong *)(lVar9 + 0x898) == 0)) &&
      (((*(uint *)(lVar9 + 0x10) >> 0xb & 1) == 0 || (*(longlong *)(lVar9 + 0x8e8) == 0)))))) {
    bVar12 = true;
    if ((*param_2 != 0) && (bVar5 = *(byte *)((longlong)param_2 + 0xe1), (bVar5 & 2) != 0)) {
      if ((bVar5 & 8) != 0) goto LAB_1400ce755;
      bVar12 = (bVar5 & 0x10) == 0;
    }
  }
  else {
LAB_1400ce755:
    bVar12 = false;
  }
  func_0x000144f65360(auStack_138);
  uVar10 = 0;
  if (*(uint *)(param_4 + 0x170) != 2) {
    uVar10 = (ulonglong)*(uint *)(param_4 + 0x170);
  }
  plVar8 = (longlong *)func_0x000144f63b60(param_1 + 0x2a0,param_5,0);
  plVar2 = *(longlong **)(param_3 + 8 + uVar10 * 0x10);
  iVar1 = *(int *)(param_3 + 0x10 + uVar10 * 0x10);
  iVar6 = func_0x000144e05fa0(plVar2[1]);
  if (iVar1 == iVar6) {
    fVar17 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
  }
  else {
    uVar7 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar1);
    (**(code **)(*plVar2 + 0x108))(plVar2,uVar7,auStack_e8);
    fVar17 = fStack_d8;
    fVar22 = fStack_d4;
    fVar23 = fStack_d0;
    fVar24 = fStack_cc;
  }
  (**(code **)(*plVar2 + 0x88))(plVar2,auStack_e8);
  auVar19._4_4_ = fStack_d4;
  auVar19._0_4_ = fStack_d8;
  auVar19._8_4_ = fStack_d0;
  auVar19._12_4_ = fStack_cc;
  auVar18 = vshufps_avx(auVar19,auStack_c8,0x33);
  auVar18 = vshufps_avx(auVar19,auVar18,0x2f);
  auVar32 = ZEXT1664(CONCAT412((auVar18._12_4_ + _DAT_145fc6ed8) * fVar24,
                               CONCAT48((auVar18._8_4_ + _DAT_145fc6ed8) * fVar23,
                                        CONCAT44((auVar18._4_4_ + _DAT_145fc6ed8) * fVar22,
                                                 (auVar18._0_4_ + _DAT_145fc6ed8) * fVar17))));
  fVar17 = _DAT_145fc6ed8;
  fVar22 = _DAT_145fc6ed8;
  fVar23 = _DAT_145fc6ed8;
  fVar24 = _DAT_145fc6ed8;
  (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_a8);
  fVar27 = auVar32._0_4_;
  auVar19 = auVar32._0_16_;
  auVar18 = vshufps_avx(auVar19,auVar19,0x55);
  auVar19 = vshufps_avx(auVar19,auVar19,0xaa);
  auVar13._0_4_ =
       auVar19._0_4_ * fStack_88 + auVar18._0_4_ * fStack_98 + fVar27 * fStack_a8 + auStack_78._0_4_
  ;
  auVar13._4_4_ =
       auVar19._4_4_ * fStack_84 + auVar18._4_4_ * fStack_94 + fVar27 * fStack_a4 + auStack_78._4_4_
  ;
  auVar13._8_4_ =
       auVar19._8_4_ * fStack_80 + auVar18._8_4_ * fStack_90 + fVar27 * fStack_a0 + auStack_78._8_4_
  ;
  auVar13._12_4_ =
       auVar19._12_4_ * fStack_7c +
       auVar18._12_4_ * fStack_8c + fVar27 * fStack_9c + auStack_78._12_4_;
  auVar25._4_4_ = _DAT_14615a290;
  auVar25._0_4_ = _DAT_14615a290;
  auVar25._8_4_ = _DAT_14615a290;
  auVar25._12_4_ = _DAT_14615a290;
  auVar19 = vrcpps_avx(auVar25);
  auVar18 = vblendps_avx(auVar13,auStack_78,8);
  fVar27 = auVar19._0_4_;
  fVar29 = auVar19._4_4_;
  fVar30 = auVar19._8_4_;
  fVar31 = auVar19._12_4_;
  auVar28._0_4_ = ((-(fVar27 * _DAT_14615a290) + fVar17) * fVar27 + fVar27) * auVar18._0_4_;
  auVar28._4_4_ = ((-(fVar29 * _DAT_14615a290) + fVar22) * fVar29 + fVar29) * auVar18._4_4_;
  auVar28._8_4_ = ((-(fVar30 * _DAT_14615a290) + fVar23) * fVar30 + fVar30) * auVar18._8_4_;
  auVar28._12_4_ = ((-(fVar31 * _DAT_14615a290) + fVar24) * fVar31 + fVar31) * auVar18._12_4_;
  auVar19 = vroundps_avx(auVar28,3);
  auVar26._0_4_ = -(auVar19._0_4_ * _DAT_14615a290) + auVar18._0_4_;
  auVar26._4_4_ = -(auVar19._4_4_ * _DAT_14615a290) + auVar18._4_4_;
  auVar26._8_4_ = -(auVar19._8_4_ * _DAT_14615a290) + auVar18._8_4_;
  auVar26._12_4_ = -(auVar19._12_4_ * _DAT_14615a290) + auVar18._12_4_;
  auVar18._0_4_ = (int)auVar19._0_4_;
  auVar18._4_4_ = (int)auVar19._4_4_;
  auVar18._8_4_ = (int)auVar19._8_4_;
  auVar18._12_4_ = (int)auVar19._12_4_;
  auVar19 = vblendps_avx(auVar13,auVar26,3);
  auVar18 = vpackssdw_avx(auVar18,auVar18);
  sVar16 = auVar18._0_2_;
  auVar3._0_2_ = sVar16 + auStack_78._0_2_;
  sVar21 = auVar18._2_2_;
  auVar3._2_2_ = sVar21 + auStack_78._2_2_;
  auVar3._4_2_ = sVar16 + auStack_78._4_2_;
  auVar3._6_2_ = sVar21 + auStack_78._6_2_;
  auVar3._8_2_ = sVar16 + auStack_78._8_2_;
  auVar3._10_2_ = sVar21 + auStack_78._10_2_;
  auVar3._12_2_ = sVar16 + auStack_78._12_2_;
  auVar3._14_2_ = sVar21 + auStack_78._14_2_;
  auVar18 = *(undefined1 (*) [16])((longlong)(int)uVar10 * 0x30 + param_4);
  auVar3 = vpblendd_avx2(auVar19,auVar3,8);
  auVar19 = vsubps_avx(auVar18,auVar3);
  auVar18 = vpsubw_avx(auVar18,auVar3);
  auVar18 = vblendps_avx(auVar19,auVar18,8);
  if (plVar8 == (longlong *)0x0) {
LAB_1400ce650:
    if (auStack_138[0] != 0xffffffff) {
      *(byte *)(param_4 + 0x1a4) = *(byte *)(param_4 + 0x1a4) | 2;
      if ((*(int *)(param_1 + 0x380) == 0) ||
         ((((*(byte *)(param_1 + 0xb0 + (ulonglong)param_5 * 8) & 1) != 0 &&
           (*(float *)(param_4 + 0x174) == 0.0)) && (!NAN(*(float *)(param_4 + 0x174)))))) {
        auVar4._4_4_ = uStack_120;
        auVar4._0_4_ = uStack_120;
        auVar4._8_4_ = uStack_120;
        auVar4._12_4_ = uStack_120;
        auVar18 = vblendps_avx(*(undefined1 (*) [16])(param_4 + 0xb0),auVar4,4);
        *(undefined1 (*) [16])(param_4 + 0xb0) = auVar18;
      }
      if ((*(byte *)(param_2 + 0x28) & 8) == 0) {
        FUN_1400cefc0(param_2,param_3,param_4,auStack_138);
      }
      else {
        FUN_1400e58e0(param_1,param_2,param_3,auStack_138,param_5);
        *(byte *)(param_4 + 0x1a4) = *(byte *)(param_4 + 0x1a4) & 0xef;
      }
      auVar18 = vpermilps_avx(auStack_108,0x4e);
      *(undefined1 (*) [16])(param_4 + 0xa0) = auVar18;
      goto LAB_1400ce6d4;
    }
  }
  else {
    auVar19 = vpunpckhwd_avx(auVar18,auVar18);
    auVar19 = vpsrad_avx(auVar19,0x10);
    auVar19 = vcvtdq2ps_avx(auVar19);
    auVar19 = vshufpd_avx(auVar19,auVar19,3);
    fVar17 = auVar19._0_4_ * _DAT_146159c90 + auVar18._0_4_;
    fVar22 = auVar19._4_4_ * _UNK_146159c94 + auVar18._4_4_;
    fVar23 = auVar19._8_4_ * _UNK_146159c98 + auVar18._8_4_;
    fVar24 = auVar19._12_4_ * _UNK_146159c9c + auVar18._12_4_;
    auVar14._0_4_ = fVar17 * fVar17;
    auVar14._4_4_ = fVar22 * fVar22;
    auVar14._8_4_ = fVar23 * fVar23;
    auVar14._12_4_ = fVar24 * fVar24;
    auVar20._4_4_ = _DAT_14617074c;
    auVar20._0_4_ = _DAT_14617074c;
    auVar20._8_4_ = _DAT_14617074c;
    auVar20._12_4_ = _DAT_14617074c;
    auVar18 = vhaddps_avx(auVar14,auVar14);
    auVar15._0_4_ = auVar18._0_4_;
    auVar15._4_4_ = auVar15._0_4_;
    auVar15._8_4_ = auVar15._0_4_;
    auVar15._12_4_ = auVar15._0_4_;
    auVar18 = vcmpps_avx(auVar20,auVar15,5);
    uVar7 = vmovmskps_avx(auVar18);
    if ((((char)uVar7 == '\0') || ((int)plVar8[4] != 4)) ||
       (*(short *)((longlong)plVar8 + 0x1e) == 0)) goto LAB_1400ce650;
    FUN_1400cb830(param_1,plVar8,auStack_138,param_2,bVar12,1,
                  (*(byte *)(param_4 + 0x1a4) & 0x40) >> 6);
    if ((ulonglong)auStack_138[0] != 0xffffffff) {
      lVar9 = func_0x00014540d1f0(*(undefined4 *)(*plVar8 + 0x20 + (ulonglong)auStack_138[0] * 0x40)
                                 );
      if (lVar9 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = 0;
        if ((0x1cU >> (*(uint *)(lVar9 + 0x30) & 0x1f) & 1) != 0) {
          lVar11 = lVar9;
        }
      }
      FUN_1400ce820(param_2,param_3,lVar11);
      goto LAB_1400ce650;
    }
  }
  if (*(int *)(param_1 + 0x380) == 0) {
    *(byte *)(param_4 + 0x1a4) =
         *(byte *)(param_4 + 0x1a4) & 0xed | *(byte *)((longlong)param_2 + 0x14d) >> 1 & 2;
  }
  else {
    *(byte *)(param_4 + 0x1a4) = *(byte *)(param_4 + 0x1a4) & 0xed;
  }
LAB_1400ce6d4:
  lVar9 = func_0x000144f63b60(param_1 + 0x2a0,param_5,0);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x20) == 4)) {
    if ((*(byte *)(param_4 + 0x1a4) & 10) == 0) {
      bVar5 = (*(short *)(lVar9 + 0x1e) == 0) << 2;
    }
    else {
      bVar5 = 0;
    }
    *(byte *)(param_4 + 0x1a4) = *(byte *)(param_4 + 0x1a4) & 0xfb | bVar5;
  }
  return;
}

