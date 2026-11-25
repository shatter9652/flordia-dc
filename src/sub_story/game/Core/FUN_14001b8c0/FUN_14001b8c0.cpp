// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001b8c0  size: 717 bytes
// Name:    FUN_14001b8c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001b8c0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [64];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    fVar5 = (fVar2 - *param_1) * (_DAT_145fc6ed8 / fVar1);
    fVar2 = (*param_1 + fVar2) * (float)((uint)(_DAT_145fc6ed8 / fVar1) ^ _DAT_145fc6f10);
    fVar11 = fVar2;
    if (fVar1 <= 0.0) {
      fVar11 = fVar5;
      fVar5 = fVar2;
    }
    if (fVar5 < fVar11) {
      return 0;
    }
    bVar9 = true;
    iVar7 = (fVar1 <= 0.0) + 1;
  }
  else {
    bVar9 = false;
    if (fVar2 < (float)((uint)*param_1 & _DAT_145fc6f4c)) {
      return 0;
    }
    iVar7 = -1;
    fVar11 = _DAT_145fc6f48;
    fVar5 = _DAT_146159bd4;
  }
  auVar10 = ZEXT464((uint)fVar5);
  fVar1 = param_2[1];
  bVar6 = bVar9;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    fVar2 = param_1[1];
    fVar12 = _DAT_145fc6ed8 / fVar1;
    fVar3 = param_3[1];
    fVar13 = (fVar3 - fVar2) * fVar12;
    if (0.0 < fVar1) {
      bVar4 = !(bool)(bVar9 & fVar5 <= fVar13);
      if (bVar4) {
        auVar10 = ZEXT464((uint)fVar13);
      }
      bVar6 = true;
      if (!bVar4) {
        bVar6 = bVar9;
      }
      fVar1 = (fVar2 + fVar3) * (float)((uint)fVar12 ^ _DAT_145fc6f10);
      if ((!bVar9) || (fVar11 < fVar1)) {
        iVar7 = 3;
        bVar9 = true;
        fVar11 = fVar1;
      }
    }
    else {
      bVar4 = (bool)(bVar9 & fVar13 <= fVar11);
      if (!bVar4) {
        fVar11 = fVar13;
      }
      bVar8 = true;
      if (bVar4) {
        bVar8 = bVar9;
      }
      if (!bVar4) {
        iVar7 = 4;
      }
      fVar1 = (fVar2 + fVar3) * (float)((uint)fVar12 ^ _DAT_145fc6f10);
      if ((!bVar9) || (bVar9 = bVar8, fVar1 < fVar5)) {
        auVar10 = ZEXT464((uint)fVar1);
        bVar6 = true;
        bVar9 = bVar8;
      }
    }
  }
  else if (param_3[1] < (float)((uint)param_1[1] & _DAT_145fc6f4c)) {
    return 0;
  }
  if (auVar10._0_4_ < fVar11) {
    return 0;
  }
  fVar1 = param_2[2];
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    fVar2 = param_1[2];
    fVar13 = _DAT_145fc6ed8 / fVar1;
    fVar5 = param_3[2];
    fVar3 = (fVar5 - fVar2) * fVar13;
    auVar14 = ZEXT416((uint)fVar3);
    if (0.0 < fVar1) {
      if (bVar6) {
        auVar14 = vminss_avx(auVar14,auVar10._0_16_);
      }
      auVar10 = ZEXT1664(auVar14);
      fVar1 = (fVar2 + fVar5) * (float)((uint)fVar13 ^ _DAT_145fc6f10);
      if ((!bVar9) || (fVar11 < fVar1)) {
        iVar7 = 5;
        fVar11 = fVar1;
      }
    }
    else {
      bVar9 = !(bool)(bVar9 & fVar3 <= fVar11);
      if (bVar9) {
        fVar11 = fVar3;
      }
      if (bVar9) {
        iVar7 = 6;
      }
      auVar14 = ZEXT416((uint)((fVar2 + fVar5) * (float)((uint)fVar13 ^ _DAT_145fc6f10)));
      if (bVar6) {
        auVar14 = vminss_avx(auVar14,auVar10._0_16_);
        auVar10 = ZEXT1664(auVar14);
      }
      else {
        auVar10 = ZEXT1664(auVar14);
      }
    }
  }
  else if (param_3[2] < (float)((uint)param_1[2] & _DAT_145fc6f4c)) {
    return 0;
  }
  if (auVar10._0_4_ < fVar11) {
    return 0;
  }
  if (iVar7 < 0) {
    return 0;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fVar11;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = auVar10._0_4_;
    return 1;
  }
  return 1;
}

