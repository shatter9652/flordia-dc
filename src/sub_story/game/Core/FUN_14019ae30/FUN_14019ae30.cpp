// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019ae30  size: 107 bytes
// Name:    FUN_14019ae30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14019ae30(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)func_0x000144e699b0();
  uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(param_1 + 0x1d));
  cVar1 = func_0x000144f836b0(uVar4 & 0xffffffff,1);
  plVar3 = plVar2;
  if ((((param_2 != 0) && (cVar1 != '\0')) &&
      (cVar1 = func_0x000144f836b0(uVar4 & 0xffffffff,0), cVar1 != '\0')) &&
     ((plVar3 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,param_2), plVar3 != (longlong *)0x0 &&
      (cVar1 = func_0x000144d9f880(plVar3,plVar2), cVar1 == '\0')))) {
    return plVar2;
  }
  return plVar3;
}

