// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117a80  size: 36 bytes
// Name:    FUN_140117a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140117a80(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = func_0x000144dd0bd0();
  if (lVar1 != 0) {
    lVar1 = func_0x000144d9fa60(*(undefined4 *)(lVar1 + 0x9c));
    if (lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x30);
    }
    return uVar2;
  }
  return 0;
}

