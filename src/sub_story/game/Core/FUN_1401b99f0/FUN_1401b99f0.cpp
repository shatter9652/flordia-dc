// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b99f0  size: 67 bytes
// Name:    FUN_1401b99f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b9ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401b99f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x34) = 0xff;
  lVar2 = FUN_1401b9ce0(*param_2,*(undefined4 *)((longlong)param_2 + 0x1c));
  lVar2 = func_0x000144f62d00(*(undefined8 *)(lVar2 + 8));
  if (lVar2 == 0) {
    cVar1 = *(char *)(param_1 + 0x34);
  }
  else {
    cVar1 = *(char *)((longlong)*(int *)(param_1 + 0x30) + 0x90 + lVar2);
    *(char *)(param_1 + 0x34) = cVar1;
  }
  return cVar1 != -1;
}

