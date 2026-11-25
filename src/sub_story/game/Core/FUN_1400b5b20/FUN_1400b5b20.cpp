// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b5b20  size: 58 bytes
// Name:    FUN_1400b5b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b5b20(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    lVar2 = func_0x000144e67fd0();
    puVar1 = (uint *)(lVar2 + 0x1c);
  }
  else {
    puVar1 = (uint *)((ulonglong)param_2 * 4 + *(longlong *)(param_1 + 0x78));
  }
  *puVar1 = *puVar1 & 0xfffff000 | param_3 & 0xfff;
  return;
}

