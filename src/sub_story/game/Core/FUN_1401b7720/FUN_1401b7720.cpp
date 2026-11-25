// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b7720  size: 58 bytes
// Name:    FUN_1401b7720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145078170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b7720(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar9;
  
  uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_145078170(param_1,param_2,uVar5);
  uVar4 = *(uint *)(param_1 + 0xe4);
  if (uVar4 == *(uint *)(param_1 + 0xe0)) {
    uVar8 = 1;
    if (1 < uVar4) {
      uVar8 = uVar4 >> 1;
    }
    lVar6 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar4) * 8,uVar4 >> 1,param_4,unaff_RBX,
                                unaff_RDI,unaff_RSI);
    if ((ulonglong)*(uint *)(param_1 + 0xe4) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe8);
      lVar9 = (ulonglong)*(uint *)(param_1 + 0xe4) << 3;
      lVar7 = 0;
      do {
        if ((undefined8 *)(lVar6 + lVar7) != (undefined8 *)0x0) {
          *(undefined8 *)(lVar6 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
          *(undefined8 *)(lVar2 + lVar7) = 0;
        }
        lVar7 = lVar7 + 8;
      } while (lVar9 != lVar7);
      lVar7 = 0;
      do {
        puVar3 = *(undefined8 **)(lVar2 + lVar7);
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar3 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        lVar7 = lVar7 + 8;
      } while (lVar9 != lVar7);
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      func_0x000144d9c130(*(longlong *)(param_1 + 0xe8));
    }
    *(longlong *)(param_1 + 0xe8) = lVar6;
    *(uint *)(param_1 + 0xe0) = uVar8 + uVar4;
    uVar4 = *(uint *)(param_1 + 0xe4);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0xe8);
  }
  *(uint *)(param_1 + 0xe4) = uVar4 + 1;
  if (lVar6 != 0) {
    *(longlong **)(lVar6 + (ulonglong)uVar4 * 8) = param_3;
    LOCK();
    *(int *)(param_3 + 2) = (int)param_3[2] + 1;
    UNLOCK();
  }
  return;
}

