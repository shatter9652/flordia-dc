// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019210  size: 415 bytes
// Name:    FUN_140019210
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400193b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140019210(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  uVar11 = 0;
  *param_1 = (longlong)&UNK_146529350;
  lVar1 = param_1[5];
  uVar7 = *(uint *)(param_1 + 4) << 4;
  uVar3 = uVar11;
  if (uVar7 != 0) {
    do {
      uVar3 = uVar11;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar11 & 0xf) +
                                  (ulonglong)(uVar11 >> 4) * 0x390 + lVar1))) break;
      uVar11 = uVar11 + 1;
      uVar3 = uVar7;
    } while (uVar7 != uVar11);
  }
  lVar4 = (ulonglong)(uVar3 >> 4) * 0x390;
  uVar6 = (ulonglong)((uVar3 & 0xf) * 0x38);
  if (lVar4 + uVar6 != (ulonglong)(*(uint *)(param_1 + 4) & 0xfffffff) * 0x390) {
    lVar4 = lVar4 + 0x10 + uVar6 + lVar1;
    do {
      puVar2 = *(undefined8 **)(lVar4 + 0x30);
      uVar11 = uVar3;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      while (uVar3 = uVar7, uVar11 != uVar7) {
        while (uVar3 = uVar11 + 1, uVar11 = uVar3, uVar3 < uVar7) {
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar3 & 0xf) +
                                      (ulonglong)(uVar3 >> 4) * 0x390 + lVar1))) goto LAB_140019327;
        }
      }
LAB_140019327:
      lVar9 = (ulonglong)(uVar3 & 0xf) * 0x38;
      lVar10 = (ulonglong)(uVar3 >> 4) * 0x390 + lVar1;
      lVar4 = lVar9 + 0x10 + lVar10;
    } while (lVar10 + lVar9 != (ulonglong)(*(uint *)(param_1 + 4) & 0xfffffff) * 0x390 + param_1[5])
    ;
  }
  FUN_1400193b0(param_1 + 4);
  if (param_1[5] != 0) {
    func_0x000144d9c130();
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_1400193b0(param_1 + 4);
  if (param_1[5] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *param_1 = (longlong)&UNK_14633aaf0;
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    if ((param_1[2] == lVar1) && (plVar8 = *(longlong **)(lVar1 + 0x1e8), plVar8 != (longlong *)0x0)
       ) {
      if (plVar8 == param_1) {
        plVar5 = (longlong *)(lVar1 + 0x1e8);
      }
      else {
        do {
          plVar5 = plVar8;
          plVar8 = (longlong *)plVar5[3];
          if (plVar8 == (longlong *)0x0) {
            return;
          }
        } while (plVar8 != param_1);
        plVar5 = plVar5 + 3;
      }
      *plVar5 = plVar8[3];
      (**(code **)(*plVar8 + 0x10))(plVar8);
      auVar12._0_12_ = ZEXT812(0);
      auVar12._12_4_ = 0;
      *(undefined1 (*) [16])(plVar8 + 2) = auVar12;
      LOCK();
      plVar5 = plVar8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
    return;
  }
  return;
}

