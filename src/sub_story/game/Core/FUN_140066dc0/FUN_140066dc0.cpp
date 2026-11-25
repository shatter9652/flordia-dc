// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140066dc0  size: 1434 bytes
// Name:    FUN_140066dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1411774d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140066dc0(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  ushort uVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  short sVar25;
  float fVar26;
  short sVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar27 [16];
  float fVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar45 [64];
  
  if (*(char *)((longlong)param_1 + 0x25) != '\x01') {
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  fVar21 = param_1[8];
  uVar15 = (ulonglong)(uint)fVar21 & 0x1ffff;
  if ((((uVar15 == 0x1ffff) ||
       (plVar5 = *(longlong **)((ulonglong)((uint)fVar21 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar5 == (longlong *)0x0)) ||
      (uVar4 = *(uint *)(plVar5[5] + uVar15 * 4), (uVar4 >> 0x11 & 0x3ff) != (uint)fVar21 >> 0x16))
     || (((uVar4 & *(uint *)(plVar5 + 6)) != *(uint *)(plVar5 + 6) || (lVar6 = *plVar5, lVar6 == 0))
        )) {
    fVar21 = param_1[10];
    uVar15 = (ulonglong)(((uint)fVar21 & 0xffff) << 4);
    if (*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar15) !=
        (short)((uint)fVar21 >> 0x10)) {
      return;
    }
    lVar6 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar15);
    if (lVar6 == 0) {
      return;
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x20);
    if (lVar7 == 0) {
      return;
    }
    if ((*(char *)(lVar7 + 0x10) == '\x06') && (*(short *)(param_1 + 0xb) != -2)) {
      uVar13 = func_0x0001403dc2f0(lVar6);
      if (uVar13 == 0xffff) {
        return;
      }
      if (*(ushort *)(lVar7 + 0x9a) <= uVar13) {
        return;
      }
      if (*(longlong *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)uVar13 * 8) == 0) {
        return;
      }
      fVar21 = param_1[10];
    }
    cVar12 = FUN_1411774d0(fVar21,*(undefined2 *)(param_1 + 0xb));
    if (cVar12 != '\0') {
      return;
    }
    fVar21 = param_1[10];
    uVar15 = (ulonglong)(((uint)fVar21 & 0xffff) << 4);
    if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar15) ==
         (short)((uint)fVar21 >> 0x10)) &&
       (lVar6 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar15), lVar6 != 0)) {
      lVar7 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x20);
      auVar27 = _DAT_14614f7f0;
      if (lVar7 == 0) {
        auVar43._8_8_ = 0;
        auVar43._0_8_ = _DAT_146159bc0;
        auVar22 = ZEXT416((uint)_DAT_145fc6ed8);
        bVar16 = fVar21 == 0.0;
        auVar24 = ZEXT816(0);
      }
      else {
        auVar42 = ZEXT1664(_DAT_14614f7f0);
        auVar45 = ZEXT864(_DAT_146159bc0);
        auVar43._8_8_ = 0;
        auVar43._0_8_ = _DAT_146159bc0;
        auVar47 = ZEXT464((uint)_DAT_145fc6ed8);
        auVar22 = ZEXT416((uint)_DAT_145fc6ed8);
        bVar16 = true;
        auVar24 = ZEXT816(0);
        auVar40 = ZEXT1664(auVar24);
        if ((*(char *)(lVar7 + 0x10) == '\x06') && (*(short *)(param_1 + 0xb) != -2)) {
          uVar13 = func_0x0001403dc2f0(lVar6);
          auVar43 = auVar45._0_16_;
          auVar22 = auVar47._0_16_;
          auVar24 = auVar40._0_16_;
          auVar27 = auVar42._0_16_;
          if ((uVar13 == 0xffff) || (*(ushort *)(lVar7 + 0x9a) <= uVar13)) {
            bVar16 = false;
          }
          else {
            lVar7 = *(longlong *)(lVar7 + 0x78);
            lVar14 = (ulonglong)uVar13 * 0x40;
            auVar22 = *(undefined1 (*) [16])(lVar7 + lVar14);
            auVar43 = *(undefined1 (*) [16])(lVar7 + 0x10 + lVar14);
            auVar27 = *(undefined1 (*) [16])(lVar7 + 0x20 + lVar14);
            auVar24 = *(undefined1 (*) [16])(lVar7 + 0x30 + lVar14);
          }
        }
      }
      if (!bVar16) {
        return;
      }
      auVar36 = *(undefined1 (*) [16])(lVar6 + 0x80);
      fVar21 = auVar22._0_4_;
      auVar49._0_4_ = fVar21 * fVar21;
      fVar39 = auVar22._4_4_;
      auVar49._4_4_ = fVar39 * fVar39;
      fVar19 = auVar22._8_4_;
      auVar49._8_4_ = fVar19 * fVar19;
      fVar50 = auVar22._12_4_;
      auVar49._12_4_ = fVar50 * fVar50;
      fVar8 = *(float *)(lVar6 + 0x50);
      fVar9 = *(float *)(lVar6 + 0x54);
      fVar10 = *(float *)(lVar6 + 0x58);
      fVar11 = *(float *)(lVar6 + 0x5c);
      auVar22 = vpunpckhwd_avx(auVar36,auVar36);
      auVar22 = vpsrad_avx(auVar22,0x10);
      auVar22 = vcvtdq2ps_avx(auVar22);
      auVar22 = vshufpd_avx(auVar22,auVar22,3);
      auVar34._0_4_ = auVar22._0_4_ * _DAT_146159c90 + auVar36._0_4_;
      auVar34._4_4_ = auVar22._4_4_ * _UNK_146159c94 + auVar36._4_4_;
      auVar34._8_4_ = auVar22._8_4_ * _UNK_146159c98 + auVar36._8_4_;
      auVar34._12_4_ = auVar22._12_4_ * _UNK_146159c9c + auVar36._12_4_;
      auVar22._4_4_ = _DAT_14615a290;
      auVar22._0_4_ = _DAT_14615a290;
      auVar22._8_4_ = _DAT_14615a290;
      auVar22._12_4_ = _DAT_14615a290;
      auVar22 = vrcpps_avx(auVar22);
      fVar26 = auVar22._0_4_;
      fVar31 = auVar22._4_4_;
      fVar32 = auVar22._8_4_;
      fVar33 = auVar22._12_4_;
      fVar26 = (-(fVar26 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar26 + fVar26;
      fVar31 = (-(fVar31 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar31 + fVar31;
      fVar32 = (-(fVar32 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar32 + fVar32;
      fVar33 = (-(fVar33 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar33 + fVar33;
      auVar37._0_4_ = auVar34._0_4_ * fVar26;
      auVar37._4_4_ = auVar34._4_4_ * fVar31;
      auVar37._8_4_ = auVar34._8_4_ * fVar32;
      auVar37._12_4_ = auVar34._12_4_ * fVar33;
      auVar22 = vroundps_avx(auVar37,3);
      auVar48._0_4_ = -(auVar22._0_4_ * _DAT_14615a290) + auVar34._0_4_;
      auVar48._4_4_ = -(auVar22._4_4_ * _DAT_14615a290) + auVar34._4_4_;
      auVar48._8_4_ = -(auVar22._8_4_ * _DAT_14615a290) + auVar34._8_4_;
      auVar48._12_4_ = -(auVar22._12_4_ * _DAT_14615a290) + auVar34._12_4_;
      auVar35._0_4_ = (int)auVar22._0_4_;
      auVar35._4_4_ = (int)auVar22._4_4_;
      auVar35._8_4_ = (int)auVar22._8_4_;
      auVar35._12_4_ = (int)auVar22._12_4_;
      auVar22 = vblendps_avx(auVar34,auVar48,3);
      auVar28 = vpackssdw_avx(auVar35,auVar35);
      auVar34 = vinsertps_avx(auVar22,auVar28,0x30);
      auVar35 = ZEXT816(0) << 0x20;
      auVar22 = vblendps_avx(auVar49,auVar35,8);
      auVar22 = vhaddps_avx(auVar22,auVar22);
      auVar18 = vhaddps_avx(auVar22,auVar22);
      auVar22 = vrsqrtps_avx(auVar18);
      fVar38 = auVar22._0_4_;
      fVar17 = auVar22._4_4_;
      fVar20 = auVar22._8_4_;
      fVar51 = auVar22._12_4_;
      auVar22 = vblendps_avx(auVar35,*(undefined1 (*) [16])(lVar6 + 0x60),7);
      auVar57._4_4_ = _DAT_146159bfc;
      auVar57._0_4_ = _DAT_146159bfc;
      auVar57._8_4_ = _DAT_146159bfc;
      auVar57._12_4_ = _DAT_146159bfc;
      auVar36 = vcmpps_avx(auVar57,auVar18,2);
      auVar53._0_4_ =
           (float)(auVar36._0_4_ &
                  (uint)(((fVar38 * fVar38 * auVar18._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar38 + fVar38) * auVar18._0_4_));
      auVar53._4_4_ =
           (float)(auVar36._4_4_ &
                  (uint)(((fVar17 * fVar17 * auVar18._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar17 + fVar17) * auVar18._4_4_));
      auVar53._8_4_ =
           (float)(auVar36._8_4_ &
                  (uint)(((fVar20 * fVar20 * auVar18._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar20 + fVar20) * auVar18._8_4_));
      auVar53._12_4_ =
           (float)(auVar36._12_4_ &
                  (uint)(((fVar51 * fVar51 * auVar18._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar51 + fVar51) * auVar18._12_4_));
      auVar36 = vrcpps_avx(auVar53);
      fVar38 = auVar36._0_4_;
      fVar17 = auVar36._4_4_;
      fVar20 = auVar36._8_4_;
      fVar51 = auVar36._12_4_;
      auVar58._0_4_ = (uint)auVar53._0_4_ ^ _DAT_145fc6f10;
      auVar58._4_4_ = (uint)auVar53._4_4_ ^ _DAT_145fc6f10;
      auVar58._8_4_ = (uint)auVar53._8_4_ ^ _DAT_145fc6f10;
      auVar58._12_4_ = (uint)auVar53._12_4_ ^ _DAT_145fc6f10;
      auVar36 = vcmpps_avx(auVar53,auVar58,0);
      auVar23._0_4_ = -((auVar53._0_4_ * fVar38 - _DAT_145fc6ed8) * fVar38) + fVar38;
      auVar23._4_4_ = -((auVar53._4_4_ * fVar17 - _DAT_145fc6ed8) * fVar17) + fVar17;
      auVar23._8_4_ = -((auVar53._8_4_ * fVar20 - _DAT_145fc6ed8) * fVar20) + fVar20;
      auVar23._12_4_ = -((auVar53._12_4_ * fVar51 - _DAT_145fc6ed8) * fVar51) + fVar51;
      auVar55._4_4_ = _DAT_14615b36c;
      auVar55._0_4_ = _DAT_14615b36c;
      auVar55._8_4_ = _DAT_14615b36c;
      auVar55._12_4_ = _DAT_14615b36c;
      auVar36 = vblendvps_avx(auVar23,auVar55,auVar36);
      fVar38 = auVar36._0_4_;
      auVar54._0_4_ = fVar21 * fVar38;
      fVar21 = auVar36._4_4_;
      auVar54._4_4_ = fVar39 * fVar21;
      fVar39 = auVar36._8_4_;
      auVar54._8_4_ = fVar19 * fVar39;
      fVar17 = auVar36._12_4_;
      auVar54._12_4_ = fVar50 * fVar17;
      auVar46._0_4_ = auVar43._0_4_ * fVar38;
      auVar46._4_4_ = auVar43._4_4_ * fVar21;
      auVar46._8_4_ = auVar43._8_4_ * fVar39;
      auVar46._12_4_ = auVar43._12_4_ * fVar17;
      auVar44._0_4_ = fVar38 * auVar27._0_4_;
      auVar44._4_4_ = fVar21 * auVar27._4_4_;
      auVar44._8_4_ = fVar39 * auVar27._8_4_;
      auVar44._12_4_ = fVar17 * auVar27._12_4_;
      auVar43 = vshufps_avx(auVar54,auVar54,0x55);
      auVar36 = vshufps_avx(auVar46,auVar46,0x55);
      auVar18 = vshufps_avx(auVar44,auVar44,0x55);
      fVar20 = auVar22._0_4_;
      fVar50 = auVar22._4_4_;
      fVar51 = auVar22._8_4_;
      fVar52 = auVar22._12_4_;
      auVar22 = vshufps_avx(auVar46,auVar46,0xaa);
      auVar23 = vshufps_avx(auVar44,auVar44,0xaa);
      fVar19 = auVar24._0_4_;
      auVar29 = vshufps_avx(auVar24,auVar24,0x55);
      auVar24 = vshufps_avx(auVar24,auVar24,0xaa);
      auVar27 = vblendps_avx(auVar35,*(undefined1 (*) [16])(lVar6 + 0x70),7);
      auVar37 = vshufps_avx(auVar54,auVar54,0xaa);
      fVar21 = auVar27._0_4_;
      auVar59._0_4_ =
           fVar21 * auVar24._0_4_ + fVar20 * auVar29._0_4_ + fVar8 * fVar19 + auVar34._0_4_;
      fVar38 = auVar27._4_4_;
      auVar59._4_4_ =
           fVar38 * auVar24._4_4_ + fVar50 * auVar29._4_4_ + fVar9 * fVar19 + auVar34._4_4_;
      fVar39 = auVar27._8_4_;
      auVar59._8_4_ =
           fVar39 * auVar24._8_4_ + fVar51 * auVar29._8_4_ + fVar10 * fVar19 + auVar34._8_4_;
      fVar17 = auVar27._12_4_;
      auVar59._12_4_ =
           fVar17 * auVar24._12_4_ + fVar52 * auVar29._12_4_ + fVar11 * fVar19 + auVar34._12_4_;
      auVar24._0_4_ = fVar21 * auVar37._0_4_ + fVar20 * auVar43._0_4_ + auVar54._0_4_ * fVar8;
      auVar24._4_4_ = fVar38 * auVar37._4_4_ + fVar50 * auVar43._4_4_ + auVar54._0_4_ * fVar9;
      auVar24._8_4_ = fVar39 * auVar37._8_4_ + fVar51 * auVar43._8_4_ + auVar54._0_4_ * fVar10;
      auVar24._12_4_ = fVar17 * auVar37._12_4_ + fVar52 * auVar43._12_4_ + auVar54._0_4_ * fVar11;
      auVar41._0_4_ = fVar21 * auVar22._0_4_ + fVar20 * auVar36._0_4_ + auVar46._0_4_ * fVar8;
      auVar41._4_4_ = fVar38 * auVar22._4_4_ + fVar50 * auVar36._4_4_ + auVar46._0_4_ * fVar9;
      auVar41._8_4_ = fVar39 * auVar22._8_4_ + fVar51 * auVar36._8_4_ + auVar46._0_4_ * fVar10;
      auVar41._12_4_ = fVar17 * auVar22._12_4_ + fVar52 * auVar36._12_4_ + auVar46._0_4_ * fVar11;
      auVar56._0_4_ = fVar21 * auVar23._0_4_ + fVar20 * auVar18._0_4_ + auVar44._0_4_ * fVar8;
      auVar56._4_4_ = fVar38 * auVar23._4_4_ + fVar50 * auVar18._4_4_ + auVar44._0_4_ * fVar9;
      auVar56._8_4_ = fVar39 * auVar23._8_4_ + fVar51 * auVar18._8_4_ + auVar44._0_4_ * fVar10;
      auVar56._12_4_ = fVar17 * auVar23._12_4_ + fVar52 * auVar18._12_4_ + auVar44._0_4_ * fVar11;
      auVar27 = vinsertps_avx(auVar59,auVar28,0x30);
      auVar28._0_4_ = auVar27._0_4_ * fVar26;
      auVar28._4_4_ = auVar27._4_4_ * fVar31;
      auVar28._8_4_ = auVar27._8_4_ * fVar32;
      auVar28._12_4_ = auVar27._12_4_ * fVar33;
      auVar22 = vroundps_avx(auVar28,3);
      auVar18._0_4_ = -(auVar22._0_4_ * _DAT_14615a290) + auVar27._0_4_;
      auVar18._4_4_ = -(auVar22._4_4_ * _DAT_14615a290) + auVar27._4_4_;
      auVar18._8_4_ = -(auVar22._8_4_ * _DAT_14615a290) + auVar27._8_4_;
      auVar18._12_4_ = -(auVar22._12_4_ * _DAT_14615a290) + auVar27._12_4_;
      auVar29._0_4_ = (int)auVar22._0_4_;
      auVar29._4_4_ = (int)auVar22._4_4_;
      auVar29._8_4_ = (int)auVar22._8_4_;
      auVar29._12_4_ = (int)auVar22._12_4_;
      auVar27 = vblendps_avx(auVar59,auVar18,3);
      auVar22 = vpackssdw_avx(auVar29,auVar29);
      sVar25 = auVar22._0_2_;
      auVar36._0_2_ = sVar25 + auVar34._0_2_;
      sVar30 = auVar22._2_2_;
      auVar36._2_2_ = sVar30 + auVar34._2_2_;
      auVar36._4_2_ = sVar25 + auVar34._4_2_;
      auVar36._6_2_ = sVar30 + auVar34._6_2_;
      auVar36._8_2_ = sVar25 + auVar34._8_2_;
      auVar36._10_2_ = sVar30 + auVar34._10_2_;
      auVar36._12_2_ = sVar25 + auVar34._12_2_;
      auVar36._14_2_ = sVar30 + auVar34._14_2_;
      auVar43 = vpblendd_avx2(auVar27,auVar36,8);
      auVar27 = vblendps_avx(auVar41,auVar35,8);
      auVar22 = vblendps_avx(auVar56,auVar35,8);
    }
    else {
      if (fVar21 != 0.0) {
        return;
      }
      auVar24 = ZEXT416((uint)_DAT_145fc6ed8);
      auVar27._8_8_ = 0;
      auVar27._0_8_ = _DAT_146159bc0;
      auVar43 = (undefined1  [16])0x0;
      auVar22 = _DAT_14614f7f0;
    }
    if (*(char *)(param_1 + 9) == '\x01') {
      fVar21 = param_1[4];
      fVar38 = param_1[5];
      fVar39 = param_1[6];
      fVar17 = fVar39 * auVar22._0_4_ + fVar38 * auVar27._0_4_ + fVar21 * auVar24._0_4_;
      fVar19 = fVar39 * auVar22._4_4_ + fVar38 * auVar27._4_4_ + fVar21 * auVar24._4_4_;
      fVar20 = fVar39 * auVar22._8_4_ + fVar38 * auVar27._8_4_ + fVar21 * auVar24._8_4_;
      fVar21 = fVar39 * auVar22._12_4_ + fVar38 * auVar27._12_4_ + fVar21 * auVar24._12_4_;
    }
    else {
      auVar36 = vpunpckhwd_avx(auVar43,auVar43);
      fVar21 = param_1[5];
      fVar38 = param_1[6];
      auVar36 = vpsrad_avx(auVar36,0x10);
      auVar36 = vcvtdq2ps_avx(auVar36);
      auVar36 = vshufpd_avx(auVar36,auVar36,3);
      fVar39 = param_1[4];
      fVar17 = fVar38 * auVar22._0_4_ +
               fVar21 * auVar27._0_4_ +
               fVar39 * auVar24._0_4_ + auVar36._0_4_ * _DAT_146159c90 + auVar43._0_4_;
      fVar19 = fVar38 * auVar22._4_4_ +
               fVar21 * auVar27._4_4_ +
               fVar39 * auVar24._4_4_ + auVar36._4_4_ * _UNK_146159c94 + auVar43._4_4_;
      fVar20 = fVar38 * auVar22._8_4_ +
               fVar21 * auVar27._8_4_ +
               fVar39 * auVar24._8_4_ + auVar36._8_4_ * _UNK_146159c98 + auVar43._8_4_;
      fVar21 = fVar38 * auVar22._12_4_ +
               fVar21 * auVar27._12_4_ +
               fVar39 * auVar24._12_4_ + auVar36._12_4_ * _UNK_146159c9c + auVar43._12_4_;
    }
  }
  else {
    uVar15 = (ulonglong)(uint)((int)uVar15 * (int)plVar5[1]);
    if (*(char *)(param_1 + 9) == '\x01') {
      fVar21 = param_1[4];
      fVar38 = param_1[5];
      fVar39 = param_1[6];
      pfVar1 = (float *)(lVar6 + 0x40 + uVar15);
      pfVar2 = (float *)(lVar6 + 0x50 + uVar15);
      pfVar3 = (float *)(lVar6 + 0x60 + uVar15);
      fVar17 = fVar39 * *pfVar3 + fVar38 * *pfVar2 + fVar21 * *pfVar1;
      fVar19 = fVar39 * pfVar3[1] + fVar38 * pfVar2[1] + fVar21 * pfVar1[1];
      fVar20 = fVar39 * pfVar3[2] + fVar38 * pfVar2[2] + fVar21 * pfVar1[2];
      fVar21 = fVar39 * pfVar3[3] + fVar38 * pfVar2[3] + fVar21 * pfVar1[3];
    }
    else {
      auVar27 = *(undefined1 (*) [16])(lVar6 + 0x70 + uVar15);
      fVar21 = param_1[5];
      fVar38 = param_1[6];
      auVar22 = vpunpckhwd_avx(auVar27,auVar27);
      auVar22 = vpsrad_avx(auVar22,0x10);
      auVar22 = vcvtdq2ps_avx(auVar22);
      auVar22 = vshufpd_avx(auVar22,auVar22,3);
      fVar39 = param_1[4];
      pfVar1 = (float *)(lVar6 + 0x40 + uVar15);
      pfVar2 = (float *)(lVar6 + 0x50 + uVar15);
      pfVar3 = (float *)(lVar6 + 0x60 + uVar15);
      fVar17 = auVar22._0_4_ * _DAT_146159c90 + auVar27._0_4_ +
               fVar38 * *pfVar3 + fVar21 * *pfVar2 + fVar39 * *pfVar1;
      fVar19 = auVar22._4_4_ * _UNK_146159c94 + auVar27._4_4_ +
               fVar38 * pfVar3[1] + fVar21 * pfVar2[1] + fVar39 * pfVar1[1];
      fVar20 = auVar22._8_4_ * _UNK_146159c98 + auVar27._8_4_ +
               fVar38 * pfVar3[2] + fVar21 * pfVar2[2] + fVar39 * pfVar1[2];
      fVar21 = auVar22._12_4_ * _UNK_146159c9c + auVar27._12_4_ +
               fVar38 * pfVar3[3] + fVar21 * pfVar2[3] + fVar39 * pfVar1[3];
    }
  }
  *param_1 = fVar17;
  param_1[1] = fVar19;
  param_1[2] = fVar20;
  param_1[3] = fVar21;
  *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  return;
}

