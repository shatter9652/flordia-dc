// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1458ac0d0  size: 85 bytes
// Name:    rlHttpTask::Configure
// Subsystem: core
// Class:   rlHttpTask
//
// Evidence:
//   GTAVSRC: rlHttpTask::Configure  (rage/base/src/rline/ros/rlroshttptask.cpp)
//   literal: application/json; charset=utf-8
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141bc3de0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlHttpTask.h"


void rlHttpTask__Configure(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_1 + 0x38);
  if (uVar2 == *(ushort *)(param_1 + 0x3a)) {
    FUN_141bc3de0(param_1 + 0x30,uVar2 + 4);
    uVar2 = *(ushort *)(param_1 + 0x38);
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(ushort *)(param_1 + 0x38) = uVar2 + 1;
  *(undefined **)(lVar1 + (ulonglong)uVar2 * 0x10) = &UNK_146782698;
  *(undefined **)(lVar1 + 8 + (ulonglong)uVar2 * 0x10) = &UNK_146788d5c;
  return;
}

