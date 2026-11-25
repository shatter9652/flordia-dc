// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145c170f0  size: 79 bytes
// Name:    CWanted::Overrides::SetDifficulty
// Subsystem: core
// Class:   CWanted
//
// Evidence:
//   GTAVSRC: CWanted::Overrides::SetDifficulty  (game/game/Wanted.cpp)
//   literal: Wanted Tuning
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141279100
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CWanted.h"


undefined8 * CWanted__Overrides__SetDifficulty(undefined8 *param_1)

{
  func_0x000144fc2180(0,&UNK_14678594b);
  *param_1 = &UNK_146727710;
  *(undefined4 *)(param_1 + 1) = 0x6a858b3d;
  FUN_141279100(param_1,&UNK_1467810d5,1);
  *param_1 = &UNK_1461bff90;
  return param_1;
}

