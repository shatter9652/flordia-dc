// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011b340  size: 114 bytes
// Name:    FUN_14011b340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144edd980
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011b340(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_58 [56];
  
  if (*(char *)(param_2 + 0x70) != '\0') {
    func_0x000144f8dbc0(auStack_58);
    cVar1 = FUN_144edd980(param_2,auStack_58);
    func_0x0001455321f0(auStack_58);
    cVar2 = FUN_144edd980(param_2,auStack_58);
    if (cVar1 != '\0') {
      func_0x000143d43970(param_1,0);
    }
    if (cVar2 != '\0') {
      func_0x000143d43970(param_1,1);
    }
  }
  return;
}

