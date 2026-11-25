// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400548c0  size: 1167 bytes
// Name:    FUN_1400548c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455ad880, FUN_145560970, FUN_14004c030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400548c0(undefined8 param_1,uint *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong unaff_GS_OFFSET;
  bool bVar16;
  undefined1 auVar17 [16];
  
  plVar4 = _DAT_14764a8f0;
  uVar7 = *(uint *)(param_4 + 1);
  if ((uVar7 & 0x20) != 0) {
    *param_2 = 0x1ffff;
    return;
  }
  uVar8 = _DAT_14764a8f0[4];
  do {
    iVar6 = (int)uVar8;
    if (iVar6 == 0x1fffe) goto LAB_140054982;
    uVar13 = uVar8 & 0xffffffff;
    LOCK();
    uVar9 = plVar4[4];
    bVar16 = uVar8 == uVar9;
    if (bVar16) {
      plVar4[4] = (ulonglong)(*(uint *)(plVar4[5] + uVar13 * 4) & 0x1ffff) |
                  uVar8 & 0xffffffff00000000;
      uVar9 = uVar8;
    }
    UNLOCK();
    uVar8 = uVar9;
  } while (!bVar16);
  LOCK();
  *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
  UNLOCK();
  puVar2 = (uint *)(plVar4[5] + uVar13 * 4);
  *puVar2 = *puVar2 | *(uint *)(plVar4 + 6);
  lVar14 = *plVar4;
  lVar11 = (ulonglong)(uint)((int)plVar4[1] * iVar6) + lVar14;
  if ((lVar14 == 0) || (plVar4[3] == 0)) {
    if (lVar14 == 0) {
LAB_140054982:
      uVar12 = 0;
      while( true ) {
        if ((uVar12 + 1 & 0xf) == 0) {
          func_0x00014092eca0(1);
        }
        else {
          func_0x000144f4b620();
        }
        uVar8 = plVar4[4];
        do {
          iVar6 = (int)uVar8;
          if (iVar6 == 0x1fffe) goto LAB_140054a0a;
          uVar13 = uVar8 & 0xffffffff;
          LOCK();
          uVar9 = plVar4[4];
          bVar16 = uVar8 == uVar9;
          if (bVar16) {
            plVar4[4] = (ulonglong)(*(uint *)(plVar4[5] + uVar13 * 4) & 0x1ffff) |
                        uVar8 & 0xffffffff00000000;
            uVar9 = uVar8;
          }
          UNLOCK();
          uVar8 = uVar9;
        } while (!bVar16);
        LOCK();
        *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
        UNLOCK();
        puVar2 = (uint *)(plVar4[5] + uVar13 * 4);
        *puVar2 = *puVar2 | *(uint *)(plVar4 + 6);
        lVar11 = *plVar4;
        if ((lVar11 != 0) && (plVar4[3] != 0)) break;
        if (lVar11 != 0) {
          lVar11 = lVar11 + (ulonglong)(uint)((int)plVar4[1] * iVar6);
          goto LAB_140054a45;
        }
LAB_140054a0a:
        bVar16 = 9999 < uVar12;
        uVar12 = uVar12 + 1;
        if (bVar16) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar11 = lVar11 + (ulonglong)(uint)((int)plVar4[1] * iVar6);
      FUN_14004c030(plVar4,lVar11);
    }
  }
  else {
    FUN_14004c030(plVar4,lVar11);
  }
LAB_140054a45:
  func_0x0001455ad7f0(lVar11,param_4,2 - (uint)((uVar7 & 0x10) == 0));
  if (*(code **)(lVar11 + 0xc0) != (code *)0x0) {
    (**(code **)(lVar11 + 0xc0))(lVar11 + 0x2fU & 0xfffffffffffffff0);
  }
  if (*param_3 == 0) {
    if (param_3[1] == 0) {
      auVar17._0_12_ = ZEXT812(0);
      auVar17._12_4_ = 0;
      *(undefined1 (*) [16])(lVar11 + 0xb0) = auVar17;
    }
    else {
      *(longlong *)(lVar11 + 0x2fU & 0xfffffffffffffff0) = param_3[1];
      *(undefined **)(lVar11 + 0xb0) = &UNK_1406b9e30;
      *(undefined **)(lVar11 + 0xb8) = &UNK_145220e00;
    }
    *(undefined8 *)(lVar11 + 0xc0) = 0;
  }
  else {
    (*(code *)param_3[2])(lVar11 + 0x2fU & 0xfffffffffffffff0);
    *(longlong *)(lVar11 + 0xb0) = param_3[1];
    *(longlong *)(lVar11 + 0xb8) = param_3[2];
    *(longlong *)(lVar11 + 0xc0) = param_3[3];
  }
  *param_2 = 0x1ffff;
  plVar4 = _DAT_1498f14e8;
  if ((*(byte *)(param_4 + 1) & 0x10) != 0) {
    uVar7 = (uint)((ulonglong)(lVar11 - *_DAT_14764a8f0) / (ulonglong)*(uint *)(_DAT_14764a8f0 + 1))
            & 0x1ffff;
    *param_2 = *(uint *)(_DAT_14764a8f0[5] + (ulonglong)uVar7 * 4) & 0xfffe0000 | uVar7;
    uVar8 = plVar4[4];
    do {
      iVar6 = (int)uVar8;
      if (iVar6 == 0x1fffe) goto LAB_140054d4e;
      uVar13 = uVar8 & 0xffffffff;
      LOCK();
      uVar9 = plVar4[4];
      bVar16 = uVar8 == uVar9;
      if (bVar16) {
        plVar4[4] = (ulonglong)(*(uint *)(plVar4[5] + uVar13 * 4) & 0x1ffff) |
                    uVar8 & 0xffffffff00000000;
        uVar9 = uVar8;
      }
      UNLOCK();
      uVar8 = uVar9;
    } while (!bVar16);
    LOCK();
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    UNLOCK();
    puVar2 = (uint *)(plVar4[5] + uVar13 * 4);
    *puVar2 = *puVar2 | *(uint *)(plVar4 + 6);
    if (*plVar4 == 0) {
LAB_140054d4e:
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar14 = *plVar4 + (ulonglong)(uint)((int)plVar4[1] * iVar6);
    if (plVar4[3] != 0) {
      FUN_14004c030(plVar4,lVar14);
    }
    func_0x00014256f930(lVar14,1,0);
    *(longlong *)(lVar11 + 0xf8) = lVar14;
    FUN_1455ad880(lVar11,lVar14);
  }
  if (param_4[4] == 0) {
    if (((*(byte *)(param_4 + 1) & 4) != 0) &&
       (lVar14 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xfe8), lVar14 != 0)) {
      *(longlong *)(lVar11 + 0x100) = lVar14;
      LOCK();
      *(int *)(lVar14 + 0xf0) = *(int *)(lVar14 + 0xf0) + 1;
      UNLOCK();
      func_0x0001455ad910(lVar11 + 0x108);
    }
  }
  else {
    *(longlong *)(lVar11 + 0x100) = param_4[4];
    param_4[4] = 0;
  }
  uVar7 = *(uint *)(param_4 + 3);
  if (uVar7 == 4) {
    if (*(longlong *)(lVar11 + 0x100) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)*(byte *)(*(longlong *)(lVar11 + 0x100) + 0x73);
    }
  }
  *(char *)(lVar11 + 0xb) = (char)uVar7;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    uVar10 = FUN_145560970(param_1);
    FUN_1455ad880(lVar11,uVar10);
  }
  if (((((*(byte *)(param_4 + 1) & 2) != 0) &&
       (plVar4 = *(longlong **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xfe0),
       plVar4 != (longlong *)0x0)) && (lVar14 = *plVar4, lVar14 != 0)) &&
     (0 < *(int *)(lVar14 + 0xcc))) {
    lVar15 = 0;
    do {
      FUN_1455ad880(lVar11,*(undefined8 *)(*(longlong *)(lVar14 + 0xd0) + lVar15 * 8));
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(lVar14 + 0xcc));
  }
  if (*param_4 != 0) {
    FUN_1455ad880(lVar11);
  }
  lVar14 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xfe0);
  if (lVar14 != 0) {
    if (*(longlong *)(lVar11 + 0x100) != 0) {
      *(short *)(lVar14 + 0x18) = *(short *)(lVar14 + 0x18) + 1;
    }
    if (((*(byte *)(param_4 + 1) & 1) == 0) &&
       (puVar2 = (uint *)(lVar11 + 0x118), (uint *)(lVar14 + 8) != puVar2)) {
      *(undefined4 *)(lVar11 + 0x11c) = 0;
      uVar7 = *(uint *)(lVar14 + 0xc);
      if ((ulonglong)uVar7 != 0) {
        if (*puVar2 < uVar7) {
          *puVar2 = uVar7;
        }
        func_0x000145f40560(lVar11 + 0x120,lVar14 + 0x10,(ulonglong)uVar7 << 3);
        *(uint *)(lVar11 + 0x11c) = uVar7;
      }
    }
  }
  lVar14 = (ulonglong)*(byte *)(lVar11 + 0xb) * 0x40;
  bVar3 = *(byte *)(lVar11 + 0xd);
  func_0x000144da41a0(*(undefined8 *)(lVar14 + 0x1471bfd08));
  LOCK();
  piVar1 = (int *)(lVar14 + 0x1471bfd1c);
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + (uint)bVar3;
  UNLOCK();
  uVar7 = iVar6 + (uint)bVar3 + 0xf >> 4;
  FUN_144da4240(lVar14 + 0x1471bfd00,uVar7);
  uVar7 = uVar7 - *(int *)(lVar14 + 0x1471bfd14);
  if ((0 < (int)uVar7) && (plVar4 = *(longlong **)(lVar14 + 0x1471bfd28), plVar4 != (longlong *)0x0)
     ) {
    uVar8 = (ulonglong)*(uint *)((longlong)plVar4 + 0x14);
    if (uVar8 != 0) {
      uVar9 = (ulonglong)uVar7;
      if ((int)*(uint *)((longlong)plVar4 + 0x14) <= (int)uVar7) {
        uVar9 = uVar8;
      }
      lVar14 = 0;
      do {
        piVar1 = (int *)(*plVar4 + 0x10 + lVar14);
        lVar14 = lVar14 + 0x40;
        uVar7 = (int)uVar9 - *piVar1;
        uVar9 = (ulonglong)uVar7;
      } while (uVar8 << 6 != lVar14);
      if (0 < (int)uVar7) {
        uVar13 = 1;
        lVar14 = 0x10;
        do {
          lVar11 = *plVar4;
          if (*(int *)(lVar11 + lVar14) == 0) {
            *(undefined4 *)(lVar11 + lVar14) = 1;
            func_0x000140005930(*(undefined8 *)(lVar11 + 8 + lVar14));
            uVar9 = (ulonglong)((int)uVar9 - 1);
          }
          if (uVar8 <= uVar13) {
            return;
          }
          uVar13 = uVar13 + 1;
          lVar14 = lVar14 + 0x40;
        } while (0 < (int)uVar9);
      }
    }
    return;
  }
  return;
}

