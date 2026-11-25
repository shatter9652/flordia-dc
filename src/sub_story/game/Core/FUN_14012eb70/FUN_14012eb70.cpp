// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012eb70  size: 1234 bytes
// Name:    FUN_14012eb70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012f540, FUN_144fde950, FUN_14551cc70, FUN_14012f280, FUN_1413b07c0, FUN_14004c030, FUN_140189080, FUN_14012f0c0, FUN_14012f060, FUN_1413b0a70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14012eb70(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  char cStack_41;
  undefined8 uStack_40;
  
  if (param_1[3] != 0) {
    return param_1[3];
  }
  func_0x00014012f050(&uStack_40,*(undefined4 *)param_1);
  lVar9 = FUN_14012f060(uStack_40);
  param_1[3] = lVar9;
  if (lVar9 == 0) {
    cStack_41 = '\0';
    lVar9 = FUN_14012f0c0(*param_1,&cStack_41);
    param_1[3] = lVar9;
    if (cStack_41 == '\x01') goto LAB_14012ef86;
    if (lVar9 == 0) {
      return 0;
    }
  }
  *(int *)(lVar9 + 0x84) = *(int *)(lVar9 + 0x84) + 1;
  cVar6 = FUN_14012f540(*(undefined4 *)(param_1 + 2),param_1);
  if (cVar6 != '\0') {
    uVar8 = *(uint *)(param_1[3] + 100);
    if (uVar8 <= (uint)(*(int *)((longlong)_DAT_14763acb8 + 0xc) - (int)_DAT_14763acb8[2])) {
      uVar2 = *(uint *)(param_1[3] + 0x74);
      if (uVar2 <= (uint)(*(int *)((longlong)_DAT_14763acc0 + 0xc) - (int)_DAT_14763acc0[2])) {
        lVar9 = func_0x00014012d970(*(undefined4 *)(param_1 + 2));
        if ((lVar9 == 0) ||
           (puVar10 = (undefined8 *)func_0x00014012f1e0(lVar9), puVar10 == (undefined8 *)0x0)) {
          if (*(uint *)(param_1 + 0xd) < uVar8) {
            uVar11 = func_0x000144d9c140(8,(ulonglong)uVar8 * 8);
            if ((ulonglong)*(uint *)((longlong)param_1 + 0x6c) != 0) {
              func_0x000145f40560(uVar11,param_1[0xe],
                                  (ulonglong)*(uint *)((longlong)param_1 + 0x6c) << 3);
            }
            if (param_1[0xe] != 0) {
              func_0x000144d9c130();
            }
            param_1[0xe] = uVar11;
            *(uint *)(param_1 + 0xd) = uVar8;
          }
          if (0 < (int)uVar8) {
            uVar16 = 0;
            do {
              plVar5 = _DAT_14763acb8;
              uVar12 = _DAT_14763acb8[4];
              do {
                iVar7 = (int)uVar12;
                if (iVar7 == 0xfffffe) goto LAB_14012ef7d;
                uVar15 = uVar12 & 0xffffffff;
                LOCK();
                uVar13 = plVar5[4];
                bVar17 = uVar12 == uVar13;
                if (bVar17) {
                  plVar5[4] = (ulonglong)(*(uint *)(plVar5[5] + uVar15 * 4) & 0xffffff) |
                              uVar12 & 0xffffffff00000000;
                  uVar13 = uVar12;
                }
                UNLOCK();
                uVar12 = uVar13;
              } while (!bVar17);
              LOCK();
              *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
              UNLOCK();
              puVar1 = (uint *)(plVar5[5] + uVar15 * 4);
              *puVar1 = *puVar1 | *(uint *)(plVar5 + 6);
              if (*plVar5 == 0) goto LAB_14012ef7d;
              lVar9 = *plVar5 + (ulonglong)(uint)((int)plVar5[1] * iVar7);
              if (plVar5[3] != 0) {
                FUN_14004c030(plVar5,lVar9);
              }
              FUN_14012f280(lVar9,uVar16 * 0x20 + *(longlong *)(param_1[3] + 0x68),param_1);
              if (*(char *)(lVar9 + 0x60) == '\0') {
                FUN_1413b0a70(lVar9);
                plVar5 = _DAT_14763acb8;
                FUN_14551cc70(_DAT_14763acb8,lVar9);
                if (plVar5[3] != 0) {
                  FUN_140189080(plVar5,lVar9);
                }
                goto LAB_14012ef7e;
              }
              uVar3 = *(uint *)((longlong)param_1 + 0x6c);
              uVar16 = uVar16 + 1;
              *(uint *)((longlong)param_1 + 0x6c) = uVar3 + 1;
              *(longlong *)(param_1[0xe] + (ulonglong)uVar3 * 8) = lVar9;
            } while (uVar16 != uVar8);
          }
          if (*(uint *)(param_1 + 0xf) < uVar2) {
            uVar11 = func_0x000144d9c140(8,(ulonglong)uVar2 * 8);
            if ((ulonglong)*(uint *)((longlong)param_1 + 0x7c) != 0) {
              func_0x000145f40560(uVar11,param_1[0x10],
                                  (ulonglong)*(uint *)((longlong)param_1 + 0x7c) << 3);
            }
            if (param_1[0x10] != 0) {
              func_0x000144d9c130();
            }
            param_1[0x10] = uVar11;
            *(uint *)(param_1 + 0xf) = uVar2;
          }
          if (0 < (int)uVar2) {
            uVar16 = 0;
            do {
              lVar9 = param_1[3];
              if (uVar16 < *(uint *)(lVar9 + 0x74)) {
                lVar14 = *(longlong *)(*(longlong *)(lVar9 + 0x78) + uVar16 * 8);
              }
              else {
                lVar14 = 0;
              }
              uVar8 = func_0x00014012f090(*(undefined4 *)(lVar9 + 100),*(undefined8 *)(lVar9 + 0x68)
                                          ,*(undefined8 *)(lVar14 + 0x58));
              plVar5 = _DAT_14763acc0;
              if (*(uint *)((longlong)param_1 + 0x6c) <= uVar8) goto LAB_14012ef7e;
              uVar12 = _DAT_14763acc0[4];
              do {
                iVar7 = (int)uVar12;
                if (iVar7 == 0xfffffe) goto LAB_14012ef7d;
                uVar15 = uVar12 & 0xffffffff;
                LOCK();
                uVar13 = plVar5[4];
                bVar17 = uVar12 == uVar13;
                if (bVar17) {
                  plVar5[4] = (ulonglong)(*(uint *)(plVar5[5] + uVar15 * 4) & 0xffffff) |
                              uVar12 & 0xffffffff00000000;
                  uVar13 = uVar12;
                }
                UNLOCK();
                uVar12 = uVar13;
              } while (!bVar17);
              LOCK();
              *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
              UNLOCK();
              puVar1 = (uint *)(plVar5[5] + uVar15 * 4);
              *puVar1 = *puVar1 | *(uint *)(plVar5 + 6);
              if (*plVar5 == 0) {
LAB_14012ef7d:
                pcVar4 = (code *)swi(3);
                lVar9 = (*pcVar4)();
                return lVar9;
              }
              puVar10 = (undefined8 *)(*plVar5 + (ulonglong)(uint)((int)plVar5[1] * iVar7));
              if (plVar5[3] != 0) {
                FUN_14004c030(plVar5,puVar10);
              }
              uVar16 = uVar16 + 1;
              *puVar10 = *(undefined8 *)(param_1[0xe] + (ulonglong)uVar8 * 8);
              puVar10[1] = lVar14;
              *(undefined1 *)(puVar10 + 2) = 1;
              uVar8 = *(uint *)((longlong)param_1 + 0x7c);
              *(uint *)((longlong)param_1 + 0x7c) = uVar8 + 1;
              *(undefined8 **)(param_1[0x10] + (ulonglong)uVar8 * 8) = puVar10;
            } while (uVar16 != uVar2);
          }
        }
        else if (puVar10 != param_1) {
          *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
          uVar8 = *(uint *)((longlong)puVar10 + 0x6c);
          if ((ulonglong)uVar8 != 0) {
            uVar11 = puVar10[0xe];
            lVar9 = (ulonglong)uVar8 << 3;
            if (*(uint *)(param_1 + 0xd) < uVar8) {
              if (param_1[0xe] != 0) {
                func_0x000144d9c130();
              }
              param_1[0xe] = 0;
              *(undefined4 *)(param_1 + 0xd) = 0;
              lVar14 = func_0x000144d9c140(8,lVar9);
              param_1[0xe] = lVar14;
              if (lVar14 == 0) {
                pcVar4 = (code *)swi(3);
                lVar9 = (*pcVar4)();
                return lVar9;
              }
              *(uint *)(param_1 + 0xd) = uVar8;
            }
            func_0x000145f40560(param_1[0xe],uVar11,lVar9);
            *(uint *)((longlong)param_1 + 0x6c) = uVar8;
          }
          *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
          uVar8 = *(uint *)((longlong)puVar10 + 0x7c);
          if ((ulonglong)uVar8 != 0) {
            uVar11 = puVar10[0x10];
            lVar9 = (ulonglong)uVar8 << 3;
            if (*(uint *)(param_1 + 0xf) < uVar8) {
              if (param_1[0x10] != 0) {
                func_0x000144d9c130();
              }
              param_1[0x10] = 0;
              *(undefined4 *)(param_1 + 0xf) = 0;
              lVar14 = func_0x000144d9c140(8,lVar9);
              param_1[0x10] = lVar14;
              if (lVar14 == 0) {
                pcVar4 = (code *)swi(3);
                lVar9 = (*pcVar4)();
                return lVar9;
              }
              *(uint *)(param_1 + 0xf) = uVar8;
            }
            func_0x000145f40560(param_1[0x10],uVar11,lVar9);
            *(uint *)((longlong)param_1 + 0x7c) = uVar8;
          }
        }
        FUN_144fde950(param_1);
        return param_1[3];
      }
    }
  }
LAB_14012ef7e:
  FUN_1413b07c0(param_1);
LAB_14012ef86:
  func_0x0001456a7bd0(param_1);
  return 0;
}

