// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094bd0  size: 61 bytes
// Name:    FUN_140094bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


float * FUN_140094bd0(float *param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  
  if (param_1[1] == 2.8026e-45) {
    fVar2 = (float)func_0x0001400947e0(param_2);
    *param_1 = fVar2 * *param_1;
  }
  else if (param_1[1] == 1.4013e-45) {
    iVar1 = func_0x000144f260b0(param_2);
    *param_1 = (float)(iVar1 * (int)*param_1);
  }
  return param_1;
}

