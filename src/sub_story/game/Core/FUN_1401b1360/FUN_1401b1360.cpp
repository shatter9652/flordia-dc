// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b1360  size: 77 bytes
// Name:    FUN_1401b1360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1418b15e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401b1360(ulonglong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  if (((param_1 & 0x20) == 0) ||
     (((uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1), param_2 != 0 &&
       (lVar1 = FUN_1418b15e0(*(undefined4 *)(param_2 + 2000),*(undefined8 *)(param_2 + 0x7d8),0),
       lVar1 != 0)) &&
      (lVar1 = func_0x000144f3a220(*(undefined4 *)(lVar1 + 0x100)), lVar1 != param_3)))) {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}

