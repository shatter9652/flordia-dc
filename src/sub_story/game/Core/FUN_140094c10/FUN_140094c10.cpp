// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094c10  size: 76 bytes
// Name:    FUN_140094c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140094c10(float *param_1,undefined8 param_2)

{
  bool bVar1;
  float fVar2;
  float extraout_XMM0_Da;
  float fVar3;
  
  if (param_1[1] == 2.8026e-45) {
    fVar3 = *param_1;
    func_0x0001400947e0(param_2);
    bVar1 = fVar3 <= extraout_XMM0_Da;
  }
  else if (param_1[1] == 1.4013e-45) {
    fVar3 = *param_1;
    fVar2 = (float)func_0x000144f260b0(param_2);
    bVar1 = (uint)fVar3 <= (uint)fVar2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

