// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400481d0  size: 138 bytes
// Name:    FUN_1400481d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010a630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1400481d0(longlong param_1,longlong *param_2,short param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xb0))();
  lVar4 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  if ((cVar2 == '\0') || (lVar4 == 0)) {
    if (param_3 != 0) {
LAB_14004824a:
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0xffffffff;
      return param_2;
    }
  }
  else {
    sVar1 = *(short *)(*(longlong *)(lVar4 + 0x1a8) + 0x34);
    if (param_3 < sVar1) {
      uVar3 = FUN_14010a630(lVar4,*(undefined4 *)
                                   (*(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 0x20) + 8 +
                                   (longlong)param_3 * 0x70));
      goto LAB_14004822b;
    }
    if (sVar1 != param_3) goto LAB_14004824a;
  }
  uVar3 = func_0x000144e05fa0();
LAB_14004822b:
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}

