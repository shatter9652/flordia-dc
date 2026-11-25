// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140176990  size: 47 bytes
// Name:    FUN_140176990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140176b20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140176990(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_140176b20();
  if (iVar1 != 0) {
    *param_2 = iVar1;
    param_2[2] = *(int *)(param_1 + 0x28);
    param_2[3] = 2;
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}

