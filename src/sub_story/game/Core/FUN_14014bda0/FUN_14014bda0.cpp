// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014bda0  size: 40 bytes
// Name:    FUN_14014bda0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014c010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14014bda0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [64];
  undefined1 auVar4 [16];
  undefined1 extraout_var [56];
  
  auVar3._0_8_ = FUN_14014c010(*(undefined4 *)(param_1 + 0x20));
  auVar3._8_56_ = extraout_var;
  auVar2 = auVar3._0_16_;
  if ((_DAT_145fc6ed8 < (float)auVar3._0_8_) || ((float)auVar3._0_8_ < 0.0)) {
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar2);
    auVar4 = vcmpss_avx(auVar2,auVar4,5);
    auVar2._0_4_ = auVar4._0_4_ & auVar1._0_4_;
    auVar2._4_4_ = 0;
    auVar2._8_4_ = auVar4._8_4_ & auVar1._8_4_;
    auVar2._12_4_ = auVar4._12_4_ & auVar1._12_4_;
  }
  return auVar2._0_4_ * (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x18)) +
         *(float *)(param_1 + 0x18);
}

