// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181f60  size: 69 bytes
// Name:    FUN_140181f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140181f60(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uStack_10;
  
  cVar1 = func_0x000140181fb0(param_1[2],param_1[3],&uStack_10,param_2);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140181f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,uStack_10,1);
    return;
  }
  return;
}

