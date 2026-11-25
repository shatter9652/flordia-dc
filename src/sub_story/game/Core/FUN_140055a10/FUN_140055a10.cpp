// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055a10  size: 155 bytes
// Name:    FUN_140055a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140055a10(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  
  uVar4 = 5;
  if ((param_2 != 0) && (cVar3 = func_0x000144e7d710(param_1), cVar3 != '\0')) {
    if (*(char *)(param_2 + 0x650) == '\0') {
      lVar2 = func_0x000144da31b0(param_1 + 0x348);
      if (lVar2 == 0) {
        iVar1 = *(int *)(param_2 + 0x61c);
        cVar3 = func_0x000144da2930(iVar1);
        if ((cVar3 != '\0') && (iVar1 == *(int *)(param_1 + 0x3c4))) {
          lVar2 = func_0x000144da31b0(param_1 + 0x338);
          uVar4 = 2;
          if ((lVar2 == 0) && (lVar2 = func_0x000144da31b0(param_1 + 0x340), lVar2 == 0)) {
            return;
          }
          goto LAB_140055a9a;
        }
      }
      return;
    }
    uVar4 = 4;
  }
LAB_140055a9a:
  *(undefined4 *)(param_1 + 0x38c) = uVar4;
  return;
}

