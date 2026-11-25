// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400785d0  size: 1633 bytes
// Name:    FUN_1400785d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443a7440, FUN_1455cbd10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400785d0(longlong param_1,ushort *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  byte *pbVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  int iStack_48;
  uint uStack_44;
  
  if ((*param_2 & 0x7ff) != 0) {
LAB_1400786d1:
    *(undefined4 *)(param_1 + 0x2000) = 3;
    return;
  }
  lVar9 = (longlong)*(int *)(param_1 + 0x1ffc);
  iVar6 = *(int *)(param_1 + 0x201c);
  *(int *)(param_1 + 0x1fa4 + lVar9 * 0x48) = iVar6;
  *(int *)(param_1 + 0x201c) = iVar6 + 1;
  *(undefined1 *)(param_1 + 0x1fac + lVar9 * 0x48) = *(undefined1 *)((longlong)param_2 + 0x33);
  iVar6 = func_0x0001455cbc80();
  *(int *)(param_1 + 0x1f68 + lVar9 * 0x48) = iVar6;
  lVar3 = _DAT_149ae9908;
  if (iVar6 == -1) goto LAB_1400786d1;
  lVar17 = (longlong)iVar6 * 0x20;
  lVar19 = (longlong)iVar6 * 0x40;
  *(undefined1 (*) [32])(_DAT_149ae9908 + 0x20 + lVar19) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(lVar3 + lVar19) = ZEXT1232(ZEXT812(0));
  lVar3 = _DAT_149ae9938;
  func_0x000145f40580(*(undefined8 *)(_DAT_149ae9938 + 8 + lVar17),0,0x200);
  if (*(uint *)(param_1 + 0x2004) < 3 && _DAT_149ae9908 != 0) {
    *(uint *)(_DAT_149ae9908 + 4 + lVar19) =
         (*(uint *)(_DAT_149ae9908 + 4 + lVar19) & 0xdfffffff |
         (*(uint *)(param_1 + 0x2004) & 1) << 0x1d) ^ 0x20000000;
  }
  if (_DAT_149ae9908 != 0) {
    uVar12 = *(uint *)(param_1 + 0xc);
    lVar10 = _DAT_149ae9908 + lVar19;
    if (uVar12 < 0x5dc1) {
      *(byte *)(lVar10 + 7) = *(byte *)(lVar10 + 7) & 0xe7;
    }
    else if (uVar12 < 0x7d01) {
      *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) & 0xe7ffffff | 0x8000000;
    }
    else {
      if (uVar12 < 0xac45) {
        uVar12 = *(uint *)(lVar10 + 4) & 0xe7ffffff | 0x10000000;
      }
      else {
        uVar12 = *(uint *)(lVar10 + 4) | 0x18000000;
      }
      *(uint *)(lVar10 + 4) = uVar12;
    }
  }
  lVar9 = param_1 + 0x1f68 + lVar9 * 0x48;
  if ((_DAT_149ae9908 != 0) &&
     (*(uint *)(_DAT_149ae9908 + 4 + lVar19) =
           *(uint *)(_DAT_149ae9908 + 4 + lVar19) & 0xff0fffff | 0x400000, _DAT_149ae9908 != 0)) {
    *(uint *)(_DAT_149ae9908 + lVar19) = *(uint *)(_DAT_149ae9908 + lVar19) & 0xf83fffff | 0x5c00000
    ;
    lVar10 = _DAT_149ae9908;
    lVar3 = *(longlong *)(lVar3 + lVar17);
    if ((lVar3 != 0 && _DAT_149ae9908 != 0) &&
       (cVar5 = func_0x000145f401c0(lVar3,0x40), cVar5 != '\0')) {
      uVar7 = func_0x000145f401e0(lVar3);
      *(undefined4 *)(lVar10 + 0x1c + lVar19) = uVar7;
    }
    if (_DAT_149ae9908 != 0) {
      pbVar18 = (byte *)(_DAT_149ae9908 + 7 + lVar19);
      *pbVar18 = *pbVar18 | 0x80;
      lVar10 = _DAT_149ae9908;
      lVar3 = *(longlong *)(_DAT_149ae9938 + 8 + lVar17);
      if ((lVar3 != 0 && _DAT_149ae9908 != 0) &&
         (cVar5 = func_0x000145f401c0(lVar3,0x80), cVar5 != '\0')) {
        uVar7 = func_0x000145f401e0(lVar3);
        *(undefined4 *)(lVar10 + 0x20 + lVar19) = uVar7;
      }
    }
  }
  uVar12 = *(uint *)(param_2 + 8);
  pbVar18 = *(byte **)param_2;
  *(byte **)(lVar9 + 8) = pbVar18;
  *(uint *)(lVar9 + 0x38) = uVar12;
  iStack_48 = 0;
  if (*(int *)(param_2 + 0x10) == 0 && *(int *)(param_2 + 10) != 0) {
    uVar8 = FUN_1455cbd10(pbVar18,uVar12,*(int *)(param_2 + 10),&iStack_48);
    uVar12 = uVar12 - uVar8;
    pbVar18 = pbVar18 + uVar8;
  }
  else if (*(int *)(param_2 + 0x10) != 0) {
    FUN_1443a7440(param_2,lVar9);
    if (*(uint *)(lVar9 + 0x20) < 0x4000000 && _DAT_149ae9908 != 0) {
      *(uint *)(_DAT_149ae9908 + 0xc + lVar19) =
           *(uint *)(_DAT_149ae9908 + 0xc + lVar19) & 0xfc000000 | *(uint *)(lVar9 + 0x20);
    }
    if (*(uint *)(lVar9 + 0x28) < 0x4000000 && _DAT_149ae9908 != 0) {
      *(uint *)(_DAT_149ae9908 + 0x10 + lVar19) =
           *(uint *)(_DAT_149ae9908 + 0x10 + lVar19) & 0xfc000000 | *(uint *)(lVar9 + 0x28);
    }
    if (*(uint *)(lVar9 + 0x2c) < 4 && _DAT_149ae9908 != 0) {
      *(uint *)(_DAT_149ae9908 + 4 + lVar19) =
           *(uint *)(_DAT_149ae9908 + 4 + lVar19) & 0xffffcfff | *(uint *)(lVar9 + 0x2c) << 0xc;
    }
    if ((_DAT_149ae9908 != 0) &&
       ((4 < *(uint *)(lVar9 + 0x24) ||
        (*(uint *)(_DAT_149ae9908 + 4 + lVar19) =
              *(uint *)(_DAT_149ae9908 + 4 + lVar19) & 0xfff1ffff | *(uint *)(lVar9 + 0x24) << 0x11,
        _DAT_149ae9908 != 0)))) {
      *(uint *)(_DAT_149ae9908 + lVar19) = *(uint *)(_DAT_149ae9908 + lVar19) | 0xff000;
    }
    goto LAB_14007892c;
  }
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  *(undefined1 (*) [16])(lVar9 + 0x20) = auVar20;
LAB_14007892c:
  iVar6 = func_0x0001455cbd70(pbVar18,uVar12);
  *(int *)(lVar9 + 0x10) = iVar6;
  uVar13 = *(int *)(param_2 + 10) - iStack_48;
  *(uint *)(lVar9 + 0x14) = uVar13;
  uVar8 = uVar13 - 0x80;
  if (uVar13 < 0x80) {
    uVar8 = uVar13;
  }
  uStack_44 = uVar8 >> 7 & 3;
  if (uVar8 < 0x200) {
    uVar15 = 0x20;
    *(uint *)(lVar9 + 0x1c) = uStack_44 << 7;
  }
  else {
    *(uint *)(lVar9 + 0x1c) = uStack_44 << 7 | uVar8 & 0xfffffe00;
    if (0x7ff < uVar12) {
      uVar8 = uVar8 >> 9;
      pbVar11 = pbVar18;
      uVar13 = 0;
      do {
        uVar15 = (*pbVar11 >> 2) + uVar13;
        if (uVar8 < uVar15) {
          uVar15 = (pbVar11[2] >> 3) + 0x20 + ((uint)pbVar11[1] << 5 | (*pbVar11 & 3) << 0xd);
          if (uVar8 != uVar13) {
            iVar14 = uVar13 - uVar8;
            do {
              uVar4 = (ulonglong)(uVar15 >> 3);
              uVar8 = (uint)pbVar11[uVar4 + 1];
              if ((uVar15 & 7) < 2) {
                uVar13 = (uint)pbVar11[uVar4] << 8;
                iVar16 = 1;
              }
              else {
                uVar8 = (uint)pbVar11[uVar4 + 1] << 8 | (uint)pbVar11[uVar4] << 0x10;
                uVar13 = (uint)pbVar11[uVar4 + 2];
                iVar16 = 9;
              }
              uVar15 = uVar15 + ((uVar13 | uVar8) >> (iVar16 - (uVar15 & 7) & 0x1f) & 0x7fff);
              iVar14 = iVar14 + 1;
            } while (iVar14 != 0);
          }
          uVar15 = uVar15 + ((int)pbVar11 - (int)pbVar18) * 8;
          goto LAB_140078a6d;
        }
        pbVar2 = pbVar11 + (ulonglong)pbVar11[3] * 0x800 + 0x1000;
        pbVar11 = pbVar11 + (ulonglong)pbVar11[3] * 0x800 + 0x800;
        uVar13 = uVar15;
      } while (pbVar2 <= pbVar18 + uVar12);
    }
    uVar15 = 0;
  }
