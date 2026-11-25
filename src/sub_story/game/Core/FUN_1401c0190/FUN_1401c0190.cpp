// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c0190  size: 84 bytes
// Name:    FUN_1401c0190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401c0190(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = func_0x000144e4f2e0();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x121) & 0x10) == 0) {
      return 0;
    }
    lVar1 = *(longlong *)(lVar1 + 0xb0);
    if (lVar1 == 0) {
      return 0;
    }
    if ((param_2 < *(uint *)(lVar1 + 0xd00)) && (param_2 < *(uint *)(lVar1 + 0x34))) {
      return *(undefined8 *)(lVar1 + 0x88 + (ulonglong)param_2 * 0x90);
    }
  }
  return 0;
}

