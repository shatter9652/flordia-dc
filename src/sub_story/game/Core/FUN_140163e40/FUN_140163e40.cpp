// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140163e40  size: 464 bytes
// Name:    FUN_140163e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140189080, FUN_140004b40, FUN_145497490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140163e40(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined8 uStack_60;
  uint uStack_58;
  undefined1 auStack_50 [16];
  
  uVar5 = *(ushort *)(param_1 + 0x18);
  if (uVar5 != 0) {
    uVar10 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + uVar10 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        if (*(int *)(puVar2 + 1) != -1) {
          FUN_140004b40(0x1499a7eb8);
          uVar9 = *(uint *)(puVar2 + 1);
          if (uVar9 < _DAT_1499a7ef4) {
            uVar6 = *(uint *)(_DAT_1499a7ef8 + (ulonglong)uVar9 * 4);
            if ((((ulonglong)uVar6 != 0xffffffff) &&
                (uVar7 = (ulonglong)DAT_1499a7ee8,
                *(uint *)((ulonglong)*(ushort *)(_DAT_1499a7ee0 + 0x18 + uVar7 * 0x28) +
                         (ulonglong)*(uint *)(_DAT_1499a7ee0 + 0x14 + uVar7 * 0x28) *
                         (ulonglong)uVar6 + *(longlong *)(_DAT_1499a7ee0 + 8 + uVar7 * 0x28)) ==
                uVar9)) && (uVar6 != *(uint *)(_DAT_1499a7ee0 + 4))) {
              uStack_60 = 0x1499a7ed8;
              uStack_58 = uVar6;
              FUN_145497490(0x1499a7ed8,auStack_50,&uStack_60);
            }
          }
          puVar2[1] = 0x1ffffffffffff;
          func_0x000144d9dab0(0x1499a7eb8);
        }
        func_0x000140164010(*puVar2);
        plVar4 = _DAT_1499a9f78;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (longlong)puVar2 - *_DAT_1499a9f78;
        uVar9 = SUB164(auVar3 / ZEXT416(*(uint *)(_DAT_1499a9f78 + 1)),0);
        uVar6 = (*(uint *)(_DAT_1499a9f78[5] +
                          (SUB168(auVar3 / ZEXT416(*(uint *)(_DAT_1499a9f78 + 1)),0) & 0xffffffff) *
                          4) & 0x7f000000 | uVar9) + 0x1000000;
        uVar9 = uVar9 & 0xffffff | 0x1000000;
        if ((uVar6 & 0x7f000000) != 0) {
          uVar9 = uVar6;
        }
        puVar1 = (ulonglong *)(_DAT_1499a9f78 + 4);
        LOCK();
        *(int *)(_DAT_1499a9f78 + 2) = (int)_DAT_1499a9f78[2] + -1;
        UNLOCK();
        uVar7 = *puVar1;
        do {
          *(uint *)(plVar4[5] + (ulonglong)(uVar9 & 0xffffff) * 4) =
               (uint)uVar7 & 0xffffff | uVar9 & 0x7f000000;
          LOCK();
          uVar8 = plVar4[4];
          bVar11 = uVar7 == uVar8;
          if (bVar11) {
            plVar4[4] = (uVar7 & 0xffffffff00000000 | (ulonglong)(uVar9 & 0xffffff)) + 0x100000000;
            uVar8 = uVar7;
          }
          UNLOCK();
          uVar7 = uVar8;
        } while (!bVar11);
        if (plVar4[3] != 0) {
          FUN_140189080();
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar10 * 8) = 0;
        uVar5 = *(ushort *)(param_1 + 0x18);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  return;
}

