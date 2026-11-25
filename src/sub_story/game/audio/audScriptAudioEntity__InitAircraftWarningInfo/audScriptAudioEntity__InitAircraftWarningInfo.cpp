// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1458fd140  size: 409 bytes
// Name:    audScriptAudioEntity::InitAircraftWarningInfo
// Subsystem: audio
// Class:   audScriptAudioEntity
//
// Evidence:
//   GTAVSRC: audScriptAudioEntity::InitAircraftWarningInfo  (game/audio/scriptaudioentity.cpp)
//   literal: ENGINE_3_FIRE
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audScriptAudioEntity.h"


void audScriptAudioEntity__InitAircraftWarningInfo
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  
  func_0x000141c12e80(param_1 + 0x6f90,&UNK_1467876d4);
  func_0x000145549000(param_1 + 0x6fe4,&UNK_146788028,0x40);
  func_0x000141c12e50(param_1 + 0x7038,&UNK_146786a64,0x40);
  func_0x000141c12e50(param_1 + 0x708c,&UNK_146788018,0x40);
  func_0x000141c12e50(param_1 + 0x70e0,&UNK_146786ff4,0x40);
  func_0x000141c12ed0(param_1 + 0x7134);
  func_0x000141c12e50(param_1 + 0x7188,&UNK_14678663c,0x40);
  func_0x0001458fd2e0(param_1 + 0x71dc);
  func_0x000141c12e80(param_1 + 0x7230,&UNK_146787af3);
  func_0x000141c12e80(param_1 + 0x7284,&UNK_146787ae5);
  func_0x000141c12e80(param_1 + 0x72d8,&UNK_146787ad7);
  func_0x000141c12e80(param_1 + 0x732c,&UNK_146787ac9);
  func_0x000141c12e50(param_1 + 0x7380,&UNK_146786b3f,0x40);
  func_0x000141c12e50(param_1 + 0x73d4,&UNK_14678766e,0x40);
  func_0x000141c12e50(param_1 + 0x7428,&UNK_146788070,0x40);
  func_0x000141c12e50(param_1 + 0x747c,&UNK_146787383,0x40);
  func_0x000141c12e50(param_1 + 0x74d0,&UNK_146787026,0x40);
  func_0x000141c12eb0(param_1 + 0x7524);
  *(undefined1 *)(param_1 + 0x7578) = 0;
  uVar1 = func_0x000144ddb100(0);
  lVar2 = FUN_144e7e0f0(uVar1,0x1a2b712e,0x97,param_4,unaff_RSI);
  lRam0000000149e70918 = lVar2;
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x6fd8) = *(undefined8 *)(lVar2 + 0xc);
    *(undefined8 *)(param_1 + 0x702c) = *(undefined8 *)(lVar2 + 0x18);
    *(undefined8 *)(param_1 + 0x7080) = *(undefined8 *)(lVar2 + 0x24);
    *(undefined8 *)(param_1 + 0x70d4) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(param_1 + 0x7128) = *(undefined8 *)(lVar2 + 0x3c);
    *(undefined8 *)(param_1 + 0x717c) = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 *)(param_1 + 0x71d0) = *(undefined8 *)(lVar2 + 0x54);
    *(undefined8 *)(param_1 + 0x7224) = *(undefined8 *)(lVar2 + 100);
    *(undefined8 *)(param_1 + 0x7278) = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(param_1 + 0x72cc) = *(undefined8 *)(lVar2 + 0x7c);
    *(undefined8 *)(param_1 + 0x7320) = *(undefined8 *)(lVar2 + 0x88);
    *(undefined8 *)(param_1 + 0x7374) = *(undefined8 *)(lVar2 + 0x94);
    *(undefined8 *)(param_1 + 0x73c8) = *(undefined8 *)(lVar2 + 0xa0);
    *(undefined8 *)(param_1 + 0x741c) = *(undefined8 *)(lVar2 + 0xac);
    *(undefined8 *)(param_1 + 0x7470) = *(undefined8 *)(lVar2 + 0xb8);
    *(undefined8 *)(param_1 + 0x74c4) = *(undefined8 *)(lVar2 + 0xc4);
    *(undefined8 *)(param_1 + 0x7518) = *(undefined8 *)(lVar2 + 0xd4);
    *(undefined8 *)(param_1 + 0x756c) = *(undefined8 *)(lVar2 + 0xe4);
  }
  return;
}

