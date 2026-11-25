// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b5ec0  size: 155 bytes
// Name:    FUN_1400b5ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f432d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b5ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (_DAT_148d7ab04 < _DAT_148d4bafc) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7ab04 < _DAT_148d4bafc) {
      puVar1 = *(undefined8 **)(_DAT_148d4bb00 + (ulonglong)_DAT_148d7ab04 * 8);
      _DAT_148d7ab04 = _DAT_148d7ab04 + 1;
    }
    else {
      _DAT_148d7ab04 = _DAT_148d7ab04 + 1;
      puVar1 = (undefined8 *)func_0x000144f97130(0x3a0);
    }
  }
  else {
    puVar1 = (undefined8 *)func_0x000144f97130(0x3a0);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_144f432d0(puVar1,param_1,param_2,0xf);
    *puVar1 = &UNK_146470b90;
    *(uint *)((longlong)puVar1 + 0x39c) = (uint)*(byte *)((longlong)puVar1 + 0x39f) << 0x18;
  }
  return puVar1;
}

