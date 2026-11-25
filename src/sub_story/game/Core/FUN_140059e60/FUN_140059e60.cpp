// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140059e60  size: 184 bytes
// Name:    FUN_140059e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e95360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140059e60(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar3 = func_0x000144d9c140(0x10,param_1[5]);
  func_0x000145f40560(lVar3,param_1[4],param_1[5]);
  lVar4 = *param_1;
  lVar2 = param_1[4];
  if (*(short *)(lVar4 + 0x4c) != 0) {
    lVar5 = 8;
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x38) + lVar5);
      *plVar1 = *plVar1 + (lVar3 - lVar2);
      lVar5 = lVar5 + 0x10;
      lVar4 = *param_1;
    } while (uVar6 < *(ushort *)(lVar4 + 0x4c));
  }
  FUN_144e95360(param_1,param_2,0);
  lVar4 = *param_1;
  if (*(short *)(lVar4 + 0x4c) != 0) {
    lVar5 = 8;
    uVar6 = 0;
    do {
      uVar6 = uVar6 + 1;
      plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x38) + lVar5);
      *plVar1 = *plVar1 - (lVar3 - lVar2);
      lVar5 = lVar5 + 0x10;
      lVar4 = *param_1;
    } while (uVar6 < *(ushort *)(lVar4 + 0x4c));
  }
  *(longlong *)(param_2 + 0x18) = lVar3;
  *(longlong *)(param_2 + 0x20) = param_1[5];
  return;
}

