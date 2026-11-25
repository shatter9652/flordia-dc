// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140151da0  size: 63 bytes
// Name:    FUN_140151da0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140151da0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x80))(param_1);
  }
  lVar1 = param_1[0x1e];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 != param_2) {
      if (param_2 != 0) {
        func_0x0001403280a0(param_2);
        lVar2 = *(longlong *)(lVar1 + 0x10);
      }
      if (lVar2 != 0) {
        FUN_140993d10();
      }
      *(longlong *)(lVar1 + 0x10) = param_2;
    }
    return;
  }
  return;
}

