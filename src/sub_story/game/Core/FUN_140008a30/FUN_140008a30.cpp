// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140008a30  size: 321 bytes
// Name:    FUN_140008a30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db2b70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140008a30(longlong param_1,longlong param_2,longlong param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  
  uVar5 = _DAT_145fc6f14;
  auVar8 = ZEXT464(_DAT_145fc6f14);
  *param_4 = 0.0;
  fVar1 = *(float *)(param_3 + 0xc4);
  fVar9 = *(float *)(param_2 + 0x534);
  param_4[1] = 0.0;
  fVar2 = *(float *)(param_3 + 0x184);
  fVar3 = *(float *)(param_2 + 0x534);
  *param_5 = 0.0;
  auVar4 = vmaxss_avx(ZEXT416(uVar5),ZEXT416((uint)(fVar1 * fVar9)));
  auVar7 = vmaxss_avx(ZEXT416(uVar5),ZEXT416((uint)(fVar2 * fVar3)));
  auVar4 = vmaxss_avx(auVar7,auVar4);
  auVar10 = ZEXT1664(auVar4);
  lVar6 = FUN_144db2b70(param_1 + 0x4c50,0);
  auVar11 = ZEXT464((uint)_DAT_145fc6ed8);
  fVar9 = _DAT_145fc6ed8 / auVar10._0_4_;
  auVar4 = vmaxss_avx(auVar8._0_16_,
                      ZEXT416((uint)(*(float *)(param_3 + 0xc4) * *(float *)(param_2 + 0x534))));
  auVar4 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),ZEXT416((uint)(auVar4._0_4_ * fVar9)));
  *param_4 = auVar4._0_4_;
  fVar1 = auVar4._0_4_ * *(float *)(lVar6 + 0x1080);
  *param_4 = fVar1;
  *param_5 = fVar1 + *param_5;
  lVar6 = FUN_144db2b70(param_1 + 0x4c50,1);
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  auVar4 = vmaxss_avx(auVar8._0_16_,
                      ZEXT416((uint)(*(float *)(param_3 + 0x184) * *(float *)(param_2 + 0x534))));
  auVar4 = vminss_avx(auVar11._0_16_,ZEXT416((uint)(auVar4._0_4_ * fVar9)));
  param_4[1] = auVar4._0_4_;
  fVar1 = auVar4._0_4_ * *(float *)(lVar6 + 0x1080);
  param_4[1] = fVar1;
  fVar1 = fVar1 + *param_5;
  auVar4 = vcmpps_avx(auVar11._0_16_,ZEXT416((uint)fVar1),5);
  *param_5 = fVar1;
  auVar7 = vcmpps_avx(ZEXT416((uint)fVar1),auVar7,6);
  return auVar7._0_4_ & auVar4._0_4_ & 0xffffff01;
}

