// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145ad7f00  size: 109 bytes
// Name:    CVehicleGlassComponentEntity::InitPool
// Subsystem: vehicle
// Class:   CVehicleGlassComponentEntity
//
// Evidence:
//   GTAVSRC: CVehicleGlassComponentEntity::InitPool  (game/vfx/vehicleglass/VehicleGlassComponent.cpp)
//   literal: VehicleGlassComponentEntity
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1416cbe00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CVehicleGlassComponentEntity.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CVehicleGlassComponentEntity__InitPool(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144f97130(0x38);
  if (lVar2 != 0) {
    uVar1 = func_0x0001450cef40(*(undefined8 *)(_DAT_14abbeef0 + 8),
                                *(undefined4 *)(_DAT_14abbeef0 + 0x10),0x5e047c3e,0x80);
    func_0x000144fc2180(0,&UNK_1467784de);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    FUN_1416cbe00(lVar2,uVar1,0xf0);
  }
  _DAT_149974aa8 = lVar2;
  return;
}

