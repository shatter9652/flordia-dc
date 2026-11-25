// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011de60  size: 364 bytes
// Name:    FUN_14011de60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140189080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011de60(uint param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  
  if (param_1 != 0) {
    plVar2 = param_2 + param_1;
    do {
      lVar4 = *param_2;
      if ((*(longlong *)(lVar4 + 0x40) != 0) &&
         (bVar3 = *(byte *)(*(longlong *)(lVar4 + 0x40) + 0x22), bVar3 < 8)) {
        func_0x00014011dfd0();
        puVar5 = *(undefined4 **)(lVar4 + 0x40);
        *(undefined1 *)((longlong)puVar5 + 0x22) = 8;
        if (bVar3 == 0) {
          *(byte *)(lVar4 + 0x9a) = *(byte *)(lVar4 + 0x9a) & 0xfb;
          puVar5[5] = 0;
          if (*(longlong *)(puVar5 + 6) != 0) {
            func_0x000144d9c130();
          }
          puVar5[4] = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          puVar5[1] = 0;
          if (*(longlong *)(puVar5 + 2) != 0) {
            func_0x000144d9c130();
          }
          *puVar5 = 0;
          *(undefined8 *)(puVar5 + 2) = 0;
          plVar7 = _DAT_1492e32d0;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (longlong)puVar5 - *_DAT_1492e32d0;
          uVar11 = SUB164(auVar6 / ZEXT416(*(uint *)(_DAT_1492e32d0 + 1)),0);
          uVar8 = *(uint *)(_DAT_1492e32d0[5] +
                           (SUB168(auVar6 / ZEXT416(*(uint *)(_DAT_1492e32d0 + 1)),0) & 0xffffffff)
                           * 4) & 0xfffe0000 | uVar11;
          puVar1 = (ulonglong *)(_DAT_1492e32d0 + 4);
          uVar11 = uVar11 & 0x1ffff | 0x20000;
          if (uVar8 < 0xfffe0000) {
            uVar11 = uVar8 + 0x20000;
          }
          LOCK();
          *(int *)(_DAT_1492e32d0 + 2) = (int)_DAT_1492e32d0[2] + -1;
          UNLOCK();
          uVar9 = *puVar1;
          do {
            *(uint *)(plVar7[5] + (ulonglong)(uVar11 & 0x1ffff) * 4) =
                 (uint)uVar9 & 0x1ffff | uVar11 & 0xfffe0000;
            LOCK();
            uVar10 = plVar7[4];
            bVar12 = uVar9 == uVar10;
            if (bVar12) {
              plVar7[4] = (uVar9 & 0xffffffff00000000 | (ulonglong)(uVar11 & 0x1ffff)) + 0x100000000
              ;
              uVar10 = uVar9;
            }
            UNLOCK();
            uVar9 = uVar10;
          } while (!bVar12);
          if (plVar7[3] != 0) {
            FUN_140189080(plVar7,puVar5);
          }
          *(undefined8 *)(lVar4 + 0x40) = 0;
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 != plVar2);
  }
  return;
}

