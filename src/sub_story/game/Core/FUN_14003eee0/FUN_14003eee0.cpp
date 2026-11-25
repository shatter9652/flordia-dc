// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003eee0  size: 46 bytes
// Name:    FUN_14003eee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14003eee0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144fc0920();
  if (lVar2 == 0) {
    return 0;
  }
  if (((param_2 != 0) && (*(int *)(lVar2 + 0x14) != 0)) && (*(longlong *)(lVar2 + 0x18) != 0)) {
    cVar1 = FUN_140d15620(*(longlong *)(lVar2 + 0x18) +
                          (ulonglong)(*(int *)(lVar2 + 0x14) - 1) * 0x30,param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

