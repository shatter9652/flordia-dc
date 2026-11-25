// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003db40  size: 50 bytes
// Name:    FUN_14003db40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003dff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14003db40(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte in_AL;
  
  *param_3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x1e0);
  if (lVar1 != 0) {
    param_1 = lVar1;
    in_AL = FUN_14003dff0(lVar1);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar1 != 0 & in_AL) & 0xffffffff;
}

