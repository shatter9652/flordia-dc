// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140004c80  size: 91 bytes
// Name:    FUN_140004c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140004c80(uint *param_1)

{
  undefined1 auVar1 [64];
  undefined1 in_ZMM1 [64];
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 extraout_var [56];
  undefined1 auVar4 [64];
  
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  auVar4 = ZEXT1664(auVar3);
  auVar3 = vcmpss_avx(auVar3,ZEXT416(*param_1),2);
  auVar3 = vblendvps_avx(ZEXT416((uint)(_DAT_145fc6ed8 - in_ZMM1._0_4_)),in_ZMM1._0_16_,auVar3);
  fVar2 = _DAT_145fc6ed8;
  auVar1._0_8_ = func_0x000145f408b0(auVar3._0_8_,param_1[2]);
  auVar1._8_56_ = extraout_var;
  auVar3 = vcmpss_avx(auVar4._0_16_,ZEXT416(param_1[1]),2);
  auVar3 = vblendvps_avx(ZEXT416((uint)(fVar2 - (float)auVar1._0_8_)),auVar1._0_16_,auVar3);
  return auVar3._0_8_;
}

