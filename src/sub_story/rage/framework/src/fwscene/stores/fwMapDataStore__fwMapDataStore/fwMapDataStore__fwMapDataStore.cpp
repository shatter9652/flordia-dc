// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145beca30  size: 167 bytes
// Name:    fwMapDataStore::fwMapDataStore
// Subsystem: rage
// Class:   fwMapDataStore
//
// Evidence:
//   GTAVSRC: fwMapDataStore::fwMapDataStore  (rage/framework/src/fwscene/stores/mapdatastore.cpp)
//   literal: MapDataStore
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ebbc30, FUN_141a625a0, FUN_1419ca0b0, FUN_1401bd1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fwMapDataStore.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fwMapDataStore__fwMapDataStore(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_1419ca0b0(&DAT_14a024230,&UNK_1467822c8,0x49,1,1,0);
  _DAT_14a024230 = &UNK_1461d07f0;
  _DAT_14a024288 = 0;
  FUN_141a625a0();
  lVar2 = FUN_144ebbc30(0x49,0);
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x000145f407f0(lVar2);
  }
  FUN_1401bd1f0(0x14a0242a0,lVar2,uVar1);
  func_0x000145978830(0x14a0242b0);
  DAT_14a0242d8 = 0;
  return;
}

