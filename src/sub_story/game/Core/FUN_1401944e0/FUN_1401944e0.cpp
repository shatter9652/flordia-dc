// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401944e0  size: 143 bytes
// Name:    FUN_1401944e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1401944e0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  
  if (param_2 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_2 + 4);
    fVar4 = *(float *)(param_2 + 8);
    lVar1 = func_0x000145350ce0(param_1,param_3);
    fVar4 = fVar4 * *(float *)(lVar1 + 0x1ac);
    auVar3._0_12_ = ZEXT812(0);
    auVar3._12_4_ = 0;
    _DAT_14ab7ef38 = (_DAT_14ab7ef38 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_14ab7ef38 >> 0x20);
    auVar3 = vmaxss_avx(ZEXT416((uint)(fVar2 - fVar4)),auVar3);
    fVar2 = (float)((uint)_DAT_14ab7ef38 & 0x7fffff) *
            ((fVar4 + fVar2) - auVar3._0_4_) * _DAT_14615af54 + auVar3._0_4_;
  }
  return fVar2;
}

