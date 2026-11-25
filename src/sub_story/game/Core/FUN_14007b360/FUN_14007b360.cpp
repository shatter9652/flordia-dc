// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007b360  size: 110 bytes
// Name:    FUN_14007b360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007b360(longlong param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((*(byte *)(param_1 + 0x1b) & 0x38) == 0) {
    puVar9 = (undefined8 *)func_0x000144e4c9d0((int)*(short *)(param_1 + 0x14));
    puVar9[4] = *puVar9;
    puVar9[5] = puVar9[1];
    puVar9[6] = puVar9[2];
    puVar9[7] = puVar9[3];
    uVar2 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar2;
    uVar2 = param_2[3];
    puVar9[2] = param_2[2];
    puVar9[3] = uVar2;
  }
  else {
    puVar9 = (undefined8 *)func_0x000144e4c9d0((int)*(short *)(param_1 + 0x16));
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    *puVar9 = *param_2;
    puVar9[1] = uVar2;
    puVar9[2] = uVar3;
    puVar9[3] = uVar4;
    puVar9[4] = uVar5;
    puVar9[5] = uVar6;
    puVar9[6] = uVar7;
    puVar9[7] = uVar8;
    auVar1 = vpshuflw_avx(ZEXT416(*(uint *)(param_1 + 0x14)),0xe1);
    *(int *)(param_1 + 0x14) = auVar1._0_4_;
  }
  return;
}

