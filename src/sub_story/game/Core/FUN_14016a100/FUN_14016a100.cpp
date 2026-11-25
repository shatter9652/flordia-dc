// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016a100  size: 133 bytes
// Name:    FUN_14016a100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e258f0, FUN_14540c4c0, FUN_14010a630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016a100(int *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iStack_28;
  undefined4 uStack_24;
  
  lVar2 = FUN_144e258f0(param_2);
  if ((lVar2 == 0) || (*(int *)(lVar2 + 0x10) == 0)) {
    lVar2 = *(longlong *)(param_2 + 0x38);
    if (lVar2 == 0) {
      param_1[0] = 0;
      param_1[1] = -1;
      return;
    }
  }
  else {
    uVar1 = FUN_14010a630(lVar2,param_3);
    FUN_14540c4c0(lVar2,&iStack_28,uVar1);
    if (iStack_28 != 0) {
      *(ulonglong *)param_1 = CONCAT44(uStack_24,iStack_28);
      return;
    }
  }
  param_1[1] = -2;
  if (lVar2 == 0) {
    *param_1 = 0;
    return;
  }
  *param_1 = *(int *)(lVar2 + 0x10) + (uint)(*(int *)(lVar2 + 0x10) == 0);
  return;
}

