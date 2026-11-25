// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1402a5270  size: 481 bytes
// Name:    audNorthAudioEngine::GetCurrentAudioLevelName
// Subsystem: audio
// Class:   audNorthAudioEngine
//
// Evidence:
//   GTAVSRC: audNorthAudioEngine::GetCurrentAudioLevelName  (game/audio/ambience/ambientaudioentity.cpp)
//   literal: AMBIENT_ZONE_LIST_%s
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145534890, FUN_144fc21d0, FUN_141267580, FUN_14486a860, FUN_145e73f30, FUN_145c24e70, FUN_145c25f90, FUN_145c59750, FUN_14574b300, FUN_145a60e50, FUN_145c59990
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audNorthAudioEngine.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void audNorthAudioEngine__GetCurrentAudioLevelName(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  undefined1 auStack_138 [64];
  undefined1 auStack_f8 [64];
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [72];
  
  if (DAT_149e728c0 == '\x01') {
    iVar3 = func_0x000145a60ed0();
    if (iVar3 <= (int)(uint)_DAT_149eddc90) {
      uVar5 = FUN_145a60e50();
      iVar3 = func_0x000144fc2180(0,uVar5);
      if (((iVar3 == -0x2979b032) || (iVar3 == -0x11cc00e1)) || (iVar3 == -0x1f5021ba)) {
        FUN_145534890(auStack_78,&UNK_1467867c7);
        FUN_145534890(auStack_b8,&UNK_146787fe4);
        FUN_145534890(auStack_f8,&UNK_1467867a8);
        FUN_145534890(auStack_138,&UNK_146779be4);
        bVar2 = true;
      }
      else {
        FUN_145534890(auStack_78,&UNK_14677cc02,uVar5);
        FUN_145534890(auStack_b8,&UNK_14677cc52,uVar5);
        FUN_145534890(auStack_f8,&UNK_14677cbe0,uVar5);
        FUN_145534890(auStack_138,&UNK_14677cacf,uVar5);
        bVar2 = false;
      }
      lVar1 = param_1 + 0x3650;
      if (iVar3 == *(int *)(param_1 + 0x7bb8)) {
        FUN_145c25f90(param_1,0);
        FUN_145c59990(lVar1,0);
      }
      else {
        FUN_145c24e70(param_1);
        FUN_145c59750(lVar1);
        if (bVar2) {
          if ((iVar3 != -0x2979b032) && (iVar3 != -0x11cc00e1)) {
            uVar4 = FUN_144fc21d0(auStack_138,0);
            FUN_14574b300(lVar1,uVar4);
          }
          FUN_141267580(param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                                         iVar3 == -0x11cc00e1 || iVar3 == -0x2979b032) & 0xffffffff)
          ;
        }
        else {
          uVar4 = FUN_144fc21d0(auStack_138,0);
          FUN_14574b300(lVar1,uVar4);
        }
      }
      FUN_14486a860(param_1,auStack_78,auStack_b8,auStack_f8);
      uVar4 = FUN_144fc21d0(auStack_138,0);
      FUN_145e73f30(lVar1,uVar4);
      *(int *)(param_1 + 0x7bb8) = iVar3;
      *(undefined1 *)(param_1 + 0x7c74) = 1;
    }
  }
  return;
}

