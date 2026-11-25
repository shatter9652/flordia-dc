// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400712d0  size: 767 bytes
// Name:    FUN_1400712d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x00014007158b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400712d0(uint *param_1)

{
  ulonglong *puVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  longlong *plVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong unaff_GS_OFFSET;
  bool bVar23;
  bool bVar24;
  
  bVar24 = true;
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x860) == '\0') {
    iVar10 = func_0x000145037ab0();
    if (_DAT_1487598bc == iVar10 + 1) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      puVar15 = (undefined4 *)&DAT_1487598bc;
      bVar24 = false;
      do {
      } while (_DAT_1487598bc != 0);
      LOCK();
      UNLOCK();
      _DAT_1487598bc = iVar10 + 1;
    }
  }
  else {
    puVar15 = (undefined4 *)0x0;
  }
  if ((_DAT_1487598c0 != 0) && (uVar21 = *param_1, uVar21 != 0)) {
    uVar18 = _DAT_1487598c0 - 1;
    uVar12 = (uVar21 >> 0x10 ^ uVar21) * -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    uVar14 = (ulonglong)((uVar12 >> 0x10 ^ uVar12) & uVar18);
    lVar16 = uVar14 * 0x10;
    bVar23 = *(uint *)(_DAT_1487598c8 + lVar16) != 0;
    if (*(uint *)(_DAT_1487598c8 + lVar16) != uVar21 && bVar23) {
      do {
        uVar14 = (ulonglong)((uint)(uVar14 * 0x10 + 0x10 >> 4) & uVar18);
        lVar16 = uVar14 * 0x10;
        bVar23 = *(uint *)(_DAT_1487598c8 + lVar16) != 0;
      } while (bVar23 && *(uint *)(_DAT_1487598c8 + lVar16) != uVar21);
    }
    puVar17 = (undefined8 *)(lVar16 + _DAT_1487598c8);
    if (bVar23) {
      lVar16 = (ulonglong)
               ((uint)((ulonglong)((longlong)puVar17 + (0x10 - _DAT_1487598c8)) >> 4) & uVar18) *
               0x10;
      uVar21 = *(uint *)(_DAT_1487598c8 + lVar16);
      if (uVar21 != 0) {
        puVar19 = (undefined8 *)(lVar16 + _DAT_1487598c8);
        lVar16 = _DAT_1487598c8;
        uVar18 = _DAT_1487598c0;
        do {
          uVar22 = (ulonglong)uVar18;
          uVar21 = (uVar21 >> 0x10 ^ uVar21) * -0x7a143595;
          uVar12 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
          uVar21 = uVar18 - 1;
          puVar13 = (undefined8 *)((ulonglong)((uVar12 >> 0x10 ^ uVar12) & uVar21) * 0x10 + lVar16);
          uVar14 = uVar22;
          if (puVar13 <= puVar17) {
            uVar14 = 0;
          }
          if (puVar13 <= puVar19) {
            uVar22 = 0;
          }
          if ((uint)((longlong)puVar17 + (uVar14 * 0x10 - (longlong)puVar13) >> 4) <
              (uint)((longlong)puVar19 + (uVar22 * 0x10 - (longlong)puVar13) >> 4)) {
            uVar7 = puVar19[1];
            *puVar17 = *puVar19;
            puVar17[1] = uVar7;
            uVar21 = _DAT_1487598c0 - 1;
            lVar16 = _DAT_1487598c8;
            puVar17 = puVar19;
            uVar18 = _DAT_1487598c0;
          }
          lVar20 = (ulonglong)
                   ((uint)((ulonglong)((longlong)puVar19 + (0x10 - lVar16)) >> 4) & uVar21) * 0x10;
          uVar21 = *(uint *)(lVar16 + lVar20);
          puVar19 = (undefined8 *)(lVar20 + lVar16);
        } while (uVar21 != 0);
      }
      *(undefined4 *)puVar17 = 0;
      _DAT_1487598c4 = _DAT_1487598c4 + -1;
    }
  }
  if (!bVar24) {
    *puVar15 = 0;
  }
  param_1[2] = 10;
  plVar8 = _DAT_147bba930;
  param_1[3] = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)param_1 - *_DAT_147bba930;
  uVar21 = SUB164(auVar6 / ZEXT416(*(uint *)(_DAT_147bba930 + 1)),0);
  uVar18 = *(uint *)(_DAT_147bba930[5] +
                    (SUB168(auVar6 / ZEXT416(*(uint *)(_DAT_147bba930 + 1)),0) & 0xffffffff) * 4) &
           0xfffe0000 | uVar21;
  uVar21 = uVar21 & 0x1ffff | 0x20000;
  if (uVar18 < 0xfffe0000) {
    uVar21 = uVar18 + 0x20000;
  }
  puVar1 = (ulonglong *)(_DAT_147bba930 + 4);
  LOCK();
  *(int *)(_DAT_147bba930 + 2) = (int)_DAT_147bba930[2] + -1;
  UNLOCK();
  uVar14 = *puVar1;
  do {
    *(uint *)(plVar8[5] + (ulonglong)(uVar21 & 0x1ffff) * 4) =
         (uint)uVar14 & 0x1ffff | uVar21 & 0xfffe0000;
    LOCK();
    uVar22 = plVar8[4];
    bVar24 = uVar14 == uVar22;
    if (bVar24) {
      plVar8[4] = (uVar14 & 0xffffffff00000000 | (ulonglong)(uVar21 & 0x1ffff)) + 0x100000000;
      uVar22 = uVar14;
    }
    UNLOCK();
    uVar14 = uVar22;
  } while (!bVar24);
  if (plVar8[3] == 0) {
    return;
  }
  uVar14 = (ulonglong)((longlong)param_1 - *plVar8) >> 0x10;
  uVar22 = ((ulonglong)*(uint *)(plVar8 + 1) - 1) + ((longlong)param_1 - *plVar8) >> 0x10;
  if (uVar14 <= uVar22) {
    do {
      LOCK();
      psVar2 = (short *)(plVar8[3] + 2 + uVar14 * 2);
      sVar3 = *psVar2;
      *psVar2 = *psVar2 + -1;
      UNLOCK();
      if (sVar3 == 0x101) {
        FUN_140004b40(0x1471b63b8);
        puVar5 = (ushort *)plVar8[3];
        uVar9 = *puVar5;
        do {
          LOCK();
          uVar4 = *puVar5;
          bVar24 = uVar9 == uVar4;
          if (bVar24) {
            *puVar5 = uVar9 | 0x8000;
            uVar4 = uVar9;
          }
          uVar9 = uVar4;
          UNLOCK();
        } while (!bVar24);
        if (-1 < (short)uVar9) {
          uVar11 = (ulonglong)uRam00000001471b7420;
          uRam00000001471b7420 = uRam00000001471b7420 + 1;
          *(longlong **)(uVar11 * 8 + 0x1471b6420) = plVar8;
        }
        func_0x000144d9dab0(0x1471b63b8);
      }
      bVar24 = uVar14 != uVar22;
      uVar14 = uVar14 + 1;
    } while (bVar24);
  }
  return;
}

