// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140185c90  size: 209 bytes
// Name:    FUN_140185c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451825c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140185c90(longlong *param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  uint uStack_68;
  uint uStack_64;
  undefined1 auStack_48 [40];
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1,param_3);
  uVar2 = _DAT_145fc6ed8;
  if (plVar4 != (longlong *)0x0) {
    cVar3 = (**(code **)(*param_1 + 0x80))(param_1,auStack_48);
    if (cVar3 == '\0') {
      (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    }
    else {
      (**(code **)(*plVar4 + 0x38))(plVar4,&uStack_68);
      FUN_1451825c0(param_2,auStack_48,&uStack_68);
    }
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_68);
    param_2[3] = (float)uStack_64 * param_2[1] + (float)uStack_68 * *param_2 + param_2[3];
    param_2[7] = (float)uStack_64 * param_2[5] + (float)uStack_68 * param_2[4] + param_2[7];
    return;
  }
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  *param_2 = 1.0;
  *(undefined1 (*) [16])(param_2 + 1) = auVar5;
  uVar1 = vmovlps_avx(ZEXT416(uVar2));
  *(undefined8 *)(param_2 + 5) = uVar1;
  param_2[7] = 0.0;
  return;
}

