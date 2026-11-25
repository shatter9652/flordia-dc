// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fd870  size: 225 bytes
// Name:    FUN_1400fd870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fd870(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iStack_14;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 0x65) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x14;
    *(int *)(lVar3 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  if (*(uint *)((longlong)param_1 + 0x34) <= *(uint *)(param_1 + 0x24)) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x7b;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)(puVar2 + 1) = (int)param_1[0x24];
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x34);
    (*(code *)*puVar2)(param_1,param_2);
  }
  if (*(char *)(param_1[0x34] + 0x18) != '\0') {
    (**(code **)(param_1[0x34] + 8))(param_1,param_2);
  }
  iStack_14 = 0;
  (**(code **)(param_1[0x35] + 8))
            (param_1,param_2,&iStack_14,*(int *)((longlong)param_1 + 0x34) != (int)param_1[0x24]);
  *(int *)(param_1 + 0x24) = (int)param_1[0x24] + iStack_14;
  return;
}

