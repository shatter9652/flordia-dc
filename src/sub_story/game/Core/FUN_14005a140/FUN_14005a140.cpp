// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005a140  size: 380 bytes
// Name:    FUN_14005a140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_1400063f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14005a140(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong *puVar13;
  longlong unaff_GS_OFFSET;
  bool bVar14;
  ulonglong uStack_40;
  
  puVar5 = (uint *)func_0x0001455aa450();
  lVar8 = *(longlong *)(puVar5 + 6);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    lVar11 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
  }
  else {
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar1 + 0x1440) = 1;
    lVar11 = FUN_1400063f0();
    *(longlong *)(lVar1 + 0x1438) = lVar11;
  }
  if (lVar11 != lVar8) {
    puVar13 = (ulonglong *)(puVar5 + 2);
    uVar4 = *puVar5;
LAB_14005a1b5:
    do {
      uVar3 = uVar4;
      if ((uVar3 & 0x1ff0000) != 0) {
        LOCK();
        uVar4 = *puVar5;
        bVar14 = uVar3 == uVar4;
        if (bVar14) {
          *puVar5 = uVar3 + 0x100;
          uVar4 = uVar3;
        }
        UNLOCK();
        if (bVar14) {
          uVar12 = (uint)(*puVar13 >> 7) & 0xffffff;
          uVar7 = *puVar13;
          if ((*puVar13 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar7 < 0x100000000) {
                uVar6 = *puVar13;
              }
              else {
                LOCK();
                uVar6 = *puVar13;
                if (uVar7 == uVar6) {
                  *puVar13 = uVar7 - 0x100000000;
                  uVar6 = uVar7;
                }
                UNLOCK();
                uVar4 = uVar3;
                if (uVar7 == uVar6) goto LAB_14005a1b5;
              }
              uVar12 = uVar12 - 1;
              uVar7 = uVar6;
            } while (uVar12 != 0);
          }
          uVar7 = *puVar13;
          do {
            while (uStack_40 = uVar7, 0xffffffff < (longlong)uStack_40) {
              LOCK();
              uVar7 = *puVar13;
              if (uStack_40 == uVar7) {
                *puVar13 = uStack_40 - 0x100000000;
                uVar7 = uStack_40;
              }
              UNLOCK();
              uVar4 = uVar3;
              if (uStack_40 == uVar7) goto LAB_14005a1b5;
            }
            cVar2 = FUN_140006180(puVar13,1,&uStack_40);
            uVar4 = uVar3;
            uVar7 = uStack_40;
          } while (cVar2 == '\0');
        }
        goto LAB_14005a1b5;
      }
      LOCK();
      uVar4 = *puVar5;
      bVar14 = uVar3 == uVar4;
      if (bVar14) {
        *puVar5 = uVar3 + 1;
        uVar4 = uVar3;
      }
      UNLOCK();
    } while (!bVar14);
  }
  lVar8 = func_0x000140324530();
  if (*(longlong *)(lVar8 + 0x10) == 0) {
    *param_1 = 0;
    uVar10 = 0;
  }
  else {
    puVar9 = (undefined8 *)func_0x000140324530();
    *param_1 = *puVar9;
    lVar8 = func_0x000140324530();
    uVar10 = *(undefined8 *)(lVar8 + 8);
  }
  param_1[1] = uVar10;
  return param_1;
}

