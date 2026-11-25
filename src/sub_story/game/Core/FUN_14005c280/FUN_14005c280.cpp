// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005c280  size: 168 bytes
// Name:    FUN_14005c280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_14005c280(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  
  FUN_140004b40(0x1475df198);
  if (_DAT_1475df1e0 != (undefined1 (*) [16])0x1475df1d8) {
    pauVar6 = (undefined1 (*) [16])0x0;
    uVar5 = 0;
    pauVar4 = _DAT_1475df1e0;
    do {
      if (*(longlong *)(pauVar4[1] + 8) != -2) {
        if (*(longlong *)(pauVar4[1] + 8) != -1) {
          cVar3 = func_0x000144dad000();
          if (cVar3 == '\0') goto LAB_14005c2d5;
        }
        if (pauVar6 == (undefined1 (*) [16])0x0) {
          pauVar6 = pauVar4;
        }
        if (1 < uVar5) {
          *(undefined8 *)pauVar6[4] = param_1;
          auVar7._0_12_ = ZEXT812(0);
          auVar7._12_4_ = 0;
          lVar1 = *(longlong *)*pauVar6;
          plVar2 = *(longlong **)(*pauVar6 + 8);
          *(longlong **)(lVar1 + 8) = plVar2;
          *plVar2 = lVar1;
          *pauVar6 = auVar7;
          *(int *)(pauVar6[2] + 4) = *(int *)(pauVar6[2] + 4) + 1;
          *(undefined8 *)pauVar6[5] = 0;
          pauVar6[3] = auVar7;
          goto LAB_14005c30e;
        }
      }
LAB_14005c2d5:
      pauVar4 = *(undefined1 (**) [16])(*pauVar4 + 8);
      uVar5 = uVar5 + 1;
    } while (pauVar4 != (undefined1 (*) [16])0x1475df1d8);
  }
  pauVar6 = (undefined1 (*) [16])0x0;
LAB_14005c30e:
  func_0x000144d9dab0(0x1475df198);
  return pauVar6;
}

