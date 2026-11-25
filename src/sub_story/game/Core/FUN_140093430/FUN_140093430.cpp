// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140093430  size: 227 bytes
// Name:    FUN_140093430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140093430(float param_1,longlong param_2,float param_3,float param_4,float *param_5,
                  float *param_6,char param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  
  fVar4 = _DAT_1469c4e5c;
  pfVar5 = (float *)0x1469c3f2c;
  pfVar7 = (float *)0x1469c4e50;
  if (param_7 != '\0') {
    pfVar5 = (float *)0x1469c3f30;
  }
  pfVar6 = (float *)0x1469c4e4c;
  if (param_7 != '\0') {
    pfVar6 = (float *)0x1469c4e54;
    pfVar7 = (float *)0x1469c4e58;
  }
  auVar8 = ZEXT416(_DAT_145fc7020);
  auVar1 = vmaxss_avx(ZEXT416((uint)((param_3 - param_4) * _DAT_145fc6edc * *pfVar5)),auVar8);
  param_1 = param_1 / auVar1._0_4_;
  auVar1 = vminss_avx(ZEXT416((uint)(param_1 * *pfVar6)),ZEXT416(_DAT_145fc6ed8));
  auVar2 = vminss_avx(ZEXT416((uint)(param_1 * *pfVar7)),ZEXT416(_DAT_145fc6ed8));
  fVar3 = auVar1._0_4_ * _DAT_1469c4e5c;
  auVar1 = vminss_avx(ZEXT416((uint)*param_5),auVar1);
  *param_5 = auVar1._0_4_;
  auVar1 = vminss_avx(ZEXT416((uint)*param_6),ZEXT416((uint)fVar3));
  *param_6 = auVar1._0_4_;
  auVar1 = vmaxss_avx(ZEXT416(*(uint *)(param_2 + 0x48)),auVar8);
  *param_5 = auVar1._0_4_ * (auVar2._0_4_ - *param_5) + *param_5;
  *param_6 = -(auVar1._0_4_ * (-(auVar2._0_4_ * fVar4) + *param_6)) + *param_6;
  return;
}

