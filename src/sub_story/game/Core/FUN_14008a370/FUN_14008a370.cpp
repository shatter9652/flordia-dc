// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008a370  size: 916 bytes
// Name:    FUN_14008a370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143a6eef0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008a370(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  
  if (0 < (int)param_2) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    uVar17 = 0;
    uVar8 = *(uint *)(lVar9 + 0x10274);
    lVar1 = lVar9 + 0x10280;
    lVar16 = lVar9 + 0x1c0;
    do {
      uVar5 = *(ushort *)(*(longlong *)(param_1 + 8) + uVar17 * 2);
      lVar2 = lVar1 + (ulonglong)((uint)uVar5 * 0x50);
      if ((*(byte *)(lVar9 + 0x1028c + (ulonglong)((uint)uVar5 * 0x50)) & 2) == 0) {
        if (param_3 != '\0') {
          uVar6 = *(ushort *)(lVar2 + 0x10);
          if ((int)(uint)uVar6 < (int)uVar8) {
            bVar18 = *(ushort *)(lVar9 + 0x102c8 + (ulonglong)((uint)uVar6 * 0x50)) != uVar5;
          }
          else {
            bVar18 = false;
          }
          uVar7 = *(ushort *)(lVar2 + 0x48);
          if ((int)(uint)uVar7 < (int)uVar8) {
            bVar21 = *(ushort *)(lVar9 + 0x10290 + (ulonglong)((uint)uVar7 * 0x50)) != uVar5;
          }
          else {
            bVar21 = false;
          }
          if (((!bVar18) || ((int)(uint)uVar7 < (int)uVar8)) &&
             ((!bVar21 || ((int)(uint)uVar6 < (int)uVar8)))) {
            if (bVar18) {
              if (!bVar21) goto LAB_14008a5e9;
            }
            else if (bVar21) goto LAB_14008a5e9;
          }
        }
      }
      else {
        uVar6 = *(ushort *)(lVar2 + 0x10);
        uVar7 = *(ushort *)(lVar2 + 0x48);
        uVar13 = (uint)uVar6;
        bVar19 = (*(ushort *)(lVar2 + 0x12) & uVar6) == 0xffff;
        bVar18 = (int)(uint)uVar7 < (int)uVar8 && bVar19;
        bVar20 = (*(ushort *)(lVar2 + 0x4a) & uVar7) == 0xffff;
        bVar21 = (int)(uint)uVar6 < (int)uVar8 && bVar20;
        if (((((int)(uint)uVar7 >= (int)uVar8 || !bVar19) &&
             ((int)(uint)uVar6 >= (int)uVar8 || !bVar20)) && ((int)(uint)uVar6 < (int)uVar8)) &&
           (uVar7 < uVar8)) {
          lVar15 = (ulonglong)(uVar13 * 0x50) + lVar1;
          puVar14 = (ushort *)((ulonglong)((uint)uVar7 * 0x50) + lVar1);
          cVar11 = FUN_143a6eef0(0,lVar15,puVar14,uVar5,uVar8,lVar16);
          if (cVar11 == '\0') {
            cVar11 = FUN_143a6eef0(1,puVar14,lVar15,uVar5,uVar8,lVar16);
            if (cVar11 == '\0') goto LAB_14008a5e9;
            *(undefined1 *)(lVar15 + 0xb) = 0;
            *(undefined2 *)(lVar15 + 0x48) = *(undefined2 *)(lVar15 + 0x4a);
            puVar3 = (undefined8 *)(lVar16 + (ulonglong)((*(ushort *)(lVar15 + 4) & 0x3fff) << 4));
            uVar10 = puVar3[1];
            uVar12 = 0xffffffdd;
            *(undefined8 *)(lVar15 + 0x30) = *puVar3;
            *(undefined8 *)(lVar15 + 0x38) = uVar10;
          }
          else {
            *(undefined1 *)(puVar14 + 5) = 0;
            puVar14[8] = puVar14[9];
            puVar3 = (undefined8 *)(lVar16 + (ulonglong)((*puVar14 & 0x3fff) << 4));
            uVar10 = puVar3[1];
            uVar12 = 0xffffffed;
            *(undefined8 *)(puVar14 + 0x10) = *puVar3;
            *(undefined8 *)(puVar14 + 0x14) = uVar10;
            uVar13 = (uint)uVar7;
          }
          puVar4 = (uint *)(lVar9 + 0x1028c + (ulonglong)(uVar13 * 0x50));
          *puVar4 = *puVar4 & uVar12;
        }
LAB_14008a5e9:
        if (bVar18) {
          uVar13 = (uint)*(ushort *)(lVar2 + 0x48);
          uVar6 = *(ushort *)(lVar9 + 0x10292 + (ulonglong)(uVar13 * 0x50));
          if ((int)(uint)uVar6 < (int)uVar8) {
            puVar14 = (ushort *)((ulonglong)(uVar13 * 0x50) + lVar1);
            if ((puVar14[8] == *(ushort *)(lVar2 + 0x48)) || (puVar14[8] == uVar5)) {
              *(undefined1 *)(puVar14 + 5) = 0;
              puVar14[8] = uVar6;
              uVar12 = 0xffffffed;
              puVar3 = (undefined8 *)(lVar16 + (ulonglong)((*puVar14 & 0x3fff) << 4));
              uVar10 = puVar3[1];
              *(undefined8 *)(puVar14 + 0x10) = *puVar3;
              *(undefined8 *)(puVar14 + 0x14) = uVar10;
LAB_14008a6a8:
              puVar4 = (uint *)(lVar9 + 0x1028c + (ulonglong)(uVar13 * 0x50));
              *puVar4 = *puVar4 & uVar12;
            }
          }
        }
        else if (bVar21) {
          uVar13 = (uint)*(ushort *)(lVar2 + 0x10);
          uVar6 = *(ushort *)(lVar9 + 0x102ca + (ulonglong)(uVar13 * 0x50));
          if ((int)(uint)uVar6 < (int)uVar8) {
            lVar15 = (ulonglong)(uVar13 * 0x50) + lVar1;
            if ((*(ushort *)(lVar15 + 0x48) == *(ushort *)(lVar2 + 0x10)) ||
               (*(ushort *)(lVar15 + 0x48) == uVar5)) {
              *(undefined1 *)(lVar15 + 0xb) = 0;
              *(ushort *)(lVar15 + 0x48) = uVar6;
              uVar12 = 0xffffffdd;
              puVar3 = (undefined8 *)(lVar16 + (ulonglong)((*(ushort *)(lVar15 + 4) & 0x3fff) << 4))
              ;
              uVar10 = puVar3[1];
              *(undefined8 *)(lVar15 + 0x30) = *puVar3;
              *(undefined8 *)(lVar15 + 0x38) = uVar10;
              goto LAB_14008a6a8;
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (param_2 != uVar17);
  }
  return;
}

