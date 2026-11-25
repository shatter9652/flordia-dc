// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026b70  size: 81 bytes
// Name:    FUN_140026b70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140026b70(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar2 == lVar1) {
      return true;
    }
  }
  if (param_3 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(longlong *)(param_3 + 8) == lVar1;
  }
  return bVar3;
}

