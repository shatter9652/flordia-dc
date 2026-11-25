// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186fb0  size: 329 bytes
// Name:    FUN_140186fb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1415a3910, FUN_1456aa450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140186fb0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_1 + 0x98);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x110);
    if (lVar3 != 0) {
      plVar4 = (longlong *)(param_1 + 0x108);
      do {
        plVar1 = (longlong *)*plVar4;
        lVar2 = *plVar1;
        if (lVar3 == 1) {
          FUN_1456aa450(plVar4,plVar4,0);
        }
        else {
          func_0x000145f40570(plVar1,plVar1 + 1,lVar3 * 8 + -8);
          *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x110) + -1;
        }
        for (lVar3 = *(longlong *)(lVar2 + 0x10); lVar3 != lVar2 + 8;
            lVar3 = *(longlong *)(lVar3 + 8)) {
          if (*(longlong *)(lVar3 + 0x10) != 0) {
            lVar6 = *(longlong *)(lVar3 + 0x10) + 0x30;
            lVar5 = 0x38;
            do {
              if ((*(longlong *)(lVar6 + 0x28) != 0) && (*(longlong *)(lVar6 + 0x28) != 0xbad)) {
                (**(code **)(**(longlong **)(param_1 + 0x98) + 0x38))
                          (*(longlong **)(param_1 + 0x98),lVar6);
              }
              lVar6 = lVar6 + 0x48;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
          }
        }
        FUN_1456aa450(param_1 + 0x120,param_1 + 0x120,*(longlong *)(param_1 + 0x128) + 1);
        *(longlong *)(*(longlong *)(param_1 + 0x120) + -8 + *(longlong *)(param_1 + 0x128) * 8) =
             lVar2;
        lVar3 = *(longlong *)(param_1 + 0x110);
      } while (lVar3 != 0);
      plVar4 = *(longlong **)(param_1 + 0x98);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1415a3910(*(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
  }
  return;
}

