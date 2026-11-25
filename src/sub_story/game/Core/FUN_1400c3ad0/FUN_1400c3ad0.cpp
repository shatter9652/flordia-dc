// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c3ad0  size: 166 bytes
// Name:    FUN_1400c3ad0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c3f20, FUN_1400c4090, FUN_1400c4660, FUN_144ea31c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400c3ad0(int param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (ulonglong)(param_1 - 1) * 0x10;
  uVar1 = *(undefined4 *)(param_2 + 8 + lVar5);
  lVar2 = *(longlong *)(param_2 + lVar5);
  uVar3 = func_0x0001452d88f0(0x230);
  FUN_1400c4660(uVar3,0,0,0,0,0,0,2);
  FUN_144ea31c0(param_3,uVar3);
  lVar4 = func_0x000144f5cca0(*(undefined4 *)(lVar2 + 0x34),*(undefined8 *)(lVar2 + 0x38),uVar1);
  if (lVar4 == 0) {
    FUN_1400c3f20(lVar2,uVar3,*(undefined4 *)(param_2 + 0xc + lVar5));
  }
  else {
    FUN_1400c4090(lVar2,uVar3,uVar1);
  }
  return uVar3;
}

