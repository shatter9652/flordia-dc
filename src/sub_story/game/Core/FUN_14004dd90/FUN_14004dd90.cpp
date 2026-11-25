// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004dd90  size: 229 bytes
// Name:    FUN_14004dd90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004dfc0, FUN_14004e840, FUN_14004e330, FUN_14004e7a0, FUN_14004e010, FUN_14004e3d0, FUN_14004e8e0, FUN_14004e100, FUN_14004e2e0, FUN_14004e380, FUN_14004e150, FUN_14004e290, FUN_14004df70, FUN_14004e0b0, FUN_14004e420, FUN_144ead9e0, FUN_14004e1f0, FUN_14004e060, FUN_14004df20, FUN_14004e1a0, FUN_14004e240, FUN_14004ded0, FUN_14004de80, FUN_14004e7f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004dd90(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  
  uVar1 = FUN_144ead9e0(*(undefined4 *)(*(longlong *)(*param_1 + 0x20) + 0x264));
  FUN_14004de80(param_1);
  FUN_14004ded0(param_1);
  FUN_14004df20(param_1);
  FUN_14004df70(param_1);
  FUN_14004e8e0(param_1,uVar1);
  FUN_14004dfc0(param_1);
  FUN_14004e010(param_1);
  FUN_14004e060(param_1);
  FUN_14004e0b0(param_1);
  FUN_14004e100(param_1);
  FUN_14004e150(param_1);
  FUN_14004e1a0(param_1);
  FUN_14004e1f0(param_1);
  FUN_14004e240(param_1);
  FUN_14004e290(param_1);
  FUN_14004e2e0(param_1);
  FUN_14004e330(param_1);
  FUN_14004e380(param_1);
  FUN_14004e3d0(param_1);
  FUN_14004e420(param_1);
  FUN_14004e7a0(param_1);
  FUN_14004e7f0(param_1);
  FUN_14004e840(param_1);
  lVar2 = FUN_144e6f420(param_1,0x688888d9,0,1,unaff_RSI);
  uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0xac);
  *(uint *)((longlong)param_1 + 0xac) = *(uint *)((longlong)param_1 + 0xac) + 1;
  param_1[uVar3 * 3 + 0x16] = lVar2;
  param_1[uVar3 * 3 + 0x17] = (longlong)&UNK_14044b4e0;
  *(undefined1 *)(param_1 + uVar3 * 3 + 0x18) = 0;
  return;
}

