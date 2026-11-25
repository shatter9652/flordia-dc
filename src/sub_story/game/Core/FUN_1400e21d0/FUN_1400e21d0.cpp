// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e21d0  size: 145 bytes
// Name:    FUN_1400e21d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14026e850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e21d0(undefined1 (*param_1) [16],undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = (ulonglong)(((uint)param_2 & 0xffff) << 4);
  if (*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar2) ==
      (short)((ulonglong)param_2 >> 0x10)) {
    uVar3 = *(undefined8 *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar2);
  }
  else {
    uVar3 = 0;
  }
  cVar1 = func_0x000140299090(uVar3);
  if (cVar1 == '\0') {
    *param_1 = (undefined1  [16])0x0;
  }
  else {
    uStack_38 = *param_3;
    uStack_30 = param_3[1];
    auVar4 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
    FUN_14026e850(param_1,uVar3,param_2,&uStack_38,auVar4._0_2_ | 0x10000);
  }
  return;
}

