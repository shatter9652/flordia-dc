// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003f90  size: 36 bytes
// Name:    FUN_140003f90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400039c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140003f90(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_1400039c0();
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (param_2 != -1) {
    if (*(char *)(param_1 + 0x24) == '\0') {
      if (*(int *)(param_1 + 0x20) == param_2) {
        return;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        lVar1 = 0;
        uVar2 = 0;
        do {
          FUN_145002750(*(longlong *)(param_1 + 0x18) + lVar1,param_2);
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0x10;
        } while (uVar2 < *(uint *)(param_1 + 0x14));
      }
    }
    *(int *)(param_1 + 0x20) = param_2;
  }
  return;
}

