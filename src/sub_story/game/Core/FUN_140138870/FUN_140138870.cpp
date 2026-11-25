// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140138870  size: 53 bytes
// Name:    FUN_140138870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b245f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140138870(longlong param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iStack_c;
  
  cVar1 = FUN_140b245f0(param_2,*(undefined4 *)(param_1 + 4),&iStack_c);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(param_1 + 8) == iStack_c;
  }
  return bVar2;
}

