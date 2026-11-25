// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f8800  size: 77 bytes
// Name:    FUN_1400f8800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1400f8850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f8800(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (lVar1 != 0) {
    FUN_140004b40(0x14875e4d0);
    FUN_1400f8850(*(undefined8 *)(param_1 + 0x38),lVar1);
    func_0x000144d9dab0(0x14875e4d0);
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return;
}

