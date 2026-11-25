// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dc8cb0  size: 191 bytes
// Name:    rlClanRosBaseTask::ConvertRosResultToClanError
// Subsystem: core
// Class:   rlClanRosBaseTask
//
// Evidence:
//   GTAVSRC: rlClanRosBaseTask::ConvertRosResultToClanError  (rage/base/src/rline/clan/rlclantasks.cpp)
//   literal: PlayerAccount
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143da5f80, FUN_1457d1ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlClanRosBaseTask.h"


void rlClanRosBaseTask__ConvertRosResultToClanError
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_143da5f80(param_2,&UNK_1467848ff,&UNK_14677aa4a);
  uVar3 = 6;
  if (cVar1 == '\0') {
    cVar1 = FUN_143da5f80(param_2,&UNK_146779ba1,&UNK_14677a42b);
    uVar3 = 8;
    if (cVar1 == '\0') {
      cVar1 = FUN_143da5f80(param_2,&UNK_146779ba1,&UNK_146779f28);
      uVar3 = 9;
      if (cVar1 == '\0') {
        cVar1 = FUN_143da5f80(param_2,&UNK_146779ba1,&UNK_146779f36);
        uVar3 = 10;
        if (cVar1 == '\0') {
          uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
          FUN_1457d1ec0(uVar2,5,0x6c,0x4999c9fd);
          uVar3 = 0xffffffff;
        }
      }
    }
  }
  *param_4 = uVar3;
  return;
}

