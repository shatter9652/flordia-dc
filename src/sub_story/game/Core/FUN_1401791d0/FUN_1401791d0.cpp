// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401791d0  size: 102 bytes
// Name:    FUN_1401791d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14026e850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401791d0(undefined8 *param_1,undefined8 param_2,undefined1 (*param_3) [16],
                  undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uVar2 = (ulonglong)(((uint)param_2 & 0xffff) << 4);
  if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar2) ==
       (short)((ulonglong)param_2 >> 0x10)) &&
     (lVar1 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar2), lVar1 != 0)) {
    uStack_18 = *param_1;
    uStack_10 = param_1[1];
    FUN_14026e850(param_3,lVar1,param_2,&uStack_18,param_4);
  }
  else {
    auVar3._0_12_ = ZEXT812(0);
    auVar3._12_4_ = 0;
    *param_3 = auVar3;
  }
  return;
}

