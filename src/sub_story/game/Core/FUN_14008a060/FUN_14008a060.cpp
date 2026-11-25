// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008a060  size: 777 bytes
// Name:    FUN_14008a060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008a060(longlong param_1,ushort *param_2,ushort param_3,ushort param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ushort uVar12;
  byte bVar13;
  ushort *puVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  ushort uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  
  lVar10 = *(longlong *)(param_1 + 0x28);
  uVar15 = param_4;
  if (param_4 < param_3) {
    uVar15 = param_3;
  }
  uVar12 = param_4;
  if (param_3 < param_4) {
    uVar12 = param_3;
  }
  if ((uint)uVar15 < *(uint *)(lVar10 + 0x10274)) {
    uVar19 = (ulonglong)((uint)uVar15 * 0x50);
    uVar7 = *(uint *)(lVar10 + 0x1028c + uVar19);
    uVar8 = *(uint *)(lVar10 + 0x1028c + (ulonglong)((uint)uVar12 * 0x50));
    if ((((((uVar8 | uVar7) >> 0xe & 1) == 0) &&
         (puVar1 = (uint *)(lVar10 + 0x10280 + (ulonglong)((uint)uVar12 * 0x50)),
         (*puVar1 & 0x10000) == 0)) && ((*(byte *)((longlong)puVar1 + 6) & 1) == 0)) &&
       (uVar17 = *(uint *)(lVar10 + 0x10280 + uVar19), (uVar17 & 0x10000) == 0)) {
      uVar9 = *(uint *)(lVar10 + 0x10284 + uVar19);
      uVar16 = 0;
      uVar18 = 0;
      if ((uVar9 & 0x10000) != 0) goto LAB_14008a31a;
      uVar16 = *(ushort *)(lVar10 + 0x10292 + uVar19);
      uVar18 = *(ushort *)(lVar10 + 0x102ca + uVar19);
      if (param_3 < param_4) {
        puVar3 = (undefined8 *)(lVar10 + 0x102b0 + uVar19);
        uVar4 = *puVar3;
        uVar11 = puVar3[1];
        uVar6 = *(ushort *)(lVar10 + 0x102c8 + uVar19);
        uVar5 = *(undefined1 *)(lVar10 + 0x1028b + uVar19);
        puVar1[1] = uVar9;
        *(undefined1 *)((longlong)puVar1 + 0xb) = uVar5;
        *(ushort *)((longlong)puVar1 + 0x4a) = uVar18;
        *(ushort *)(puVar1 + 0x12) = uVar6;
        *(undefined8 *)(puVar1 + 0xc) = uVar4;
        *(undefined8 *)(puVar1 + 0xe) = uVar11;
        lVar10 = *(longlong *)(param_1 + 0x28);
        uVar17 = *(uint *)(lVar10 + 0x10274);
        if (uVar6 < uVar17) {
          lVar2 = lVar10 + 0x10280 + (ulonglong)((uint)uVar6 * 0x50);
          if (*(ushort *)(lVar2 + 0x10) == uVar15) {
            *(ushort *)(lVar2 + 0x10) = uVar12;
          }
          if (*(ushort *)(lVar2 + 0x12) == uVar15) {
            *(ushort *)(lVar2 + 0x12) = uVar12;
          }
        }
        if (uVar16 < uVar17) {
          lVar10 = lVar10 + 0x10280 + (ulonglong)((uint)uVar16 * 0x50);
          if (*(ushort *)(lVar10 + 0x48) == uVar15) {
            *(ushort *)(lVar10 + 0x48) = uVar12;
          }
          if (*(ushort *)(lVar10 + 0x4a) == uVar15) {
            puVar14 = (ushort *)(lVar10 + 0x4a);
            goto LAB_14008a287;
          }
        }
      }
      else {
        lVar10 = lVar10 + 0x10280 + uVar19;
        uVar6 = *(ushort *)(lVar10 + 0x10);
        uVar5 = *(undefined1 *)(lVar10 + 10);
        *puVar1 = uVar17;
        *(undefined1 *)((longlong)puVar1 + 10) = uVar5;
        *(ushort *)((longlong)puVar1 + 0x12) = uVar16;
        *(ushort *)(puVar1 + 4) = uVar6;
        uVar4 = *(undefined8 *)(lVar10 + 0x28);
        *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(lVar10 + 0x20);
        *(undefined8 *)(puVar1 + 10) = uVar4;
        lVar10 = *(longlong *)(param_1 + 0x28);
        uVar17 = *(uint *)(lVar10 + 0x10274);
        if (uVar6 < uVar17) {
          lVar2 = lVar10 + 0x10280 + (ulonglong)((uint)uVar6 * 0x50);
          if (*(ushort *)(lVar2 + 0x48) == uVar15) {
            *(ushort *)(lVar2 + 0x48) = uVar12;
          }
          if (*(ushort *)(lVar2 + 0x4a) == uVar15) {
            *(ushort *)(lVar2 + 0x4a) = uVar12;
          }
        }
        if (uVar18 < uVar17) {
          lVar10 = lVar10 + 0x10280 + (ulonglong)((uint)uVar18 * 0x50);
          if (*(ushort *)(lVar10 + 0x10) == uVar15) {
            *(ushort *)(lVar10 + 0x10) = uVar12;
          }
          if (*(ushort *)(lVar10 + 0x12) == uVar15) {
            puVar14 = (ushort *)(lVar10 + 0x12);
LAB_14008a287:
            *puVar14 = uVar12;
          }
        }
      }
      if (((ushort)puVar1[4] == uVar12) || ((ushort)puVar1[4] == uVar15)) {
        *(undefined1 *)((longlong)puVar1 + 10) = 0;
        *(undefined2 *)(puVar1 + 4) = *(undefined2 *)((longlong)puVar1 + 0x12);
      }
      if (((ushort)puVar1[0x12] == uVar12) || ((ushort)puVar1[0x12] == uVar15)) {
        *(undefined1 *)((longlong)puVar1 + 0xb) = 0;
        *(undefined2 *)(puVar1 + 0x12) = *(undefined2 *)((longlong)puVar1 + 0x4a);
      }
      auVar20._4_4_ = _DAT_145fc6f50;
      auVar20._0_4_ = _DAT_145fc6f50;
      auVar20._8_4_ = _DAT_145fc6f50;
      auVar20._12_4_ = _DAT_145fc6f50;
      uVar17 = ((uVar8 | uVar7) & 4) << 0xb | uVar8;
      uVar4 = vmovlps_avx(auVar20);
      *(undefined8 *)(puVar1 + 0x10) = uVar4;
      if (((uVar8 >> 0x10 & 1) == 0) && ((uVar7 & 0x10000) != 0)) {
        uVar17 = uVar17 | 0x10000;
      }
      uVar8 = uVar17 & 0xfffdffff;
      if ((uVar7 & 0x20000) != 0) {
        uVar8 = uVar17;
      }
      if ((uVar17 & 0x20000) == 0) {
        uVar8 = uVar17 & 0xfffdffff;
      }
      bVar13 = (byte)((uVar8 & 2) >> 1) & (byte)uVar7 >> 1;
      puVar1[3] = (uVar8 & 0xfffffff0 | (uint)bVar13) + (uint)bVar13 * 2;
      uVar16 = uVar12;
      uVar18 = uVar15;
      goto LAB_14008a31a;
    }
  }
  uVar16 = 0;
  uVar18 = 0;
LAB_14008a31a:
  *param_2 = uVar16;
  param_2[1] = uVar18;
  return;
}

