// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005a070  size: 118 bytes
// Name:    FUN_14005a070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14005a120, FUN_14005a140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14005a070(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plStack_20;
  longlong *plStack_18;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))();
  if (plVar2 == (longlong *)0x0) {
    FUN_14005a140(&plStack_20);
    for (; plStack_20 != (longlong *)0x0; plStack_20 = (longlong *)plStack_20[1]) {
      cVar1 = (**(code **)(*plStack_20 + 200))(plStack_20,param_2);
      plVar2 = plStack_20;
      if (cVar1 != '\0') goto LAB_14005a0d2;
      if (plStack_20 == plStack_18) {
        plStack_20 = (longlong *)0x0;
        break;
      }
    }
    plVar2 = (longlong *)0x0;
LAB_14005a0d2:
    FUN_14005a120(&plStack_20);
  }
  return plVar2;
}

