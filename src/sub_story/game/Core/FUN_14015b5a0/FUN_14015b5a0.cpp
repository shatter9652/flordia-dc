// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015b5a0  size: 203 bytes
// Name:    FUN_14015b5a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a9dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015b5a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 0x94);
  if ((ulonglong)uVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x98);
    lVar6 = 0;
    do {
      FUN_1456a9dd0(*(undefined8 *)(lVar5 + lVar6));
      lVar6 = lVar6 + 0x10;
    } while ((ulonglong)uVar3 << 4 != lVar6);
    lVar5 = *(longlong *)(param_1 + 0x98);
    uVar3 = *(uint *)(param_1 + 0x94);
    if ((ulonglong)uVar3 != 0) {
      lVar6 = 0;
      do {
        plVar4 = *(longlong **)(lVar5 + 8 + lVar6);
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
        lVar6 = lVar6 + 0x10;
      } while ((ulonglong)uVar3 << 4 != lVar6);
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
    if (lVar5 != 0) {
      func_0x000144d9c130(lVar5);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}

