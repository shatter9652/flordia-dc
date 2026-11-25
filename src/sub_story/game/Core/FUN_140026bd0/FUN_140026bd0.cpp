// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026bd0  size: 186 bytes
// Name:    FUN_140026bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140026c90, FUN_140026d30, FUN_14526cbc0, FUN_140026b70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140026bd0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong alStack_30 [3];
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x18);
  (**(code **)(*plVar1 + 0xa8))(plVar1,alStack_30);
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x1d) == '\x01') {
      uVar4 = FUN_140026b70(param_1[2],plVar1,alStack_30[0]);
      param_1 = (longlong *)(ulonglong)uVar4;
      goto LAB_140026c67;
    }
LAB_140026c65:
    param_1 = (longlong *)0x0;
    goto LAB_140026c67;
  }
  if (((int)param_1[3] == -2) || (*(char *)((longlong)param_1 + 0x1d) == '\0')) {
    cVar2 = FUN_140026b70(param_1[2],plVar1,alStack_30[0]);
    if (cVar2 != '\0') goto LAB_140026c65;
  }
  uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
  lVar5 = FUN_140026d30(*(undefined4 *)(*param_1 + 0x10),*(undefined8 *)(*param_1 + 0x18),uVar3);
  if (lVar5 != 0) {
    cVar2 = FUN_14526cbc0(lVar5);
    param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (cVar2 != '\0') goto LAB_140026c67;
    cVar2 = FUN_140026c90(lVar5);
    if (cVar2 != '\0') goto LAB_140026c67;
  }
  param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),alStack_30[0] != 0);
LAB_140026c67:
  return (ulonglong)param_1 & 0xffffffff;
}

