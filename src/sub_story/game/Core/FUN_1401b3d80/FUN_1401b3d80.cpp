// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b3d80  size: 38 bytes
// Name:    FUN_1401b3d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b3fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b3d80(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iStack_14;
  
  FUN_1401b3fd0(param_1,&iStack_14);
  iVar1 = -0x40a8471a;
  if (iStack_14 != 0) {
    iVar1 = iStack_14;
  }
  *param_2 = iVar1;
  return;
}

