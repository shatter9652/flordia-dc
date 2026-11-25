// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7830  size: 211 bytes
// Name:    FUN_1401a7830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e3f230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a7830(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = _DAT_14abbef40;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    iVar7 = iVar2 + iVar1;
    iVar8 = _DAT_14abbef40 + param_2;
    iVar4 = iVar7;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    cVar6 = FUN_144e3f230(iVar4,iVar8);
    if (cVar6 == '\0') {
      iVar3 = param_1[2];
      if (iVar1 == 0) {
        if ((iVar3 != -1) && (cVar6 = FUN_144e3f230(0xffffffff,iVar8), cVar6 == '\0')) {
          return;
        }
      }
      else {
        if ((iVar3 != -1) && (cVar6 = FUN_144e3f230(iVar3 + iVar1 + iVar2,iVar8), cVar6 == '\0')) {
          return;
        }
        cVar6 = func_0x000144f982f0(iVar7);
        if (cVar6 == '\0') {
          *param_1 = iVar5;
          param_1[2] = param_2;
          return;
        }
      }
      iVar7 = func_0x0001401a7910(iVar4);
      iVar8 = func_0x0001401a7910(iVar8);
      *param_1 = iVar5;
      param_1[1] = iVar7;
      param_1[2] = iVar8 - iVar7;
    }
    else {
      *param_1 = 0;
    }
  }
  return;
}

