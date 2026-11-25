// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094b60  size: 81 bytes
// Name:    FUN_140094b60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_140094b60(uint *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 extraout_var [56];
  
  if (param_1[1] == 1) {
    uVar3 = *param_1;
    uVar2 = func_0x000144f260b0(param_2);
    uVar3 = (uint)(uVar3 == uVar2);
  }
  else if (param_1[1] == 2) {
    auVar5 = ZEXT464(*param_1);
    auVar4._0_8_ = func_0x0001400947e0(param_2);
    auVar4._8_56_ = extraout_var;
    auVar1 = vcmpss_avx(auVar4._0_16_,auVar5._0_16_,0);
    uVar3 = auVar1._0_4_ & 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

