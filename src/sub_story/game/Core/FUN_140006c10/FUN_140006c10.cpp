// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006c10  size: 241 bytes
// Name:    FUN_140006c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006d10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140006c10(longlong param_1,int param_2,longlong param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = (longlong)param_2 * 0x10;
  uVar1 = *(undefined1 *)(param_1 + 0x4ed + lVar6);
  iVar2 = *(int *)(param_1 + 0x4e4 + lVar6);
  if (*(int *)(param_1 + 0x6f4) == iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x6e0);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0xc) != 4)) ||
       (cVar4 = FUN_140006d10(param_1,(longlong *)(param_1 + 0x6e0),uVar1,param_3,param_4),
       cVar4 == '\0')) goto LAB_140006c3c;
LAB_140006ce8:
    lVar6 = param_1 + 0x4e0 + lVar6;
    *(byte *)(lVar6 + 0xf) = *(byte *)(lVar6 + 0xf) | *(byte *)(param_3 + 0x34);
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
  else {
LAB_140006c3c:
    if (*(int *)(param_1 + 0x70c) == iVar2) {
      lVar3 = *(longlong *)(param_1 + 0x6f8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0xc) == 4)) &&
         (cVar4 = FUN_140006d10(param_1,(longlong *)(param_1 + 0x6f8),uVar1,param_3,param_4),
         cVar4 != '\0')) goto LAB_140006ce8;
    }
    auVar7._0_12_ = ZEXT812(0);
    auVar7._12_4_ = 0;
    uVar5 = 0;
    *(undefined1 (*) [16])(param_3 + 0x18) = auVar7;
    *(undefined8 *)(param_3 + 0x28) = 0xffffffffffffffff;
    *(undefined4 *)(param_3 + 0x30) = 0xffffffff;
    *(undefined1 *)(param_3 + 0x34) = 0;
  }
  return uVar5;
}

