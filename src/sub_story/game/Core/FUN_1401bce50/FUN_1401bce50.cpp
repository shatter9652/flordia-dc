// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bce50  size: 285 bytes
// Name:    FUN_1401bce50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14507f7a0, FUN_1401bcf70, FUN_140189080, FUN_140d74840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401bce50(undefined8 *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  
  *param_1 = &UNK_1466a5bc0;
  param_1[3] = &UNK_146477e28;
  FUN_1401bcf70(param_1 + 3,param_1,_DAT_149feef48,0);
  lVar15 = param_1[0xd];
  if (lVar15 != 0) {
    FUN_140d74840(lVar15);
    plVar7 = _DAT_149feef10;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = lVar15 - *_DAT_149feef10;
    uVar11 = SUB164(auVar6 / ZEXT416(*(uint *)(_DAT_149feef10 + 1)),0);
    puVar1 = (ulonglong *)(_DAT_149feef10 + 4);
    uVar16 = (*(uint *)(_DAT_149feef10[5] +
                       (SUB168(auVar6 / ZEXT416(*(uint *)(_DAT_149feef10 + 1)),0) & 0xffffffff) * 4)
              & 0x7f000000 | uVar11) + 0x1000000;
    uVar11 = uVar11 & 0xffffff | 0x1000000;
    if ((uVar16 & 0x7f000000) != 0) {
      uVar11 = uVar16;
    }
    LOCK();
    *(int *)(_DAT_149feef10 + 2) = (int)_DAT_149feef10[2] + -1;
    UNLOCK();
    uVar18 = *puVar1;
    do {
      *(uint *)(plVar7[5] + (ulonglong)(uVar11 & 0xffffff) * 4) =
           (uint)uVar18 & 0xffffff | uVar11 & 0x7f000000;
      LOCK();
      uVar13 = plVar7[4];
      bVar19 = uVar18 == uVar13;
      if (bVar19) {
        plVar7[4] = (uVar18 & 0xffffffff00000000 | (ulonglong)(uVar11 & 0xffffff)) + 0x100000000;
        uVar13 = uVar18;
      }
      UNLOCK();
      uVar18 = uVar13;
    } while (!bVar19);
    if (plVar7[3] != 0) {
      FUN_140189080(plVar7,lVar15);
    }
    param_1[0xd] = 0;
  }
  FUN_14507f7a0(param_1 + 6);
  *param_1 = &UNK_14647da00;
  param_1[3] = &UNK_146477e28;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  if (param_1[5] != 0) {
    func_0x000144d9c130(param_1[5]);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *param_1 = &UNK_14647ba30;
  lVar15 = lRam0000000149feefc8;
  if ((param_1[2] != 0) && (lVar17 = *(longlong *)(param_1[2] + 0x10), lVar17 != 0)) {
    uVar5 = *(undefined8 *)(lRam0000000149feefc8 + 0x88);
    cVar8 = FUN_1451cde30(uVar5,param_1);
    if (cVar8 != '\0') {
      FUN_14030bf30(uVar5,*(undefined4 *)(lVar17 + 0x9c),param_1);
      lVar15 = lRam0000000149feefc8;
    }
    uVar5 = *(undefined8 *)(lVar15 + 0xb8);
    cVar8 = FUN_1451cde30(uVar5,param_1);
    if (cVar8 != '\0') {
      FUN_14030bf30(uVar5,*(undefined4 *)(lVar17 + 0x9c),param_1);
      lVar15 = lRam0000000149feefc8;
    }
    uVar5 = *(undefined8 *)(lVar15 + 0x118);
    cVar8 = FUN_1451cde30(uVar5,param_1);
    if (cVar8 != '\0') {
      FUN_14030bf30(uVar5,*(undefined4 *)(lVar17 + 0x9c),param_1);
      lVar15 = lRam0000000149feefc8;
    }
    uVar5 = *(undefined8 *)(lVar15 + 0xe8);
    cVar8 = FUN_1451cde30(uVar5,param_1);
    if (cVar8 != '\0') {
      FUN_14030bf30(uVar5,*(undefined4 *)(lVar17 + 0x9c),param_1);
      lVar15 = lRam0000000149feefc8;
    }
    cVar8 = FUN_1451cded0(*(undefined4 *)(lVar15 + 0x144),*(undefined8 *)(lVar15 + 0x148),param_1);
    if (cVar8 != '\0') {
      FUN_1436435c0(*(undefined4 *)(lRam0000000149feefc8 + 0x144),
                    *(undefined8 *)(lRam0000000149feefc8 + 0x148),param_1);
    }
    lVar15 = lRam0000000149feefc8;
    cVar8 = FUN_1451cde80(*(undefined4 *)(lRam0000000149feefc8 + 0x17c),
                          *(undefined8 *)(lRam0000000149feefc8 + 0x180),param_1);
    if (cVar8 != '\0') {
      FUN_14030bf60(lVar15 + 0x178,param_1);
      lVar15 = lRam0000000149feefc8;
    }
    lVar15 = *(longlong *)(lVar15 + 0x1b0);
    cVar8 = FUN_1451cde30(lVar15,param_1);
    if (cVar8 != '\0') {
      iVar9 = func_0x000144e7ca20(*(undefined4 *)(lVar17 + 0x9c));
      lVar15 = lVar15 + (ulonglong)(uint)(iVar9 << 4);
      uVar11 = *(uint *)(lVar15 + 4);
      if (uVar11 != 0) {
        lVar17 = -0x18;
        uVar18 = 0;
        do {
          uVar16 = *(uint *)(*(longlong *)(lVar15 + 8) + 4 + uVar18 * 0x18);
          if (uVar16 != 0) {
            lVar2 = *(longlong *)(lVar15 + 8) + uVar18 * 0x18;
            uVar13 = 0;
            do {
              lVar12 = *(longlong *)(lVar2 + 8);
              if (*(undefined8 **)(lVar12 + uVar13 * 8) == param_1) {
                lVar3 = lVar12 + uVar13 * 8;
                lVar14 = lVar3 + 8;
                func_0x000145f40570(lVar3,lVar14,(lVar12 + (ulonglong)uVar16 * 8) - lVar14);
                uVar16 = *(int *)(lVar2 + 4) - 1;
                *(uint *)(lVar2 + 4) = uVar16;
                if (uVar16 == 0) {
                  uVar11 = *(uint *)(lVar15 + 4);
                  lVar14 = *(longlong *)(lVar15 + 8);
                  lVar12 = lVar14 + 0x18 + uVar18 * 0x18;
                  if (lVar12 != lVar14 + (ulonglong)uVar11 * 0x18) {
                    lVar14 = lVar17 + (ulonglong)uVar11 * 0x18;
                    do {
                      FUN_14082a380(lVar12 + -0x18,lVar12);
                      *(undefined4 *)(lVar12 + -8) = *(undefined4 *)(lVar12 + 0x10);
                      lVar12 = lVar12 + 0x18;
                      lVar14 = lVar14 + -0x18;
                    } while (lVar14 != 0);
                    lVar14 = *(longlong *)(lVar15 + 8);
                    uVar11 = *(uint *)(lVar15 + 4);
                  }
                  uVar10 = (ulonglong)(uVar11 - 1);
                  *(uint *)(lVar15 + 4) = uVar11 - 1;
                  *(undefined4 *)(lVar14 + 4 + uVar10 * 0x18) = 0;
                  if (*(longlong *)(lVar14 + 8 + uVar10 * 0x18) != 0) {
                    func_0x000144d9c130();
                  }
                  puVar4 = (undefined4 *)(lVar14 + uVar10 * 0x18);
                  *puVar4 = 0;
                  *(undefined8 *)(puVar4 + 2) = 0;
                  uVar16 = *(uint *)(lVar2 + 4);
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar16);
            uVar11 = *(uint *)(lVar15 + 4);
          }
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + -0x18;
        } while (uVar18 < uVar11);
      }
      return;
    }
  }
  return;
}

