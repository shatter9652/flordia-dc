// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181ef0  size: 110 bytes
// Name:    FUN_140181ef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140181f60, FUN_140181ff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_140181ef0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    func_0x00014503e5b0();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    FUN_140181f60(uVar1,param_1 + 0x18);
    func_0x00014503e5c0(uVar1);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      func_0x00014503e5c0();
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  FUN_140181ff0(param_1,*(undefined8 *)(param_3 + 8));
  return 1;
}

