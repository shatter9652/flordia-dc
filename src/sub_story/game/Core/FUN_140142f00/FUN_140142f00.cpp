// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140142f00  size: 121 bytes
// Name:    FUN_140142f00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140142f80, FUN_1401430c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140142f00(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0xb8);
  cVar3 = func_0x000140355bd0(*(undefined4 *)(lVar1 + 0x1ac4),*(undefined8 *)(lVar1 + 0x1ac8),
                              param_1);
  if (cVar3 == '\0') {
    FUN_1401430c0(lVar1,param_1);
  }
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar5 = 0;
    do {
      FUN_140142f80(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x3c));
  }
  if (*(char *)(param_1 + 0xc0) != '\0') {
    FUN_140144c90();
    if (0 < *(int *)(lVar1 + 0x1ac4)) {
      lVar5 = 0;
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x1ac8) + lVar5 * 8) + 8))();
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar1 + 0x1ac4));
    }
    FUN_14500a260(lVar1);
    if (0 < *(int *)(lVar1 + 0x1ac4)) {
      lVar5 = 0;
      do {
        (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x1ac8) + lVar5 * 8) + 0x10))();
        uVar4 = (ulonglong)*(int *)(lVar1 + 0x1ac4);
        lVar5 = lVar5 + 1;
      } while (lVar5 < (longlong)uVar4);
      if (0 < *(int *)(lVar1 + 0x1ac4)) {
        lVar5 = 0;
        do {
          if (*(char *)(*(longlong *)(*(longlong *)(lVar1 + 0x1ac8) + lVar5 * 8) + 0xd5) == '\x01')
          {
            FUN_140143120();
            uVar4 = (ulonglong)*(uint *)(lVar1 + 0x1ac4);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < (int)uVar4);
        if (0 < (int)uVar4) {
          lVar5 = 0;
          do {
            if (*(char *)(*(longlong *)(*(longlong *)(lVar1 + 0x1ac8) + lVar5 * 8) + 0xd5) == '\x01'
               ) {
              FUN_140143bb0();
              uVar4 = (ulonglong)*(uint *)(lVar1 + 0x1ac4);
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 < (int)uVar4);
          if (0 < (int)uVar4) {
            lVar5 = 0;
            do {
              plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x1ac8) + lVar5 * 8);
              if (*(char *)((longlong)plVar2 + 0xd5) == '\x01') {
                (**(code **)(*plVar2 + 0x30))();
                uVar4 = (ulonglong)*(uint *)(lVar1 + 0x1ac4);
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < (int)uVar4);
          }
        }
      }
    }
    return;
  }
  return;
}

