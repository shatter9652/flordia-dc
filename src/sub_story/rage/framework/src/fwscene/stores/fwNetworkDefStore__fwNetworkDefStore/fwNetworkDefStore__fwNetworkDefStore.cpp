// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145bbbc60  size: 167 bytes
// Name:    fwNetworkDefStore::fwNetworkDefStore
// Subsystem: network
// Class:   fwNetworkDefStore
//
// Evidence:
//   GTAVSRC: fwNetworkDefStore::fwNetworkDefStore  (rage/framework/src/fwscene/stores/networkdefstore.cpp)
//   literal: NetworkDefStore
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ebbc30, FUN_141a625a0, FUN_1419ca0b0, FUN_1401bd1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fwNetworkDefStore.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fwNetworkDefStore__fwNetworkDefStore(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_1419ca0b0(&DAT_14a02dd78,&UNK_146782252,0x40,1,1,0);
  _DAT_14a02dd78 = &UNK_1461d16e0;
  _DAT_14a02ddd0 = 0;
  FUN_141a625a0();
  lVar2 = FUN_144ebbc30(0x40,0);
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x000145f407f0(lVar2);
  }
  FUN_1401bd1f0(0x14a02dde8,lVar2,uVar1);
  func_0x0001417c8b30(0x14a02ddf8);
  DAT_14a02de20 = 0;
  return;
}

