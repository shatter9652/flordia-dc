// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dc5450  size: 75 bytes
// Name:    rlScFriendsBaseTask::ConvertRosResultToError
// Subsystem: core
// Class:   rlScFriendsBaseTask
//
// Evidence:
//   GTAVSRC: rlScFriendsBaseTask::ConvertRosResultToError  (rage/base/src/rline/scfriends/rlscfriendstasks.cpp)
//   literal: InvalidArgument
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143da5f80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlScFriendsBaseTask.h"


void rlScFriendsBaseTask__ConvertRosResultToError
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143da5f80(param_2,&UNK_14677a3ee,0);
  uVar2 = 1;
  if (cVar1 == '\0') {
    cVar1 = FUN_143da5f80(param_2,&UNK_146785e54,0);
    uVar2 = 2;
    if (cVar1 == '\0') {
      return;
    }
  }
  *param_4 = uVar2;
  return;
}

