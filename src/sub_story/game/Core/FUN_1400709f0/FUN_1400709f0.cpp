// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400709f0  size: 59 bytes
// Name:    FUN_1400709f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143e1fcb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400709f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong unaff_GS_OFFSET;
  undefined8 uStack_8;
  
  uStack_8 = param_3;
  FUN_143e1fcb0(*(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1470),param_1,param_2,
                &uStack_8,0);
  return;
}

