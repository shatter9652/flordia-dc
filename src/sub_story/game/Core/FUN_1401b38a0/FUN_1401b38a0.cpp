// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b38a0  size: 63 bytes
// Name:    FUN_1401b38a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401b38a0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  iVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar1 == iVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  return iVar1 == iVar2;
}

