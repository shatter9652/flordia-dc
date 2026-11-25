// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094850  size: 73 bytes
// Name:    FUN_140094850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140094850(float *param_1,undefined8 param_2)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  float extraout_XMM0_Da;
  float fVar4;
  
  if (param_1[1] == 1.4013e-45) {
    fVar4 = *param_1;
    fVar1 = (float)func_0x000144f260b0(param_2);
    bVar2 = (uint)fVar4 < (uint)fVar1;
    bVar3 = fVar4 == fVar1;
  }
  else {
    if (param_1[1] != 2.8026e-45) {
      return false;
    }
    fVar4 = *param_1;
    func_0x0001400947e0(param_2);
    bVar3 = fVar4 == extraout_XMM0_Da;
    bVar2 = fVar4 < extraout_XMM0_Da;
  }
  return !bVar2 && !bVar3;
}

