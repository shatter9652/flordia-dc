// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086070  size: 390 bytes
// Name:    FUN_140086070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14037d680, FUN_1400834e0, FUN_140081740, FUN_144e58940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140086070(longlong param_1,undefined4 param_2,longlong param_3,float *param_4,
                     char param_5,char param_6,undefined1 param_7)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auVar11 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  
  if ((*(byte *)(param_3 + 0x40) & 1) == 0) {
    return (float *)0x0;
  }
  auVar11 = ZEXT464((uint)_DAT_145fc6f48);
  pfVar1 = param_4;
  if ((param_5 == '\0') ||
     (lVar2 = FUN_140081740(param_1,param_2), (*(byte *)(lVar2 + 0x120) & 1) == 0)) {
LAB_1400860f8:
    pfVar3 = (float *)0x0;
  }
  else {
    pfVar3 = (float *)(lVar2 + 0xe0);
    auVar8._0_8_ = FUN_14037d680(param_3,pfVar3);
    auVar8._8_56_ = extraout_var;
    fVar7 = (float)auVar8._0_8_;
    auVar11 = ZEXT464((uint)_DAT_145fc6f48);
    if (fVar7 <= _DAT_145fc6f48) goto LAB_1400860f8;
    pfVar4 = pfVar3;
    if (_DAT_145fc6ed8 <= fVar7) goto joined_r0x0001400861c2;
    auVar11 = ZEXT1664(auVar8._0_16_);
  }
  fVar10 = auVar11._0_4_;
  if (param_6 != '\0') {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_7);
    pfVar4 = (float *)FUN_1400834e0(param_2,*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,0,
                                    uVar5 & 0xffffffff);
    if ((pfVar4 != (float *)0x0) && (((uint)pfVar4[0x10] & 1) != 0)) {
      auVar9._0_8_ = FUN_14037d680(param_3,pfVar4);
      auVar9._8_56_ = extraout_var_00;
      fVar7 = (float)auVar9._0_8_;
      if (auVar11._0_4_ < fVar7) {
        if (_DAT_145fc6ed8 <= fVar7) goto joined_r0x0001400861c2;
        auVar11 = ZEXT1664(auVar9._0_16_);
        pfVar3 = pfVar4;
      }
    }
    uVar6 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    lVar2 = FUN_144e58940(*(undefined4 *)(uVar6 + 0x9c));
    fVar10 = auVar11._0_4_;
    if (lVar2 != 0) {
      pfVar4 = (float *)FUN_1400834e0(param_2,lVar2,uVar6,uVar5 & 0xffffffff);
      fVar10 = auVar11._0_4_;
      if ((pfVar4 != (float *)0x0) && (((uint)pfVar4[0x10] & 1) != 0)) {
        fVar7 = (float)FUN_14037d680(param_3,pfVar4);
        fVar10 = auVar11._0_4_;
        if ((auVar11._0_4_ < fVar7) && (pfVar3 = pfVar4, fVar10 = fVar7, _DAT_145fc6ed8 <= fVar7))
        goto joined_r0x0001400861c2;
      }
    }
  }
  pfVar4 = pfVar3;
  fVar7 = fVar10;
  pfVar1 = pfVar3;
  if (param_4 == (float *)0x0) {
    return pfVar3;
  }
joined_r0x0001400861c2:
  if (pfVar1 != (float *)0x0) {
    *param_4 = fVar7;
  }
  return pfVar4;
}

