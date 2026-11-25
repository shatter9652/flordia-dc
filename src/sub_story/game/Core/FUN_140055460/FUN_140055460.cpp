// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055460  size: 128 bytes
// Name:    FUN_140055460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140055460(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar3 = 5;
  if ((param_2 != 0) && (cVar2 = func_0x000144e7d710(param_1), cVar2 != '\0')) {
    if (*(char *)(param_2 + 0x650) == '\0') {
      cVar2 = func_0x000144da2930(*(undefined4 *)(param_2 + 0x61c));
      if (cVar2 == '\0') {
        return;
      }
      lVar1 = func_0x000144da31b0(param_1 + 0x338);
      uVar3 = 2;
      if ((lVar1 == 0) && (lVar1 = func_0x000144da31b0(param_1 + 0x340), lVar1 == 0)) {
        return;
      }
    }
    else {
      uVar3 = 4;
    }
  }
  *(undefined4 *)(param_1 + 0x38c) = uVar3;
  return;
}

