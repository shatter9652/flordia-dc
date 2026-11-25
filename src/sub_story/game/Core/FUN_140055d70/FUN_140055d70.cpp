// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055d70  size: 55 bytes
// Name:    FUN_140055d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140055d70(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 == -1) {
    uVar2 = (**(code **)(*param_1 + 0x28))(param_1,1);
    *(undefined8 *)(param_2 + 0x2e8) = uVar2;
  }
  else {
    *(char *)(param_2 + 0x390) = cVar1;
  }
  return;
}

