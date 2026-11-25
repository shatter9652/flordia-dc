// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d2c40  size: 59 bytes
// Name:    FUN_1400d2c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d2c80, FUN_1400d2e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400d2c40(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  
  auVar2 = ZEXT464((uint)(param_4 - param_3));
  auVar3._0_8_ = FUN_1400d2c80();
  auVar3._8_56_ = extraout_var;
  auVar1 = vmaxss_avx(auVar2._0_16_,auVar3._0_16_);
  auVar3 = ZEXT1664(auVar1);
  auVar2._0_8_ = FUN_1400d2e10(param_1,param_2);
  auVar2._8_56_ = extraout_var_00;
  auVar1 = vminss_avx(auVar3._0_16_,auVar2._0_16_);
  return auVar1._0_8_;
}

