// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012f280  size: 346 bytes
// Name:    FUN_14012f280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450caf90, FUN_14012f790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14012f280(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  auVar10 = ZEXT1664(auVar9);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 (*) [16])(param_1 + 8) = auVar9;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  lVar3 = *(longlong *)(param_3 + 8);
  *(longlong *)(param_1 + 0x38) = lVar3;
  if (lVar3 != 0) {
    FUN_1450caf90(lVar3,param_1 + 0x38);
    auVar9 = auVar10._0_16_;
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0x10);
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar9;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined1 *)(param_1 + 0x60) = 1;
  cVar4 = FUN_14012f790(param_1,param_3);
  if (cVar4 == '\0') {
LAB_14012f395:
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x58) + 0xc);
    if (*(uint *)(param_1 + 0x48) < uVar1) {
      uVar5 = func_0x000144d9c140(8,(ulonglong)uVar1 * 8);
      if ((ulonglong)*(uint *)(param_1 + 0x4c) != 0) {
        func_0x000145f40560(uVar5,*(undefined8 *)(param_1 + 0x50),
                            (ulonglong)*(uint *)(param_1 + 0x4c) << 3);
      }
      if (*(longlong *)(param_1 + 0x50) != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(param_1 + 0x50) = uVar5;
      *(uint *)(param_1 + 0x48) = uVar1;
    }
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        plVar6 = (longlong *)
                 func_0x000140578db0(*(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0xc),
                                     *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10),uVar8);
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x40))(plVar6,param_1);
        if (puVar7 == (undefined8 *)0x0) goto LAB_14012f395;
        if (*(char *)(puVar7 + 3) == '\0') {
          *(undefined1 *)(param_1 + 0x60) = 0;
          (**(code **)*puVar7)(puVar7,1);
          return param_1;
        }
        uVar2 = *(uint *)(param_1 + 0x4c);
        uVar8 = uVar8 + 1;
        *(uint *)(param_1 + 0x4c) = uVar2 + 1;
        *(undefined8 **)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar2 * 8) = puVar7;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}

