// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c310  size: 46 bytes
// Name:    FUN_14014c310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014c340
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014c310(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_14014c340();
  if (param_1[0xb] != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 6) = 2;
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = param_1[3];
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      if (param_1[0xb] != 0) {
        FUN_1420b7360(param_1[0xb] + 0x1e8,puVar3);
      }
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar4);
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x000141484e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}

