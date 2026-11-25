// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055210  size: 49 bytes
// Name:    FUN_140055210
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140055210(longlong param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  func_0x000140055250(param_1,&uStack_28);
  *param_2 = uStack_28;
  param_2[1] = uStack_20;
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  auVar1 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x120),
                      *(undefined1 (*) [16])(param_1 + 0x110));
  auVar2._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar2._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar2._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar2._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar2,auVar4,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar2 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vrsqrtss_avx(auVar2,auVar2);
  fVar3 = auVar1._0_4_;
  auVar1 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar2,2);
  return auVar1._0_4_ &
         (uint)(auVar2._0_4_ * _DAT_145fc6edc *
               ((fVar3 * fVar3 * auVar2._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar3 + fVar3));
}

