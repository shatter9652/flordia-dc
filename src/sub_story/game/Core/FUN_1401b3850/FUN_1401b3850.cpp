// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b3850  size: 69 bytes
// Name:    FUN_1401b3850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b3850(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar2 == 6) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((longlong)param_2 + 0xc) = uVar1;
    *(int *)(param_2 + 1) = (int)uVar1;
  }
  else {
    if (iVar2 != 5) {
      return 0;
    }
    param_2[1] = *(longlong *)(param_1 + 8);
  }
  return 1;
}

