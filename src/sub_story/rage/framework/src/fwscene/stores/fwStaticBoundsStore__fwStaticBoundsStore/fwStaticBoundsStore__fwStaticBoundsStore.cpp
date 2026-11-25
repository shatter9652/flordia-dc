// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141e0d790  size: 210 bytes
// Name:    fwStaticBoundsStore::fwStaticBoundsStore
// Subsystem: rage
// Class:   fwStaticBoundsStore
//
// Evidence:
//   GTAVSRC: fwStaticBoundsStore::fwStaticBoundsStore  (rage/framework/src/fwscene/stores/staticboundsstore.cpp)
//   literal: StaticBounds
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ebbc30, FUN_1401bd1f0, FUN_141a625a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fwStaticBoundsStore.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fwStaticBoundsStore__fwStaticBoundsStore(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  _DAT_14aad3da0 = &UNK_14658fe50;
  _DAT_14aad3da8 = 0;
  _DAT_14aad3db0 = 1;
  FUN_1401bd1f0(0x14aad3db8,&UNK_14677c727,0xc);
  DAT_14aad3dc8 = 0;
  _DAT_14aad3dcc = 0x60000002f;
  DAT_14aad3dd4 = 0;
  _DAT_14aad3da0 = &UNK_1461d0050;
  _DAT_14aad3df8 = 0;
  FUN_141a625a0();
  lVar2 = FUN_144ebbc30(6,0);
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x000145f407f0(lVar2);
  }
  FUN_1401bd1f0(0x14aad3e10,lVar2,uVar1);
  func_0x000145978830(0x14aad3e20);
  DAT_14aad3e48 = 0;
  return;
}

