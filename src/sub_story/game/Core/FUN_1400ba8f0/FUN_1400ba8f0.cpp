// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ba8f0  size: 155 bytes
// Name:    FUN_1400ba8f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140fd0890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400ba8f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (_DAT_148d7ab08 < _DAT_148d4cb0c) {
    LOCK();
    UNLOCK();
    if (_DAT_148d7ab08 < _DAT_148d4cb0c) {
      puVar1 = *(undefined8 **)(_DAT_148d4cb10 + (ulonglong)_DAT_148d7ab08 * 8);
      _DAT_148d7ab08 = _DAT_148d7ab08 + 1;
    }
    else {
      _DAT_148d7ab08 = _DAT_148d7ab08 + 1;
      puVar1 = (undefined8 *)func_0x000144f97130(0xb70);
    }
  }
  else {
    puVar1 = (undefined8 *)func_0x000144f97130(0xb70);
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_140fd0890(puVar1,param_1,param_2,0x10);
    *puVar1 = &UNK_146470d20;
    *(uint *)((longlong)puVar1 + 0xb6c) = (uint)*(byte *)((longlong)puVar1 + 0xb6f) << 0x18;
  }
  return puVar1;
}

