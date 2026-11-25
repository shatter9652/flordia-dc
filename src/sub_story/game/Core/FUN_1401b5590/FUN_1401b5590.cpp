// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b5590  size: 74 bytes
// Name:    FUN_1401b5590
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b55e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401b5590(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(**(longlong **)(*(longlong *)(*param_2 + 8) + 0x18) + 0x40))();
  iVar1 = FUN_1401b55e0(uVar2,*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x54) = iVar1;
  if (iVar1 != -1) {
    func_0x0001450b1cc0(param_1,param_2);
  }
  return iVar1 != -1;
}

