// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140191e10  size: 65 bytes
// Name:    FUN_140191e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140191e10(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x648) != param_2) {
    plVar1 = (longlong *)func_0x0001452cda10(*(undefined8 *)(param_1 + 0x40));
    (**(code **)(*plVar1 + 0x38))(plVar1,5,param_2 != 0);
    *(int *)(param_1 + 0x648) = param_2;
  }
  return;
}

