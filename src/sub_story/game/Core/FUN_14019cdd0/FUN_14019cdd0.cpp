// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019cdd0  size: 845 bytes
// Name:    FUN_14019cdd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14438edc0, FUN_1401b9ce0, FUN_140006180, FUN_1407ffb40, FUN_1400c7c00, FUN_14505db30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019cdd0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  bool bVar19;
  ulonglong uStack_60;
  uint *puStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  iVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x298) + 0x18) + 0x10))();
  if (param_2 < *(uint *)(param_1 + 4)) {
    uVar17 = (ulonglong)param_2;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + uVar17 * 8);
      if (*(int *)((longlong)plVar2 + 0x1c) == 0) {
        plVar13 = *(longlong **)(*(longlong *)(*plVar2 + 8) + 0x18);
        iVar7 = (**(code **)(*plVar13 + 0x10))(plVar13);
        iVar1 = (int)plVar2[4];
        if (((iVar7 != iVar6) || (iVar1 != 0)) &&
           (lVar10 = FUN_14505db30(*(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0x10),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x290) + 0x18),iVar7),
           lVar10 == 0)) {
          if (iVar1 != 2) {
            lStack_48 = FUN_1401b9ce0(*plVar2,*(undefined4 *)((longlong)plVar2 + 0x1c));
            if (((lStack_48 != 0) && (lVar10 = (**(code **)(*plVar13 + 0x18))(plVar13), lVar10 != 0)
                ) && ((uVar11 = (ulonglong)*(byte *)(lVar10 + 0xc0 + (ulonglong)DAT_14a952378),
                      uVar11 != 0xff &&
                      (lStack_50 = *(longlong *)(lVar10 + 0x10 + uVar11 * 8), lStack_50 != 0)))) {
              if (*(char *)((longlong)plVar2 + 0x10c) == '\x01') {
                (**(code **)(*plVar13 + 0x130))(plVar13);
              }
              puStack_58 = (uint *)(lVar10 + 0x90);
              puVar18 = (ulonglong *)(lVar10 + 0x98);
              puVar16 = puStack_58;
              uVar9 = *(uint *)(lVar10 + 0x90);
LAB_14019cf1b:
              do {
                uVar8 = uVar9;
                lVar10 = lStack_50;
                if ((uVar8 & 0x1ff0000) != 0) {
                  LOCK();
                  uVar9 = *puVar16;
                  bVar19 = uVar8 == uVar9;
                  if (bVar19) {
                    *puVar16 = uVar8 + 0x100;
                    uVar9 = uVar8;
                  }
                  UNLOCK();
                  if (bVar19) {
                    uVar15 = (uint)(*puVar18 >> 7) & 0xffffff;
                    uVar11 = *puVar18;
                    if ((*puVar18 >> 7 & 0xffffff) != 0) {
                      do {
                        if ((longlong)uVar11 < 0x100000000) {
                          uVar12 = *puVar18;
                        }
                        else {
                          LOCK();
                          uVar12 = *puVar18;
                          if (uVar11 == uVar12) {
                            *puVar18 = uVar11 - 0x100000000;
                            uVar12 = uVar11;
                          }
                          UNLOCK();
                          uVar9 = uVar8;
                          if (uVar11 == uVar12) goto LAB_14019cf1b;
                        }
                        uVar15 = uVar15 - 1;
                        uVar11 = uVar12;
                      } while (uVar15 != 0);
                    }
                    uVar11 = *puVar18;
                    do {
                      while (uStack_60 = uVar11, 0xffffffff < (longlong)uStack_60) {
                        LOCK();
                        uVar11 = *puVar18;
                        if (uStack_60 == uVar11) {
                          *puVar18 = uStack_60 - 0x100000000;
                          uVar11 = uStack_60;
                        }
                        UNLOCK();
                        uVar9 = uVar8;
                        if (uStack_60 == uVar11) goto LAB_14019cf1b;
                      }
                      cVar4 = FUN_140006180(puVar18,1,&uStack_60);
                      puVar16 = puStack_58;
                      uVar9 = uVar8;
                      uVar11 = uStack_60;
                    } while (cVar4 == '\0');
                  }
                  goto LAB_14019cf1b;
                }
                LOCK();
                uVar9 = *puVar16;
                bVar19 = uVar8 == uVar9;
                if (bVar19) {
                  *puVar16 = uVar8 + 1;
                  uVar9 = uVar8;
                }
                UNLOCK();
              } while (!bVar19);
              if (iVar1 == 0) {
                bVar5 = func_0x000140005970(CONCAT31((int3)(uVar8 + 1 >> 8),
                                                     *(undefined1 *)(param_1 + 0x2a8)));
                uVar14 = (**(code **)(*_DAT_14a9b1b48 + 0x218 + (ulonglong)bVar5 * 8))
                                   (_DAT_14a9b1b48,lStack_50);
                FUN_1407ffb40(*(undefined8 *)(param_1 + 0x290),iVar7,lStack_48,uVar14,puStack_58);
              }
              else {
                plVar13 = (longlong *)FUN_1400c7c00(lStack_50);
                FUN_1407ffb40(*(undefined8 *)(param_1 + 0x290),iVar7,lStack_48,plVar13,puStack_58);
                lVar3 = *plVar13;
                plVar13 = (longlong *)func_0x00014048a150(lVar10);
                if (lVar3 == *plVar13) {
                  func_0x000145041cc0(plVar2,0);
                }
              }
              goto LAB_14019d01e;
            }
            func_0x000145041cc0(plVar2,2);
            *(undefined1 *)((longlong)plVar2 + 0x10c) = 0;
          }
          lVar10 = (**(code **)(*plVar13 + 0x58))(plVar13);
          if ((lVar10 == 0) && (lVar10 = (**(code **)(*plVar13 + 0x28))(plVar13), lVar10 == 0)) {
            lVar10 = (**(code **)(*plVar13 + 0x18))(plVar13);
            if (lVar10 != 0) {
              FUN_14438edc0(*(undefined8 *)(param_1 + 0x290),iVar7,lVar10,(int)plVar2[0x21]);
            }
          }
          else {
            func_0x0001406e7a50(*(undefined8 *)(param_1 + 0x290),iVar7,lVar10);
          }
        }
      }
LAB_14019d01e:
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(param_1 + 4));
  }
  return;
}

