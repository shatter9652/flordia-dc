// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145946d30  size: 57 bytes
// Name:    CLadderMetadataManager::Load
// Subsystem: core
// Class:   CLadderMetadataManager
//
// Evidence:
//   GTAVSRC: CLadderMetadataManager::Load  (game/task/Movement/Climbing/Ladders/LadderMetadataManager.cpp)
//   literal: common:/data/ai/Ladders
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141795170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CLadderMetadataManager.h"


void CLadderMetadataManager__Load(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = func_0x000145946d70();
  FUN_141795170(param_1,&UNK_14677b809,&UNK_146785ca1,uVar1,0x1491ad530);
  return;
}

