// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145c37770  size: 167 bytes
// Name:    ptfxAssetStore::ptfxAssetStore
// Subsystem: core
// Class:   ptfxAssetStore
//
// Evidence:
//   GTAVSRC: ptfxAssetStore::ptfxAssetStore  (rage/framework/src/vfx/ptfx/ptfxasset.cpp)
//   literal: PtFxAssetStore
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ebbc30, FUN_141a625a0, FUN_1419ca0b0, FUN_1401bd1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/ptfxAssetStore.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptfxAssetStore__ptfxAssetStore(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_1419ca0b0(&DAT_147bba998,&UNK_1467820e2,0x48,1,0,0x6a);
  _DAT_147bba998 = &UNK_146307650;
  _DAT_147bba9f0 = 0;
  FUN_141a625a0();
  lVar2 = FUN_144ebbc30(0x48,0);
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x000145f407f0(lVar2);
  }
  FUN_1401bd1f0(0x147bbaa08,lVar2,uVar1);
  func_0x0001417c8b30(0x147bbaa18);
  DAT_147bbaa40 = 0;
  return;
}

