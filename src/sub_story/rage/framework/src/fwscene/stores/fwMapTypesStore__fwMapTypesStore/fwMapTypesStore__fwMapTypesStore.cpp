// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145bb1ee0  size: 167 bytes
// Name:    fwMapTypesStore::fwMapTypesStore
// Subsystem: rage
// Class:   fwMapTypesStore
//
// Evidence:
//   GTAVSRC: fwMapTypesStore::fwMapTypesStore  (rage/framework/src/fwscene/stores/maptypesstore.cpp)
//   literal: MapTypesStore
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ebbc30, FUN_141a625a0, FUN_1419ca0b0, FUN_1401bd1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fwMapTypesStore.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fwMapTypesStore__fwMapTypesStore(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_1419ca0b0(&DAT_147c21ac8,&UNK_146782139,0x4a,1,1,0);
  _DAT_147c21ac8 = &UNK_1461d0ed0;
  _DAT_147c21b20 = 0;
  FUN_141a625a0();
  lVar2 = FUN_144ebbc30(0x4a,0);
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x000145f407f0(lVar2);
  }
  FUN_1401bd1f0(0x147c21b38,lVar2,uVar1);
  func_0x0001417c8b30(0x147c21b48);
  DAT_147c21b70 = 0;
  return;
}

