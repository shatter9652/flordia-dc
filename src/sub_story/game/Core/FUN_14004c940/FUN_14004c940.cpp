// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004c940  size: 113 bytes
// Name:    FUN_14004c940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004c940(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fVar5;
  longlong unaff_GS_OFFSET;
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  float fVar6;
  float fVar7;
  
  auVar9 = ZEXT1664(_DAT_148617e50);
  auVar8 = _DAT_148617e50;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    auVar8 = auVar9._0_16_;
  }
  lVar4 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
  fVar5 = auVar8._4_4_ * _DAT_14615bc50;
  fVar1 = *(float *)(lVar4 + 0xf4);
  fVar6 = auVar8._8_4_ * _DAT_14615bc50;
  fVar2 = *(float *)(lVar4 + 0xf8);
  fVar7 = auVar8._12_4_ * _DAT_14615bc50;
  fVar3 = *(float *)(lVar4 + 0xfc);
  *param_1 = auVar8._0_4_ * _DAT_14615bc50 + *(float *)(lVar4 + 0xf0);
  param_1[1] = fVar5 + fVar1;
  param_1[2] = fVar6 + fVar2;
  param_1[3] = fVar7 + fVar3;
  return;
}

