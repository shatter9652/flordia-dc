// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ae240  size: 993 bytes
// Name:    FUN_1401ae240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401ae8f0, FUN_1401ae630, FUN_144f9fed0, FUN_145073d60, FUN_144f9ff30, FUN_1401ae790, FUN_1401ae6e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ae240(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  byte bStack_42;
  byte bStack_41;
  
  uVar10 = *(uint *)(param_3 + 0xfc);
  if (uVar10 != 0) {
    uVar12 = 0;
    do {
      lVar11 = *(longlong *)(param_3 + 0x100);
      uVar9 = (uint)uVar12;
      uVar7 = *(uint *)(lVar11 + uVar12 * 4);
      if (uVar7 == 0x1ffff) {
LAB_1401ae57e:
        uVar7 = uVar10 - 1;
        uVar10 = uVar9;
        if (uVar7 != uVar9) {
          *(undefined4 *)(lVar11 + uVar12 * 4) = *(undefined4 *)(lVar11 + (ulonglong)uVar7 * 4);
          uVar10 = *(int *)(param_3 + 0xfc) - 1;
        }
        *(uint *)(param_3 + 0xfc) = uVar10;
        uVar9 = uVar9 - 1;
      }
      else {
        uVar1 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar7 & 0x1ffff) * 4);
        if (((0x1ffff < (uVar7 ^ uVar1)) ||
            ((uVar1 & *(uint *)(_DAT_14a9b3f48 + 6)) != *(uint *)(_DAT_14a9b3f48 + 6))) ||
           (*_DAT_14a9b3f48 == 0)) goto LAB_1401ae57e;
        lVar11 = *_DAT_14a9b3f48 + (ulonglong)((uVar7 & 0x1ffff) * (int)_DAT_14a9b3f48[1]);
        cVar2 = FUN_144f9ff30(lVar11);
        if (cVar2 == '\0') {
          *(uint *)(lVar11 + 0x88) = *(uint *)(lVar11 + 0x88) | 8;
        }
        else if ((*(uint *)(lVar11 + 0x88) >> 0x14 & 1) != 0) {
          if ((*(uint *)(lVar11 + 0xd0) >> 0x14 & 1) != 0) {
            *(byte *)(param_3 + 0x149) = *(byte *)(param_3 + 0x149) | 4;
            return;
          }
          if ((*(uint *)(lVar11 + 0xd0) >> 0x13 & 1) != 0) {
            bVar3 = func_0x0001436d1430(param_3,*(undefined4 *)(lVar11 + 0x24));
            uVar9 = uVar9 - bVar3;
          }
        }
        uVar10 = *(uint *)(param_3 + 0xfc);
      }
      uVar12 = (ulonglong)(uVar9 + 1);
    } while (uVar9 + 1 < uVar10);
    if (uVar10 != 0) {
      bStack_41 = 0;
      iVar4 = FUN_1401ae790(param_1,param_3,param_2);
      *(int *)(param_3 + 0x160) = iVar4;
      uVar10 = *(uint *)(param_3 + 0xfc);
      if (uVar10 != 0) {
        if ((bStack_41 & 1) == 0) {
          uVar12 = 0;
          plVar13 = _DAT_14a9b3f48;
          if (iVar4 == 1) {
            do {
              uVar8 = (ulonglong)
                      ((*(uint *)(*(longlong *)(param_3 + 0x100) + uVar12 * 4) & 0x1ffff) *
                      (int)plVar13[1]);
              if ((*(uint *)(*plVar13 + 0x88 + uVar8) & 0x40000008) == 0x40000000) {
                FUN_1401ae630(*plVar13 + uVar8,1);
                uVar10 = *(uint *)(param_3 + 0xfc);
                plVar13 = _DAT_14a9b3f48;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar10);
          }
          else {
            do {
              uVar8 = (ulonglong)
                      ((*(uint *)(*(longlong *)(param_3 + 0x100) + uVar12 * 4) & 0x1ffff) *
                      (int)plVar13[1]);
              if ((*(byte *)(*plVar13 + 0x88 + uVar8) & 8) == 0) {
                FUN_1401ae630(*plVar13 + uVar8,iVar4);
                uVar10 = *(uint *)(param_3 + 0xfc);
                plVar13 = _DAT_14a9b3f48;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar10);
          }
        }
        else {
          uVar12 = 0;
          do {
            uVar8 = (ulonglong)
                    ((*(uint *)(*(longlong *)(param_3 + 0x100) + uVar12 * 4) & 0x1ffff) *
                    (int)_DAT_14a9b3f48[1]);
            uVar10 = *(uint *)(*_DAT_14a9b3f48 + 0x88 + uVar8);
            if (((uVar10 & 8) == 0) && ((iVar4 != 1 || ((uVar10 & 0x40000000) != 0)))) {
              plVar13 = (longlong *)(*_DAT_14a9b3f48 + uVar8);
              cVar2 = (**(code **)(*plVar13 + 1000))(plVar13);
              if (cVar2 == '\0') {
                FUN_1401ae630(plVar13,iVar4);
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_3 + 0xfc));
        }
      }
      if (iVar4 == 1) {
        bStack_42 = 0;
        iVar4 = func_0x0001401ae690(*(undefined4 *)(param_3 + 0x11c),
                                    *(undefined8 *)(param_3 + 0x120));
        iVar5 = FUN_1401ae8f0(param_3,param_2,&bStack_42);
        iVar6 = FUN_1401ae6e0(param_3,param_2);
        bVar3 = bStack_42;
        *(int *)(param_3 + 0x164) = iVar4;
        *(int *)(param_3 + 0x168) = iVar5;
        *(int *)(param_3 + 0x16c) = iVar6;
        if (*(int *)(param_3 + 0xfc) != 0) {
          uVar12 = 0;
          do {
            uVar8 = (ulonglong)
                    ((*(uint *)(*(longlong *)(param_3 + 0x100) + uVar12 * 4) & 0x1ffff) *
                    (int)_DAT_14a9b3f48[1]);
            if ((*(byte *)(*_DAT_14a9b3f48 + 0x88 + uVar8) & 8) == 0) {
              plVar13 = (longlong *)(*_DAT_14a9b3f48 + uVar8);
              if (iVar4 != 1) {
                func_0x0001414e7030(plVar13,iVar4);
              }
              if ((iVar5 != 1) &&
                 (((bVar3 & 1) == 0 ||
                  (cVar2 = (**(code **)(*plVar13 + 1000))(plVar13), cVar2 == '\0')))) {
                func_0x0001401ae770(plVar13,iVar5);
              }
              if (iVar6 != 1) {
                func_0x0001436cf6f0(plVar13,iVar6);
              }
              if (((*(byte *)(param_3 + 0x149) & 0x10) == 0) &&
                 (cVar2 = FUN_144f9fed0(plVar13), cVar2 != '\0')) {
                FUN_145073d60(plVar13,param_2);
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_3 + 0xfc));
        }
      }
    }
  }
  return;
}

