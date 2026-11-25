// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011b1d0  size: 287 bytes
// Name:    FUN_14011b1d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1454b5ec0, FUN_144fd9d80, FUN_144fc9930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 (*) [16] FUN_14011b1d0(undefined1 (*param_1) [16],longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  *param_1 = auVar8;
  uVar1 = *(uint *)(param_2 + 4);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    FUN_144fc9930(&uStack_48,0);
    FUN_144fd9d80(uStack_48);
    *(undefined8 *)(*param_1 + 8) = 0;
    *(undefined4 *)*param_1 = 0;
    lVar4 = (ulonglong)uVar1 * 0x28;
    FUN_144fc9930(&uStack_48,0);
    lVar5 = func_0x000144d9c140(8,lVar4);
    FUN_144fd9d80(uStack_48);
    *(longlong *)(*param_1 + 8) = lVar5;
    if (lVar5 == 0) {
      pcVar3 = (code *)swi(3);
      pauVar6 = (undefined1 (*) [16])(*pcVar3)();
      return pauVar6;
    }
    lVar7 = 0;
    *(uint *)*param_1 = uVar1;
    do {
      if (lVar5 + lVar7 != 0) {
        *(undefined4 *)(lVar5 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
        FUN_1454b5ec0(lVar5 + 4 + lVar7,lVar2 + 4 + lVar7);
        *(undefined8 *)(lVar5 + 8 + lVar7) = *(undefined8 *)(lVar2 + 8 + lVar7);
        *(undefined8 *)(lVar5 + 0x10 + lVar7) = *(undefined8 *)(lVar2 + 0x10 + lVar7);
        *(undefined1 *)(lVar5 + 0x20 + lVar7) = *(undefined1 *)(lVar2 + 0x20 + lVar7);
        *(undefined8 *)(lVar5 + 0x18 + lVar7) = *(undefined8 *)(lVar2 + 0x18 + lVar7);
      }
      lVar7 = lVar7 + 0x28;
    } while (lVar4 != lVar7);
    *(uint *)(*param_1 + 4) = uVar1;
  }
  return param_1;
}

