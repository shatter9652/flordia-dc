// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140092f40  size: 141 bytes
// Name:    FUN_140092f40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019bff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140092f40(undefined4 *param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
  if (((lVar4 != 0) &&
      (uVar5 = (ulonglong)*(byte *)(lVar4 + 0xc0 + (ulonglong)DAT_14a95df40), uVar5 != 0xff)) &&
     (lVar1 = *(longlong *)(lVar4 + 0x10 + uVar5 * 8), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x9c) == 0) {
      uVar3 = (**(code **)(*param_3 + 0x10))(param_3);
      func_0x0001404f9e40(lVar4,uVar3);
    }
    cVar2 = FUN_14019bff0(lVar1,param_2);
    if (cVar2 != '\0') {
      *param_1 = param_2;
      *(longlong *)(param_1 + 2) = lVar1;
    }
  }
  return;
}

