// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071fe0  size: 97 bytes
// Name:    FUN_140071fe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143b65c40, FUN_1406dfaa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140071fe0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x90))();
  if ((char)uVar2 != '\0') {
    FUN_1406dfaa0(param_1,param_2);
    if (DAT_146c133ec == '\x01') {
      cVar1 = FUN_143b65c40(param_1,param_2);
    }
    else {
      cVar1 = (**(code **)(*param_2 + 0x80))(param_2);
    }
    if (cVar1 != '\0') {
      func_0x00014075ad50(param_2,1);
    }
  }
  return uVar2;
}

