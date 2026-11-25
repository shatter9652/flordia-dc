// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145ad7e90  size: 109 bytes
// Name:    CPtFxSortedEntity::InitPool
// Subsystem: core
// Class:   CPtFxSortedEntity
//
// Evidence:
//   GTAVSRC: CPtFxSortedEntity::InitPool  (game/vfx/particles/PtFxEntity.cpp)
//   literal: PtFxSortedEntity
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1416cbe00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CPtFxSortedEntity.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CPtFxSortedEntity__InitPool(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = func_0x0001450cef40(*(undefined8 *)(_DAT_14abbeef0 + 8),
                              *(undefined4 *)(_DAT_14abbeef0 + 0x10),0x4d6735ae,1);
  lVar2 = func_0x000144f97130(0x38);
  if (lVar2 != 0) {
    func_0x000144fc2180(0,&UNK_1467784fa);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    FUN_1416cbe00(lVar2,uVar1,0xf0);
  }
  _DAT_149974a98 = lVar2;
  return;
}

