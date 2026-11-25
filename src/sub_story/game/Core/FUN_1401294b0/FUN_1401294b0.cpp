// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401294b0  size: 53 bytes
// Name:    FUN_1401294b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145274500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401294b0(longlong param_1,longlong param_2,undefined1 *param_3,byte *param_4)

{
  byte bVar1;
  
  *param_3 = *(undefined1 *)(param_1 + 0x1aa);
  *param_4 = *(byte *)(param_1 + 0x1a8);
  bVar1 = FUN_145274500(*(undefined8 *)(param_2 + 0x180),*(undefined8 *)(param_2 + 0x188));
  *param_4 = *param_4 & bVar1;
  return;
}

