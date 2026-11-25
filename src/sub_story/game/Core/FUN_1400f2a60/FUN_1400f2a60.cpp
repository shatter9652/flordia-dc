// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f2a60  size: 927 bytes
// Name:    FUN_1400f2a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f33d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f2a60(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar6 = *(longlong *)(param_1 + 0xe8);
  uVar2 = *(uint *)(param_1 + 0xe4);
  if ((ulonglong)uVar2 != 0) {
    lVar9 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar6 + lVar9);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)();
        }
      }
      lVar9 = lVar9 + 8;
    } while ((ulonglong)uVar2 << 3 != lVar9);
    lVar6 = *(longlong *)(param_1 + 0xe8);
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  if (lVar6 != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  uVar2 = *(uint *)(param_1 + 0x5c);
  if ((ulonglong)uVar2 != 0) {
    puVar7 = (undefined4 *)(param_1 + 0x60);
    do {
      lVar6 = *(longlong *)(puVar7 + 2);
      uVar3 = puVar7[1];
      if ((ulonglong)uVar3 != 0) {
        lVar9 = 0;
        do {
          puVar4 = *(undefined8 **)(lVar6 + lVar9);
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar4 + 2);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar4)(puVar4);
            }
          }
          lVar9 = lVar9 + 8;
        } while ((ulonglong)uVar3 << 3 != lVar9);
        lVar6 = *(longlong *)(puVar7 + 2);
      }
      puVar7[1] = 0;
      if (lVar6 != 0) {
        func_0x000144d9c130();
      }
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      puVar7 = puVar7 + 4;
    } while (puVar7 != (undefined4 *)(param_1 + 0x60 + (ulonglong)uVar2 * 0x10));
  }
  *(undefined8 *)(param_1 + 0x58) = 8;
  lVar6 = *(longlong *)(param_1 + 0x50);
  if (lVar6 != 0) {
    FUN_1400f33d0(lVar6 + 0x20);
    if (*(longlong *)(lVar6 + 0x28) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 *)(lVar6 + 0x28) = 0;
    lVar9 = *(longlong *)(lVar6 + 0x18);
    uVar2 = *(uint *)(lVar6 + 0x10);
    if ((ulonglong)uVar2 != 0) {
      lVar8 = 0;
      do {
        if (!SBORROW1('\0',*(char *)(lVar9 + lVar8))) {
          *(undefined1 *)(lVar9 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 1 + lVar8))) {
          *(undefined1 *)(lVar9 + 1 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 2 + lVar8))) {
          *(undefined1 *)(lVar9 + 2 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 3 + lVar8))) {
          *(undefined1 *)(lVar9 + 3 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 4 + lVar8))) {
          *(undefined1 *)(lVar9 + 4 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 5 + lVar8))) {
          *(undefined1 *)(lVar9 + 5 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 6 + lVar8))) {
          *(undefined1 *)(lVar9 + 6 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 7 + lVar8))) {
          *(undefined1 *)(lVar9 + 7 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 8 + lVar8))) {
          *(undefined1 *)(lVar9 + 8 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 9 + lVar8))) {
          *(undefined1 *)(lVar9 + 9 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 10 + lVar8))) {
          *(undefined1 *)(lVar9 + 10 + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 0xb + lVar8))) {
          *(undefined1 *)(lVar9 + 0xb + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 0xc + lVar8))) {
          *(undefined1 *)(lVar9 + 0xc + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 0xd + lVar8))) {
          *(undefined1 *)(lVar9 + 0xd + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 0xe + lVar8))) {
          *(undefined1 *)(lVar9 + 0xe + lVar8) = 0x80;
        }
        if (!SBORROW1('\0',*(char *)(lVar9 + 0xf + lVar8))) {
          *(undefined1 *)(lVar9 + 0xf + lVar8) = 0x80;
        }
        lVar8 = lVar8 + 0x510;
      } while ((ulonglong)uVar2 * 0x510 - lVar8 != 0);
      lVar9 = *(longlong *)(lVar6 + 0x18);
    }
    *(undefined4 *)(lVar6 + 0x14) = 0;
    if (lVar9 != 0) {
      func_0x000144d9c130();
    }
    *(undefined4 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    FUN_1400f33d0(lVar6);
    if (*(longlong *)(lVar6 + 8) != 0) {
      func_0x000144d9c130();
    }
    func_0x000144d9c130(lVar6,0x40);
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 8);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400f2d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar4)(puVar4,1);
      return;
    }
  }
  return;
}

