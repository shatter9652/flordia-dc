// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401423b0  size: 59 bytes
// Name:    FUN_1401423b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140142f00, FUN_1401423f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401423b0(longlong param_1)

{
  uint uStack_1c;
  
  FUN_140142f00();
  if (*(char *)(param_1 + 0xd5) == '\0') {
    FUN_1401423f0(param_1);
  }
  if (*(char *)(param_1 + 0xd4) == '\0') {
    func_0x000144f16940(param_1 + 0xd0,&uStack_1c);
    if ((~uStack_1c & 0xfffffff) != 0) {
      func_0x000144fefc30(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 200) = 0;
    return;
  }
  return;
}

