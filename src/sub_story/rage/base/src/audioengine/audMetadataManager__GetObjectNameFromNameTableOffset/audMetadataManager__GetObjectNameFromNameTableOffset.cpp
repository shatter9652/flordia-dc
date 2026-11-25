// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140fee420  size: 154 bytes
// Name:    audMetadataManager::GetObjectNameFromNameTableOffset
// Subsystem: audio
// Class:   audMetadataManager
//
// Evidence:
//   GTAVSRC: audMetadataManager::GetObjectNameFromNameTableOffset  (rage/base/src/audioengine/metadatamanager.cpp)
//   literal: (unknown object name)
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400554e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audMetadataManager.h"


undefined * audMetadataManager__GetObjectNameFromNameTableOffset(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  if ((*(int *)(param_1 + 0xd0) == 3) || (*(int *)(param_1 + 0xd0) == 0)) {
    FUN_1400554e0(&uStack_20,*(undefined4 *)(param_1 + 0xac));
    uVar2 = (ulonglong)*(ushort *)(param_1 + 0x80);
    puVar5 = &UNK_146789e58;
    if (uVar2 != 0) {
      puVar3 = *(uint **)(param_1 + 0x78);
      do {
        uVar4 = (ulonglong)param_2;
        bVar6 = param_2 < puVar3[1];
        param_2 = param_2 - puVar3[1];
        if (bVar6) {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xd8 + (ulonglong)*puVar3 * 0xf8);
          if (lVar1 == 0) {
            puVar5 = &UNK_146789de1;
          }
          else {
            puVar5 = (undefined *)(lVar1 + uVar4);
          }
          break;
        }
        puVar3 = puVar3 + 2;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    func_0x000144e7e320(uStack_20,uStack_1c);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

