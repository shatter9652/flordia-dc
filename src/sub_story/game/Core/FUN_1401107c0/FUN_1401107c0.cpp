// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401107c0  size: 185 bytes
// Name:    FUN_1401107c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f135a0, FUN_141f8b8d0, FUN_144f135d0, FUN_144f13680
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401107c0(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  ushort uVar6;
  int *piVar7;
  
  piVar3 = (int *)*param_1;
  iVar1 = *piVar3;
  cVar4 = func_0x000144ee8680(iVar1);
  iVar2 = piVar3[1];
  uVar6 = (ushort)(byte)((uint)iVar2 >> 0x18) | (ushort)((uint)iVar2 >> 8) & 0xff00;
  if (cVar4 != '\0') {
    uVar6 = (ushort)iVar2;
  }
  if ((uVar6 == 1) && ((iVar1 == 0x41444154 || (iVar1 == 0x54414441)))) {
    cVar4 = FUN_144f13680(iVar1,iVar2);
    if (cVar4 == '\0') {
      piVar7 = piVar3 + 4;
    }
    else {
      piVar7 = piVar3 + 5;
      *(int *)(param_1 + 4) = piVar3[4];
    }
    cVar4 = FUN_144f135a0(iVar1,iVar2);
    if (cVar4 != '\0') {
      param_1[1] = piVar7;
      uVar5 = FUN_144f135d0(piVar3);
      piVar7 = (int *)((longlong)piVar7 + (ulonglong)uVar5 * 2);
    }
    cVar4 = FUN_141f8b8d0(iVar1,iVar2);
    if (cVar4 != '\0') {
      *(int *)((longlong)param_1 + 0x24) = *piVar7;
      param_1[3] = piVar7 + 1;
      uVar5 = FUN_144f135d0(piVar3);
      piVar7 = piVar7 + (ulonglong)uVar5 + 1;
    }
    param_1[2] = piVar7;
  }
  else {
    *param_1 = 0;
  }
  return;
}

