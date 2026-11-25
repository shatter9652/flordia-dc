// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7390  size: 154 bytes
// Name:    FUN_1401a7390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a7450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a7390(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  
  if (param_2 == '\0') {
    plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
    uVar3 = *(byte *)((longlong)plVar2 + 0xfa) - 5;
    if ((uVar3 < 2) || (*(byte *)((longlong)plVar2 + 0xfa) == 1)) {
      uVar3 = (**(code **)(*plVar2 + 0x480))(plVar2,CONCAT71((uint7)(uint3)(uVar3 >> 8),1));
      uVar6 = (ulonglong)uVar3;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  if (0 < *(int *)(param_1 + 0x94)) {
    lVar5 = 0;
    do {
      FUN_1401a7450(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x94));
  }
  if (0 < *(int *)(param_1 + 100)) {
    iVar4 = 0;
    do {
      uVar1 = func_0x000144f2e340(*(undefined8 *)(param_1 + 0x68),iVar4);
      func_0x0001401a7430(uVar1,uVar6 & 0xffffffff);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 100));
  }
  return;
}

