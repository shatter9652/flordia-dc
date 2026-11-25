// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f4b50  size: 91 bytes
// Name:    FUN_1400f4b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14207b810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f4b50(longlong param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = (char)param_2;
  if (*(char *)(param_1 + 0x30) != cVar1) {
    *(char *)(param_1 + 0x30) = cVar1;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x3c) = 0;
    }
    FUN_14207b810(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x70),
                  *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    func_0x00014042e700();
    func_0x00014006add0(param_1,3,param_2 ^ 1);
  }
  return;
}

