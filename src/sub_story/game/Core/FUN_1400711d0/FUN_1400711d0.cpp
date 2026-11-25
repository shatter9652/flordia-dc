// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400711d0  size: 192 bytes
// Name:    FUN_1400711d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40400
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x00014007158b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400711d0(uint *param_1,char param_2)

{
  ulonglong *puVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  longlong *plVar5;
  ushort *puVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong unaff_GS_OFFSET;
  bool bVar23;
  bool bVar24;
  
  uVar21 = param_1[1];
  if ((((((ulonglong)uVar21 & 0x1ffff) != 0x1ffff) &&
       (plVar5 = *(longlong **)((ulonglong)(uVar21 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar5 != (longlong *)0x0)) &&
      (uVar18 = *(uint *)(plVar5[5] + ((ulonglong)uVar21 & 0x1ffff) * 4),
      (uVar18 >> 0x11 & 0x3ff) == uVar21 >> 0x16)) &&
     (((uVar18 & *(uint *)(plVar5 + 6)) == *(uint *)(plVar5 + 6) && (*plVar5 != 0)))) {
    param_1[1] = 0x1ffff;
  }
  lVar11 = FUN_144e40400(*param_1);
  if (lVar11 != 0) {
    func_0x0001400712b0(*(undefined1 *)(lVar11 + 0x42b));
    func_0x000140071290(lVar11);
    *(byte *)(lVar11 + 0x3bc) = *(byte *)(lVar11 + 0x3bc) & 0xdf;
  }
  if (param_2 == '\0') {
    return;
  }
  bVar24 = true;
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x860) == '\0') {
    iVar10 = func_0x000145037ab0();
    if (_DAT_1487598bc == iVar10 + 1) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      puVar16 = (undefined4 *)&DAT_1487598bc;
      bVar24 = false;
      do {
      } while (_DAT_1487598bc != 0);
      LOCK();
      UNLOCK();
      _DAT_1487598bc = iVar10 + 1;
    }
  }
  else {
    puVar16 = (undefined4 *)0x0;
  }
  if ((_DAT_1487598c0 != 0) && (uVar21 = *param_1, uVar21 != 0)) {
    uVar18 = _DAT_1487598c0 - 1;
    uVar13 = (uVar21 >> 0x10 ^ uVar21) * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    uVar15 = (ulonglong)((uVar13 >> 0x10 ^ uVar13) & uVar18);
    lVar11 = uVar15 * 0x10;
    bVar23 = *(uint *)(_DAT_1487598c8 + lVar11) != 0;
    if (*(uint *)(_DAT_1487598c8 + lVar11) != uVar21 && bVar23) {
      do {
        uVar15 = (ulonglong)((uint)(uVar15 * 0x10 + 0x10 >> 4) & uVar18);
        lVar11 = uVar15 * 0x10;
        bVar23 = *(uint *)(_DAT_1487598c8 + lVar11) != 0;
      } while (bVar23 && *(uint *)(_DAT_1487598c8 + lVar11) != uVar21);
    }
    puVar17 = (undefined8 *)(lVar11 + _DAT_1487598c8);
    if (bVar23) {
      lVar11 = (ulonglong)
               ((uint)((ulonglong)((longlong)puVar17 + (0x10 - _DAT_1487598c8)) >> 4) & uVar18) *
               0x10;
      uVar21 = *(uint *)(_DAT_1487598c8 + lVar11);
      if (uVar21 != 0) {
        puVar19 = (undefined8 *)(lVar11 + _DAT_1487598c8);
        lVar11 = _DAT_1487598c8;
        uVar18 = _DAT_1487598c0;
        do {
          uVar22 = (ulonglong)uVar18;
          uVar21 = (uVar21 >> 0x10 ^ uVar21) * -0x7a143595;
          uVar13 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
          uVar21 = uVar18 - 1;
          puVar14 = (undefined8 *)((ulonglong)((uVar13 >> 0x10 ^ uVar13) & uVar21) * 0x10 + lVar11);
          uVar15 = uVar22;
          if (puVar14 <= puVar17) {
            uVar15 = 0;
          }
          if (puVar14 <= puVar19) {
            uVar22 = 0;
          }
          if ((uint)((longlong)puVar17 + (uVar15 * 0x10 - (longlong)puVar14) >> 4) <
              (uint)((longlong)puVar19 + (uVar22 * 0x10 - (longlong)puVar14) >> 4)) {
            uVar8 = puVar19[1];
            *puVar17 = *puVar19;
            puVar17[1] = uVar8;
            uVar21 = _DAT_1487598c0 - 1;
            lVar11 = _DAT_1487598c8;
            puVar17 = puVar19;
            uVar18 = _DAT_1487598c0;
          }
          lVar20 = (ulonglong)
                   ((uint)((ulonglong)((longlong)puVar19 + (0x10 - lVar11)) >> 4) & uVar21) * 0x10;
          uVar21 = *(uint *)(lVar11 + lVar20);
          puVar19 = (undefined8 *)(lVar20 + lVar11);
        } while (uVar21 != 0);
      }
      *(undefined4 *)puVar17 = 0;
      _DAT_1487598c4 = _DAT_1487598c4 + -1;
    }
  }
  if (!bVar24) {
    *puVar16 = 0;
  }
  param_1[2] = 10;
  plVar5 = _DAT_147bba930;
  param_1[3] = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (longlong)param_1 - *_DAT_147bba930;
  uVar21 = SUB164(auVar7 / ZEXT416(*(uint *)(_DAT_147bba930 + 1)),0);
  uVar18 = *(uint *)(_DAT_147bba930[5] +
                    (SUB168(auVar7 / ZEXT416(*(uint *)(_DAT_147bba930 + 1)),0) & 0xffffffff) * 4) &
           0xfffe0000 | uVar21;
  uVar21 = uVar21 & 0x1ffff | 0x20000;
  if (uVar18 < 0xfffe0000) {
    uVar21 = uVar18 + 0x20000;
  }
  puVar1 = (ulonglong *)(_DAT_147bba930 + 4);
  LOCK();
  *(int *)(_DAT_147bba930 + 2) = (int)_DAT_147bba930[2] + -1;
  UNLOCK();
  uVar15 = *puVar1;
  do {
    *(uint *)(plVar5[5] + (ulonglong)(uVar21 & 0x1ffff) * 4) =
         (uint)uVar15 & 0x1ffff | uVar21 & 0xfffe0000;
    LOCK();
    uVar22 = plVar5[4];
    bVar24 = uVar15 == uVar22;
    if (bVar24) {
      plVar5[4] = (uVar15 & 0xffffffff00000000 | (ulonglong)(uVar21 & 0x1ffff)) + 0x100000000;
      uVar22 = uVar15;
    }
    UNLOCK();
    uVar15 = uVar22;
  } while (!bVar24);
  if (plVar5[3] == 0) {
    return;
  }
  uVar15 = (ulonglong)((longlong)param_1 - *plVar5) >> 0x10;
  uVar22 = ((ulonglong)*(uint *)(plVar5 + 1) - 1) + ((longlong)param_1 - *plVar5) >> 0x10;
  if (uVar15 <= uVar22) {
    do {
      LOCK();
      psVar2 = (short *)(plVar5[3] + 2 + uVar15 * 2);
      sVar3 = *psVar2;
      *psVar2 = *psVar2 + -1;
      UNLOCK();
      if (sVar3 == 0x101) {
        FUN_140004b40(0x1471b63b8);
        puVar6 = (ushort *)plVar5[3];
        uVar9 = *puVar6;
        do {
          LOCK();
          uVar4 = *puVar6;
          bVar24 = uVar9 == uVar4;
          if (bVar24) {
            *puVar6 = uVar9 | 0x8000;
            uVar4 = uVar9;
          }
          uVar9 = uVar4;
          UNLOCK();
        } while (!bVar24);
        if (-1 < (short)uVar9) {
          uVar12 = (ulonglong)uRam00000001471b7420;
          uRam00000001471b7420 = uRam00000001471b7420 + 1;
          *(longlong **)(uVar12 * 8 + 0x1471b6420) = plVar5;
        }
        func_0x000144d9dab0(0x1471b63b8);
      }
      bVar24 = uVar15 != uVar22;
      uVar15 = uVar15 + 1;
    } while (bVar24);
  }
  return;
}

