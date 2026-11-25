// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400db110  size: 3290 bytes
// Name:    FUN_1400db110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14132e0e0, FUN_144e510e0, FUN_14132e120, FUN_14132e060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400db110(uint *param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  uint *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  
  uVar3 = param_1[0x14];
  if (uVar3 == param_2) {
    return;
  }
  if (param_2 == 0) {
    FUN_14132e060(param_1);
    FUN_14132e060(param_1 + 4);
    FUN_14132e060(param_1 + 8);
    FUN_14132e060(param_1 + 0xc);
    FUN_14132e0e0(param_1);
    FUN_14132e120(param_1);
    goto LAB_1400dbad0;
  }
  if (param_2 == 1) {
    if (uVar3 == 2) {
      lVar5 = *(longlong *)(param_1 + 2);
      lVar1 = *(longlong *)(lVar5 + 8);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 2);
      }
      *(undefined8 *)(lVar5 + 8) = 0;
      lVar5 = *(longlong *)(param_1 + 2);
      lVar1 = *(longlong *)(lVar5 + 0x10);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 2);
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      lVar5 = *(longlong *)(param_1 + 2);
      lVar1 = *(longlong *)(lVar5 + 0x18);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 2);
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      lVar5 = *(longlong *)(param_1 + 2);
      lVar1 = *(longlong *)(lVar5 + 0x20);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 2);
      }
      *(undefined8 *)(lVar5 + 0x20) = 0;
      lVar5 = *(longlong *)(param_1 + 2);
      lVar1 = *(longlong *)(lVar5 + 0x28);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 2);
      }
      *(undefined8 *)(lVar5 + 0x28) = 0;
      func_0x000145edc510(param_1);
    }
    else {
      pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        auVar10._0_12_ = ZEXT812(0);
        auVar10._12_4_ = 0;
        *(undefined8 *)pauVar4[1] = 0;
        *pauVar4 = auVar10;
        *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
        *(undefined4 *)pauVar4[2] = 0;
        pauVar4[2][4] = 0;
      }
      uVar3 = param_1[1];
      if (uVar3 == *param_1) {
        uVar8 = 1;
        if (1 < uVar3) {
          uVar8 = uVar3 >> 1;
        }
        lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
        if ((ulonglong)param_1[1] != 0) {
          func_0x000145f40560(lVar5,*(undefined8 *)(param_1 + 2),(ulonglong)param_1[1] << 3);
        }
        if (*(longlong *)(param_1 + 2) != 0) {
          func_0x000144d9c130();
        }
        *(longlong *)(param_1 + 2) = lVar5;
        *param_1 = uVar8 + uVar3;
        uVar3 = param_1[1];
      }
      else {
        lVar5 = *(longlong *)(param_1 + 2);
      }
      param_1[1] = uVar3 + 1;
      *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
    }
    if (param_1[0x14] == 2) {
      lVar5 = *(longlong *)(param_1 + 6);
      lVar1 = *(longlong *)(lVar5 + 8);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 6);
      }
      *(undefined8 *)(lVar5 + 8) = 0;
      lVar5 = *(longlong *)(param_1 + 6);
      lVar1 = *(longlong *)(lVar5 + 0x10);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 6);
      }
      *(undefined8 *)(lVar5 + 0x10) = 0;
      lVar5 = *(longlong *)(param_1 + 6);
      lVar1 = *(longlong *)(lVar5 + 0x18);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 6);
      }
      *(undefined8 *)(lVar5 + 0x18) = 0;
      lVar5 = *(longlong *)(param_1 + 6);
      lVar1 = *(longlong *)(lVar5 + 0x20);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 6);
      }
      *(undefined8 *)(lVar5 + 0x20) = 0;
      lVar5 = *(longlong *)(param_1 + 6);
      lVar1 = *(longlong *)(lVar5 + 0x28);
      if (lVar1 != 0) {
        FUN_144e510e0(lVar1);
        func_0x000144d9c130(lVar1,0x28);
        lVar5 = *(longlong *)(param_1 + 6);
      }
      *(undefined8 *)(lVar5 + 0x28) = 0;
      func_0x000145edc510(param_1 + 4);
    }
    else {
      pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        auVar12._0_12_ = ZEXT812(0);
        auVar12._12_4_ = 0;
        *(undefined8 *)pauVar4[1] = 0;
        *pauVar4 = auVar12;
        *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
        *(undefined4 *)pauVar4[2] = 0;
        pauVar4[2][4] = 0;
      }
      uVar3 = param_1[5];
      if (uVar3 == param_1[4]) {
        uVar8 = 1;
        if (1 < uVar3) {
          uVar8 = uVar3 >> 1;
        }
        lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
        if ((ulonglong)param_1[5] != 0) {
          func_0x000145f40560(lVar5,*(undefined8 *)(param_1 + 6),(ulonglong)param_1[5] << 3);
        }
        if (*(longlong *)(param_1 + 6) != 0) {
          func_0x000144d9c130();
        }
        *(longlong *)(param_1 + 6) = lVar5;
        param_1[4] = uVar8 + uVar3;
        uVar3 = param_1[5];
      }
      else {
        lVar5 = *(longlong *)(param_1 + 6);
      }
      param_1[5] = uVar3 + 1;
      *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
    }
    if (param_1[0x14] == 0) {
      pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        auVar13._0_12_ = ZEXT812(0);
        auVar13._12_4_ = 0;
        *(undefined8 *)pauVar4[1] = 0;
        *pauVar4 = auVar13;
        *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
        *(undefined4 *)pauVar4[2] = 0;
        pauVar4[2][4] = 0;
      }
      uVar3 = param_1[9];
      if (uVar3 == param_1[8]) {
        uVar8 = 1;
        if (1 < uVar3) {
          uVar8 = uVar3 >> 1;
        }
        lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
        if ((ulonglong)param_1[9] != 0) {
          func_0x000145f40560(lVar5,*(undefined8 *)(param_1 + 10),(ulonglong)param_1[9] << 3);
        }
        if (*(longlong *)(param_1 + 10) != 0) {
          func_0x000144d9c130();
        }
        *(longlong *)(param_1 + 10) = lVar5;
        param_1[8] = uVar8 + uVar3;
        uVar3 = param_1[9];
      }
      else {
        lVar5 = *(longlong *)(param_1 + 10);
      }
      param_1[9] = uVar3 + 1;
      *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
      if (param_1[0x14] == 0) {
        pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
        if (pauVar4 != (undefined1 (*) [16])0x0) {
          auVar14._0_12_ = ZEXT812(0);
          auVar14._12_4_ = 0;
          *(undefined8 *)pauVar4[1] = 0;
          *pauVar4 = auVar14;
          *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
          *(undefined4 *)pauVar4[2] = 0;
          pauVar4[2][4] = 0;
        }
        uVar3 = param_1[0xd];
        if (uVar3 == param_1[0xc]) {
          uVar8 = 1;
          if (1 < uVar3) {
            uVar8 = uVar3 >> 1;
          }
          lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
          if ((ulonglong)param_1[0xd] != 0) {
            func_0x000145f40560(lVar5,*(undefined8 *)(param_1 + 0xe),(ulonglong)param_1[0xd] << 3);
          }
          if (*(longlong *)(param_1 + 0xe) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(param_1 + 0xe) = lVar5;
          param_1[0xc] = uVar8 + uVar3;
          uVar3 = param_1[0xd];
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0xe);
        }
        param_1[0xd] = uVar3 + 1;
        *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
      }
    }
    FUN_14132e0e0(param_1);
    if (param_1[0x14] != 0) goto LAB_1400dbad0;
    pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
    if (pauVar4 != (undefined1 (*) [16])0x0) {
      auVar16._0_12_ = ZEXT812(0);
      auVar16._12_4_ = 0;
      *(undefined8 *)pauVar4[1] = 0;
      *pauVar4 = auVar16;
      *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
LAB_1400dbac1:
      *(undefined4 *)pauVar4[2] = 0;
      pauVar4[2][4] = 0;
    }
  }
  else {
    if (param_2 != 2) goto LAB_1400dbad0;
    lVar5 = 0;
    auVar19 = ZEXT1264(ZEXT812(0));
    bVar2 = true;
    do {
      bVar7 = bVar2;
      puVar6 = param_1 + lVar5 * 4;
      if (uVar3 == 1) {
        pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
        if (pauVar4 != (undefined1 (*) [16])0x0) {
          *pauVar4 = auVar19._0_16_;
          *(undefined8 *)pauVar4[1] = 0;
          *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
          *(undefined4 *)pauVar4[2] = 0;
          pauVar4[2][4] = 0;
        }
        uVar3 = puVar6[1];
        if (uVar3 == *puVar6) {
          uVar8 = uVar3 >> 1;
          if (uVar3 < 2) {
            uVar8 = 1;
          }
          lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
          if ((ulonglong)puVar6[1] != 0) {
            func_0x000145f40560(lVar5,*(undefined8 *)(puVar6 + 2),(ulonglong)puVar6[1] << 3);
          }
          if (*(longlong *)(puVar6 + 2) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(puVar6 + 2) = lVar5;
          *puVar6 = uVar8 + uVar3;
          uVar3 = puVar6[1];
        }
        else {
          lVar5 = *(longlong *)(puVar6 + 2);
        }
        puVar6[1] = uVar3 + 1;
        *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
        pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
        if (pauVar4 != (undefined1 (*) [16])0x0) {
          *pauVar4 = auVar19._0_16_;
          *(undefined8 *)pauVar4[1] = 0;
          *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
          *(undefined4 *)pauVar4[2] = 0;
          pauVar4[2][4] = 0;
        }
        uVar3 = puVar6[1];
        if (uVar3 == *puVar6) {
          uVar8 = uVar3 >> 1;
          if (uVar3 < 2) {
            uVar8 = 1;
          }
          lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
          if ((ulonglong)puVar6[1] != 0) {
            func_0x000145f40560(lVar5,*(undefined8 *)(puVar6 + 2),(ulonglong)puVar6[1] << 3);
          }
          if (*(longlong *)(puVar6 + 2) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(puVar6 + 2) = lVar5;
          *puVar6 = uVar8 + uVar3;
          uVar3 = puVar6[1];
        }
        else {
          lVar5 = *(longlong *)(puVar6 + 2);
        }
        puVar6[1] = uVar3 + 1;
        *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
        pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
        if (pauVar4 != (undefined1 (*) [16])0x0) {
          *pauVar4 = auVar19._0_16_;
          *(undefined8 *)pauVar4[1] = 0;
          *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
          *(undefined4 *)pauVar4[2] = 0;
          pauVar4[2][4] = 0;
        }
        uVar3 = puVar6[1];
        if (uVar3 == *puVar6) {
          uVar8 = uVar3 >> 1;
          if (uVar3 < 2) {
            uVar8 = 1;
          }
          lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
          if ((ulonglong)puVar6[1] != 0) {
            func_0x000145f40560(lVar5,*(undefined8 *)(puVar6 + 2),(ulonglong)puVar6[1] << 3);
          }
          if (*(longlong *)(puVar6 + 2) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(puVar6 + 2) = lVar5;
          *puVar6 = uVar8 + uVar3;
          uVar3 = puVar6[1];
        }
        else {
          lVar5 = *(longlong *)(puVar6 + 2);
        }
        puVar6[1] = uVar3 + 1;
        *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
        pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
        if (pauVar4 != (undefined1 (*) [16])0x0) {
          *pauVar4 = auVar19._0_16_;
          *(undefined8 *)pauVar4[1] = 0;
          *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
          *(undefined4 *)pauVar4[2] = 0;
          pauVar4[2][4] = 0;
        }
        uVar3 = puVar6[1];
        if (uVar3 == *puVar6) {
          uVar8 = uVar3 >> 1;
          if (uVar3 < 2) {
            uVar8 = 1;
          }
          lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
          if ((ulonglong)puVar6[1] != 0) {
            func_0x000145f40560(lVar5,*(undefined8 *)(puVar6 + 2),(ulonglong)puVar6[1] << 3);
          }
          if (*(longlong *)(puVar6 + 2) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(puVar6 + 2) = lVar5;
          *puVar6 = uVar8 + uVar3;
          uVar3 = puVar6[1];
        }
        else {
          lVar5 = *(longlong *)(puVar6 + 2);
        }
        puVar6[1] = uVar3 + 1;
        *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
        pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
        if (pauVar4 != (undefined1 (*) [16])0x0) {
          *pauVar4 = auVar19._0_16_;
          *(undefined8 *)pauVar4[1] = 0;
          *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
          *(undefined4 *)pauVar4[2] = 0;
          pauVar4[2][4] = 0;
        }
        uVar3 = puVar6[1];
        if (uVar3 == *puVar6) {
          uVar8 = uVar3 >> 1;
          if (uVar3 < 2) {
            uVar8 = 1;
          }
          lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
          if ((ulonglong)puVar6[1] != 0) {
            func_0x000145f40560(lVar5,*(undefined8 *)(puVar6 + 2),(ulonglong)puVar6[1] << 3);
          }
          if (*(longlong *)(puVar6 + 2) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(puVar6 + 2) = lVar5;
          *puVar6 = uVar8 + uVar3;
          uVar3 = puVar6[1];
        }
        else {
          lVar5 = *(longlong *)(puVar6 + 2);
        }
        puVar6[1] = uVar3 + 1;
        *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
      }
      else {
        FUN_14132e060(puVar6);
        iVar9 = 6;
        do {
          pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
          if (pauVar4 != (undefined1 (*) [16])0x0) {
            *pauVar4 = auVar19._0_16_;
            *(undefined8 *)pauVar4[1] = 0;
            *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
            *(undefined4 *)pauVar4[2] = 0;
            pauVar4[2][4] = 0;
          }
          uVar3 = puVar6[1];
          if (uVar3 == *puVar6) {
            uVar8 = uVar3 >> 1;
            if (uVar3 < 2) {
              uVar8 = 1;
            }
            lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
            if ((ulonglong)puVar6[1] != 0) {
              func_0x000145f40560(lVar5,*(undefined8 *)(puVar6 + 2),(ulonglong)puVar6[1] << 3);
            }
            if (*(longlong *)(puVar6 + 2) != 0) {
              func_0x000144d9c130();
            }
            *(longlong *)(puVar6 + 2) = lVar5;
            *puVar6 = uVar8 + uVar3;
            uVar3 = puVar6[1];
          }
          else {
            lVar5 = *(longlong *)(puVar6 + 2);
          }
          iVar9 = iVar9 + -1;
          puVar6[1] = uVar3 + 1;
          *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
        } while (iVar9 != 0);
      }
      uVar3 = param_1[0x14];
      lVar5 = 1;
      bVar2 = false;
    } while (bVar7);
    if (uVar3 == 0) {
      pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
      if (pauVar4 != (undefined1 (*) [16])0x0) {
        auVar11._0_12_ = ZEXT812(0);
        auVar11._12_4_ = 0;
        *(undefined8 *)pauVar4[1] = 0;
        *pauVar4 = auVar11;
        *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
        *(undefined4 *)pauVar4[2] = 0;
        pauVar4[2][4] = 0;
      }
      uVar3 = param_1[9];
      if (uVar3 == param_1[8]) {
        uVar8 = 1;
        if (1 < uVar3) {
          uVar8 = uVar3 >> 1;
        }
        lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
        if ((ulonglong)param_1[9] != 0) {
          func_0x000145f40560(lVar5,*(undefined8 *)(param_1 + 10),(ulonglong)param_1[9] << 3);
        }
        if (*(longlong *)(param_1 + 10) != 0) {
          func_0x000144d9c130();
        }
        *(longlong *)(param_1 + 10) = lVar5;
        param_1[8] = uVar8 + uVar3;
        uVar3 = param_1[9];
      }
      else {
        lVar5 = *(longlong *)(param_1 + 10);
      }
      param_1[9] = uVar3 + 1;
      *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
      if (param_1[0x14] == 0) {
        pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
        if (pauVar4 != (undefined1 (*) [16])0x0) {
          auVar15._0_12_ = ZEXT812(0);
          auVar15._12_4_ = 0;
          *(undefined8 *)pauVar4[1] = 0;
          *pauVar4 = auVar15;
          *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
          *(undefined4 *)pauVar4[2] = 0;
          pauVar4[2][4] = 0;
        }
        uVar3 = param_1[0xd];
        if (uVar3 == param_1[0xc]) {
          uVar8 = 1;
          if (1 < uVar3) {
            uVar8 = uVar3 >> 1;
          }
          lVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar3) * 8);
          if ((ulonglong)param_1[0xd] != 0) {
            func_0x000145f40560(lVar5,*(undefined8 *)(param_1 + 0xe),(ulonglong)param_1[0xd] << 3);
          }
          if (*(longlong *)(param_1 + 0xe) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(param_1 + 0xe) = lVar5;
          param_1[0xc] = uVar8 + uVar3;
          uVar3 = param_1[0xd];
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0xe);
        }
        param_1[0xd] = uVar3 + 1;
        *(undefined1 (**) [16])(lVar5 + (ulonglong)uVar3 * 8) = pauVar4;
      }
    }
    pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
    if (pauVar4 != (undefined1 (*) [16])0x0) {
      auVar17._0_12_ = ZEXT812(0);
      auVar17._12_4_ = 0;
      *(undefined8 *)pauVar4[1] = 0;
      *pauVar4 = auVar17;
      *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
      *(undefined4 *)pauVar4[2] = 0;
      pauVar4[2][4] = 0;
    }
    *(undefined1 (**) [16])(param_1 + 0x10) = pauVar4;
    if (param_1[0x14] != 0) goto LAB_1400dbad0;
    pauVar4 = (undefined1 (*) [16])func_0x000144f97130(0x28);
    if (pauVar4 != (undefined1 (*) [16])0x0) {
      auVar18._0_12_ = ZEXT812(0);
      auVar18._12_4_ = 0;
      *(undefined8 *)pauVar4[1] = 0;
      *pauVar4 = auVar18;
      *(undefined8 *)(pauVar4[1] + 8) = 0x10ffffffff;
      goto LAB_1400dbac1;
    }
  }
  *(undefined1 (**) [16])(param_1 + 0x12) = pauVar4;
LAB_1400dbad0:
  param_1[0x14] = param_2;
  return;
}

