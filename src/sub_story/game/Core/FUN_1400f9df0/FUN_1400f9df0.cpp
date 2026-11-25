// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9df0  size: 88 bytes
// Name:    FUN_1400f9df0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400f9df0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  
  lVar1 = func_0x0001401cfe60(param_2,param_3,param_4,param_5);
  if (lVar1 != 0) {
    *(undefined4 *)
     (param_1 +
     (ulonglong)
     *(ushort *)
      (param_2 + 10 +
      (ulonglong)(uint)((int)((ulonglong)(lVar1 - param_2) >> 2) * -0x55555555) * 0xc) * 4) =
         param_6;
  }
  return lVar1 != 0;
}

