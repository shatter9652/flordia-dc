// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113ab0  size: 120 bytes
// Name:    FUN_140113ab0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452a8db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140113ab0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = func_0x000144ef6310(*(undefined4 *)(param_2 + 0x9c));
  if (((lVar2 != 0) &&
      (plVar3 = (longlong *)func_0x000144fce000(*(undefined4 *)(lVar2 + 0x14)),
      plVar3 != (longlong *)0x0)) && (cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3), cVar1 != '\0'))
  {
    lVar2 = func_0x000144fcdfb0((int)plVar3[0x11]);
    lVar4 = FUN_1452a8db0(param_2,param_1,param_3);
    return lVar2 == lVar4 && lVar2 != 0;
  }
  return false;
}

