// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140028900  size: 155 bytes
// Name:    FUN_140028900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140028b90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140028900(float *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  auVar6 = ZEXT1664(*param_2);
  FUN_140028b90(&fStack_38);
  auVar4._0_4_ = (uint)auVar6._0_4_ ^ _DAT_145fc6f10;
  auVar4._4_4_ = (uint)auVar6._4_4_ ^ _DAT_145fc6f10;
  auVar4._8_4_ = (uint)auVar6._8_4_ ^ _DAT_145fc6f10;
  auVar4._12_4_ = (uint)auVar6._12_4_ ^ _DAT_145fc6f10;
  auVar5 = auVar6._0_16_;
  auVar1 = vblendps_avx(auVar4,auVar5,10);
  auVar3 = vshufps_avx(auVar1,auVar1,0x1b);
  auVar2 = vshufpd_avx(auVar5,auVar4,1);
  auVar1 = vblendps_avx(auVar4,auVar5,9);
  auVar1 = vshufps_avx(auVar1,auVar1,0xb1);
  *param_1 = -(fStack_30 * auVar1._0_4_) -
             (fStack_34 * auVar2._0_4_ + (fStack_38 * auVar3._0_4_ - fStack_2c * auVar6._0_4_));
  param_1[1] = -(fStack_30 * auVar1._4_4_) -
               (fStack_34 * auVar2._4_4_ + (fStack_38 * auVar3._4_4_ - fStack_2c * auVar6._4_4_));
  param_1[2] = -(fStack_30 * auVar1._8_4_) -
               (fStack_34 * auVar2._8_4_ + (fStack_38 * auVar3._8_4_ - fStack_2c * auVar6._8_4_));
  param_1[3] = -(fStack_30 * auVar1._12_4_) -
               (fStack_34 * auVar2._12_4_ + (fStack_38 * auVar3._12_4_ - fStack_2c * auVar6._12_4_))
  ;
  return;
}

