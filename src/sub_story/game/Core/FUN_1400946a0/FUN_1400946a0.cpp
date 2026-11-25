// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400946a0  size: 43 bytes
// Name:    FUN_1400946a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409e4820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400946a0(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)(param_1 + 0x21);
  if (cVar1 == '\x01') {
    FUN_1409e4820(param_1 + 8,param_1 + 0x24);
  }
  *(undefined1 *)(param_1 + 0x21) = 0;
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff;
}

