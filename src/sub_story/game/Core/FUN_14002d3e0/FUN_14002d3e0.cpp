// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002d3e0  size: 126 bytes
// Name:    FUN_14002d3e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002d3e0(longlong param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 != 0 && param_2 != 0) {
    uVar2 = 1;
    do {
      param_1 = *(longlong *)(param_1 + 0x30);
      bVar3 = uVar2 < param_2;
      uVar2 = uVar2 + 1;
    } while (bVar3 && param_1 != 0);
  }
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x30)) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar1 + 0x14) == '\x05') {
      func_0x0001404b8850(lVar1,(float)param_3 * *(float *)(lVar1 + 0xe4));
    }
  }
  return;
}

