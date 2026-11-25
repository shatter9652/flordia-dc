// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140074fa0  size: 225 bytes
// Name:    FUN_140074fa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140074fa0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  
  puVar3 = (ulonglong *)*param_1;
  iVar1 = *(int *)((longlong)puVar3 + 0x14);
  uVar10 = puVar3[1];
  uVar12 = *puVar3;
  if ((~*puVar3 & 0xffff00000000) == 0) {
    uVar8 = 0;
  }
  else {
    do {
      uVar5 = (uint)(uVar12 >> 0x20);
      uVar8 = (ulonglong)((uVar5 & 0xffff) * iVar1);
      LOCK();
      uVar7 = *puVar3;
      bVar15 = uVar12 == uVar7;
      if (bVar15) {
        *puVar3 = (ulonglong)((int)uVar12 + 1) | (uVar12 & 0xffff000000000000) - 0x1000000000000 |
                  (ulonglong)*(ushort *)(uVar10 + uVar8) << 0x20;
        uVar7 = uVar12;
      }
      UNLOCK();
      if (bVar15) {
        uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0x14);
        lVar13 = uVar8 + uVar10;
        if (uVar12 == 0) {
          uVar10 = 0xffffffff;
        }
        else {
          uVar2 = *(uint *)(param_1 + 2);
          iVar11 = -1;
          lVar9 = 0;
          uVar4 = *(undefined8 *)(*param_1 + 8);
          lVar14 = lVar13;
          do {
            *(int *)(lVar13 + lVar9) = iVar11;
            lVar9 = lVar9 + (ulonglong)uVar2;
            iVar6 = (int)uVar4;
            iVar11 = (int)lVar14 - iVar6;
            uVar12 = uVar12 - 1;
            lVar14 = lVar14 + (ulonglong)uVar2;
          } while (uVar12 != 0);
          uVar10 = (ulonglong)
                   ((int)lVar9 + (((int)uVar10 - uVar2) - iVar6) + iVar1 * (uVar5 & 0xffff));
        }
        func_0x000140075090(param_1,uVar10);
        uVar8 = CONCAT71((int7)(uVar10 >> 8),1);
        break;
      }
      uVar8 = 0;
      uVar12 = uVar7;
    } while ((~uVar7 & 0xffff00000000) != 0);
  }
  return uVar8 & 0xffffffff;
}

