// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c3c60  size: 155 bytes
// Name:    FUN_1400c3c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450b8130, FUN_144f5c240, FUN_1455d5240, FUN_1455a2e40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c3c60(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  func_0x0001450b81d0();
  cVar7 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x2c));
  if (cVar7 != '\0') {
    uVar3 = *(uint *)((longlong)param_1 + 0x9c);
    if ((ulonglong)uVar3 != 0) {
      lVar5 = param_1[0x14];
      lVar9 = 0;
      do {
        puVar6 = *(undefined8 **)(lVar5 + lVar9);
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar6 + 3);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar6)(puVar6,1);
          }
        }
        lVar9 = lVar9 + 0x18;
      } while ((ulonglong)uVar3 * 0x18 != lVar9);
    }
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
    return;
  }
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0x10005) {
    FUN_144f5c240(param_1);
    (**(code **)(*param_1 + 0x60))(param_1,*(undefined4 *)(*(longlong *)*param_2 + 0xc));
    FUN_1450b8130(param_1);
    FUN_1455a2e40(param_1);
    FUN_1455d5240(param_1);
    *(byte *)((longlong)param_1 + 0x22e) = *(byte *)((longlong)param_1 + 0x22e) & 0xfd;
  }
  else {
    if (iVar2 == 0x10009) {
      plVar4 = (longlong *)param_1[1];
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      if (((longlong *)param_1[1] == plVar4) &&
         (plVar10 = (longlong *)plVar4[6], plVar10 != (longlong *)0x0)) {
        if (plVar10 == param_1) {
          plVar8 = plVar4 + 6;
        }
        else {
          do {
            plVar8 = plVar10;
            plVar10 = (longlong *)plVar8[2];
            if (plVar10 == (longlong *)0x0) {
              return;
            }
          } while (plVar10 != param_1);
          plVar8 = plVar8 + 2;
        }
        *plVar8 = plVar10[2];
        plVar10[2] = 0;
        if ((*(byte *)((longlong)plVar4 + 0x16) & 4) != 0) {
          if (*(code **)(*param_1 + 0x10) == (code *)&UNK_144ea3280) {
            func_0x000144ea3280(param_1,&stack0xffffffffffffffe0);
          }
          else {
            (**(code **)(*param_1 + 0x10))(param_1,&stack0xffffffffffffffe0);
          }
        }
        plVar10[1] = 0;
        LOCK();
        plVar8 = plVar10 + 3;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar10)(plVar10,1);
        }
        if (*(code **)(*plVar4 + 0x58) == FUN_144ea32a0) {
          FUN_144ea32a0(plVar4);
        }
        else {
          (**(code **)(*plVar4 + 0x58))(plVar4);
        }
      }
      return;
    }
    if (iVar2 == 0x1000a) {
      *(longlong **)*param_2 = param_1;
    }
  }
  return;
}

