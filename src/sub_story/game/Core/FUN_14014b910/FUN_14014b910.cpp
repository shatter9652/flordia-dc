// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014b910  size: 280 bytes
// Name:    FUN_14014b910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450128a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14014b910(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  switch(param_3) {
  case 0:
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar4 = 0;
    goto code_r0x00014014b9e5;
  case 2:
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar4 = 2;
    break;
  case 3:
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar4 = 3;
    goto code_r0x00014014b989;
  case 4:
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar4 = 4;
    break;
  case 5:
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar4 = 5;
code_r0x00014014b989:
    uVar2 = FUN_1450128a0(**(undefined8 **)(lVar3 + 0x3b30),uVar4);
    uVar4 = 1;
    goto code_r0x00014014b9a9;
  default:
    if ((0x1e < param_3) || ((0x42600000U >> (param_3 & 0x1f) & 1) == 0)) {
      *param_2 = &UNK_1462feb60;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 0xff;
      return param_2;
    }
  case 1:
    lVar3 = *(longlong *)(param_1 + 0x20);
    uVar4 = 1;
code_r0x00014014b9e5:
    uVar1 = FUN_1450128a0(**(undefined8 **)(lVar3 + 0x3b30),uVar4);
    *param_2 = &UNK_1462feb60;
    param_2[1] = lVar3;
    *(undefined1 *)(param_2 + 2) = uVar1;
    return param_2;
  }
  uVar2 = FUN_1450128a0(**(undefined8 **)(lVar3 + 0x3b30),uVar4);
  uVar4 = 0;
code_r0x00014014b9a9:
  FUN_14014ba30(auStack_38,lVar3,uVar2,uVar4);
  *param_2 = &UNK_1462feb60;
  param_2[1] = uStack_30;
  *(undefined1 *)(param_2 + 2) = uStack_28;
  return param_2;
}

