// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001e860  size: 69 bytes
// Name:    FUN_14001e860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df9c50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001e860(float *param_1)

{
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  FUN_144df9c50(&fStack_28);
  *param_1 = fStack_28 * fStack_28;
  param_1[1] = fStack_24 * fStack_24;
  param_1[2] = fStack_20 * fStack_20;
  param_1[3] = fStack_1c * fStack_1c;
  return;
}

