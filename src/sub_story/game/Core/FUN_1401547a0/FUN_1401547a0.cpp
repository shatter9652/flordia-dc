// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401547a0  size: 346 bytes
// Name:    FUN_1401547a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140154910
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401547a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar5 = func_0x000145310cd0(*(undefined8 *)(param_1 + 8));
  func_0x000140154900(uVar5);
  FUN_140154910(param_1);
  func_0x000145054ec0(param_1 + 0x2000);
  puVar3 = *(undefined8 **)(param_1 + 0x1fe8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(undefined4 *)(param_1 + 0x1fc4) = 0;
  if (*(longlong *)(param_1 + 0x1fc8) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x1fc0) = 0;
  *(undefined8 *)(param_1 + 0x1fc8) = 0;
  *(undefined4 *)(param_1 + 0x1fb4) = 0;
  if (*(longlong *)(param_1 + 0x1fb8) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x1fb0) = 0;
  *(undefined8 *)(param_1 + 0x1fb8) = 0;
  if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
    lVar7 = param_1 + 0x88;
    lVar6 = (ulonglong)*(uint *)(param_1 + 0x14) * 0x108;
    do {
      *(undefined4 *)(lVar7 + -0xc) = 0;
      if ((lVar7 != *(longlong *)(lVar7 + -8)) && (*(longlong *)(lVar7 + -8) != 0)) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar7 + -0x10) = 8;
      *(undefined8 *)(lVar7 + -8) = 0;
      plVar4 = *(longlong **)(lVar7 + -0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      lVar7 = lVar7 + 0x108;
      lVar6 = lVar6 + -0x108;
    } while (lVar6 != 0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0x1e;
  return;
}

