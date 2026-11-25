// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140161450  size: 67 bytes
// Name:    FUN_140161450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140161450(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 4) = 0;
    if (*(longlong *)(lVar1 + 8) != 0) {
      func_0x000144d9c130();
    }
    func_0x000144d9c130(lVar1,0x48);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

