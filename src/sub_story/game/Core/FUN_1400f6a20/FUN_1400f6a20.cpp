// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f6a20  size: 92 bytes
// Name:    FUN_1400f6a20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400f6a20(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  if ((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x18) + 200))(),
     0xfffffff7 < (int)plVar2[5] - 0xbU)) {
    uVar1 = (**(code **)(*plVar2 + 0x68))(plVar2);
    (**(code **)(*param_3 + 0x18))(param_3,param_2,uVar1);
    return param_2;
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  return param_2;
}

