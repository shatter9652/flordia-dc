// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070190  size: 168 bytes
// Name:    FUN_140070190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451158d0, FUN_14079a650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140070190(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  int *piVar4;
  
  cVar2 = FUN_14079a650(*(undefined8 *)(param_1 + 0x2018),*(undefined4 *)(param_1 + 0x2038));
  if ((cVar2 != '\0') && (*(int *)(param_1 + 4) != 0)) {
    piVar4 = (int *)(param_1 + 0x44);
    uVar3 = 0;
    do {
      if ((((piVar4[-1] == param_2) && (piVar4[-2] == param_3)) && (*piVar4 == param_4)) &&
         ((cVar2 = FUN_1451158d0(piVar4 + -0xf,param_5), cVar2 != '\0' &&
          (iVar1 = *(int *)(*(longlong *)(param_1 + 0x2018) + 0x10), piVar4[-3] != iVar1)))) {
        piVar4[-3] = iVar1;
        return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 0x10;
    } while (uVar3 < *(uint *)(param_1 + 4));
  }
  return 0;
}

