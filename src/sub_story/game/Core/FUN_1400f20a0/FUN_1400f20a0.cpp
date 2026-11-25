// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f20a0  size: 135 bytes
// Name:    FUN_1400f20a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f20a0(longlong param_1,longlong param_2,char param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 == '\b') {
    cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x1c);
    lVar2 = 0;
    if (cVar1 == '\'') {
      lVar2 = param_1;
    }
    if (cVar1 == '\"') {
      lVar2 = param_1;
    }
    *(undefined8 *)(param_2 + *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10)) = *param_4;
    return;
  }
  if (param_3 == '\r') {
    cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x1c);
    lVar2 = 0;
    if (cVar1 == '\'') {
      lVar2 = param_1;
    }
    if (cVar1 == '\"') {
      lVar2 = param_1;
    }
    func_0x0001400f2140(param_2 + *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10));
  }
  return;
}

