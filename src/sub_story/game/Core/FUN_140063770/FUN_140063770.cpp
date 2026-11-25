// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063770  size: 94 bytes
// Name:    FUN_140063770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_140063770(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 *param_6)

{
  ushort uVar1;
  longlong lVar2;
  
  lVar2 = func_0x0001401cfe60(param_2,param_3,param_4,param_5);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)
             (param_2 + 10 +
             (ulonglong)(uint)((int)((ulonglong)(lVar2 - param_2) >> 2) * -0x55555555) * 0xc);
    if (*(int *)(param_1 + (ulonglong)uVar1 * 4) != -1) {
      *param_6 = *(undefined8 *)(param_1 + (ulonglong)uVar1 * 4);
      return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
    }
  }
  return 0;
}

