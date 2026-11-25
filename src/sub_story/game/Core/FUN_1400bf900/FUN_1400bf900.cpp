// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bf900  size: 55 bytes
// Name:    FUN_1400bf900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452afef0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400bf900(undefined4 param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_14a9ec8e0;
  uVar2 = FUN_1452afef0(_DAT_14a9ec8e0,2,param_1);
  if ((int)uVar2 < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x90) + (ulonglong)uVar2 * 8);
  }
  return uVar3;
}

