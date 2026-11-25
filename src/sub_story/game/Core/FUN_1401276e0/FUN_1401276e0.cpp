// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401276e0  size: 126 bytes
// Name:    FUN_1401276e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140127320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_1401276e0(longlong *param_1)

{
  int iVar1;
  
  func_0x000140127760();
  iVar1 = *(int *)((longlong)param_1 + 0x54);
  if (iVar1 == 1) {
    func_0x0001411b0bc0(param_1,2);
  }
  else if (iVar1 != 2) {
    if (iVar1 == 3) {
      return 1;
    }
    if (iVar1 == 5) {
      return 1;
    }
    goto LAB_14012774a;
  }
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if (iVar1 == 1) {
    if (*(int *)((longlong)param_1 + 0x54) == 6) {
      return 1;
    }
    func_0x0001411b0bc0(param_1,3);
    return 1;
  }
  if (iVar1 != 2) {
    return iVar1;
  }
LAB_14012774a:
  FUN_140127320(param_1,2);
  return 2;
}

