// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140075a10  size: 96 bytes
// Name:    FUN_140075a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140075a10(uint param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = func_0x000144d9c140(8,(ulonglong)param_1 << 4);
  lVar1 = _DAT_148406350;
  if ((ulonglong)_DAT_14840634c != 0) {
    func_0x000145f40560(uVar2,_DAT_148406350,(ulonglong)_DAT_14840634c << 4);
  }
  if (lVar1 != 0) {
    func_0x000144d9c130(lVar1);
  }
  _DAT_148406350 = uVar2;
  _DAT_148406348 = param_1;
  return;
}

