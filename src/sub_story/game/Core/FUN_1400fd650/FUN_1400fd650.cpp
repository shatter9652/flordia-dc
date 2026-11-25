// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fd650  size: 138 bytes
// Name:    FUN_1400fd650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fd650(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  if (uVar1 == *param_1) {
    uVar3 = 1;
    if (1 < uVar1) {
      uVar3 = uVar1 >> 1;
    }
    lVar2 = func_0x000144d9c140(4,(ulonglong)(uVar3 + uVar1) * 4);
    if ((ulonglong)param_1[1] != 0) {
      func_0x000145f40560(lVar2,*(undefined8 *)(param_1 + 2),(ulonglong)param_1[1] << 2);
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      func_0x000144d9c130();
    }
    *(longlong *)(param_1 + 2) = lVar2;
    *param_1 = uVar3 + uVar1;
    uVar1 = param_1[1];
  }
  else {
    lVar2 = *(longlong *)(param_1 + 2);
  }
  param_1[1] = uVar1 + 1;
  *(undefined4 *)(lVar2 + (ulonglong)uVar1 * 4) = param_2;
  return;
}

