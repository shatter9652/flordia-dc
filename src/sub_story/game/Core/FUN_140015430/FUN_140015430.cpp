// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140015430  size: 182 bytes
// Name:    FUN_140015430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14000ed20, FUN_144e28fc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140015430(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  
  if ((*(byte *)(param_1 + 3) & 2) == 0) {
LAB_140015490:
    uVar3 = 0;
  }
  else {
    lVar1 = func_0x000144dc9f90(*param_1);
    bVar4 = *(int *)((longlong)param_1 + 0x1c) != 0;
    bVar5 = *(short *)(lVar1 + 0x2a) < 0;
    if (param_3 == 0) {
      if (bVar5 && (*(int *)(param_1 + 4) != 0 && bVar4)) goto LAB_1400154ad;
LAB_140015481:
      lVar2 = FUN_144e28fc0(lVar1,param_2,0xf);
      if (lVar2 == 0) goto LAB_140015490;
    }
    else {
      if (param_3 == 1) {
        if (!bVar5 || (*(int *)(param_1 + 4) == 0 || !bVar4)) goto LAB_140015490;
      }
      else if (param_3 == 2) goto LAB_140015481;
LAB_1400154ad:
      lVar2 = FUN_14000ed20(lVar1,param_2,0xf);
      if (lVar2 == 0) goto LAB_140015481;
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    *param_4 = uVar3;
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar3;
}

