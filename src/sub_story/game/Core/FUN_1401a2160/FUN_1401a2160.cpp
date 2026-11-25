// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2160  size: 125 bytes
// Name:    FUN_1401a2160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a2160(longlong *param_1,char param_2,char param_3)

{
  longlong *plVar1;
  
  if (param_2 != '\0') {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x80))(param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x70))(plVar1);
      param_1[0x1d] = 0;
    }
  }
  if (param_3 != '\0') {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x90))(param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x70))(plVar1);
      *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
    }
  }
  param_1[0x1a] = -1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 2;
  return;
}

