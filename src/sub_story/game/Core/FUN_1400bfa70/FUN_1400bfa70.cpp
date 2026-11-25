// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bfa70  size: 1369 bytes
// Name:    FUN_1400bfa70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140188430, FUN_140032130, FUN_140032520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bfa70(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  code *pcVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  longlong lVar12;
  bool bVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  plVar10 = *(longlong **)(param_1 + 0x127c8);
  lVar1 = param_1 + 0x12780;
  if (plVar10 == (longlong *)0x0) {
    FUN_140188430();
    plVar10 = *(longlong **)(param_1 + 0x127c8);
  }
  if (*(char *)(param_1 + 0x1237d) == '\x06') {
    lVar12 = *(longlong *)(param_1 + 0x12638);
    if (lVar12 != _DAT_1475e77d0) {
      *(longlong *)(param_1 + 0x12638) = _DAT_1475e77d0;
      *(byte *)(param_1 + 0x12523) = *(byte *)(param_1 + 0x12523) | 1;
    }
    auVar16._8_8_ = *(undefined8 *)(param_1 + 0x20);
    auVar16._0_8_ = *(undefined8 *)(param_1 + 0x20);
    auVar16 = vpand_avx(auVar16,_DAT_14615c3a0);
    auVar16 = vpor_avx(auVar16,*(undefined1 (*) [16])(param_1 + 0x12520));
    uVar14 = auVar16._0_8_;
    *(undefined1 (*) [16])(param_1 + 0x12520) = auVar16;
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar9 = uVar14;
    if (((uVar14 & 0x30000000000) != 0) &&
       (pcVar2 = *(code **)(param_1 + 0x122c0), pcVar2 != (code *)0x0)) {
      piVar3 = *(int **)(param_1 + 0x12198);
      iVar7 = *piVar3;
      do {
        LOCK();
        iVar6 = *piVar3;
        if (iVar7 == iVar6) {
          *piVar3 = iVar7 + 0x4000000;
          iVar6 = iVar7;
        }
        UNLOCK();
        bVar13 = iVar7 != iVar6;
        iVar7 = iVar6;
      } while (bVar13);
      (*pcVar2)(param_1,uVar14,*(undefined8 *)(param_1 + 0x122c8));
      iVar7 = *piVar3;
      do {
        LOCK();
        iVar6 = *piVar3;
        if (iVar7 == iVar6) {
          *piVar3 = iVar7 + -0x4000000;
          iVar6 = iVar7;
        }
        UNLOCK();
        bVar13 = iVar7 != iVar6;
        iVar7 = iVar6;
      } while (bVar13);
      uVar9 = *(ulonglong *)(param_1 + 0x12520);
    }
    if ((uVar9 & 0xffffff8fffff0f00) == 0) {
      if (uVar9 != 0) {
        uVar4 = *(ulonglong *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(ulonglong *)(param_1 + 0x12528) = *(ulonglong *)(param_1 + 0x12528) | uVar4;
        *(undefined8 *)(param_1 + 0x12520) = 0;
        FUN_140032130(param_1,uVar9 | uVar4);
      }
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(ulonglong *)(param_1 + 0x12528) = *(ulonglong *)(param_1 + 0x12528) | uVar4;
      *(undefined8 *)(param_1 + 0x12520) = 0;
      FUN_140032520(param_1,uVar9 | uVar4);
    }
    if ((uVar14 & 0x700000f0ff) != 0) {
      *(ulonglong *)(param_1 + 0x12528) = *(ulonglong *)(param_1 + 0x12528) | 0x700000f0ff;
    }
    *(undefined1 *)(param_1 + 0x121a4) = 1;
    func_0x000144e34010(lVar1);
    if (*(longlong *)(param_1 + 0x32148) == 0) goto LAB_1400bfe74;
    uVar8 = param_2 * 3 - 6;
  }
  else {
    if (*(char *)(param_1 + 0x1237d) != '\x13') {
      auVar17._8_8_ = *(undefined8 *)(param_1 + 0x20);
      auVar17._0_8_ = *(undefined8 *)(param_1 + 0x20);
      auVar16 = vpand_avx(auVar17,_DAT_14615c3a0);
      auVar16 = vpor_avx(auVar16,*(undefined1 (*) [16])(param_1 + 0x12520));
      uVar14 = auVar16._0_8_;
      *(undefined1 (*) [16])(param_1 + 0x12520) = auVar16;
      *(undefined8 *)(param_1 + 0x20) = 0;
      uVar9 = uVar14;
      if (((uVar14 & 0x30000000000) != 0) &&
         (pcVar2 = *(code **)(param_1 + 0x122c0), pcVar2 != (code *)0x0)) {
        piVar3 = *(int **)(param_1 + 0x12198);
        iVar7 = *piVar3;
        do {
          LOCK();
          iVar6 = *piVar3;
          if (iVar7 == iVar6) {
            *piVar3 = iVar7 + 0x4000000;
            iVar6 = iVar7;
          }
          UNLOCK();
          bVar13 = iVar7 != iVar6;
          iVar7 = iVar6;
        } while (bVar13);
        (*pcVar2)(param_1,uVar14,*(undefined8 *)(param_1 + 0x122c8));
        iVar7 = *piVar3;
        do {
          LOCK();
          iVar6 = *piVar3;
          if (iVar7 == iVar6) {
            *piVar3 = iVar7 + -0x4000000;
            iVar6 = iVar7;
          }
          UNLOCK();
          bVar13 = iVar7 != iVar6;
          iVar7 = iVar6;
        } while (bVar13);
        uVar9 = *(ulonglong *)(param_1 + 0x12520);
      }
      if ((uVar9 & 0xffffff8fffff0f00) == 0) {
        if (uVar9 != 0) {
          uVar4 = *(ulonglong *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(ulonglong *)(param_1 + 0x12528) = *(ulonglong *)(param_1 + 0x12528) | uVar4;
          *(undefined8 *)(param_1 + 0x12520) = 0;
          FUN_140032130(param_1,uVar9 | uVar4);
        }
      }
      else {
        uVar4 = *(ulonglong *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(ulonglong *)(param_1 + 0x12528) = *(ulonglong *)(param_1 + 0x12528) | uVar4;
        *(undefined8 *)(param_1 + 0x12520) = 0;
        FUN_140032520(param_1,uVar9 | uVar4);
      }
      if ((uVar14 & 0x700000f0ff) != 0) {
        *(ulonglong *)(param_1 + 0x12528) = *(ulonglong *)(param_1 + 0x12528) | 0x700000f0ff;
      }
      *(undefined1 *)(param_1 + 0x121a4) = 1;
      func_0x000144e34010(lVar1);
      if (*(longlong *)(param_1 + 0x32148) == 0) {
        return;
      }
      puVar5 = (undefined4 *)plVar10[3];
      if ((undefined4 *)plVar10[5] <= puVar5) {
        (**(code **)(*plVar10 + 0x60))(plVar10,param_2,param_3,param_4,0);
        return;
      }
      uVar11 = 0x4003c300;
      if ((*(char *)((longlong)plVar10 + 0x142) == '\0' && (char)plVar10[0x28] == '\0') &&
          *(char *)((longlong)plVar10 + 0x143) == '\0') {
        uVar11 = 0x4003e600;
      }
      *puVar5 = uVar11;
      puVar5[1] = param_3;
      puVar5[2] = param_2;
      puVar5[3] = param_4;
      puVar5[4] = 0;
      plVar10[3] = (longlong)(puVar5 + 5);
      *(undefined1 *)(plVar10 + 0x28) = 0;
      *(undefined1 *)((longlong)plVar10 + 0x142) = 0;
      return;
    }
    lVar12 = *(longlong *)(param_1 + 0x12638);
    if (lVar12 != _DAT_1475e77c8) {
      *(longlong *)(param_1 + 0x12638) = _DAT_1475e77c8;
      *(byte *)(param_1 + 0x12523) = *(byte *)(param_1 + 0x12523) | 1;
    }
    auVar15._8_8_ = *(undefined8 *)(param_1 + 0x20);
    auVar15._0_8_ = *(undefined8 *)(param_1 + 0x20);
    auVar16 = vpand_avx(auVar15,_DAT_14615c3a0);
    auVar16 = vpor_avx(auVar16,*(undefined1 (*) [16])(param_1 + 0x12520));
    uVar14 = auVar16._0_8_;
    *(undefined1 (*) [16])(param_1 + 0x12520) = auVar16;
    *(undefined8 *)(param_1 + 0x20) = 0;
    uVar9 = uVar14;
    if (((uVar14 & 0x30000000000) != 0) &&
       (pcVar2 = *(code **)(param_1 + 0x122c0), pcVar2 != (code *)0x0)) {
      piVar3 = *(int **)(param_1 + 0x12198);
      iVar7 = *piVar3;
      do {
        LOCK();
        iVar6 = *piVar3;
        if (iVar7 == iVar6) {
          *piVar3 = iVar7 + 0x4000000;
          iVar6 = iVar7;
        }
        UNLOCK();
        bVar13 = iVar7 != iVar6;
        iVar7 = iVar6;
      } while (bVar13);
      (*pcVar2)(param_1,uVar14,*(undefined8 *)(param_1 + 0x122c8));
      iVar7 = *piVar3;
      do {
        LOCK();
        iVar6 = *piVar3;
        if (iVar7 == iVar6) {
          *piVar3 = iVar7 + -0x4000000;
          iVar6 = iVar7;
        }
        UNLOCK();
        bVar13 = iVar7 != iVar6;
        iVar7 = iVar6;
      } while (bVar13);
      uVar9 = *(ulonglong *)(param_1 + 0x12520);
    }
    if ((uVar9 & 0xffffff8fffff0f00) == 0) {
      if (uVar9 != 0) {
        uVar4 = *(ulonglong *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(ulonglong *)(param_1 + 0x12528) = *(ulonglong *)(param_1 + 0x12528) | uVar4;
        *(undefined8 *)(param_1 + 0x12520) = 0;
        FUN_140032130(param_1,uVar9 | uVar4);
      }
    }
    else {
      uVar4 = *(ulonglong *)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(ulonglong *)(param_1 + 0x12528) = *(ulonglong *)(param_1 + 0x12528) | uVar4;
      *(undefined8 *)(param_1 + 0x12520) = 0;
      FUN_140032520(param_1,uVar9 | uVar4);
    }
    if ((uVar14 & 0x700000f0ff) != 0) {
      *(ulonglong *)(param_1 + 0x12528) = *(ulonglong *)(param_1 + 0x12528) | 0x700000f0ff;
    }
    *(undefined1 *)(param_1 + 0x121a4) = 1;
    func_0x000144e34010(lVar1);
    if (*(longlong *)(param_1 + 0x32148) == 0) goto LAB_1400bfe74;
    uVar8 = (uint)(param_2 * 6) >> 2;
  }
  puVar5 = (undefined4 *)plVar10[3];
  if (puVar5 < (undefined4 *)plVar10[5]) {
    uVar11 = 0x4004c200;
    if ((*(char *)((longlong)plVar10 + 0x143) == '\0' && (char)plVar10[0x28] == '\0') &&
        *(char *)((longlong)plVar10 + 0x142) != '\0') {
      uVar11 = 0x4004e700;
    }
    *puVar5 = uVar11;
    puVar5[1] = param_3;
    puVar5[2] = 0;
    puVar5[3] = uVar8;
    puVar5[4] = param_4;
    puVar5[5] = 0;
    plVar10[3] = (longlong)(puVar5 + 6);
    *(undefined1 *)(plVar10 + 0x28) = 0;
    *(undefined1 *)((longlong)plVar10 + 0x142) = 1;
  }
  else {
    (**(code **)(*plVar10 + 0x68))(plVar10,uVar8,param_3,0,param_4,0);
  }
LAB_1400bfe74:
  if (*(longlong *)(param_1 + 0x12638) != lVar12) {
    *(longlong *)(param_1 + 0x12638) = lVar12;
    *(byte *)(param_1 + 0x12523) = *(byte *)(param_1 + 0x12523) | 1;
  }
  return;
}

