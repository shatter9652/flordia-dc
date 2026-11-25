// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14415bc50  size: 58 bytes
// Name:    spdAABB::PreLoad
// Subsystem: core
// Class:   spdAABB
//
// Evidence:
//   GTAVSRC: spdAABB::PreLoad  (rage/base/src/spatialdata/aabb.cpp)
//   literal: MinAndBoundingRadius
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14407c810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/spdAABB.h"


void spdAABB__PreLoad(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  FUN_14407c810(param_2,&UNK_14677b0fc,param_1);
  lVar1 = FUN_14044f900(param_2,&UNK_14677b111,0,0);
  if (lVar1 != 0) {
    FUN_1420ac710(lVar1,&uStack_28);
    *(undefined8 *)(param_1 + 0x10) = uStack_28;
    *(undefined8 *)(param_1 + 0x18) = uStack_20;
  }
  return;
}

