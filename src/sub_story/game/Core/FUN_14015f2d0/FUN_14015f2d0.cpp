// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015f2d0  size: 361 bytes
// Name:    FUN_14015f2d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14501e150
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015f2d0(longlong *param_1,uint param_2,longlong param_3)

{
  ulonglong *puVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  char cVar8;
  ushort uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  bool bVar18;
  
  if ((ulonglong)*(uint *)((longlong)param_1 + 300) != 0) {
    puVar16 = (undefined8 *)param_1[0x26];
    puVar13 = puVar16 + (ulonglong)*(uint *)((longlong)param_1 + 300) * 2;
    do {
      cVar8 = (*(code *)puVar16[1])(*puVar16,param_2);
      if (cVar8 != '\0') {
        return;
      }
      puVar16 = puVar16 + 2;
    } while (puVar16 != puVar13);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_3);
  lVar12 = (ulonglong)(param_2 >> 0x11 & 0x1f) * 0x238;
  if (*(byte *)(lVar12 + 0x14abbf3fd) != 0xff) {
    *(undefined2 *)
     (*(longlong *)(lVar12 + 0x14abbf3d0) +
     (ulonglong)
     ((param_2 & 0x1ffff) * *(int *)(lVar12 + 0x14abbf3c4) + (uint)*(byte *)(lVar12 + 0x14abbf3fd))
     * 2) = 0xffff;
  }
  if (param_3 != 0) {
    FUN_14501e150(param_3);
    plVar7 = _DAT_1499ab138;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_3 - *_DAT_1499ab138;
    uVar11 = SUB164(auVar6 / ZEXT416(*(uint *)(_DAT_1499ab138 + 1)),0);
    uVar15 = *(uint *)(_DAT_1499ab138[5] +
                      (SUB168(auVar6 / ZEXT416(*(uint *)(_DAT_1499ab138 + 1)),0) & 0xffffffff) * 4)
             & 0xfffe0000 | uVar11;
    uVar11 = uVar11 & 0x1ffff | 0x20000;
    if (uVar15 < 0xfffe0000) {
      uVar11 = uVar15 + 0x20000;
    }
    puVar1 = (ulonglong *)(_DAT_1499ab138 + 4);
    LOCK();
    *(int *)(_DAT_1499ab138 + 2) = (int)_DAT_1499ab138[2] + -1;
    UNLOCK();
    uVar14 = *puVar1;
    do {
      *(uint *)(plVar7[5] + (ulonglong)(uVar11 & 0x1ffff) * 4) =
           (uint)uVar14 & 0x1ffff | uVar11 & 0xfffe0000;
      LOCK();
      uVar17 = plVar7[4];
      bVar18 = uVar14 == uVar17;
      if (bVar18) {
        plVar7[4] = (uVar14 & 0xffffffff00000000 | (ulonglong)(uVar11 & 0x1ffff)) + 0x100000000;
        uVar17 = uVar14;
      }
      UNLOCK();
      uVar14 = uVar17;
    } while (!bVar18);
    if (plVar7[3] != 0) {
      uVar14 = (ulonglong)(param_3 - *plVar7) >> 0x10;
      uVar17 = ((ulonglong)*(uint *)(plVar7 + 1) - 1) + (param_3 - *plVar7) >> 0x10;
      if (uVar14 <= uVar17) {
        do {
          LOCK();
          psVar2 = (short *)(plVar7[3] + 2 + uVar14 * 2);
          sVar3 = *psVar2;
          *psVar2 = *psVar2 + -1;
          UNLOCK();
          if (sVar3 == 0x101) {
            FUN_140004b40(0x1471b63b8);
            puVar5 = (ushort *)plVar7[3];
            uVar9 = *puVar5;
            do {
              LOCK();
              uVar4 = *puVar5;
              bVar18 = uVar9 == uVar4;
              if (bVar18) {
                *puVar5 = uVar9 | 0x8000;
                uVar4 = uVar9;
              }
              uVar9 = uVar4;
              UNLOCK();
            } while (!bVar18);
            if (-1 < (short)uVar9) {
              uVar10 = (ulonglong)uRam00000001471b7420;
              uRam00000001471b7420 = uRam00000001471b7420 + 1;
              *(longlong **)(uVar10 * 8 + 0x1471b6420) = plVar7;
            }
            func_0x000144d9dab0(0x1471b63b8);
          }
          bVar18 = uVar14 != uVar17;
          uVar14 = uVar14 + 1;
        } while (bVar18);
      }
      return;
    }
  }
  return;
}

