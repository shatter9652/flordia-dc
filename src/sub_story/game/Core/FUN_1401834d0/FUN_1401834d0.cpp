// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401834d0  size: 253 bytes
// Name:    FUN_1401834d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0, FUN_14503e140, FUN_140182870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401834d0(longlong *param_1,undefined8 param_2,longlong param_3,undefined2 param_4,
                  char param_5)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((*(byte *)(param_3 + 10) & 0x10) == 0) {
    if (param_1[8] == 0) {
      return;
    }
    FUN_140182870(param_1[8]);
  }
  else {
    lVar3 = FUN_14503e140(param_3 + 0x40,4);
    lVar3 = *(longlong *)(lVar3 + 8);
    if (param_5 != '\0') {
      plVar4 = (longlong *)FUN_14503e0d0(lVar3);
      (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_1,0,lVar3,param_4);
      return;
    }
    if (*(longlong *)(lVar3 + 0x28) == param_1[8] && param_1[8] != 0) {
      return;
    }
    plVar4 = (longlong *)FUN_14503e0d0(lVar3);
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_1,0,lVar3,param_4);
  }
  if ((param_1[4] != 0) && (cVar2 = (**(code **)(*param_1 + 0x58))(param_1), cVar2 != '\0')) {
    uVar5 = 0x1000000;
    uVar1 = *(uint *)((longlong)param_1 + 0x4c);
    if (-1 < (int)uVar1) {
      uVar5 = 0x81000000;
      param_1[10] = *(longlong *)(param_1[4] + 0xb0);
      *(longlong **)(param_1[4] + 0xb0) = param_1;
    }
    *(uint *)((longlong)param_1 + 0x4c) = uVar5 | uVar1;
    return;
  }
  return;
}

