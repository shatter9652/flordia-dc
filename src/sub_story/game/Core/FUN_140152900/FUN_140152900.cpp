// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140152900  size: 124 bytes
// Name:    FUN_140152900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a9e30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140152900(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = func_0x0001450bb780(*(undefined4 *)(param_1 + 0x9c));
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 0x110);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x14) = 0;
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          func_0x000144d9c130();
        }
        *(undefined4 *)(lVar1 + 0x10) = 0;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        FUN_1456a9e30(lVar1);
        func_0x000144d9c130(lVar1,0x60);
      }
      *(undefined8 *)(lVar2 + 0x110) = 0;
    }
  }
  return;
}

