// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140198bb0  size: 147 bytes
// Name:    FUN_140198bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140198bb0(undefined1 (*param_1) [16],longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  *(undefined8 *)param_1[1] = 0;
  *param_1 = auVar4;
  if (param_2 != 0) {
    iVar3 = (int)param_3;
    if (iVar3 < 0x17) {
      func_0x000145f40560(param_1,param_2,param_3 & 0xffffffff);
      puVar2 = *param_1 + (param_3 & 0xff);
      param_1[1][7] = (byte)param_3 | 0x80;
    }
    else {
      lVar1 = func_0x000144f97130(iVar3 + 1);
      *(longlong *)*param_1 = lVar1;
      func_0x000145f40560(lVar1,param_2,param_3 & 0xffffffff);
      *(int *)(*param_1 + 8) = iVar3;
      *(int *)(*param_1 + 0xc) = iVar3 + 1;
      param_1[1][7] = 0;
      if (lVar1 == 0) {
        return;
      }
      puVar2 = (undefined1 *)(lVar1 + (param_3 & 0xffffffff));
    }
    *puVar2 = 0;
  }
  return;
}

