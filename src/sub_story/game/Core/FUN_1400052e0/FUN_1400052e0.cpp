// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400052e0  size: 118 bytes
// Name:    FUN_1400052e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400052e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  
  bVar4 = *(byte *)(param_1 + 0x10);
  if ((bVar4 & 2) != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar7 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar7 * 8);
        (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x18));
        puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + uVar7 * 8);
        (**(code **)*puVar2)(puVar2,0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x2c));
      bVar4 = *(byte *)(param_1 + 0x10);
    }
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x28) = auVar10;
    *(byte *)(param_1 + 0x10) = bVar4 & 0xfd;
    return;
  }
  uVar5 = *(int *)(param_1 + 0x2c) - 1;
  if (-1 < (int)uVar5) {
    lVar6 = ~(ulonglong)uVar5 << 3;
    lVar8 = (ulonglong)uVar5 + 1;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + -8 + lVar8 * 8);
      func_0x000140004380(plVar1);
      (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_1 + 0x18));
      func_0x000145f40570(*(longlong *)(param_1 + 0x30) + -8 + lVar8 * 8,
                          *(longlong *)(param_1 + 0x30) + lVar8 * 8,
                          lVar6 + (ulonglong)*(uint *)(param_1 + 0x2c) * 8);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      (**(code **)*plVar1)(plVar1,(*(byte *)(param_1 + 0x10) & 2) == 0);
      lVar6 = lVar6 + 8;
      lVar9 = lVar8 + -1;
      bVar3 = 0 < lVar8;
      lVar8 = lVar9;
    } while (lVar9 != 0 && bVar3);
  }
  return;
}

