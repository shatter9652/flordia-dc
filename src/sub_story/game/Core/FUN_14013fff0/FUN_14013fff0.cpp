// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013fff0  size: 209 bytes
// Name:    FUN_14013fff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145003600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14013fff0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  if ((*(char *)(param_1 + 0x197) == '\x01') && (*(int *)(param_1 + 0x168) != 0)) {
    uVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x98);
      if (0 < (longlong)iVar1) {
        lVar6 = 0;
        do {
          cVar3 = (**(code **)(param_1 + 0x48 + lVar6))
                            (*(undefined8 *)(param_1 + 0x50 + lVar6),uVar5);
          if (cVar3 == '\0') goto LAB_140140065;
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar6);
      }
      uVar4 = (ulonglong)(uVar5 >> 5 & 0x7ff);
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0xa0) + uVar4 * 4);
      if ((uVar2 >> (uVar5 & 0x1f) & 1) == 0) {
        *(uint *)(*(longlong *)(param_1 + 0xa0) + uVar4 * 4) = uVar2 | 1 << (uVar5 & 0x1f);
        iVar1 = *(int *)(param_1 + 0x98);
        if (0 < (longlong)iVar1) {
          lVar6 = 0;
          do {
            cVar3 = (**(code **)(param_1 + 0x48 + lVar6))
                              (*(undefined8 *)(param_1 + 0x50 + lVar6),uVar5);
            if (cVar3 == '\0') goto LAB_140140065;
            lVar6 = lVar6 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar6);
        }
        FUN_145003600(param_1,uVar5);
      }
LAB_140140065:
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x168));
  }
  return;
}

