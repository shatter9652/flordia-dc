// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004a7e0  size: 160 bytes
// Name:    FUN_14004a7e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004a890, FUN_14004a900
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_14004a7e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  float fVar6;
  
  uVar3 = FUN_14004a890(*(undefined8 *)(param_1 + 8));
  if ((ulonglong)*(uint *)(param_1 + 0xc4) == 0) {
    bVar4 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 200);
    bVar4 = 0;
    fVar6 = 0.0;
    lVar2 = lVar5 + (ulonglong)*(uint *)(param_1 + 0xc4) * 0x14;
    do {
      func_0x00014004a880(lVar5,uVar3);
      FUN_14004a900(lVar5,param_2,param_3);
      pfVar1 = (float *)(lVar5 + 0xc);
      lVar5 = lVar5 + 0x14;
      bVar4 = bVar4 | fVar6 < *pfVar1;
    } while (lVar5 != lVar2);
  }
  return bVar4;
}

