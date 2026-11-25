// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401989b0  size: 49 bytes
// Name:    FUN_1401989b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401989b0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  if ((-1 < (char)param_1[1][7]) && (*(longlong *)*param_1 != 0)) {
    func_0x000144d9c130();
  }
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *(undefined8 *)param_1[1] = 0;
  *param_1 = auVar1;
  return;
}

