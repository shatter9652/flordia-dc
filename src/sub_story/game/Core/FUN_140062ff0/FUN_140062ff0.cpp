// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062ff0  size: 47 bytes
// Name:    FUN_140062ff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140062ff0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x2a) = 1;
  lVar1 = *(longlong *)(param_2 + 0x28);
  func_0x000140063020(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10),
                      *(undefined4 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
  *(undefined1 *)(lVar1 + 0x18) = 10;
  return;
}

