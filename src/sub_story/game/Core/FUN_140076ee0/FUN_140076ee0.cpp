// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076ee0  size: 92 bytes
// Name:    FUN_140076ee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140076ee0(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  uVar2 = (ulonglong)_DAT_149274040;
  if (_DAT_149274040 != 0) {
    puVar4 = (undefined4 *)0x149274044;
    do {
      plVar3 = (longlong *)func_0x0001400771c0(*puVar4,puVar4[1]);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xe8))(plVar3);
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != (undefined4 *)(uVar2 * 8 + 0x149274044));
  }
  uVar1 = _DAT_149274040;
  LOCK();
  _DAT_149274040 = 0;
  UNLOCK();
  return uVar1;
}

