// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401086b0  size: 61 bytes
// Name:    FUN_1401086b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142472e80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401086b0(byte param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  
  cVar1 = FUN_142472e80(param_2);
  if (cVar1 != '\0') {
    return;
  }
  if (param_1 < 2) {
    plVar2 = (longlong *)func_0x000144fc99c0(0,2,param_3,param_4,unaff_RSI);
  }
  else {
    plVar2 = (longlong *)func_0x000144fc99c0(0,0,param_3,param_4,unaff_RSI);
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

