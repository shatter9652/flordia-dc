// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1425a4e10  size: 119 bytes
// Name:    audEngineUtil::InitClass
// Subsystem: audio
// Class:   audEngineUtil
//
// Evidence:
//   GTAVSRC: audEngineUtil::InitClass  (rage/base/src/audioengine/engine.cpp)
//   literal: %s%saudioconfig.dat
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141e73fb0, FUN_1458219b0, audConfig::GetData, FUN_145e13790, FUN_14550f720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/audEngineUtil.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void audEngineUtil__InitClass(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [128];
  
  _DAT_149ab3c80 = param_1;
  _DAT_149ab3c88 = param_2;
  _DAT_14aa31ce0 = param_1;
  _DAT_14aa31ce8 = param_2;
  func_0x000145f0bf80();
  if (DAT_149ab80f0 == '\0') {
    FUN_14550f720(auStack_88,&UNK_14677af96,0x14aa412e8,0x14aa413e8);
    FUN_145e13790(auStack_88);
    FUN_1458219b0();
    audConfig__GetData();
  }
  FUN_141e73fb0();
  return;
}

