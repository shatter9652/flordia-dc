// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140144b50  size: 280 bytes
// Name:    FUN_140144b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140144c90, FUN_140143bb0, FUN_14500a260, FUN_140143120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140144b50(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_140144c90();
  if (0 < *(int *)(param_1 + 0x1ac4)) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1ac8) + lVar3 * 8) + 8))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x1ac4));
  }
  FUN_14500a260(param_1);
  if (0 < *(int *)(param_1 + 0x1ac4)) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1ac8) + lVar3 * 8) + 0x10))();
      uVar2 = (ulonglong)*(int *)(param_1 + 0x1ac4);
      lVar3 = lVar3 + 1;
    } while (lVar3 < (longlong)uVar2);
    if (0 < *(int *)(param_1 + 0x1ac4)) {
      lVar3 = 0;
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x1ac8) + lVar3 * 8) + 0xd5) == '\x01')
        {
          FUN_140143120();
          uVar2 = (ulonglong)*(uint *)(param_1 + 0x1ac4);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)uVar2);
      if (0 < (int)uVar2) {
        lVar3 = 0;
        do {
          if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x1ac8) + lVar3 * 8) + 0xd5) == '\x01'
             ) {
            FUN_140143bb0();
            uVar2 = (ulonglong)*(uint *)(param_1 + 0x1ac4);
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < (int)uVar2);
        if (0 < (int)uVar2) {
          lVar3 = 0;
          do {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1ac8) + lVar3 * 8);
            if (*(char *)((longlong)plVar1 + 0xd5) == '\x01') {
              (**(code **)(*plVar1 + 0x30))();
              uVar2 = (ulonglong)*(uint *)(param_1 + 0x1ac4);
            }
            lVar3 = lVar3 + 1;
          } while (lVar3 < (int)uVar2);
        }
      }
    }
  }
  return;
}

