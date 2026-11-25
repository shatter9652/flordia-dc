// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145b67eb0  size: 1085 bytes
// Name:    audCategoryControllerManager::InstancePtr
// Subsystem: audio
// Class:   audCategoryControllerManager
//
// Evidence:
//   GTAVSRC: audCategoryControllerManager::InstancePtr  (game/audio/music/musicplayer.cpp)
//   literal: INTERACTIVE_MUSIC_%.1d
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145b68360, FUN_145534890, FUN_141d83250, FUN_145b68310, FUN_140e12db0, FUN_140c8a070, FUN_145b683a0, FUN_141d83340, FUN_140f325d0, FUN_140bf2390, FUN_145b68590
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audCategoryControllerManager.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void audCategoryControllerManager__InstancePtr(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [96];
  
  *(undefined1 *)(param_1 + 0x3180) = 0;
  func_0x000140d44f50();
  func_0x000141d8f5a0(param_1 + 0x2610,0);
  FUN_145534890(auStack_78,&UNK_146784ed6,1);
  uVar3 = FUN_141d83250(auStack_78);
  *(undefined8 *)(param_1 + 0x2758) = uVar3;
  uVar3 = FUN_140c8a070(0x9205c7a1);
  *(undefined8 *)(param_1 + 0x3058) = uVar3;
  uVar3 = FUN_140c8a070(0xd3594a47);
  *(undefined8 *)(param_1 + 0x3060) = uVar3;
  lVar4 = FUN_140c8a070(0x4aa37aa8);
  *(longlong *)(param_1 + 0x3068) = lVar4;
  if (lVar4 != 0) {
    func_0x00014582af10(lVar4,uVar3);
  }
  *(undefined2 *)(param_1 + 0x3181) = 0x100;
  if (_DAT_149e585c0 != 0) {
    uVar3 = FUN_140f325d0(_DAT_149e585c0,0x7f35e4f5);
    *(undefined8 *)(param_1 + 0x3078) = uVar3;
    uVar3 = FUN_140f325d0(_DAT_149e585c0,0x20230050);
    *(undefined8 *)(param_1 + 0x3080) = uVar3;
    uVar3 = FUN_140f325d0(_DAT_149e585c0,0x7f35e4f5);
    *(undefined8 *)(param_1 + 0x3088) = uVar3;
    uVar3 = FUN_140f325d0(_DAT_149e585c0,0x20230050);
    *(undefined8 *)(param_1 + 0x3090) = uVar3;
    FUN_145534890(auStack_b8,&UNK_146784fe0,1);
    FUN_145534890(auStack_b8,&UNK_146784fe0,2);
    FUN_145534890(auStack_b8,&UNK_146784fe0,3);
    FUN_145534890(auStack_b8,&UNK_146784fe0,4);
    FUN_145534890(auStack_b8,&UNK_146784fe0,5);
    FUN_145534890(auStack_b8,&UNK_146784fe0,6);
    FUN_145534890(auStack_b8,&UNK_146784fe0,7);
    FUN_145534890(auStack_b8,&UNK_146784fe0,8);
    FUN_145534890(auStack_b8,&UNK_146784fe0,9);
    FUN_145534890(auStack_b8,&UNK_1467853a5,10);
    FUN_145534890(auStack_b8,&UNK_1467853a5,0xb);
    FUN_145534890(auStack_b8,&UNK_1467853a5,0xc);
    FUN_145534890(auStack_b8,&UNK_1467853a5,0xd);
    FUN_145534890(auStack_b8,&UNK_1467853a5,0xe);
    FUN_145534890(auStack_b8,&UNK_1467853a5,0xf);
    FUN_145534890(auStack_b8,&UNK_1467853a5,0x10);
    FUN_145b68310(param_1 + 0x130);
    FUN_141d83340(param_1 + 0x160);
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x30fc) = auVar5;
    *(undefined8 *)(param_1 + 0x310c) = 0x400000000;
    *(undefined1 *)(param_1 + 0x31b7) = 0;
    *(undefined1 (*) [16])(param_1 + 0x3114) = auVar5;
    *(undefined8 *)(param_1 + 0x3128) = 0;
    *(undefined8 *)(param_1 + 0x312e) = 0;
    *(undefined1 (*) [16])(param_1 + 0x3138) = auVar5;
    *(undefined8 *)(param_1 + 0x31a4) = 0;
    *(undefined2 *)(param_1 + 0x31ac) = 0;
    *(undefined1 *)(param_1 + 0x31b5) = 0;
    *(undefined4 *)(param_1 + 0x31b1) = 0;
    FUN_140bf2390(param_1,0);
    FUN_140bf2390(param_1,1);
    func_0x0001453758b0(param_1 + 0x3148,_DAT_1461682a0,1);
    func_0x000145b68330(param_1 + 0xe8);
    uVar2 = _DAT_146159bd0;
    auVar7 = ZEXT464(_DAT_146159bd0);
    *(undefined2 *)(param_1 + 0x3183) = 0;
    FUN_140e12db0(0x149e25bd8,0x7dc8fbec,uVar2);
    auVar8 = ZEXT464(_DAT_146159bd4);
    FUN_140e12db0(0x149e25bb8,0xee42c1c0,_DAT_146159bd4);
    FUN_140e12db0(0x149e25ba8,0x8e70a13b,auVar8._0_8_);
    FUN_140e12db0(0x149e25bc8,0xd22df9a6,auVar8._0_8_);
    FUN_140e12db0(0x149e25b78,0x9513bd99,_DAT_146159c64);
    FUN_140e12db0(0x149e25b88,0x65746ce5,_DAT_14615a2c4);
    FUN_140e12db0(0x149e25b98,0x943f8bc6,auVar7._0_8_);
    auVar6._4_4_ = _DAT_145fc6f48;
    auVar6._0_4_ = _DAT_145fc6f48;
    auVar6._8_4_ = _DAT_145fc6f48;
    auVar6._12_4_ = _DAT_145fc6f48;
    _DAT_149e25bf8 = vmovlps_avx(auVar6);
    _DAT_149e25be8 = _DAT_14615a110;
    uRam0000000149e25bf0 = _UNK_14615a118;
    FUN_140e12db0(0x149e25c00,0xbd7bbdb9,auVar7._0_8_);
    FUN_140e12db0(0x149e25c10,0xe100c693,_DAT_146159c58);
    FUN_145b68590();
    FUN_145b68360();
    FUN_145b683a0();
    func_0x000145b682f0();
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

