// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006a8a0  size: 198 bytes
// Name:    FUN_14006a8a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eb6bb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x00014006a910) */
/* WARNING: Removing unreachable block (ram,0x00014006a958) */
/* WARNING: Removing unreachable block (ram,0x00014006a922) */
/* WARNING: Removing unreachable block (ram,0x00014006a925) */

bool FUN_14006a8a0(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uStack_2c;
  
  cVar1 = func_0x000144eb5740(*param_1,param_1[4]);
  if ((cVar1 != '\0') && (cVar1 = func_0x000144eb5740(*param_2,param_2[4]), cVar1 != '\0')) {
    uStack_2c = *(undefined4 *)(param_1 + (longlong)param_3 * 4);
    cVar1 = FUN_144eb6bb0(param_2,&uStack_2c,0);
    if (cVar1 == '\0') {
      return false;
    }
    if (param_3 != 0) {
      lVar3 = func_0x00014509acd0(param_2,0);
      if (lVar3 == 0) {
        iVar2 = -1;
      }
      else {
        iVar2 = *(int *)(lVar3 + 4);
      }
      return iVar2 == *(int *)(param_1 + (longlong)param_3 * 4 + -4);
    }
  }
  return false;
}

