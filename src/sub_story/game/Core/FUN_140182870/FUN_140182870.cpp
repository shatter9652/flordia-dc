// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182870  size: 154 bytes
// Name:    FUN_140182870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140182870(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  
  if (param_1[2] == 0) {
    lVar1 = param_1[6];
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x40) = 0;
      *(byte *)(lVar1 + 0x4a) = *(byte *)(lVar1 + 0x4a) & 0xef;
      *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xdf;
    }
  }
  else {
    lVar1 = param_1[3];
    *(longlong *)(param_1[2] + 0x18) = lVar1;
    *(longlong *)(lVar1 + 0x10) = param_1[2];
  }
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar3;
  cVar2 = (char)*(ushort *)((longlong)param_1 + 0x4a);
  if ((*(ushort *)((longlong)param_1 + 0x4a) & 0x40) != 0) {
    (**(code **)(*param_1 + 0x28))(0,param_2,0);
    cVar2 = (char)*(undefined2 *)((longlong)param_1 + 0x4a);
  }
  if (cVar2 < '\0') {
    (**(code **)(*param_1 + 0x30))(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001401828d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}

