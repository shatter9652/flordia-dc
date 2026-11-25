// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dc5dc0  size: 275 bytes
// Name:    rlLeaderboard2CommonReadTask::Configure
// Subsystem: core
// Class:   rlLeaderboard2CommonReadTask
//
// Evidence:
//   GTAVSRC: rlLeaderboard2CommonReadTask::Configure  (rage/base/src/rline/rlstats.cpp)
//   literal: platformName
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1457d1ec0, FUN_142097ba0, FUN_1451181c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlLeaderboard2CommonReadTask.h"


undefined8
rlLeaderboard2CommonReadTask__Configure
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1451181c0(param_2);
  plVar3 = (longlong *)func_0x00014502b2e0();
  uVar4 = (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
  func_0x000145b209f0(param_4,uVar4);
  uVar2 = FUN_142097ba0(uVar2);
  cVar1 = func_0x0001458e7840(param_4,&UNK_14677aa2d,uVar2);
  if (cVar1 == '\0') {
    uVar2 = 200;
    uVar4 = 0xe9a60d9f;
  }
  else {
    cVar1 = func_0x0001458e7840(param_4,&UNK_146782af7,&UNK_146778a23);
    if (cVar1 == '\0') {
      uVar2 = 0xc9;
      uVar4 = 0x94a5f220;
    }
    else {
      cVar1 = func_0x000145993580(param_4,*param_3);
      if (cVar1 == '\0') {
        uVar2 = 0xca;
        uVar4 = 0x90ad37c0;
      }
      else {
        cVar1 = func_0x0001458e7840(param_4,&UNK_146781405,param_3 + 1);
        if (cVar1 != '\0') {
          return 1;
        }
        uVar2 = 0xcb;
        uVar4 = 0x40203400;
      }
    }
  }
  FUN_1457d1ec0(0x146c31c50,1,uVar2,uVar4);
  return 0;
}

