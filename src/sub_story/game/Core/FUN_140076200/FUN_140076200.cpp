// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076200  size: 492 bytes
// Name:    FUN_140076200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14241e170, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140076200(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ushort uVar13;
  undefined8 unaff_RBX;
  uint *puVar14;
  uint uVar15;
  ulonglong *puVar16;
  longlong unaff_GS_OFFSET;
  bool bVar17;
  ulonglong uStack_50;
  longlong lStack_48;
  
  puVar14 = (uint *)(_DAT_14abbf348 + 0x140);
  cVar4 = *(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1384);
  lStack_48 = param_1;
  if (cVar4 == '\x01') {
    puVar16 = (ulonglong *)(_DAT_14abbf348 + 0x148);
    uVar9 = *(uint *)(_DAT_14abbf348 + 0x140);
LAB_140076268:
    do {
      uVar15 = uVar9;
      if ((uVar15 & 0x1ff0000) != 0) {
        LOCK();
        uVar9 = *puVar14;
        bVar17 = uVar15 == uVar9;
        if (bVar17) {
          *puVar14 = uVar15 + 0x100;
          uVar9 = uVar15;
        }
        UNLOCK();
        if (bVar17) {
          uVar12 = (uint)(*puVar16 >> 7) & 0xffffff;
          uVar11 = *puVar16;
          if ((*puVar16 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar11 < 0x100000000) {
                uVar10 = *puVar16;
              }
              else {
                LOCK();
                uVar10 = *puVar16;
                if (uVar11 == uVar10) {
                  *puVar16 = uVar11 - 0x100000000;
                  uVar10 = uVar11;
                }
                UNLOCK();
                uVar9 = uVar15;
                if (uVar11 == uVar10) goto LAB_140076268;
              }
              uVar12 = uVar12 - 1;
              uVar11 = uVar10;
            } while (uVar12 != 0);
          }
          uVar11 = *puVar16;
          do {
            while (uStack_50 = uVar11, (longlong)uStack_50 < 0x100000000) {
              cVar8 = FUN_140006180(puVar16,1,&uStack_50);
              uVar9 = uVar15;
              uVar11 = uStack_50;
              if (cVar8 != '\0') goto LAB_140076268;
            }
            LOCK();
            uVar11 = *puVar16;
            if (uStack_50 == uVar11) {
              *puVar16 = uStack_50 - 0x100000000;
              uVar11 = uStack_50;
            }
            UNLOCK();
            uVar9 = uVar15;
          } while (uStack_50 != uVar11);
        }
        goto LAB_140076268;
      }
      LOCK();
      uVar9 = *puVar14;
      bVar17 = uVar15 == uVar9;
      if (bVar17) {
        *puVar14 = uVar15 + 1;
        uVar9 = uVar15;
      }
      UNLOCK();
    } while (!bVar17);
  }
  FUN_14241e170(puVar14,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar4) & 0xffffffff);
  uVar9 = *(uint *)(param_2 + 0x10);
  lVar6 = *(longlong *)(lStack_48 + 0x138);
  uVar5 = *(ushort *)(*(longlong *)(lVar6 + 8) + (ulonglong)(uVar9 & 0xffff) * 2);
  uVar11 = (ulonglong)*(uint *)(lVar6 + 0x14);
  lVar7 = *(longlong *)(lVar6 + 0x18);
  if (((ushort)*(uint *)(lVar6 + 0x14) <= uVar5) ||
     (*(uint *)(lVar7 + (ulonglong)uVar5 * 4) != uVar9)) {
    uVar11 = (ulonglong)*(uint *)(lVar6 + 0x14);
    uVar15 = *(uint *)(lVar6 + 0x10);
    do {
      uVar12 = (uint)uVar11;
      if (uVar12 == uVar15) {
        return uVar11;
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x14);
      if (uVar12 == uVar3) {
        *(uint *)(lVar6 + 0x14) = uVar12 + 1;
      }
      else {
        uVar11 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar12 != uVar3);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + uVar11 * 4) = 0;
      uVar15 = *(uint *)(lVar6 + 0x10);
    }
    if ((uint)uVar11 != uVar15) {
      puVar14 = (uint *)(*(longlong *)(lVar6 + 0x18) + uVar11 * 4);
      uVar13 = (ushort)((uint)((int)puVar14 - (int)lVar7) >> 2);
      if (uVar5 == uVar13) {
        uVar11 = (ulonglong)*(uint *)(lVar6 + 0x14);
        do {
          uVar12 = (uint)uVar11;
          if (uVar12 == uVar15) {
            return uVar11;
          }
          LOCK();
          uVar3 = *(uint *)(lVar6 + 0x14);
          if (uVar12 == uVar3) {
            *(uint *)(lVar6 + 0x14) = uVar12 + 1;
          }
          else {
            uVar11 = (ulonglong)uVar3;
          }
          UNLOCK();
        } while (uVar12 != uVar3);
        *(undefined4 *)(*(longlong *)(lVar6 + 0x18) + uVar11 * 4) = 0;
        if ((int)uVar11 == *(int *)(lVar6 + 0x10)) {
          return uVar11;
        }
        puVar14 = (uint *)(uVar11 * 4 + *(longlong *)(lVar6 + 0x18));
        uVar13 = (ushort)((uint)((int)puVar14 - (int)lVar7) >> 2);
      }
      *puVar14 = uVar9;
      puVar1 = (ushort *)(*(longlong *)(lVar6 + 8) + (ulonglong)(uVar9 & 0xffff) * 2);
      LOCK();
      uVar2 = *puVar1;
      if (uVar5 == uVar2) {
        *puVar1 = uVar13;
        uVar11 = (ulonglong)uVar5;
      }
      else {
        uVar11 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar5 != uVar2) {
        *puVar14 = 0;
      }
    }
  }
  return uVar11;
}

