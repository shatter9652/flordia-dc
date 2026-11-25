// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001e800  size: 96 bytes
// Name:    FUN_14001e800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14505efe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001e800(longlong *param_1,longlong *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_30 [24];
  
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((2 < uVar1) && (uVar1 == 3)) {
    func_0x000144377e90(param_2[4],auStack_30,param_3);
    FUN_14505efe0(auStack_30,param_1,0);
    return;
  }
  if (param_3 == 0) {
    plVar3 = (longlong *)
             ((longlong)param_2 +
             (ulonglong)((uint)*(byte *)((longlong)param_2 + 0x4783) * 0x30) + 0x44d0);
  }
  else if (param_3 == 1) {
    plVar3 = param_2 + (ulonglong)(*(int *)((longlong)param_2 + 0x3b74) - 1) * 6 + 0x770;
  }
  else {
    if (param_3 != 7) {
      uVar2 = 0xffffffff;
      lVar4 = 0;
      goto code_r0x000144dfbe71;
    }
    plVar3 = param_2 + (ulonglong)(*(int *)((longlong)param_2 + 0x4e14) - 1) * 6 + 0x9c4;
  }
  uVar2 = (undefined4)*plVar3;
  lVar4 = param_2[4];
code_r0x000144dfbe71:
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = uVar2;
  return;
}

