// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140025820  size: 768 bytes
// Name:    FUN_140025820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140025820(longlong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auVar10 [16];
  short sVar11;
  short sVar18;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  float fVar36;
  undefined1 auVar37 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar38 [64];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_c8 [16];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  
  auVar20._4_4_ = _DAT_14615a290;
  auVar20._0_4_ = _DAT_14615a290;
  auVar20._8_4_ = _DAT_14615a290;
  auVar20._12_4_ = _DAT_14615a290;
  auVar22 = ZEXT1664(auVar20);
  auVar28 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                               CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
  auVar29 = ZEXT1264(ZEXT812(0));
  auVar10 = vrcpps_avx(auVar20);
  fVar23 = auVar10._0_4_;
  fVar25 = auVar10._4_4_;
  fVar26 = auVar10._8_4_;
  fVar27 = auVar10._12_4_;
  fVar23 = (-(fVar23 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar23 + fVar23;
  fVar25 = (-(fVar25 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar25 + fVar25;
  fVar26 = (-(fVar26 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar26 + fVar26;
  fVar27 = (-(fVar27 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar27 + fVar27;
  auVar24 = ZEXT1664(CONCAT412(fVar27,CONCAT48(fVar26,CONCAT44(fVar25,fVar23))));
  auVar10._0_4_ = fVar23 * 0.0;
  auVar10._4_4_ = fVar25 * 0.0;
  auVar10._8_4_ = fVar26 * 0.0;
  auVar10._12_4_ = fVar27 * 0.0;
  auVar10 = vroundps_avx(auVar10,3);
  auVar12._0_4_ = auVar10._0_4_ * _DAT_14615ad78;
  auVar12._4_4_ = auVar10._4_4_ * _DAT_14615ad78;
  auVar12._8_4_ = auVar10._8_4_ * _DAT_14615ad78;
  auVar12._12_4_ = auVar10._12_4_ * _DAT_14615ad78;
  auVar13._0_4_ = (int)auVar10._0_4_;
  auVar13._4_4_ = (int)auVar10._4_4_;
  auVar13._8_4_ = (int)auVar10._8_4_;
  auVar13._12_4_ = (int)auVar10._12_4_;
  auVar10 = vpackssdw_avx(auVar13,auVar13);
  _auStack_f8 = vinsertps_avx(auVar12,auVar10,0x34);
  *param_2 = _auStack_f8;
  if (*(int *)(param_1 + 0x24) != 0) {
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x28) + 0x18))();
    uVar1 = *(uint *)(param_1 + 0x24);
    fVar23 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    if ((ulonglong)uVar1 != 0) {
      fVar34 = 0.0;
      fVar35 = 0.0;
      lVar7 = *(longlong *)(param_1 + 0x28);
      lVar8 = 0;
      auVar29 = ZEXT1264(ZEXT812(0));
      fVar31 = _DAT_146159c90;
      fVar33 = _UNK_146159c94;
      do {
        plVar3 = *(longlong **)(lVar7 + lVar8);
        (**(code **)(*plVar3 + 0x18))(plVar3,&fStack_108);
        auVar6._4_4_ = fStack_104;
        auVar6._0_4_ = fStack_108;
        auVar6._8_4_ = fStack_100;
        auVar6._12_4_ = fStack_fc;
        auVar10 = vsubps_avx(auVar6,_auStack_f8);
        auStack_c8 = vpsubw_avx(auVar6,_auStack_f8);
        auVar10 = vblendps_avx(auVar10,auStack_c8,8);
        auVar13 = vpunpckhwd_avx(auVar10,auVar10);
        auVar13 = vpsrad_avx(auVar13,0x10);
        auVar13 = vcvtdq2ps_avx(auVar13);
        auVar13 = vshufpd_avx(auVar13,auVar13,3);
        fVar36 = auVar13._0_4_ * fVar31 + auVar10._0_4_;
        fVar39 = auVar13._4_4_ * fVar33 + auVar10._4_4_;
        fVar40 = auVar13._8_4_ * fVar34 + auVar10._8_4_;
        fVar41 = auVar13._12_4_ * fVar35 + auVar10._12_4_;
        fVar9 = (float)(**(code **)(*plVar3 + 0x70))(plVar3);
        lVar8 = lVar8 + 8;
        fVar23 = fVar9 * fVar36 + fVar23;
        fVar25 = fVar9 * fVar39 + fVar25;
        fVar26 = fVar9 * fVar40 + fVar26;
        fVar27 = fVar9 * fVar41 + fVar27;
        auVar29 = ZEXT1664(CONCAT412(auVar29._12_4_ + fVar9,
                                     CONCAT48(auVar29._8_4_ + fVar9,
                                              CONCAT44(auVar29._4_4_ + fVar9,auVar29._0_4_ + fVar9))
                                    ));
      } while ((ulonglong)uVar1 << 3 != lVar8);
    }
    auVar10 = auVar22._0_16_;
    auVar20 = auVar29._0_16_;
    auVar13 = auVar24._0_16_;
    auVar12 = auVar28._0_16_;
    if (_DAT_145fc6f14 <= auVar29._0_4_) {
      iVar2 = *(int *)(param_1 + 0x3c);
      if ((longlong)iVar2 < 1) {
        auVar37 = ZEXT816(0);
        fVar31 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
      }
      else {
        fVar31 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        lVar7 = 0;
        auVar38 = ZEXT864(0);
        do {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + lVar7 * 8);
          fVar9 = *(float *)(*(longlong *)(param_1 + 0x58) + lVar7 * 4);
          (**(code **)(*plVar3 + 0x20))(plVar3,&fStack_108);
          fVar36 = (float)(**(code **)(*plVar3 + 0x70))(plVar3);
          auVar10 = auVar22._0_16_;
          auVar20 = auVar29._0_16_;
          auVar13 = auVar24._0_16_;
          auVar12 = auVar28._0_16_;
          fVar9 = fVar9 * fVar36;
          lVar7 = lVar7 + 1;
          auVar37._0_4_ = auVar38._0_4_ + fVar36;
          auVar37._4_4_ = auVar38._4_4_ + fVar36;
          auVar37._8_4_ = auVar38._8_4_ + fVar36;
          auVar37._12_4_ = auVar38._12_4_ + fVar36;
          auVar38 = ZEXT1664(auVar37);
          fVar31 = fVar9 * fStack_108 + fVar31;
          fVar33 = fVar9 * fStack_104 + fVar33;
          fVar34 = fVar9 * fStack_100 + fVar34;
          fVar35 = fVar9 * fStack_fc + fVar35;
        } while (iVar2 != lVar7);
      }
      if (_DAT_145fc6f14 < auVar37._0_4_) {
        auVar6 = vrcpps_avx(auVar20);
        fVar9 = auVar6._0_4_;
        fVar36 = auVar6._4_4_;
        fVar39 = auVar6._8_4_;
        fVar40 = auVar6._12_4_;
        auVar30._0_4_ =
             (-((fVar9 * auVar20._0_4_ - auVar12._0_4_) * fVar9) + fVar9) * fVar23 +
             (float)auStack_f8._0_4_;
        auVar30._4_4_ =
             (-((fVar36 * auVar20._4_4_ - auVar12._4_4_) * fVar36) + fVar36) * fVar25 +
             (float)auStack_f8._4_4_;
        auVar30._8_4_ =
             (-((fVar39 * auVar20._8_4_ - auVar12._8_4_) * fVar39) + fVar39) * fVar26 + fStack_f0;
        auVar30._12_4_ =
             (-((fVar40 * auVar20._12_4_ - auVar12._12_4_) * fVar40) + fVar40) * fVar27 + fStack_ec;
        auVar20 = vblendps_avx(auVar30,_auStack_f8,8);
        auVar14._0_4_ = auVar20._0_4_ * auVar13._0_4_;
        auVar14._4_4_ = auVar20._4_4_ * auVar13._4_4_;
        auVar14._8_4_ = auVar20._8_4_ * auVar13._8_4_;
        auVar14._12_4_ = auVar20._12_4_ * auVar13._12_4_;
        auVar6 = vroundps_avx(auVar14,3);
        auVar19._0_4_ = -(auVar6._0_4_ * auVar10._0_4_) + auVar20._0_4_;
        auVar19._4_4_ = -(auVar6._4_4_ * auVar10._4_4_) + auVar20._4_4_;
        auVar19._8_4_ = -(auVar6._8_4_ * auVar10._8_4_) + auVar20._8_4_;
        auVar19._12_4_ = -(auVar6._12_4_ * auVar10._12_4_) + auVar20._12_4_;
        auVar15._0_4_ = (int)auVar6._0_4_;
        auVar15._4_4_ = (int)auVar6._4_4_;
        auVar15._8_4_ = (int)auVar6._8_4_;
        auVar15._12_4_ = (int)auVar6._12_4_;
        auVar4 = vpackssdw_avx(auVar15,auVar15);
        auVar6 = vblendps_avx(auVar20,auVar19,3);
        sVar11 = auVar4._0_2_;
        auVar5._0_2_ = sVar11 + auVar20._0_2_;
        sVar18 = auVar4._2_2_;
        auVar5._2_2_ = sVar18 + auVar20._2_2_;
        auVar5._4_2_ = sVar11 + auVar20._4_2_;
        auVar5._6_2_ = sVar18 + auVar20._6_2_;
        auVar5._8_2_ = sVar11 + auVar20._8_2_;
        auVar5._10_2_ = sVar18 + auVar20._10_2_;
        auVar5._12_2_ = sVar11 + auVar20._12_2_;
        auVar5._14_2_ = sVar18 + auVar20._14_2_;
        auVar4 = vrcpps_avx(auVar37);
        auVar20 = vblendps_avx(auVar6,auVar5,8);
        fVar23 = auVar4._0_4_;
        fVar25 = auVar4._4_4_;
        fVar26 = auVar4._8_4_;
        fVar27 = auVar4._12_4_;
        auVar32._0_4_ =
             (-((fVar23 * auVar37._0_4_ - auVar12._0_4_) * fVar23) + fVar23) * fVar31 +
             auVar20._0_4_;
        auVar32._4_4_ =
             (-((fVar25 * auVar37._4_4_ - auVar12._4_4_) * fVar25) + fVar25) * fVar33 +
             auVar20._4_4_;
        auVar32._8_4_ =
             (-((fVar26 * auVar37._8_4_ - auVar12._8_4_) * fVar26) + fVar26) * fVar34 +
             auVar20._8_4_;
        auVar32._12_4_ =
             (-((fVar27 * auVar37._12_4_ - auVar12._12_4_) * fVar27) + fVar27) * fVar35 +
             auVar20._12_4_;
        auVar12 = vblendps_avx(auVar32,auVar20,8);
        auVar16._0_4_ = auVar12._0_4_ * auVar13._0_4_;
        auVar16._4_4_ = auVar12._4_4_ * auVar13._4_4_;
        auVar16._8_4_ = auVar12._8_4_ * auVar13._8_4_;
        auVar16._12_4_ = auVar12._12_4_ * auVar13._12_4_;
        auVar13 = vroundps_avx(auVar16,3);
        auVar21._0_4_ = -(auVar13._0_4_ * auVar10._0_4_) + auVar12._0_4_;
        auVar21._4_4_ = -(auVar13._4_4_ * auVar10._4_4_) + auVar12._4_4_;
        auVar21._8_4_ = -(auVar13._8_4_ * auVar10._8_4_) + auVar12._8_4_;
        auVar21._12_4_ = -(auVar13._12_4_ * auVar10._12_4_) + auVar12._12_4_;
        auVar17._0_4_ = (int)auVar13._0_4_;
        auVar17._4_4_ = (int)auVar13._4_4_;
        auVar17._8_4_ = (int)auVar13._8_4_;
        auVar17._12_4_ = (int)auVar13._12_4_;
        auVar13 = vpackssdw_avx(auVar17,auVar17);
        auVar10 = vblendps_avx(auVar12,auVar21,3);
        sVar11 = auVar13._0_2_;
        auVar4._0_2_ = sVar11 + auVar12._0_2_;
        sVar18 = auVar13._2_2_;
        auVar4._2_2_ = sVar18 + auVar12._2_2_;
        auVar4._4_2_ = sVar11 + auVar12._4_2_;
        auVar4._6_2_ = sVar18 + auVar12._6_2_;
        auVar4._8_2_ = sVar11 + auVar12._8_2_;
        auVar4._10_2_ = sVar18 + auVar12._10_2_;
        auVar4._12_2_ = sVar11 + auVar12._12_2_;
        auVar4._14_2_ = sVar18 + auVar12._14_2_;
        auVar10 = vblendps_avx(auVar10,auVar4,8);
        *param_2 = auVar10;
      }
    }
  }
  return;
}

