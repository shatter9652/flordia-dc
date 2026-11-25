// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019b3c0  size: 79 bytes
// Name:    FUN_14019b3c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14019b3c0(int param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  
  if (param_1 == 4) {
    fVar2 = (float)func_0x0001406d1ee0(param_2);
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    auVar1 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416((uint)(fVar2 * _DAT_14615a240)));
    auVar4 = vcmpss_avx(ZEXT416((uint)(fVar2 * _DAT_14615a240)),auVar4,1);
    uVar3 = CONCAT44(~auVar4._4_4_ & auVar1._4_4_,~auVar4._0_4_ & auVar1._0_4_);
  }
  else if (param_1 == 1) {
    uVar3 = (ulonglong)_DAT_14615a220;
  }
  else {
    uVar3 = (ulonglong)_DAT_145fc6ed8;
  }
  return uVar3;
}

