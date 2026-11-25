// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c4310  size: 279 bytes
// Name:    FUN_1400c4310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1448b69c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c4310(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  lVar1 = (ulonglong)param_3 * 4;
  if (*(uint *)(param_1 + 0x1f8) < param_3) {
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    FUN_1448b69c0(param_1 + 0x1f8,param_3);
    func_0x000145f40560(*(undefined8 *)(param_1 + 0x200),param_2,lVar1);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1fc);
    if (uVar2 < param_3) {
      if ((ulonglong)uVar2 == 0) {
        uVar3 = 0;
      }
      else {
        func_0x000145f40560(*(undefined8 *)(param_1 + 0x200),param_2,(ulonglong)uVar2 << 2);
        uVar3 = (ulonglong)*(uint *)(param_1 + 0x1fc);
      }
      func_0x000145f40560(uVar3 * 4 + *(longlong *)(param_1 + 0x200),(longlong)param_2 + uVar3 * 4,
                          (param_3 - uVar3) * 4);
    }
    else if (param_3 == 2) {
      **(undefined8 **)(param_1 + 0x200) = *param_2;
    }
    else {
      func_0x000145f40560(*(undefined8 **)(param_1 + 0x200),param_2,lVar1);
    }
  }
  *(uint *)(param_1 + 0x1fc) = param_3;
  return;
}

