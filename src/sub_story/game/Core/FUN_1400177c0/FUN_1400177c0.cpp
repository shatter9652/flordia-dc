// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400177c0  size: 119 bytes
// Name:    FUN_1400177c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db2a80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400177c0(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  uVar7 = FUN_144db2a80();
  lVar8 = func_0x000144db2a60(uVar7,0);
  if (lVar8 == 0) {
    *param_2 = ZEXT416(_DAT_145fc6ed8);
    *(undefined8 *)param_2[1] = _DAT_146159bc0;
    *(undefined8 *)(param_2[1] + 8) = 0;
    uVar7 = _UNK_14614f7f8;
    *(undefined8 *)param_2[2] = _DAT_14614f7f0;
    *(undefined8 *)(param_2[2] + 8) = uVar7;
    param_2[3] = ZEXT816(0) << 0x20;
  }
  else {
    uVar7 = *(undefined8 *)(lVar8 + 0x10);
    uVar1 = *(undefined8 *)(lVar8 + 0x18);
    uVar2 = *(undefined8 *)(lVar8 + 0x20);
    uVar3 = *(undefined8 *)(lVar8 + 0x28);
    uVar4 = *(undefined8 *)(lVar8 + 0x38);
    uVar5 = *(undefined8 *)(lVar8 + 0x40);
    uVar6 = *(undefined8 *)(lVar8 + 0x48);
    *(undefined8 *)param_2[2] = *(undefined8 *)(lVar8 + 0x30);
    *(undefined8 *)(param_2[2] + 8) = uVar4;
    *(undefined8 *)param_2[3] = uVar5;
    *(undefined8 *)(param_2[3] + 8) = uVar6;
    *(undefined8 *)*param_2 = uVar7;
    *(undefined8 *)(*param_2 + 8) = uVar1;
    *(undefined8 *)param_2[1] = uVar2;
    *(undefined8 *)(param_2[1] + 8) = uVar3;
  }
  return;
}

