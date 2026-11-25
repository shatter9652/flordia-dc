// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051860  size: 57 bytes
// Name:    FUN_140051860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140051860(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  *(undefined1 *)(param_1 + 2) = 1;
  (**(code **)(*param_1 + 0x88))(param_1);
  *(char *)(param_1 + 2) = (char)lVar1;
  return;
}

