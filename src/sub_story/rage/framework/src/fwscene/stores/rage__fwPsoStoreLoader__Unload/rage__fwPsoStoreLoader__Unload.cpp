// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 142b315c0  size: 372 bytes
// Name:    rage::fwPsoStoreLoader::Unload
// Subsystem: rage
// Class:   rage
//
// Evidence:
//   GTAVSRC: rage::fwPsoStoreLoader::Unload  (rage/framework/src/fwscene/stores/psostore.cpp)
//   literal: RemoveFromStore
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141db3cd0, FUN_141db8120, FUN_141c9b050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rage.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rage__fwPsoStoreLoader__Unload(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [8];
  undefined *apuStack_80 [9];
  code *pcStack_38;
  undefined *puStack_30;
  code *pcStack_28;
  
  if (DAT_149e257f0 == '\0') {
    _DAT_149e25768 = 0x149e25720;
    _DAT_149e257f0 = 0;
    if (apuStack_80 != (undefined **)0x0) {
      apuStack_80[0] = &DAT_149e25768;
    }
    pcStack_38 = FUN_142b31740;
    puStack_30 = &UNK_1456bdf20;
    pcStack_28 = (code *)&UNK_145955790;
    FUN_141c9b050(_DAT_149e58218,0xbdcca83662ce9483,auStack_88);
    if (pcStack_28 != (code *)0x0) {
      (*pcStack_28)(apuStack_80);
    }
    if (apuStack_80 != (undefined **)0x0) {
      apuStack_80[0] = &DAT_149e25768;
    }
    pcStack_38 = FUN_142b318d0;
    puStack_30 = &UNK_1456bdf20;
    pcStack_28 = (code *)&UNK_145955790;
    FUN_141db8120(_DAT_149e58218,0xbdcca83662ce9483,auStack_88);
    if (pcStack_28 != (code *)0x0) {
      (*pcStack_28)(apuStack_80);
    }
  }
  lVar1 = _DAT_1469a1828;
  if (_DAT_1469a1828 != 0) {
    uVar2 = func_0x000144fc2180(0,&UNK_146784c1a);
    puVar3 = (undefined8 *)func_0x000144f97130(0x10);
    *puVar3 = 0;
    puVar3[1] = &UNK_142b31940;
    FUN_141db3cd0(lVar1,uVar2,puVar3);
    uVar2 = func_0x000144fc2180(0,&UNK_14678220e);
    puVar3 = (undefined8 *)func_0x000144f97130(0x10);
    *puVar3 = 0;
    puVar3[1] = &UNK_142b31950;
    FUN_141db3cd0(lVar1,uVar2,puVar3);
  }
  return;
}

