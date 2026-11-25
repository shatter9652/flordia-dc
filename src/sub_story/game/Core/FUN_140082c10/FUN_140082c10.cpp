// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140082c10  size: 114 bytes
// Name:    FUN_140082c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451d0260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140082c10(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = func_0x000145311f50();
  if (((param_2 != 0) && (lVar1 != 0)) &&
     (plVar2 = (longlong *)FUN_1451d0260(lVar1,param_2), plVar2 != (longlong *)0x0)) {
    if (param_3 == '\0') {
      return (*(byte *)((longlong)plVar2 + 0x8b) & 0x40) >> 6;
    }
    if ((*plVar2 != 0) && (lVar1 = func_0x000144ed0b20(*(undefined4 *)(*plVar2 + 0xc)), lVar1 != 0))
    {
      return *(int *)(lVar1 + 0x208) < 3 & *(byte *)(lVar1 + 0x215) >> 1;
    }
  }
  return 0;
}

