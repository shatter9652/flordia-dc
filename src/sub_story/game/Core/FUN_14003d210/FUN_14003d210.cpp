// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003d210  size: 159 bytes
// Name:    FUN_14003d210
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e510e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003d210(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 0xc) != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0xc) * 0x58;
    lVar1 = param_1 + 0x38;
    do {
      FUN_144e510e0(lVar1);
      FUN_144e510e0(lVar1 + -0x28);
      lVar1 = lVar1 + 0x58;
      lVar2 = lVar2 + -0x58;
    } while (lVar2 != 0);
  }
  *(undefined8 *)(param_1 + 8) = 3;
  func_0x00014003d200(param_1 + 0x130);
  *(undefined1 *)(param_1 + 0x121) = 1;
  *(undefined4 *)(param_1 + 700) = 0;
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x122) = 0;
    *(undefined8 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x120) = 0;
  }
  return;
}

