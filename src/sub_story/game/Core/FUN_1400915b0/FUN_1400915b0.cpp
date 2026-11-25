// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400915b0  size: 124 bytes
// Name:    FUN_1400915b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1400915b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_1 != (longlong *)0x0) {
    iVar4 = 0x20;
    plVar3 = param_1;
    plVar5 = param_1;
    do {
      plVar1 = (longlong *)(**(code **)(*plVar3 + 0x2f8))(plVar3,0);
      if ((plVar1 == (longlong *)0x0) && ((char)plVar3[6] == '\x03')) {
        lVar2 = func_0x000144fa1860(*(undefined4 *)((longlong)plVar3 + 0x9c));
        if (lVar2 == 0) {
          return (longlong *)0x0;
        }
        plVar1 = (longlong *)func_0x000140b961e0(*(undefined4 *)(lVar2 + 0x10));
      }
      if (plVar1 < plVar5) {
        plVar5 = plVar1;
      }
      if (plVar1 == (longlong *)0x0 || plVar1 == param_1) {
        return plVar5;
      }
      iVar4 = iVar4 + -1;
      plVar3 = plVar1;
    } while (iVar4 != 0);
  }
  return (longlong *)0x0;
}

