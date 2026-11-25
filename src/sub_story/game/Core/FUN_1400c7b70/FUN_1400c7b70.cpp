// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c7b70  size: 63 bytes
// Name:    FUN_1400c7b70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f625f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400c7b70(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144f625f0(param_1,(int)*(char *)(param_1 + 0x60));
  if (((cVar1 == '\0') && (*(char *)(param_1 + 0x38e) != '\x01')) ||
     (uVar2 = 1, *(char *)(param_1 + 0x389) == '\x01')) {
    *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x21) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

