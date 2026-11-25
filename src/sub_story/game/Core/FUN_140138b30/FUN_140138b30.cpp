// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140138b30  size: 59 bytes
// Name:    FUN_140138b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145146ab0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140138b30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  float fStack_c;
  
  cVar1 = FUN_145146ab0(param_2,*(undefined4 *)(param_1 + 4),&fStack_c);
  uVar2 = 0;
  if ((cVar1 != '\0') && (*(float *)(param_1 + 8) < fStack_c)) {
    uVar2 = 1;
  }
  return uVar2;
}

