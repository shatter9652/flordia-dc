// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140073030  size: 927 bytes
// Name:    FUN_140073030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed8850, FUN_1400733d0, FUN_144eb6f00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140073030(longlong param_1,undefined1 (*param_2) [16],float param_3,undefined8 param_4,
                  undefined4 param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [16];
  int iStack_fc;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
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
  undefined1 auVar31 [64];
  
  uStack_98 = *(undefined8 *)*param_2;
  uStack_90 = *(undefined8 *)(*param_2 + 8);
  iVar15 = 0x22;
  if (-1 < param_6) {
    iVar15 = param_6;
  }
  cVar8 = FUN_144eb6f00(param_1,&uStack_98,&iStack_fc,param_5,iVar15);
  if (cVar8 == '\0') {
    return false;
  }
  lVar16 = (longlong)iStack_fc;
  if (lVar16 == -1) {
    return false;
  }
  pauVar10 = (undefined1 (*) [16])func_0x000144eb7050(param_1,iStack_fc);
  pauVar11 = (undefined1 (*) [16])func_0x000144eb7050(param_1,iStack_fc + 1);
  if (pauVar10 == (undefined1 (*) [16])0x0) {
    return false;
  }
  if (pauVar11 == (undefined1 (*) [16])0x0) {
    return false;
  }
  auVar26 = *pauVar10;
  auVar27 = ZEXT1664(auVar26);
  auVar29 = ZEXT464(*(uint *)(*pauVar10 + 8));
  auVar25 = ZEXT416(*(uint *)(*pauVar10 + 8));
  auStack_e8 = auVar26;
  uVar9 = vextractps_avx(auVar26,3);
  auVar20 = *pauVar11;
  auVar28 = ZEXT1664(auVar20);
  auVar31 = ZEXT464(*(uint *)(*pauVar11 + 8));
  auVar30 = ZEXT416(*(uint *)(*pauVar11 + 8));
  auStack_f8 = auVar20;
  if ((uVar9 & 0x10) == 0) {
    uVar9 = vextractps_avx(auVar20,3);
    if ((uVar9 & 0x10) == 0) goto LAB_14007313c;
    puVar13 = (undefined8 *)auStack_f8;
  }
  else {
    puVar13 = (undefined8 *)auStack_e8;
  }
  uStack_a8 = *puVar13;
  uStack_a0 = puVar13[1];
  lVar14 = FUN_144ed8850(&uStack_a8,_DAT_146159c60,0);
  auVar20 = auVar28._0_16_;
  auVar26 = auVar27._0_16_;
  auVar30 = auVar31._0_16_;
  auVar25 = auVar29._0_16_;
  if (lVar14 != 0) {
    uStack_b8 = *(undefined8 *)*param_2;
    uStack_b0 = *(undefined8 *)(*param_2 + 8);
    uStack_c8 = *(undefined8 *)(lVar14 + 0xc10);
    uStack_c0 = *(undefined8 *)(lVar14 + 0xc18);
    uStack_d8 = *(undefined8 *)(lVar14 + 0xc20);
    uStack_d0 = *(undefined8 *)(lVar14 + 0xc28);
    cVar8 = FUN_1400733d0(&uStack_c8,&uStack_d8,&uStack_b8,param_4);
    auVar20 = auVar28._0_16_;
    auVar26 = auVar27._0_16_;
    auVar30 = auVar31._0_16_;
    auVar25 = auVar29._0_16_;
    if (cVar8 != '\0') {
      return true;
    }
  }
