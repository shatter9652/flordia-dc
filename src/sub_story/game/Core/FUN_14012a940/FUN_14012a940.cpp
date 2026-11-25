// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012a940  size: 83 bytes
// Name:    FUN_14012a940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e68650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


float FUN_14012a940(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 0.0;
    puVar1 = param_2 + (ulonglong)param_1 * 5;
    do {
      fVar2 = (float)FUN_144e68650(*param_2,param_2[1]);
      fVar3 = fVar2 + fVar3;
      param_2 = param_2 + 5;
    } while (param_2 != puVar1);
  }
  return fVar3;
}

