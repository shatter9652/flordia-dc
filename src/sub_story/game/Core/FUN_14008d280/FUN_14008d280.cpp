// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008d280  size: 1137 bytes
// Name:    FUN_14008d280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f11460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008d280(longlong *param_1,ushort *param_2,int param_3,ushort param_4,ushort param_5,
                  float *param_6)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  char cVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  ushort uVar13;
  ushort *puVar15;
  int iVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 aauStack_c8 [8] [16];
  uint uVar14;
  uint uVar20;
  
  lVar1 = *param_1;
  uVar19 = (uint)param_4;
  lVar11 = 0x12;
  lVar2 = param_1[2];
  puVar15 = (ushort *)((ulonglong)(uVar19 * 0x50) + lVar1);
  fVar27 = *param_6;
  fVar28 = param_6[1];
  fVar29 = param_6[2];
  fVar30 = param_6[3];
  puVar9 = (ushort *)((ulonglong)((uint)param_5 * 0x50) + lVar1);
  if (param_3 == 1) {
    lVar11 = 0x4a;
  }
  uVar6 = (ulonglong)(param_3 == 1);
  auVar24 = vsubps_avx(*(undefined1 (*) [16])
                        (lVar2 + (ulonglong)((puVar15[uVar6 * 2] & 0x3fff) << 4)),
                       *(undefined1 (*) [16])
                        (lVar2 + (ulonglong)((puVar9[uVar6 * 2] & 0x3fff) << 4)));
  auVar22._0_4_ = auVar24._0_4_ * fVar27;
  auVar22._4_4_ = auVar24._4_4_ * fVar28;
  auVar22._8_4_ = auVar24._8_4_ * fVar29;
  auVar22._12_4_ = auVar24._12_4_ * fVar30;
  auVar24 = vhaddps_avx(auVar22,auVar22);
  fVar21 = auVar24._0_4_;
  puVar8 = puVar15;
  if (0.0 < fVar21) {
    puVar8 = puVar9;
  }
  uVar18 = *(ushort *)((longlong)puVar8 + lVar11);
  uVar20 = uVar19;
  uStack_13c = (uint)param_5;
  if (0.0 < fVar21) {
    uVar20 = (uint)param_5;
    param_5 = param_4;
    uStack_13c = uVar19;
  }
  uVar17 = (ushort)uVar20;
  uVar19 = *(uint *)(param_1 + 1);
  uVar13 = uVar17;
  if (uVar18 < uVar19) {
    auVar32 = ZEXT1664(CONCAT412(_DAT_145fc6f70,
                                 CONCAT48(_DAT_145fc6f70,CONCAT44(_DAT_145fc6f70,_DAT_145fc6f70))));
    iVar16 = 0x20;
    auVar31 = ZEXT1264(ZEXT812(0));
    uVar33 = _DAT_145fc6f4c;
    uVar34 = _DAT_145fc6f4c;
    uVar35 = _DAT_145fc6f4c;
    uVar36 = _DAT_145fc6f4c;
    uVar37 = _DAT_145fc6f10;
    uVar38 = _DAT_145fc6f10;
    uVar39 = _DAT_145fc6f10;
    uVar40 = _DAT_145fc6f10;
    uVar14 = uVar20;
    uVar10 = uStack_13c;
    if (0.0 < fVar21) {
      puVar9 = puVar15;
    }
    do {
      uStack_140 = uVar14;
      param_5 = (ushort)uVar10;
      uVar17 = (ushort)uVar20;
      uStack_138 = (uint)uVar18;
      uVar13 = (ushort)uStack_140;
      if ((((ulonglong)param_1[(ulonglong)(uVar18 >> 6) + 0xd] >> ((ulonglong)uVar18 & 0x3f) & 1) !=
           0) || ((*(uint *)(lVar1 + 0xc + (ulonglong)(uStack_138 * 0x50)) & 3) == 1)) break;
      puVar15 = (ushort *)((ulonglong)(uStack_138 * 0x50) + lVar1);
      auStack_f8 = *(undefined1 (*) [16])(lVar2 + (ulonglong)((*puVar15 & 0x3fff) << 4));
      auStack_108 = *(undefined1 (*) [16])(lVar2 + (ulonglong)((puVar15[2] & 0x3fff) << 4));
      auVar22 = vsubps_avx(auStack_108,auStack_f8);
      auVar23 = auVar31._0_16_;
      auVar24 = vcmpps_avx(auVar22,auVar23,0);
      uVar12 = vmovmskps_avx(auVar24);
      auStack_e8 = auVar32._0_16_;
      auStack_118 = auStack_e8;
      if ((~(byte)uVar12 & 7) != 0) {
        auVar24._0_4_ = uVar33 & auVar22._0_4_;
        auVar24._4_4_ = uVar34 & auVar22._4_4_;
        auVar24._8_4_ = uVar35 & auVar22._8_4_;
        auVar24._12_4_ = uVar36 & auVar22._12_4_;
        auVar24 = vcmpps_avx(auVar24,auStack_e8,0x11);
        uVar12 = vmovmskps_avx(auVar24);
        if ((~(byte)uVar12 & 7) == 0) {
          auVar25._0_4_ = uVar37 ^ auVar22._0_4_;
          auVar25._4_4_ = uVar38 ^ auVar22._4_4_;
          auVar25._8_4_ = uVar39 ^ auVar22._8_4_;
          auVar25._12_4_ = uVar40 ^ auVar22._12_4_;
          auVar24 = vmovshdup_avx(auVar22);
          auVar24 = vunpcklps_avx(auVar24,auVar25);
          auVar24 = vinsertps_avx(auVar24,auVar22,0x74);
          fVar21 = auVar24._0_4_;
          auVar26._0_4_ = fVar21 * fVar21;
          fVar3 = auVar24._4_4_;
          auVar26._4_4_ = fVar3 * fVar3;
          fVar4 = auVar24._8_4_;
          auVar26._8_4_ = fVar4 * fVar4;
          fVar5 = auVar24._12_4_;
          auVar26._12_4_ = fVar5 * fVar5;
          auVar24 = vblendps_avx(auVar26,auVar23,8);
          auVar24 = vhaddps_avx(auVar24,auVar24);
          auVar24 = vhaddps_avx(auVar24,auVar24);
          auVar24 = vrsqrtps_avx(auVar24);
          auStack_118._0_4_ = auVar24._0_4_ * fVar21;
          auStack_118._4_4_ = auVar24._4_4_ * fVar3;
          auStack_118._8_4_ = auVar24._8_4_ * fVar4;
          auStack_118._12_4_ = auVar24._12_4_ * fVar5;
        }
      }
      aauStack_c8[0] = *(undefined1 (*) [16])(lVar2 + (ulonglong)((*puVar8 & 0x3fff) << 4));
      auStack_d8 = *(undefined1 (*) [16])(lVar2 + (ulonglong)((puVar8[2] & 0x3fff) << 4));
      auVar22 = vsubps_avx(auStack_d8,aauStack_c8[0]);
      auVar24 = vcmpps_avx(auVar22,auVar23,0);
      uVar12 = vmovmskps_avx(auVar24);
      if ((~(byte)uVar12 & 7) != 0) {
        auVar41._0_4_ = uVar33 & auVar22._0_4_;
        auVar41._4_4_ = uVar34 & auVar22._4_4_;
        auVar41._8_4_ = uVar35 & auVar22._8_4_;
        auVar41._12_4_ = uVar36 & auVar22._12_4_;
        auVar24 = vcmpps_avx(auVar41,auStack_e8,0x11);
        uVar12 = vmovmskps_avx(auVar24);
        if ((~(byte)uVar12 & 7) == 0) {
          auVar42._0_4_ = uVar37 ^ auVar22._0_4_;
          auVar42._4_4_ = uVar38 ^ auVar22._4_4_;
          auVar42._8_4_ = uVar39 ^ auVar22._8_4_;
          auVar42._12_4_ = uVar40 ^ auVar22._12_4_;
          auVar24 = vmovshdup_avx(auVar22);
          auVar24 = vunpcklps_avx(auVar24,auVar42);
          auVar24 = vinsertps_avx(auVar24,auVar22,0x74);
          fVar21 = auVar24._0_4_;
          auVar43._0_4_ = fVar21 * fVar21;
          fVar3 = auVar24._4_4_;
          auVar43._4_4_ = fVar3 * fVar3;
          fVar4 = auVar24._8_4_;
          auVar43._8_4_ = fVar4 * fVar4;
          fVar5 = auVar24._12_4_;
          auVar43._12_4_ = fVar5 * fVar5;
          auVar24 = vblendps_avx(auVar43,auVar23,8);
          auVar24 = vhaddps_avx(auVar24,auVar24);
          auVar24 = vhaddps_avx(auVar24,auVar24);
          auVar24 = vrsqrtps_avx(auVar24);
          auStack_e8._0_4_ = auVar24._0_4_ * fVar21;
          auStack_e8._4_4_ = auVar24._4_4_ * fVar3;
          auStack_e8._8_4_ = auVar24._8_4_ * fVar4;
          auStack_e8._12_4_ = auVar24._12_4_ * fVar5;
        }
      }
      cVar7 = FUN_144f11460(aauStack_c8,auStack_d8,auStack_e8,auStack_f8,auStack_108,auStack_118);
      if (cVar7 == '\0') break;
      auVar24 = vsubps_avx(*(undefined1 (*) [16])
                            (lVar2 + (ulonglong)((puVar15[uVar6 * 2] & 0x3fff) << 4)),
                           *(undefined1 (*) [16])
                            (lVar2 + (ulonglong)((puVar9[uVar6 * 2] & 0x3fff) << 4)));
      auVar23._0_4_ = auVar24._0_4_ * fVar27;
      auVar23._4_4_ = auVar24._4_4_ * fVar28;
      auVar23._8_4_ = auVar24._8_4_ * fVar29;
      auVar23._12_4_ = auVar24._12_4_ * fVar30;
      auVar24 = vhaddps_avx(auVar23,auVar23);
      fVar21 = auVar24._0_4_;
      uVar14 = uStack_13c;
      uVar20 = uVar10;
      if (fVar21 < 0.0) {
        uVar14 = uStack_140;
        uVar20 = uStack_138;
        uStack_138 = uVar10;
      }
      param_5 = (ushort)uStack_138;
      uVar13 = (ushort)uVar14;
      uVar17 = (ushort)uVar20;
      iVar16 = iVar16 + -1;
      if (iVar16 == 0) break;
      puVar8 = puVar9;
      if (fVar21 < 0.0) {
        puVar8 = puVar15;
        puVar15 = puVar9;
      }
      uVar18 = *(ushort *)((longlong)puVar8 + lVar11);
      if (fVar21 < 0.0) {
        uStack_140 = uStack_13c;
      }
      puVar9 = puVar15;
      uStack_13c = uStack_140;
      uVar10 = uStack_138;
    } while (uVar18 < uVar19);
  }
  uVar18 = uVar17;
  if (uVar13 == param_4) {
    uVar18 = param_5;
    param_5 = uVar17;
  }
  *param_2 = param_5;
  param_2[1] = uVar18;
  return;
}

