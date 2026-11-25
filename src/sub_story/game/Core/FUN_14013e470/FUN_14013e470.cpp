// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e470  size: 91 bytes
// Name:    FUN_14013e470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14013e470(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = func_0x0001401cfe60(param_2,param_3,param_4,param_5);
  if (lVar3 != 0) {
    uVar2 = param_6[1];
    puVar1 = (undefined8 *)
             (param_1 +
             (ulonglong)
             *(ushort *)
              (param_2 + 10 +
              (ulonglong)(uint)((int)((ulonglong)(lVar3 - param_2) >> 2) * -0x55555555) * 0xc) * 4);
    *puVar1 = *param_6;
    puVar1[1] = uVar2;
  }
  return lVar3 != 0;
}

