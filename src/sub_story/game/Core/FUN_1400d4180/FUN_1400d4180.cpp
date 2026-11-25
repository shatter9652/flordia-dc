// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d4180  size: 153 bytes
// Name:    FUN_1400d4180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


float FUN_1400d4180(undefined8 param_1,float param_2,float param_3,undefined4 param_4,uint param_5,
                   uint param_6,undefined1 param_7)

{
  undefined1 auVar1 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 extraout_var [56];
  
  auVar4 = ZEXT464(param_5);
  auVar5 = ZEXT464(param_6);
  auVar3 = ZEXT1664(in_ZMM0._0_16_);
  auVar2._0_8_ = func_0x0001400d4220(param_4,param_5,param_7);
  auVar2._8_56_ = extraout_var;
  auVar1 = vcmpss_avx(auVar5._0_16_,auVar4._0_16_,1);
  auVar1 = vblendvps_avx(auVar3._0_16_,ZEXT416((uint)((auVar4._0_4_ - auVar5._0_4_) + param_2)),
                         auVar1);
  auVar1 = vmaxss_avx(auVar1,auVar2._0_16_);
  return (param_3 - auVar4._0_4_) + auVar1._0_4_;
}

