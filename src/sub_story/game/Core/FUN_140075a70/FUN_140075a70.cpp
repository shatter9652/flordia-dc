// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140075a70  size: 1238 bytes
// Name:    FUN_140075a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14506e3e0, FUN_1402b3bd0, FUN_144db6a30, FUN_1450228c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140075a70(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  undefined4 uVar5;
  float *pfVar6;
  longlong *plVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar39;
  float fVar41;
  float fVar42;
  undefined1 auVar36 [16];
  float fVar38;
  float fVar40;
  undefined1 auVar37 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  uint uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  
  lVar17 = *param_1;
  if (lVar17 == 0) {
    return;
  }
  pfVar6 = *(float **)(param_2 + 0x10);
  if ((*(byte *)(lVar17 + 0x1a) & 0x20) == 0) {
    if (*(int *)(lVar17 + 0x10) == 0) {
      FUN_14506e3e0(lVar17,pfVar6);
      if ((short)param_1[3] != -2) {
        *(byte *)((longlong)param_1 + 0x55) = *(byte *)((longlong)param_1 + 0x55) | 1;
      }
    }
    else {
      func_0x000145221f40(lVar17,pfVar6,3,0,1);
    }
  }
  uVar14 = (ulonglong)((*(uint *)(param_1[2] + 0x78) & 0xffff) << 4);
  if (*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar14) ==
      (short)(*(uint *)(param_1[2] + 0x78) >> 0x10)) {
    if ((short)param_1[3] == -2) {
      auVar44 = ZEXT1664(_DAT_14614f7f0);
      auVar43 = ZEXT864(_DAT_146159bc0);
      auVar37 = ZEXT464((uint)_DAT_145fc6ed8);
      auVar45 = ZEXT864(0);
      plVar7 = *(longlong **)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar14);
      if (((plVar7 == (longlong *)0x0) ||
          (cVar12 = (**(code **)(*plVar7 + 0xb0))(plVar7), cVar12 == '\0')) ||
         (cVar12 = (**(code **)(*plVar7 + 0x570))(plVar7), cVar12 != '\0')) goto LAB_140075d11;
    }
  }
  else if ((short)param_1[3] == -2) {
    auVar44 = ZEXT1664(_DAT_14614f7f0);
    auVar43 = ZEXT864(_DAT_146159bc0);
    auVar37 = ZEXT464((uint)_DAT_145fc6ed8);
    auVar45 = ZEXT864(0);
    goto LAB_140075d11;
  }
  lVar17 = *param_1;
  auVar3 = *(undefined1 (*) [16])(lVar17 + 0x50);
  auVar27 = *(undefined1 (*) [16])(lVar17 + 0x80);
  auVar1 = *(undefined1 (*) [16])(lVar17 + 0x60);
  auVar2 = *(undefined1 (*) [16])(lVar17 + 0x70);
  auVar29 = vpunpckhwd_avx(auVar27,auVar27);
  auVar29 = vpsrad_avx(auVar29,0x10);
  auVar29 = vcvtdq2ps_avx(auVar29);
  auVar29 = vshufpd_avx(auVar29,auVar29,3);
  auVar30._0_4_ = (float)_DAT_146159c90 * auVar29._0_4_ + auVar27._0_4_;
  fVar39 = (float)((ulonglong)_DAT_146159c90 >> 0x20);
  auVar30._4_4_ = fVar39 * auVar29._4_4_ + auVar27._4_4_;
  auVar30._8_4_ = auVar29._8_4_ * 0.0 + auVar27._8_4_;
  auVar30._12_4_ = auVar29._12_4_ * 0.0 + auVar27._12_4_;
  auVar27._4_4_ = _DAT_14615a290;
  auVar27._0_4_ = _DAT_14615a290;
  auVar27._8_4_ = _DAT_14615a290;
  auVar27._12_4_ = _DAT_14615a290;
  auVar27 = vrcpps_avx(auVar27);
  fVar33 = auVar27._0_4_;
  fVar38 = auVar27._4_4_;
  fVar40 = auVar27._8_4_;
  fVar34 = auVar27._12_4_;
  auVar35._0_4_ = auVar30._0_4_ * ((-(fVar33 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar33 + fVar33);
  auVar35._4_4_ = auVar30._4_4_ * ((-(fVar38 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar38 + fVar38);
  auVar35._8_4_ = auVar30._8_4_ * ((-(fVar40 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar40 + fVar40);
  auVar35._12_4_ =
       auVar30._12_4_ * ((-(fVar34 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar34 + fVar34);
  auVar29 = vroundps_avx(auVar35,3);
  auVar28._0_4_ = -(auVar29._0_4_ * _DAT_14615a290) + auVar30._0_4_;
  auVar28._4_4_ = -(auVar29._4_4_ * _DAT_14615a290) + auVar30._4_4_;
  auVar28._8_4_ = -(auVar29._8_4_ * _DAT_14615a290) + auVar30._8_4_;
  auVar28._12_4_ = -(auVar29._12_4_ * _DAT_14615a290) + auVar30._12_4_;
  auVar27 = vblendps_avx(auVar30,auVar28,3);
  auVar31._0_4_ = (int)auVar29._0_4_;
  auVar31._4_4_ = (int)auVar29._4_4_;
  auVar31._8_4_ = (int)auVar29._8_4_;
  auVar31._12_4_ = (int)auVar29._12_4_;
  auVar29 = vpackssdw_avx(auVar31,auVar31);
  auVar27 = vinsertps_avx(auVar27,auVar29,0x30);
  auVar29 = vsubps_avx(*(undefined1 (*) [16])(pfVar6 + 0xc),auVar27);
  auStack_b8 = vpsubw_avx(*(undefined1 (*) [16])(pfVar6 + 0xc),auVar27);
  auVar27 = vblendps_avx(auVar29,auStack_b8,8);
  auVar29 = vpunpckhwd_avx(auVar27,auVar27);
  fVar33 = pfVar6[2];
  fVar38 = pfVar6[6];
  fVar40 = pfVar6[10];
  auVar29 = vpsrad_avx(auVar29,0x10);
  auVar29 = vcvtdq2ps_avx(auVar29);
  auVar29 = vshufpd_avx(auVar29,auVar29,3);
  fVar34 = (float)_DAT_146159c90 * auVar29._0_4_ + auVar27._0_4_;
  fVar39 = fVar39 * auVar29._4_4_ + auVar27._4_4_;
  fVar41 = auVar29._8_4_ * 0.0 + auVar27._8_4_;
  fVar42 = auVar29._12_4_ * 0.0 + auVar27._12_4_;
  auVar31 = ZEXT816(0) << 0x20;
  auVar30 = vunpcklps_avx(auVar1,auVar31);
  auVar32._0_4_ = fVar34 * auVar1._0_4_;
  auVar32._4_4_ = fVar39 * auVar1._4_4_;
  auVar32._8_4_ = fVar41 * auVar1._8_4_;
  auVar32._12_4_ = fVar42 * auVar1._12_4_;
  auVar29._0_4_ = fVar34 * auVar3._0_4_;
  auVar29._4_4_ = fVar39 * auVar3._4_4_;
  auVar29._8_4_ = fVar41 * auVar3._8_4_;
  auVar29._12_4_ = fVar42 * auVar3._12_4_;
  auVar36._0_4_ = fVar34 * auVar2._0_4_;
  auVar36._4_4_ = fVar39 * auVar2._4_4_;
  auVar36._8_4_ = fVar41 * auVar2._8_4_;
  auVar36._12_4_ = fVar42 * auVar2._12_4_;
  auVar28 = vunpckhps_avx(auVar1,auVar31);
  auVar27 = vblendps_avx(auVar36,auVar31,8);
  auVar1 = vblendps_avx(auVar29,auVar31,8);
  auVar29 = vblendps_avx(auVar32,auVar31,8);
  fVar39 = *pfVar6;
  auVar31 = vunpcklps_avx(auVar3,auVar2);
  auVar3 = vunpckhps_avx(auVar3,auVar2);
  auVar2 = vunpcklps_avx(auVar3,auVar28);
  auVar28 = vunpcklps_avx(auVar31,auVar30);
  auVar3 = vunpckhps_avx(auVar31,auVar30);
  fVar34 = pfVar6[1];
  fVar42 = auVar28._0_4_;
  fVar9 = auVar28._4_4_;
  fVar10 = auVar28._8_4_;
  fVar11 = auVar28._12_4_;
  fVar41 = pfVar6[4];
  fVar23 = auVar3._0_4_;
  fVar24 = auVar3._4_4_;
  fVar25 = auVar3._8_4_;
  fVar26 = auVar3._12_4_;
  fVar19 = auVar2._0_4_;
  fVar20 = auVar2._4_4_;
  fVar21 = auVar2._8_4_;
  fVar22 = auVar2._12_4_;
  auVar37 = ZEXT1664(CONCAT412(fVar22 * fVar33 + fVar26 * fVar34 + fVar39 * fVar11,
                               CONCAT48(fVar21 * fVar33 + fVar25 * fVar34 + fVar39 * fVar10,
                                        CONCAT44(fVar20 * fVar33 + fVar24 * fVar34 + fVar39 * fVar9,
                                                 fVar19 * fVar33 + fVar23 * fVar34 + fVar39 * fVar42
                                                ))));
  fVar33 = pfVar6[5];
  fVar39 = pfVar6[8];
  auVar3 = vhaddps_avx(auVar1,auVar29);
  auVar43 = ZEXT1664(CONCAT412(fVar22 * fVar38 + fVar26 * fVar33 + fVar41 * fVar11,
                               CONCAT48(fVar21 * fVar38 + fVar25 * fVar33 + fVar41 * fVar10,
                                        CONCAT44(fVar20 * fVar38 + fVar24 * fVar33 + fVar41 * fVar9,
                                                 fVar19 * fVar38 + fVar23 * fVar33 + fVar41 * fVar42
                                                ))));
  fVar33 = pfVar6[9];
  auVar27 = vhaddps_avx(auVar27,auVar29);
  auVar44 = ZEXT1664(CONCAT412(fVar22 * fVar40 + fVar26 * fVar33 + fVar39 * fVar11,
                               CONCAT48(fVar21 * fVar40 + fVar25 * fVar33 + fVar39 * fVar10,
                                        CONCAT44(fVar20 * fVar40 + fVar24 * fVar33 + fVar39 * fVar9,
                                                 fVar19 * fVar40 + fVar23 * fVar33 + fVar39 * fVar42
                                                ))));
  auVar3 = vhaddps_avx(auVar3,auVar27);
  auVar45 = ZEXT1664(auVar3);
LAB_140075d11:
  lVar17 = param_1[1];
  auVar3 = *(undefined1 (*) [16])(pfVar6 + 4);
  auVar27 = vshufps_avx(auVar3,*(undefined1 (*) [16])(pfVar6 + 8),0x33);
  *(byte *)(lVar17 + 0x9c) = *(byte *)(lVar17 + 0x9c) | 4;
  uStack_108 = *(undefined8 *)(lVar17 + 0x78);
  uStack_100 = (uint)*(ushort *)(lVar17 + 0x9a);
  uVar13 = *(short *)((longlong)param_1 + 0x22) - *(ushort *)(param_1 + 4);
  if (uVar13 != 0) {
    auVar3 = vshufps_avx(auVar3,auVar27,0x2f);
    lVar17 = (ulonglong)uVar13 * 0x50;
    lVar18 = (ulonglong)((uint)*(ushort *)(param_1 + 4) * 0x50) + *(longlong *)(param_1[2] + 0x20);
    auVar46 = ZEXT1664(CONCAT412(auVar3._12_4_ + _DAT_145fc6ed8,
                                 CONCAT48(auVar3._8_4_ + _DAT_145fc6ed8,
                                          CONCAT44(auVar3._4_4_ + _DAT_145fc6ed8,
                                                   auVar3._0_4_ + _DAT_145fc6ed8))));
    if (param_3 == (longlong *)0x0) {
      do {
        if (*(short *)(lVar18 + 0x44) != -1) {
          auStack_f8 = auVar37._0_16_;
          auStack_e8 = auVar43._0_16_;
          auStack_d8 = auVar44._0_16_;
          auStack_118 = auVar46._0_16_;
          auStack_c8 = auVar45._0_16_;
          FUN_144db6a30(param_2,lVar18,*(short *)(lVar18 + 0x44),auStack_f8,auStack_118,&uStack_108)
          ;
        }
        lVar18 = lVar18 + 0x50;
        lVar17 = lVar17 + -0x50;
      } while (lVar17 != 0);
    }
    else {
      do {
        sVar4 = *(short *)(lVar18 + 0x44);
        if ((sVar4 != -1) && (plVar7 = (longlong *)param_3[1], plVar7 != (longlong *)0x0)) {
          uVar5 = *(undefined4 *)(lVar18 + 0x1c);
          lVar8 = *plVar7;
          lVar16 = plVar7[6];
          lVar15 = func_0x0001401cfe60(lVar8,(int)lVar16,0xf791a95f,uVar5);
          if (((lVar15 != 0) &&
              (*(int *)(*param_3 +
                       (ulonglong)
                       *(ushort *)
                        (lVar8 + 10 +
                        (ulonglong)(uint)((int)((ulonglong)(lVar15 - lVar8) >> 2) * -0x55555555) *
                        0xc) * 4) != -1)) ||
             ((lVar16 = func_0x0001401cfe60(lVar8,(int)lVar16,0x98e1750c,uVar5), lVar16 != 0 &&
              (*(int *)(*param_3 +
                       (ulonglong)
                       *(ushort *)
                        (lVar8 + 10 +
                        (ulonglong)(uint)((int)((ulonglong)(lVar16 - lVar8) >> 2) * -0x55555555) *
                        0xc) * 4) != -1)))) {
            auStack_f8 = auVar37._0_16_;
            auStack_e8 = auVar43._0_16_;
            auStack_d8 = auVar44._0_16_;
            auStack_118 = auVar46._0_16_;
            auStack_c8 = auVar45._0_16_;
            FUN_144db6a30(param_2,lVar18,sVar4,auStack_f8,auStack_118,&uStack_108);
          }
        }
        lVar18 = lVar18 + 0x50;
        lVar17 = lVar17 + -0x50;
      } while (lVar17 != 0);
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x54) & 0x10) != 0) {
    FUN_1450228c0(*param_1,0);
    *(byte *)((longlong)param_1 + 0x54) = *(byte *)((longlong)param_1 + 0x54) & 0xef;
  }
  FUN_1402b3bd0(*param_1,0);
  return;
}

