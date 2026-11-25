// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140153f10  size: 341 bytes
// Name:    FUN_140153f10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f21090
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140153f10(longlong *param_1,uint param_2,longlong param_3)

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
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  bool bVar17;
  
  if ((ulonglong)*(uint *)((longlong)param_1 + 300) != 0) {
    puVar15 = (undefined8 *)param_1[0x26];
    puVar12 = puVar15 + (ulonglong)*(uint *)((longlong)param_1 + 300) * 2;
    do {
      cVar8 = (*(code *)puVar15[1])(*puVar15,param_2);
      if (cVar8 != '\0') {
        return;
      }
      puVar15 = puVar15 + 2;
    } while (puVar15 != puVar12);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_3);
  *(undefined2 *)(_DAT_14abbe030 + (ulonglong)((param_2 & 0x1ffff) * _DAT_14abbe024 + 5) * 2) =
       0xffff;
  cVar8 = FUN_144f21090(param_3);
  plVar7 = _DAT_1499aadf0;
  if ((param_3 != 0) && (cVar8 == '\0')) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = param_3 - *_DAT_1499aadf0;
    uVar11 = SUB164(auVar6 / ZEXT416(*(uint *)(_DAT_1499aadf0 + 1)),0);
    uVar14 = *(uint *)(_DAT_1499aadf0[5] +
                      (SUB168(auVar6 / ZEXT416(*(uint *)(_DAT_1499aadf0 + 1)),0) & 0xffffffff) * 4)
             & 0xfffe0000 | uVar11;
    uVar11 = uVar11 & 0x1ffff | 0x20000;
    if (uVar14 < 0xfffe0000) {
      uVar11 = uVar14 + 0x20000;
    }
    puVar1 = (ulonglong *)(_DAT_1499aadf0 + 4);
    LOCK();
    *(int *)(_DAT_1499aadf0 + 2) = (int)_DAT_1499aadf0[2] + -1;
    UNLOCK();
    uVar13 = *puVar1;
    do {
      *(uint *)(plVar7[5] + (ulonglong)(uVar11 & 0x1ffff) * 4) =
           (uint)uVar13 & 0x1ffff | uVar11 & 0xfffe0000;
      LOCK();
      uVar16 = plVar7[4];
      bVar17 = uVar13 == uVar16;
      if (bVar17) {
        plVar7[4] = (uVar13 & 0xffffffff00000000 | (ulonglong)(uVar11 & 0x1ffff)) + 0x100000000;
        uVar16 = uVar13;
      }
      UNLOCK();
      uVar13 = uVar16;
    } while (!bVar17);
    if (plVar7[3] != 0) {
      uVar13 = (ulonglong)(param_3 - *plVar7) >> 0x10;
      uVar16 = ((ulonglong)*(uint *)(plVar7 + 1) - 1) + (param_3 - *plVar7) >> 0x10;
      if (uVar13 <= uVar16) {
        do {
          LOCK();
          psVar2 = (short *)(plVar7[3] + 2 + uVar13 * 2);
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
              bVar17 = uVar9 == uVar4;
              if (bVar17) {
                *puVar5 = uVar9 | 0x8000;
                uVar4 = uVar9;
              }
              uVar9 = uVar4;
              UNLOCK();
            } while (!bVar17);
            if (-1 < (short)uVar9) {
              uVar10 = (ulonglong)uRam00000001471b7420;
              uRam00000001471b7420 = uRam00000001471b7420 + 1;
              *(longlong **)(uVar10 * 8 + 0x1471b6420) = plVar7;
            }
            func_0x000144d9dab0(0x1471b63b8);
          }
          bVar17 = uVar13 != uVar16;
          uVar13 = uVar13 + 1;
        } while (bVar17);
      }
      return;
    }
  }
  return;
}

