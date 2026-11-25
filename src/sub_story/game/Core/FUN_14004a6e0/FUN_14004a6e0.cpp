// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004a6e0  size: 105 bytes
// Name:    FUN_14004a6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e68650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004a6e0(uint *param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [64];
  undefined1 auVar4 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 extraout_var [56];
  
  fVar2 = (float)param_1[1];
  auVar6 = ZEXT1664(in_ZMM1._0_16_);
  auVar3._0_8_ = FUN_144e68650(*param_1);
  auVar3._8_56_ = extraout_var;
  if (((float)auVar3._0_8_ == 0.0) && (!NAN((float)auVar3._0_8_))) {
    return;
  }
  auVar4 = vminss_avx(auVar6._0_16_,auVar3._0_16_);
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  auVar4 = ZEXT416((uint)(fVar2 - auVar4._0_4_));
  auVar1 = vminss_avx(ZEXT416(*param_1),auVar4);
  auVar4 = vcmpss_avx(auVar4,auVar5,1);
  fVar2 = (float)(~auVar4._0_4_ & auVar1._0_4_);
  *(bool *)((longlong)param_1 + 0x11) = (float)param_1[1] < fVar2;
  param_1[1] = (uint)fVar2;
  return;
}

