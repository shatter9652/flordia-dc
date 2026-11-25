// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400925e0  size: 88 bytes
// Name:    FUN_1400925e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400925e0(uint param_1)

{
  longlong lVar1;
  uint uStack_14;
  
  if (-1 < (int)param_1) {
    uStack_14 = param_1;
    (**(code **)(*_DAT_149ae98b8 + 0x10))(_DAT_149ae98b8,7,param_1 + 1,0xffffffff,&uStack_14,0);
    lVar1 = _DAT_149ae9938;
    *(undefined4 *)(_DAT_149ae9938 + 0x10 + (ulonglong)param_1 * 0x20) = 0;
    *(undefined1 *)(lVar1 + 0x18 + (ulonglong)param_1 * 0x20) = 1;
  }
  return;
}

