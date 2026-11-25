// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b7580  size: 34 bytes
// Name:    FUN_1401b7580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401b7580(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if ((int)param_1[5] == param_2) {
    iVar1 = (**(code **)(*param_1 + 0x60))();
    bVar2 = iVar1 == param_3;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

