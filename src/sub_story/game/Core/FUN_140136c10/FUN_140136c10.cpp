// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140136c10  size: 271 bytes
// Name:    FUN_140136c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140136fc0, FUN_1456d6ff0, FUN_140136c10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140136c10(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [64];
  
  if ((param_2[1] != 0) && (*param_2 == 0)) {
    FUN_1456d6ff0(param_1,param_2[1]);
    uVar4 = (ulonglong)(uint)param_2[1];
    if (uVar4 != 0) {
      lVar3 = *(longlong *)(param_2 + 2);
      auVar7 = ZEXT1264(ZEXT812(0));
      lVar5 = uVar4 << 5;
      lVar6 = lVar3 + 0x10;
      pauVar2 = (undefined1 (*) [16])(param_1[1] + 0x10);
      do {
        if (pauVar2 + -1 != (undefined1 (*) [16])0x0) {
          uVar1 = *(undefined8 *)(lVar6 + -0x10);
          *(undefined8 *)(pauVar2[-1] + 5) = *(undefined8 *)(lVar6 + -0xb);
          *(undefined8 *)pauVar2[-1] = uVar1;
          *pauVar2 = auVar7._0_16_;
          FUN_140136c10(pauVar2,lVar6);
        }
        lVar6 = lVar6 + 0x20;
        pauVar2 = pauVar2 + 2;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      lVar6 = uVar4 << 5;
      lVar3 = lVar3 + 0x10;
      do {
        FUN_140136fc0(lVar3);
        lVar3 = lVar3 + 0x20;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
  }
  *param_1 = *(undefined8 *)param_2;
  param_2[0] = 0;
  param_2[1] = 0;
  if (param_1[1] != 0) {
    func_0x000144d9c130(param_1[1]);
  }
  param_1[1] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  return;
}

