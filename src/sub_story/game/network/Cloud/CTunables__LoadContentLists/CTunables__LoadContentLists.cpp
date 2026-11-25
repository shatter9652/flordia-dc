// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143ec9dd0  size: 546 bytes
// Name:    CTunables::LoadContentLists
// Subsystem: core
// Class:   CTunables
//
// Evidence:
//   GTAVSRC: CTunables::LoadContentLists  (game/network/Cloud/Tunables.cpp)
//   literal: contentlists
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140468000, FUN_1458ccbf0, FUN_1402675a0, FUN_140467f40, FUN_140467df0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CTunables.h"


void CTunables__LoadContentLists(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  longlong *plStack_98;
  undefined1 auStack_80 [8];
  longlong *plStack_78;
  undefined1 auStack_60 [8];
  longlong *plStack_58;
  
  *(undefined2 *)(param_1 + 1) = 0;
  func_0x000140467f00(auStack_80);
  cVar6 = FUN_140467df0(param_2,&UNK_14677b1ab,auStack_80);
  if (cVar6 != '\0') {
    uStack_a8 = 0x7fffffff;
    func_0x000140467f00(auStack_a0);
    cVar6 = FUN_140468000(auStack_80,auStack_a0);
    if (cVar6 != '\0') {
      iVar10 = 0;
      do {
        func_0x000140467f00(auStack_60);
        cVar6 = FUN_140468000(auStack_a0,auStack_60);
        if (cVar6 != '\0') {
          do {
            iVar8 = FUN_1458ccbf0(auStack_60,&uStack_a8);
            if (iVar8 == 0) {
              uVar7 = *(ushort *)(param_1 + 1);
              uVar5 = (undefined4)uStack_a8;
              lVar4 = *param_1;
              lVar9 = lVar4;
              if (uVar7 == *(ushort *)((longlong)param_1 + 10)) {
                lVar9 = func_0x000144d9c140(4,(uint)uVar7 * 8 + 0x80);
                func_0x000145f40560(lVar9,lVar4,(uint)uVar7 * 8);
                if (lVar4 != 0) {
                  func_0x000144d9c130(lVar4);
                }
                *(ushort *)((longlong)param_1 + 10) = uVar7 + 0x10;
                *param_1 = lVar9;
                uVar7 = *(ushort *)(param_1 + 1);
              }
              *(ushort *)(param_1 + 1) = uVar7 + 1;
              *(ulonglong *)(lVar9 + (ulonglong)uVar7 * 8) = CONCAT44(iVar10,uVar5) & 0xffffffffff;
            }
            else {
              FUN_1402675a0(0x146c69a78,1);
            }
            cVar6 = FUN_140467f40(auStack_60,auStack_60);
          } while (cVar6 != '\0');
          iVar10 = iVar10 + 1;
        }
        plVar1 = plStack_58;
        if (plStack_58 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_58 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*plStack_58 + 8))(plStack_58);
            LOCK();
            piVar3 = (int *)((longlong)plVar1 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        cVar6 = FUN_140467f40(auStack_a0,auStack_a0);
      } while (cVar6 != '\0');
    }
    if (plStack_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_98 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plStack_98 + 8))(plStack_98);
        LOCK();
        piVar3 = (int *)((longlong)plStack_98 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
        }
      }
    }
  }
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plStack_78 + 8))(plStack_78);
      LOCK();
      piVar3 = (int *)((longlong)plStack_78 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
      }
    }
  }
  return;
}

