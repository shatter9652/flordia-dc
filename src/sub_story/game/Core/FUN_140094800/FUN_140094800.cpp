// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094800  size: 75 bytes
// Name:    FUN_140094800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140094800(uint *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 auVar3 [64];
  undefined8 uStack_10;
  undefined1 extraout_var [56];
  
  uStack_10 = param_2;
  if (param_1[1] == 1) {
    uVar2 = func_0x000144f260b0(&uStack_10);
    if (*param_1 < uVar2) {
      uVar2 = *param_1;
    }
    *param_1 = uVar2;
  }
  else if (param_1[1] == 2) {
    auVar3._0_8_ = func_0x0001400947e0(&uStack_10);
    auVar3._8_56_ = extraout_var;
    auVar1 = vminss_avx(ZEXT416(*param_1),auVar3._0_16_);
    *param_1 = auVar1._0_4_;
  }
  return;
}

