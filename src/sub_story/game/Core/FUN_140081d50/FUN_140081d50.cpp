// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081d50  size: 135 bytes
// Name:    FUN_140081d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140081de0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140081d50(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    uVar1 = 0x1ffff;
  }
  else {
    uVar1 = (uint)((ulonglong)(param_3 - *_DAT_14abb6918) / (ulonglong)*(uint *)(_DAT_14abb6918 + 1)
                  ) & 0x1ffff;
    uVar1 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)uVar1 * 4) & 0xfffe0000 | uVar1;
  }
  uVar1 = FUN_140081de0(param_1,param_2,uVar1);
  lVar2 = (ulonglong)(uVar1 & 0xf) * 0x1c0 + 0x10 + (ulonglong)(uVar1 >> 4) * 0x1c10 + param_2;
  if (uVar1 == 0xffffffff) {
    lVar2 = 0;
  }
  lVar2 = lVar2 + 0x20;
  if (uVar1 == 0xffffffff) {
    lVar2 = 0;
  }
  return lVar2;
}

