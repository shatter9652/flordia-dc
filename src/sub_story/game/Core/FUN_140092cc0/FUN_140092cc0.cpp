// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140092cc0  size: 75 bytes
// Name:    FUN_140092cc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140266500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140092cc0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_2 == -0x218132af) {
    bVar3 = true;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x40))();
    bVar3 = false;
    if ((param_2 != 0) && (lVar1 != 0)) {
      uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
      lVar1 = FUN_140266500(uVar2,param_2);
      bVar3 = lVar1 != 0;
    }
  }
  return bVar3;
}

