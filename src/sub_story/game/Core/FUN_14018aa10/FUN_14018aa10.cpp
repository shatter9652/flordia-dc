// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018aa10  size: 56 bytes
// Name:    FUN_14018aa10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da3570, FUN_145044760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14018aa10(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  FUN_144da3570(auStack_20);
  cVar1 = func_0x000144da3550(uStack_18);
  if (cVar1 == '\0') {
    uVar2 = FUN_145044760(param_1);
  }
  else {
    uVar2 = (ulonglong)*(uint *)(param_1 + 100);
  }
  return uVar2;
}

