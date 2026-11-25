// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071940  size: 69 bytes
// Name:    FUN_140071940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140071940(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2;
  do {
    lVar2 = lVar1;
    lVar1 = *(longlong *)(lVar2 + 0x28);
  } while (*(longlong *)(lVar2 + 0x28) != 0);
  while (lVar2 != param_2) {
    lVar1 = *(longlong *)(param_2 + 0x28);
    func_0x0001456a39f0(param_1,param_2,lVar2);
    param_2 = lVar1;
  }
  return param_2;
}

