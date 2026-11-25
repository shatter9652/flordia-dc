// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140034820  size: 64 bytes
// Name:    FUN_140034820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140034820(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  *param_2 = 0;
  lVar1 = func_0x000144e681d0(*(undefined4 *)(param_1 + 0x9c));
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    *param_2 = lVar1 + 800;
    bVar2 = *(int *)(lVar1 + 0x324) != 0;
  }
  return bVar2;
}

