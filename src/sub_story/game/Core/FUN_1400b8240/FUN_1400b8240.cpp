// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8240  size: 139 bytes
// Name:    FUN_1400b8240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b8490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b8240(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (_DAT_148d7ab1c < _DAT_148d51b5c) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7ab1c < _DAT_148d51b5c) {
      puVar1 = *(undefined8 **)(_DAT_148d51b60 + (ulonglong)_DAT_148d7ab1c * 8);
      _DAT_148d7ab1c = _DAT_148d7ab1c + 1;
    }
    else {
      _DAT_148d7ab1c = _DAT_148d7ab1c + 1;
      puVar1 = (undefined8 *)func_0x000144f97130(0x1e0);
    }
  }
  else {
    puVar1 = (undefined8 *)func_0x000144f97130(0x1e0);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1400b8490(puVar1,param_1,param_2,0x14);
    *puVar1 = &UNK_1464711f0;
  }
  return puVar1;
}

