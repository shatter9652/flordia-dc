// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076f40  size: 70 bytes
// Name:    FUN_140076f40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140076f90, FUN_140077050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140076f40(longlong *param_1)

{
  FUN_140076f90(param_1[0xc],param_1);
  (**(code **)(*param_1 + 0x78))(param_1,0);
  (**(code **)(*param_1 + 0x60))(param_1);
  FUN_140077050(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140076f83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}

