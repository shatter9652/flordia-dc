// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b96f0  size: 152 bytes
// Name:    FUN_1400b96f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b9790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b96f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (_DAT_148d7ab0c < _DAT_148d4db1c) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7ab0c < _DAT_148d4db1c) {
      puVar1 = *(undefined8 **)(_DAT_148d4db20 + (ulonglong)_DAT_148d7ab0c * 8);
      _DAT_148d7ab0c = _DAT_148d7ab0c + 1;
    }
    else {
      _DAT_148d7ab0c = _DAT_148d7ab0c + 1;
      puVar1 = (undefined8 *)func_0x000144f97130(0xa90);
    }
  }
  else {
    puVar1 = (undefined8 *)func_0x000144f97130(0xa90);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1400b9790(puVar1,param_1,param_2);
    *puVar1 = &UNK_146470ec0;
    *(uint *)((longlong)puVar1 + 0xa8c) = (uint)*(byte *)((longlong)puVar1 + 0xa8f) << 0x18;
  }
  return puVar1;
}

