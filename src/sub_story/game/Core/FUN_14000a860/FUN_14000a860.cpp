// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a860  size: 279 bytes
// Name:    FUN_14000a860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142cfac00, FUN_144eb3750, FUN_144eb36c0, FUN_144f013e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000a860(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 0xf4);
  if ((ulonglong)uVar1 != 0) {
    lVar6 = 0;
    do {
      lVar4 = FUN_144eb3750(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
      lVar5 = func_0x000144dd0bd0(*(undefined4 *)(param_1 + 0x100 + lVar6));
      if ((((lVar4 != 0) && (lVar5 != 0)) && (*(char *)(param_1 + 0x17e + lVar6) == '\x01')) &&
         ((*(char *)(param_1 + 0x181 + lVar6) == '\x01' &&
          (lVar4 = FUN_144f013e0(*(undefined4 *)(lVar4 + 0x9c)), lVar4 != 0)))) {
        if (*(char *)(lVar5 + 0x30) == '\x02') {
          uVar2 = *(undefined4 *)(lVar5 + 0x9c);
          cVar3 = FUN_144eb36c0(uVar2,0);
          if ((cVar3 != '\0') && (lVar5 = FUN_144eb3750(uVar2), lVar5 != 0)) {
            lVar4 = func_0x000144da6540(*(undefined4 *)(lVar5 + 0x9c));
            if ((*(byte *)(*(longlong *)(lVar4 + 0x10a0) + 0x3b59) & 10) != 0) {
              return;
            }
LAB_14000a93c:
            if ((*(int *)(param_1 + 0x174 + lVar6) <= *(int *)(param_2 + 0x15f4)) &&
               (*(int *)(param_2 + 0x15f4) <= *(int *)(param_1 + 0x178 + lVar6))) {
              FUN_142cfac00(lVar5);
            }
          }
        }
        else if (*(char *)(param_1 + 0x182 + lVar6) == '\x01') goto LAB_14000a93c;
      }
      lVar6 = lVar6 + 0x90;
    } while ((ulonglong)uVar1 * 0x90 != lVar6);
  }
  return;
}