LAB_14007313c:
  fVar17 = (float)param_4;
  if (0.0 < fVar17) {
    auVar4 = vminss_avx(auVar25,auVar30);
    if (*(float *)(*param_2 + 8) < auVar4._0_4_ - fVar17) {
      return false;
    }
    auVar25 = vmaxss_avx(auVar25,auVar30);
    if (auVar25._0_4_ + fVar17 < *(float *)(*param_2 + 8)) {
      return false;
    }
  }
  uVar12 = (ulonglong)*(ushort *)(param_1 + lVar16 * 8);
  if ((((0x12bf < uVar12) ||
       (lVar14 = *(longlong *)(_DAT_14a9e88c0 + 0xc30 + uVar12 * 8), lVar14 == 0)) ||
      (uVar9 = (uint)*(short *)(param_1 + 4 + lVar16 * 8), *(ushort *)(lVar14 + 0x18) <= uVar9)) ||
     (*(longlong *)(lVar14 + 0x10) == 0)) {
    return false;
  }
  lVar16 = *(longlong *)(lVar14 + 0x10) + (ulonglong)uVar9 * 0x20;
  if ((*(uint *)(lVar16 + 0x14) & 0x20) == 0) {
    fVar18 = *(float *)(lVar16 + 8);
    bVar1 = *(byte *)(lVar16 + 0x1b);
    bVar2 = *(byte *)(lVar16 + 0x1a);
    bVar3 = bVar2;
    if ((bVar1 == 0) || (bVar3 = bVar1, bVar2 == 0)) {
      fVar17 = (float)bVar3 * _DAT_145fc6edc * fVar18;
      fVar18 = fVar17;
    }
    else {
      fVar19 = *(float *)(lVar16 + 0xc) * _DAT_145fc6edc;
      fVar17 = fVar18 * (float)bVar2 + fVar19;
      fVar18 = fVar18 * (float)bVar1 + fVar19;
    }
  }
  else {
    fVar17 = *(float *)(lVar16 + 8) * _DAT_145fc6edc;
    fVar18 = fVar17;
  }
  if ((char)*(uint *)(lVar16 + 0x14) < '\0') {
    fVar17 = fVar17 + _DAT_146159bd4;
    fVar18 = fVar18 + _DAT_146159bd4;
  }
  auVar25._8_8_ = 0;
  auVar25._0_8_ = _DAT_146159bc0;
  auVar20 = vsubps_avx(auVar20,auVar26);
  auVar30 = vsubps_avx(auVar26,*param_2);
  auVar26 = vshufps_avx(auVar20,auVar20,0xc9);
  auVar20 = vshufps_avx(auVar20,auVar20,0xd2);
  auVar25 = vshufps_avx(auVar25,auVar25,0xc9);
  fVar21 = -((float)_DAT_146159bc0 * auVar20._0_4_) + auVar26._0_4_ * auVar25._0_4_;
  fVar22 = -((float)(_DAT_146159bc0 >> 0x20) * auVar20._4_4_) + auVar26._4_4_ * auVar25._4_4_;
  fVar23 = -(auVar20._8_4_ * 0.0) + auVar26._8_4_ * auVar25._8_4_;
  fVar24 = -(auVar20._12_4_ * 0.0) + auVar26._12_4_ * auVar25._12_4_;
  auVar26._0_4_ = fVar21 * fVar21;
  auVar26._4_4_ = fVar22 * fVar22;
  auVar26._8_4_ = fVar23 * fVar23;
  auVar26._12_4_ = fVar24 * fVar24;
  auVar26 = vblendps_avx(auVar26,ZEXT416(0) << 0x20,8);
  auVar26 = vhaddps_avx(auVar26,auVar26);
  auVar26 = vhaddps_avx(auVar26,auVar26);
  auVar20 = vrsqrtps_avx(auVar26);
  fVar19 = auVar20._0_4_;
  fVar5 = auVar20._4_4_;
  fVar6 = auVar20._8_4_;
  fVar7 = auVar20._12_4_;
  auVar20._0_4_ =
       auVar30._0_4_ * fVar21 *
       ((fVar19 * fVar19 * auVar26._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar19 + fVar19);
  auVar20._4_4_ =
       auVar30._4_4_ * fVar22 *
       ((fVar5 * fVar5 * auVar26._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar5 + fVar5);
  auVar20._8_4_ =
       auVar30._8_4_ * fVar23 *
       ((fVar6 * fVar6 * auVar26._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar6 + fVar6);
  auVar20._12_4_ =
       auVar30._12_4_ * fVar24 *
       ((fVar7 * fVar7 * auVar26._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar7 + fVar7);
  auVar26 = vhaddps_avx(auVar20,auVar20);
  fVar19 = auVar26._0_4_;
  if ((float)((uint)fVar19 ^ _DAT_145fc6f10) <= fVar19) {
    return fVar19 < fVar18 + param_3;
  }
  return (float)((uint)fVar19 ^ _DAT_145fc6f10) < fVar17 + param_3;
}

