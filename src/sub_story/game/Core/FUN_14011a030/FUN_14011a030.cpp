// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a030  size: 77 bytes
// Name:    FUN_14011a030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011a500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011a030(longlong param_1)

{
  undefined1 auVar1 [16];
  
  FUN_14011a500();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    func_0x000144d9c130();
  }
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffff9d;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  return;
}

