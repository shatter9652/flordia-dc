// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bd1f0  size: 141 bytes
// Name:    FUN_1401bd1f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bd1f0(undefined1 (*param_1) [16],longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  *param_1 = auVar5;
  if (param_2 != 0) {
    iVar4 = (int)param_3;
    uVar3 = param_3 & 0xffffffff;
    if (iVar4 < 0xf) {
      func_0x000145f40560(param_1,param_2,(longlong)iVar4);
      puVar2 = *param_1 + (param_3 & 0xff);
      (*param_1)[0xf] = (byte)param_3 | 0x80;
    }
    else {
      lVar1 = func_0x000144f97130(iVar4 + 1);
      *(longlong *)*param_1 = lVar1;
      func_0x000145f40560(lVar1,param_2,uVar3);
      *(short *)(*param_1 + 8) = (short)uVar3;
      *(short *)(*param_1 + 10) = (short)(iVar4 + 1);
      (*param_1)[0xf] = 0;
      if (lVar1 == 0) {
        return;
      }
      puVar2 = (undefined1 *)(lVar1 + uVar3);
    }
    *puVar2 = 0;
  }
  return;
}