LAB_140078a6d:
  iVar14 = *(int *)(param_2 + 0xc) - iStack_48;
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar14 = iVar6;
  }
  *(int *)(lVar9 + 0x18) = iVar14;
  uVar8 = ~*(uint *)(param_1 + 0x1ffc) & 1;
  *(uint *)(param_1 + 0x1ffc) = uVar8;
  if (uVar8 == *(uint *)(param_1 + 0x1ff8)) {
    *(undefined1 *)(param_1 + 0x2018) = 0;
  }
  if (_DAT_149ae9908 != 0) {
    pbVar11 = (byte *)(_DAT_149ae9908 + 0x13 + lVar19);
    *pbVar11 = *pbVar11 & 0x7f;
    if ((((uVar12 & 0x7ff) == 0) && (uVar12 < 0x7ff801)) && (_DAT_149ae9908 != 0)) {
      *(uint *)(_DAT_149ae9908 + lVar19) =
           *(uint *)(_DAT_149ae9908 + lVar19) & 0xfffff000 | uVar12 >> 0xb;
    }
    lVar3 = _DAT_149ae9908;
    if (_DAT_149ae9908 != 0) {
      if ((pbVar18 == (byte *)0x0) || (cVar5 = func_0x000145f401c0(pbVar18,0x800), cVar5 != '\0')) {
        uVar7 = func_0x000145f401e0(pbVar18);
        *(undefined4 *)(lVar3 + 0x14 + lVar19) = uVar7;
      }
      if (((_DAT_149ae9908 != 0) &&
          (puVar1 = (uint *)(_DAT_149ae9908 + 4 + lVar19), *puVar1 = *puVar1 & 0xfffff000,
          lVar3 = _DAT_149ae9908, _DAT_149ae9908 != 0)) &&
         ((pbVar18 == (byte *)0x0 || (cVar5 = func_0x000145f401c0(pbVar18,0x800), cVar5 != '\0'))))
      {
        uVar7 = func_0x000145f401e0(pbVar18);
        *(undefined4 *)(lVar3 + 0x18 + lVar19) = uVar7;
      }
    }
  }
  *(uint *)(_DAT_149ae9908 + lVar19) = *(uint *)(_DAT_149ae9908 + lVar19) | 0x100000;
  if ((_DAT_149ae9908 != 0) &&
     (pbVar18 = (byte *)(_DAT_149ae9908 + 2 + lVar19), *pbVar18 = *pbVar18 & 0xdf,
     _DAT_149ae9908 != 0)) {
    pbVar18 = (byte *)(_DAT_149ae9908 + 7 + lVar19);
    *pbVar18 = *pbVar18 | 0x80;
    if (uVar15 < 0x4000000 && _DAT_149ae9908 != 0) {
      *(uint *)(_DAT_149ae9908 + 8 + lVar19) =
           *(uint *)(_DAT_149ae9908 + 8 + lVar19) & 0xfc000000 | uVar15;
    }
    if (_DAT_149ae9908 != 0) {
      *(uint *)(_DAT_149ae9908 + 4 + lVar19) =
           *(uint *)(_DAT_149ae9908 + 4 + lVar19) & 0xf8ffffff | uStack_44 << 0x18;
    }
  }
  *(undefined4 *)(param_1 + 0x2020) = 0;
  *(ulonglong *)(param_1 + 0x2010) =
       CONCAT44((int)((ulonglong)*(undefined8 *)(param_1 + 0x2010) >> 0x20) + *(int *)(param_2 + 8),
                (int)*(undefined8 *)(param_1 + 0x2010) + *(int *)(param_2 + 8));
  *(undefined4 *)(param_1 + 0x2000) = 1;
  if (*(uint *)(lVar9 + 0x18) <= *(uint *)(lVar9 + 0x10)) {
    return;
  }
  *(uint *)(lVar9 + 0x18) = *(uint *)(lVar9 + 0x10);
  return;
}

