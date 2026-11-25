// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145b92b00  size: 167 bytes
// Name:    fwPoseMatcherStore::fwPoseMatcherStore
// Subsystem: rage
// Class:   fwPoseMatcherStore
//
// Evidence:
//   GTAVSRC: fwPoseMatcherStore::fwPoseMatcherStore  (rage/framework/src/fwscene/stores/posematcherstore.cpp)
//   literal: PoseMatcherStore
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ebbc30, FUN_141a625a0, FUN_1419ca0b0, FUN_1401bd1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fwPoseMatcherStore.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fwPoseMatcherStore__fwPoseMatcherStore(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  FUN_1419ca0b0(&DAT_1480046d8,&UNK_14678216b,0x45,1,0,0x20);
  _DAT_1480046d8 = &UNK_1461d1800;
  _DAT_148004730 = 0;
  FUN_141a625a0();
  lVar2 = FUN_144ebbc30(0x45,0);
  if (lVar2 == 0) {
    lVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x000145f407f0(lVar2);
  }
  FUN_1401bd1f0(0x148004748,lVar2,uVar1);
  func_0x0001417c8b30(0x148004758);
  DAT_148004780 = 0;
  return;
}

