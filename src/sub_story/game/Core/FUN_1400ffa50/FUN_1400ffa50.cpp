// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ffa50  size: 251 bytes
// Name:    FUN_1400ffa50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ef63d0, FUN_1410bf430, FUN_14136c410, FUN_14302b830, FUN_140b49020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ffa50(int *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  
  if (param_2 == 0) {
    *param_1 = 0;
    return;
  }
  uVar1 = *(uint *)(param_2 + 0x30);
  if ((0x1cU >> (uVar1 & 0x1f) & 1) != 0) {
    *param_1 = 0;
    cVar2 = FUN_14302b830(param_1,param_2);
    if (cVar2 != '\0') {
      return;
    }
  }
  lVar5 = *(longlong *)(param_2 + 0x20);
  iVar7 = 0;
  lVar4 = FUN_1410bf430(lVar5,0);
  if (((lVar4 == 0) || (*(int *)(lVar4 + 4) != -1)) || (iVar3 = *(int *)(lVar4 + 8), iVar3 == 0)) {
    if (lVar5 != 0) {
      iVar7 = *(int *)(lVar5 + 0x68);
    }
    lVar5 = FUN_140b49020(_DAT_1499a9f98,iVar7,1,0);
    if (((lVar5 == 0) && ((char)uVar1 == '\x03')) &&
       (lVar5 = func_0x000144e59150(*(undefined4 *)(param_2 + 0x9c)), lVar5 != 0)) {
      FUN_144ef63d0(auStack_58,lVar5);
      lVar5 = func_0x000144ef6450(*(undefined2 *)(lVar5 + 0x15c));
      piVar6 = (int *)FUN_14136c410(*(undefined2 *)(param_2 + 0xf8),*(undefined4 *)(lVar5 + 0x2c),
                                    auStack_58);
      if ((piVar6 != (int *)0x0) && (iVar3 = *piVar6, iVar3 != 0)) goto LAB_1400ffb47;
    }
    *param_1 = iVar7;
  }
  else {
LAB_1400ffb47:
    *param_1 = iVar3;
  }
  return;
}

