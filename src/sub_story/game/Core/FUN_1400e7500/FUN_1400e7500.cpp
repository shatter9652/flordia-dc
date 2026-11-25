// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e7500  size: 1722 bytes
// Name:    FUN_1400e7500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400deab0, FUN_145012860, FUN_1450128a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e7500(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  longlong *plVar15;
  bool bVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [16];
  longlong *plVar22;
  undefined1 (*pauVar23) [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  short sVar32;
  short sVar45;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar61 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar65 [64];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [64];
  undefined1 auVar77 [64];
  undefined1 auVar78 [16];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined *puStack_1c8;
  longlong *plStack_1c0;
  int iStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_f8 [16];
  undefined1 auVar51 [64];
  
  pauVar21 = (undefined1 (*) [16])((ulonglong)param_3 * 0x1b0 + param_1);
  uVar17 = FUN_1450128a0(*(undefined8 *)param_2[0x766],param_3 + 4);
  FUN_145012860(&puStack_1c8,param_2,uVar17,param_3);
  auVar49._4_4_ = _DAT_14615a290;
  auVar49._0_4_ = _DAT_14615a290;
  auVar49._8_4_ = _DAT_14615a290;
  auVar49._12_4_ = _DAT_14615a290;
  auVar51 = ZEXT1664(auVar49);
  auVar65 = ZEXT1264(ZEXT812(0));
  puStack_1c8 = &UNK_14669fee0;
  lVar20 = 0;
  auVar49 = vrcpps_avx(auVar49);
  fVar52 = auVar49._0_4_;
  fVar53 = auVar49._4_4_;
  fVar54 = auVar49._8_4_;
  fVar55 = auVar49._12_4_;
  fVar52 = (-(fVar52 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar52 + fVar52;
  fVar53 = (-(fVar53 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar53 + fVar53;
  fVar54 = (-(fVar54 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar54 + fVar54;
  fVar55 = (-(fVar55 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar55 + fVar55;
  fVar56 = _DAT_145fc6ed8;
  fVar57 = _DAT_145fc6ed8;
  fVar58 = _DAT_145fc6ed8;
  fVar59 = _DAT_145fc6ed8;
  fVar60 = _DAT_14615ad78;
  fVar62 = _DAT_14615ad78;
  fVar63 = _DAT_14615ad78;
  fVar64 = _DAT_14615ad78;
  bVar16 = true;
  do {
    bVar14 = bVar16;
    plVar15 = plStack_1c0;
    if (bVar14) {
      lVar1 = plStack_1c0[0x766];
      iVar18 = (**(code **)(puStack_1c8 + 8))(&puStack_1c8);
      iVar18 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x80),
                                   *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar18 * 4));
      plVar22 = plStack_1c0;
    }
    else {
      iVar18 = (**(code **)(*plStack_1c0 + 0x20))
                         (plStack_1c0,*(undefined4 *)(&UNK_14669f8e0 + (longlong)iStack_1b0 * 4));
      plVar22 = (longlong *)0x0;
      if (iVar18 != -1) {
        plVar22 = plVar15;
      }
    }
    iVar19 = func_0x000144e05fa0(plVar22[1]);
    fVar69 = 0.0;
    fVar71 = 0.0;
    fVar72 = 0.0;
    fVar73 = 0.0;
    fVar70 = 0.0;
    fVar66 = 0.0;
    fVar67 = 0.0;
    fVar68 = 0.0;
    if (iVar18 != iVar19) {
      uVar17 = (**(code **)(*plVar22 + 0xf0))(plVar22,iVar18);
      (**(code **)(*plVar22 + 0x108))(plVar22,uVar17,&uStack_1a8);
      fVar70 = fStack_198;
      fVar66 = fStack_194;
      fVar67 = fStack_190;
      fVar68 = fStack_18c;
    }
    pauVar23 = pauVar21 + lVar20 * 3;
    (**(code **)(*plVar22 + 0x88))(plVar22,&uStack_1a8);
    auVar42._4_4_ = fStack_194;
    auVar42._0_4_ = fStack_198;
    auVar42._8_4_ = fStack_190;
    auVar42._12_4_ = fStack_18c;
    auVar78._8_8_ = uStack_180;
    auVar78._0_8_ = uStack_188;
    auVar49 = vshufps_avx(auVar42,auVar78,0x33);
    auVar49 = vshufps_avx(auVar42,auVar49,0x2f);
    auVar76 = ZEXT1664(CONCAT412(fVar68 * (fVar59 + auVar49._12_4_),
                                 CONCAT48(fVar67 * (fVar58 + auVar49._8_4_),
                                          CONCAT44(fVar66 * (fVar57 + auVar49._4_4_),
                                                   fVar70 * (fVar56 + auVar49._0_4_)))));
    (**(code **)(*plVar22 + 0x88))(plVar22,&fStack_168);
    fVar70 = auVar76._0_4_;
    auVar42 = auVar76._0_16_;
    auVar49 = vshufps_avx(auVar42,auVar42,0x55);
    auVar42 = vshufps_avx(auVar42,auVar42,0xaa);
    auVar24._0_4_ =
         auVar42._0_4_ * fStack_148 +
         auVar49._0_4_ * fStack_158 + fVar70 * fStack_168 + auStack_138._0_4_;
    auVar24._4_4_ =
         auVar42._4_4_ * fStack_144 +
         auVar49._4_4_ * fStack_154 + fVar70 * fStack_164 + auStack_138._4_4_;
    auVar24._8_4_ =
         auVar42._8_4_ * fStack_140 +
         auVar49._8_4_ * fStack_150 + fVar70 * fStack_160 + auStack_138._8_4_;
    auVar24._12_4_ =
         auVar42._12_4_ * fStack_13c +
         auVar49._12_4_ * fStack_14c + fVar70 * fStack_15c + auStack_138._12_4_;
    auVar49 = vblendps_avx(auVar24,auStack_138,8);
    auVar46._0_4_ = fVar52 * auVar49._0_4_;
    auVar46._4_4_ = fVar53 * auVar49._4_4_;
    auVar46._8_4_ = fVar54 * auVar49._8_4_;
    auVar46._12_4_ = fVar55 * auVar49._12_4_;
    auVar42 = vroundps_avx(auVar46,3);
    auVar33._0_4_ = -(auVar42._0_4_ * auVar51._0_4_) + auVar49._0_4_;
    auVar33._4_4_ = -(auVar42._4_4_ * auVar51._4_4_) + auVar49._4_4_;
    auVar33._8_4_ = -(auVar42._8_4_ * auVar51._8_4_) + auVar49._8_4_;
    auVar33._12_4_ = -(auVar42._12_4_ * auVar51._12_4_) + auVar49._12_4_;
    auVar49 = vblendps_avx(auVar24,auVar33,3);
    auVar34._0_4_ = (int)auVar42._0_4_;
    auVar34._4_4_ = (int)auVar42._4_4_;
    auVar34._8_4_ = (int)auVar42._8_4_;
    auVar34._12_4_ = (int)auVar42._12_4_;
    auVar42 = vpackssdw_avx(auVar34,auVar34);
    sVar32 = auVar42._0_2_;
    auVar74._0_2_ = sVar32 + auStack_138._0_2_;
    sVar45 = auVar42._2_2_;
    auVar74._2_2_ = sVar45 + auStack_138._2_2_;
    auVar74._4_2_ = sVar32 + auStack_138._4_2_;
    auVar74._6_2_ = sVar45 + auStack_138._6_2_;
    auVar74._8_2_ = sVar32 + auStack_138._8_2_;
    auVar74._10_2_ = sVar45 + auStack_138._10_2_;
    auVar74._12_2_ = sVar32 + auStack_138._12_2_;
    auVar74._14_2_ = sVar45 + auStack_138._14_2_;
    auVar49 = vpblendd_avx2(auVar49,auVar74,8);
    pauVar23[1] = auVar49;
    iVar19 = func_0x000144e05fa0(plVar22[1]);
    if (iVar18 != iVar19) {
      uVar17 = (**(code **)(*plVar22 + 0xf0))(plVar22,iVar18);
      (**(code **)(*plVar22 + 0x108))(plVar22,uVar17,&uStack_1a8);
      fVar69 = fStack_198;
      fVar71 = fStack_194;
      fVar72 = fStack_190;
      fVar73 = fStack_18c;
    }
    (**(code **)(*plVar22 + 0x88))(plVar22,&uStack_1a8);
    auVar9._4_4_ = fStack_194;
    auVar9._0_4_ = fStack_198;
    auVar9._8_4_ = fStack_190;
    auVar9._12_4_ = fStack_18c;
    auVar11._8_8_ = uStack_180;
    auVar11._0_8_ = uStack_188;
    auVar49 = vshufps_avx(auVar9,auVar11,0x33);
    auVar49 = vshufps_avx(auVar9,auVar49,0x2f);
    auVar76 = ZEXT1664(CONCAT412(fVar73 * (fVar59 + auVar49._12_4_),
                                 CONCAT48(fVar72 * (fVar58 + auVar49._8_4_),
                                          CONCAT44(fVar71 * (fVar57 + auVar49._4_4_),
                                                   fVar69 * (fVar56 + auVar49._0_4_)))));
    (**(code **)(*plVar22 + 0x88))(plVar22,&fStack_168);
    fVar70 = auVar76._0_4_;
    auVar42 = auVar76._0_16_;
    auVar49 = vshufps_avx(auVar42,auVar42,0x55);
    auVar42 = vshufps_avx(auVar42,auVar42,0xaa);
    lVar20 = 1;
    auVar25._0_4_ =
         auVar42._0_4_ * fStack_148 +
         auVar49._0_4_ * fStack_158 + fVar70 * fStack_168 + auStack_138._0_4_;
    auVar25._4_4_ =
         auVar42._4_4_ * fStack_144 +
         auVar49._4_4_ * fStack_154 + fVar70 * fStack_164 + auStack_138._4_4_;
    auVar25._8_4_ =
         auVar42._8_4_ * fStack_140 +
         auVar49._8_4_ * fStack_150 + fVar70 * fStack_160 + auStack_138._8_4_;
    auVar25._12_4_ =
         auVar42._12_4_ * fStack_13c +
         auVar49._12_4_ * fStack_14c + fVar70 * fStack_15c + auStack_138._12_4_;
    auVar49 = vblendps_avx(auVar25,auStack_138,8);
    auVar47._0_4_ = auVar49._0_4_ * fVar52;
    auVar47._4_4_ = auVar49._4_4_ * fVar53;
    auVar47._8_4_ = auVar49._8_4_ * fVar54;
    auVar47._12_4_ = auVar49._12_4_ * fVar55;
    auVar42 = vroundps_avx(auVar47,3);
    auVar35._0_4_ = auVar42._0_4_ * fVar60 + auVar49._0_4_;
    auVar35._4_4_ = auVar42._4_4_ * fVar62 + auVar49._4_4_;
    auVar35._8_4_ = auVar42._8_4_ * fVar63 + auVar49._8_4_;
    auVar35._12_4_ = auVar42._12_4_ * fVar64 + auVar49._12_4_;
    auVar49 = vblendps_avx(auVar25,auVar35,3);
    auVar36._0_4_ = (int)auVar42._0_4_;
    auVar36._4_4_ = (int)auVar42._4_4_;
    auVar36._8_4_ = (int)auVar42._8_4_;
    auVar36._12_4_ = (int)auVar42._12_4_;
    auVar42 = vpackssdw_avx(auVar36,auVar36);
    sVar32 = auVar42._0_2_;
    auVar2._0_2_ = sVar32 + auStack_138._0_2_;
    sVar45 = auVar42._2_2_;
    auVar2._2_2_ = sVar45 + auStack_138._2_2_;
    auVar2._4_2_ = sVar32 + auStack_138._4_2_;
    auVar2._6_2_ = sVar45 + auStack_138._6_2_;
    auVar2._8_2_ = sVar32 + auStack_138._8_2_;
    auVar2._10_2_ = sVar45 + auStack_138._10_2_;
    auVar2._12_2_ = sVar32 + auStack_138._12_2_;
    auVar2._14_2_ = sVar45 + auStack_138._14_2_;
    auVar49 = vpblendd_avx2(auVar49,auVar2,8);
    *pauVar23 = auVar49;
    pauVar23[2] = auVar65._0_16_;
    bVar16 = false;
  } while (bVar14);
  fVar70 = 0.0;
  fVar66 = 0.0;
  fVar67 = 0.0;
  fVar68 = 0.0;
  auVar26._0_4_ = fVar52 * 0.0;
  auVar26._4_4_ = fVar53 * 0.0;
  auVar26._8_4_ = fVar54 * 0.0;
  auVar26._12_4_ = fVar55 * 0.0;
  auVar49 = vroundps_avx(auVar26,3);
  auVar37._0_4_ = fVar60 * auVar49._0_4_;
  auVar37._4_4_ = fVar62 * auVar49._4_4_;
  auVar37._8_4_ = fVar63 * auVar49._8_4_;
  auVar37._12_4_ = fVar64 * auVar49._12_4_;
  auVar27._0_4_ = (int)auVar49._0_4_;
  auVar27._4_4_ = (int)auVar49._4_4_;
  auVar27._8_4_ = (int)auVar49._8_4_;
  auVar27._12_4_ = (int)auVar49._12_4_;
  auVar49 = vpackssdw_avx(auVar27,auVar27);
  auStack_f8 = vinsertps_avx(auVar37,auVar49,0x34);
  FUN_1400deab0(&uStack_1a8,pauVar21);
  *(undefined8 *)pauVar21[7] = uStack_1a8;
  *(undefined8 *)(pauVar21[7] + 8) = uStack_1a0;
  iVar18 = func_0x000144e05fa0(param_2[1]);
  auVar61._0_12_ = ZEXT812(0);
  auVar61._12_4_ = 0;
  if (iVar18 != 0) {
    uVar17 = (**(code **)(*param_2 + 0xf0))(param_2,0);
    (**(code **)(*param_2 + 0x108))(param_2,uVar17,&uStack_1a8);
    auVar61._4_4_ = fStack_194;
    auVar61._0_4_ = fStack_198;
    auVar61._8_4_ = fStack_190;
    auVar61._12_4_ = fStack_18c;
  }
  auVar65 = ZEXT1664(auVar61);
  (**(code **)(*param_2 + 0x88))(param_2,&uStack_1a8);
  auVar80 = ZEXT1664(CONCAT412(fStack_18c,CONCAT48(fStack_190,CONCAT44(fStack_194,fStack_198))));
  uStack_128 = uStack_188;
  uStack_120 = uStack_180;
  (**(code **)(*param_2 + 0x88))(param_2,&fStack_168);
  auVar81 = ZEXT1664(CONCAT412(fStack_15c,CONCAT48(fStack_160,CONCAT44(fStack_164,fStack_168))));
  auVar79 = ZEXT1664(CONCAT412(fStack_14c,CONCAT48(fStack_150,CONCAT44(fStack_154,fStack_158))));
  auVar77 = ZEXT1664(CONCAT412(fStack_13c,CONCAT48(fStack_140,CONCAT44(fStack_144,fStack_148))));
  auVar76 = ZEXT1664(auStack_138);
  lVar20 = plStack_1c0[0x766];
  iVar18 = (**(code **)(puStack_1c8 + 8))(&puStack_1c8);
  iVar18 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar20 + 0x10) + 0x80),
                               *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar18 * 4));
  iVar19 = func_0x000144e05fa0(plStack_1c0[1]);
  auVar74 = auVar77._0_16_;
  auVar78 = auVar79._0_16_;
  auVar33 = auVar81._0_16_;
  auVar42 = auVar76._0_16_;
  auVar49 = auVar65._0_16_;
  auVar24 = auVar80._0_16_;
  if (iVar18 != iVar19) {
    uVar17 = (**(code **)(*plStack_1c0 + 0xf0))(plStack_1c0,iVar18);
    (**(code **)(*plStack_1c0 + 0x108))(plStack_1c0,uVar17,&uStack_1a8);
    auVar74 = auVar77._0_16_;
    auVar78 = auVar79._0_16_;
    auVar33 = auVar81._0_16_;
    auVar42 = auVar76._0_16_;
    auVar49 = auVar65._0_16_;
    auVar24 = auVar80._0_16_;
    fVar70 = fStack_198;
    fVar66 = fStack_194;
    fVar67 = fStack_190;
    fVar68 = fStack_18c;
  }
  auVar13._8_8_ = uStack_120;
  auVar13._0_8_ = uStack_128;
  auVar34 = vshufps_avx(auVar13,auVar24,0x33);
  auVar24 = vshufps_avx(auVar24,auVar34,0x8f);
  auVar28._0_4_ = auVar49._0_4_ * (fVar56 + auVar24._0_4_);
  auVar28._4_4_ = auVar49._4_4_ * (fVar57 + auVar24._4_4_);
  auVar28._8_4_ = auVar49._8_4_ * (fVar58 + auVar24._8_4_);
  auVar28._12_4_ = auVar49._12_4_ * (fVar59 + auVar24._12_4_);
  auVar49 = vshufps_avx(auVar28,auVar28,0xaa);
  auVar24 = vshufps_avx(auVar28,auVar28,0x55);
  auVar75._0_4_ =
       auVar49._0_4_ * auVar74._0_4_ +
       auVar24._0_4_ * auVar78._0_4_ + auVar28._0_4_ * auVar33._0_4_ + auVar42._0_4_;
  auVar75._4_4_ =
       auVar49._4_4_ * auVar74._4_4_ +
       auVar24._4_4_ * auVar78._4_4_ + auVar28._0_4_ * auVar33._4_4_ + auVar42._4_4_;
  auVar75._8_4_ =
       auVar49._8_4_ * auVar74._8_4_ +
       auVar24._8_4_ * auVar78._8_4_ + auVar28._0_4_ * auVar33._8_4_ + auVar42._8_4_;
  auVar75._12_4_ =
       auVar49._12_4_ * auVar74._12_4_ +
       auVar24._12_4_ * auVar78._12_4_ + auVar28._0_4_ * auVar33._12_4_ + auVar42._12_4_;
  auVar49 = vblendps_avx(auVar75,auVar42,8);
  auVar38._0_4_ = auVar49._0_4_ * fVar52;
  auVar38._4_4_ = auVar49._4_4_ * fVar53;
  auVar38._8_4_ = auVar49._8_4_ * fVar54;
  auVar38._12_4_ = auVar49._12_4_ * fVar55;
  auVar74 = vroundps_avx(auVar38,3);
  auVar29._0_4_ = -(auVar74._0_4_ * auVar51._0_4_) + auVar49._0_4_;
  auVar29._4_4_ = -(auVar74._4_4_ * auVar51._4_4_) + auVar49._4_4_;
  auVar29._8_4_ = -(auVar74._8_4_ * auVar51._8_4_) + auVar49._8_4_;
  auVar29._12_4_ = -(auVar74._12_4_ * auVar51._12_4_) + auVar49._12_4_;
  auVar39._0_4_ = (int)auVar74._0_4_;
  auVar39._4_4_ = (int)auVar74._4_4_;
  auVar39._8_4_ = (int)auVar74._8_4_;
  auVar39._12_4_ = (int)auVar74._12_4_;
  auVar49 = vblendps_avx(auVar75,auVar29,3);
  auVar74 = vpackssdw_avx(auVar39,auVar39);
  sVar32 = auVar74._0_2_;
  auVar3._0_2_ = auVar42._0_2_ + sVar32;
  sVar45 = auVar74._2_2_;
  auVar3._2_2_ = auVar42._2_2_ + sVar45;
  auVar3._4_2_ = auVar42._4_2_ + sVar32;
  auVar3._6_2_ = auVar42._6_2_ + sVar45;
  auVar3._8_2_ = auVar42._8_2_ + sVar32;
  auVar3._10_2_ = auVar42._10_2_ + sVar45;
  auVar3._12_2_ = auVar42._12_2_ + sVar32;
  auVar3._14_2_ = auVar42._14_2_ + sVar45;
  auVar49 = vpblendd_avx2(auVar49,auVar3,8);
  auVar76 = ZEXT1664(auVar49);
  (**(code **)(*plStack_1c0 + 0x88))(plStack_1c0,&uStack_1a8);
  auVar10._4_4_ = fStack_194;
  auVar10._0_4_ = fStack_198;
  auVar10._8_4_ = fStack_190;
  auVar10._12_4_ = fStack_18c;
  auVar12._8_8_ = uStack_180;
  auVar12._0_8_ = uStack_188;
  auVar49 = vshufps_avx(auVar10,auVar12,0x33);
  auVar49 = vshufps_avx(auVar10,auVar49,0x2f);
  auVar65 = ZEXT1664(CONCAT412(fVar68 * (fVar59 + auVar49._12_4_),
                               CONCAT48(fVar67 * (fVar58 + auVar49._8_4_),
                                        CONCAT44(fVar66 * (fVar57 + auVar49._4_4_),
                                                 fVar70 * (fVar56 + auVar49._0_4_)))));
  (**(code **)(*plStack_1c0 + 0x88))(plStack_1c0,&fStack_168);
  fVar56 = auVar65._0_4_;
  auVar42 = auVar65._0_16_;
  auVar49 = vshufps_avx(auVar42,auVar42,0x55);
  auVar42 = vshufps_avx(auVar42,auVar42,0xaa);
  auVar30._0_4_ =
       auVar42._0_4_ * fStack_148 +
       auVar49._0_4_ * fStack_158 + fVar56 * fStack_168 + auStack_138._0_4_;
  auVar30._4_4_ =
       auVar42._4_4_ * fStack_144 +
       auVar49._4_4_ * fStack_154 + fVar56 * fStack_164 + auStack_138._4_4_;
  auVar30._8_4_ =
       auVar42._8_4_ * fStack_140 +
       auVar49._8_4_ * fStack_150 + fVar56 * fStack_160 + auStack_138._8_4_;
  auVar30._12_4_ =
       auVar42._12_4_ * fStack_13c +
       auVar49._12_4_ * fStack_14c + fVar56 * fStack_15c + auStack_138._12_4_;
  auVar49 = vblendps_avx(auVar30,auStack_138,8);
  auVar48._0_4_ = auVar49._0_4_ * fVar52;
  auVar48._4_4_ = auVar49._4_4_ * fVar53;
  auVar48._8_4_ = auVar49._8_4_ * fVar54;
  auVar48._12_4_ = auVar49._12_4_ * fVar55;
  auVar42 = vroundps_avx(auVar48,3);
  auVar40._0_4_ = -(auVar42._0_4_ * auVar51._0_4_) + auVar49._0_4_;
  auVar40._4_4_ = -(auVar42._4_4_ * auVar51._4_4_) + auVar49._4_4_;
  auVar40._8_4_ = -(auVar42._8_4_ * auVar51._8_4_) + auVar49._8_4_;
  auVar40._12_4_ = -(auVar42._12_4_ * auVar51._12_4_) + auVar49._12_4_;
  auVar49 = vblendps_avx(auVar30,auVar40,3);
  auVar41._0_4_ = (int)auVar42._0_4_;
  auVar41._4_4_ = (int)auVar42._4_4_;
  auVar41._8_4_ = (int)auVar42._8_4_;
  auVar41._12_4_ = (int)auVar42._12_4_;
  auVar42 = vpackssdw_avx(auVar41,auVar41);
  sVar32 = auVar42._0_2_;
  auVar4._0_2_ = sVar32 + auStack_138._0_2_;
  sVar45 = auVar42._2_2_;
  auVar4._2_2_ = sVar45 + auStack_138._2_2_;
  auVar4._4_2_ = sVar32 + auStack_138._4_2_;
  auVar4._6_2_ = sVar45 + auStack_138._6_2_;
  auVar4._8_2_ = sVar32 + auStack_138._8_2_;
  auVar4._10_2_ = sVar45 + auStack_138._10_2_;
  auVar4._12_2_ = sVar32 + auStack_138._12_2_;
  auVar4._14_2_ = sVar45 + auStack_138._14_2_;
  auVar49 = vpblendd_avx2(auVar49,auVar4,8);
  auVar42 = vsubps_avx(auVar76._0_16_,auVar49);
  auVar49 = vpsubw_avx(auVar76._0_16_,auVar49);
  auVar49 = vblendps_avx(auVar42,auVar49,8);
  auVar42 = vpunpckhwd_avx(auVar49,auVar49);
  auVar42 = vpsrad_avx(auVar42,0x10);
  auVar42 = vcvtdq2ps_avx(auVar42);
  auVar42 = vshufpd_avx(auVar42,auVar42,3);
  auVar31._0_4_ = auVar42._0_4_ * _DAT_146159c90 + auVar49._0_4_ + *(float *)*pauVar21;
  auVar31._4_4_ = auVar42._4_4_ * _UNK_146159c94 + auVar49._4_4_ + *(float *)(*pauVar21 + 4);
  auVar31._8_4_ = *(float *)(*pauVar21 + 8) + 0.0;
  auVar31._12_4_ = *(float *)(*pauVar21 + 0xc) + 0.0;
  auVar49 = vblendps_avx(auVar31,*pauVar21,8);
  auVar43._0_4_ = auVar49._0_4_ * fVar52;
  auVar43._4_4_ = auVar49._4_4_ * fVar53;
  auVar43._8_4_ = auVar49._8_4_ * fVar54;
  auVar43._12_4_ = auVar49._12_4_ * fVar55;
  auVar42 = vroundps_avx(auVar43,3);
  auVar50._0_4_ = -(auVar42._0_4_ * auVar51._0_4_) + auVar49._0_4_;
  auVar50._4_4_ = -(auVar42._4_4_ * auVar51._4_4_) + auVar49._4_4_;
  auVar50._8_4_ = -(auVar42._8_4_ * auVar51._8_4_) + auVar49._8_4_;
  auVar50._12_4_ = -(auVar42._12_4_ * auVar51._12_4_) + auVar49._12_4_;
  auVar44._0_4_ = (int)auVar42._0_4_;
  auVar44._4_4_ = (int)auVar42._4_4_;
  auVar44._8_4_ = (int)auVar42._8_4_;
  auVar44._12_4_ = (int)auVar42._12_4_;
  auVar74 = vpackssdw_avx(auVar44,auVar44);
  auVar42 = vblendps_avx(auVar49,auVar50,3);
  sVar32 = auVar74._0_2_;
  auVar5._0_2_ = sVar32 + auVar49._0_2_;
  sVar45 = auVar74._2_2_;
  auVar5._2_2_ = sVar45 + auVar49._2_2_;
  auVar5._4_2_ = sVar32 + auVar49._4_2_;
  auVar5._6_2_ = sVar45 + auVar49._6_2_;
  auVar5._8_2_ = sVar32 + auVar49._8_2_;
  auVar5._10_2_ = sVar45 + auVar49._10_2_;
  auVar5._12_2_ = sVar32 + auVar49._12_2_;
  auVar5._14_2_ = sVar45 + auVar49._14_2_;
  auVar49 = vblendps_avx(auVar42,auVar5,8);
  pauVar21[6] = auVar49;
  uVar6 = *(undefined8 *)(*pauVar21 + 8);
  uVar7 = *(undefined8 *)pauVar21[3];
  uVar8 = *(undefined8 *)(pauVar21[3] + 8);
  *(undefined8 *)pauVar21[8] = *(undefined8 *)*pauVar21;
  *(undefined8 *)(pauVar21[8] + 8) = uVar6;
  *(undefined8 *)pauVar21[9] = uVar7;
  *(undefined8 *)(pauVar21[9] + 8) = uVar8;
  return;
}

