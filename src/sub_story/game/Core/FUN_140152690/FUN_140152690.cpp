// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140152690  size: 40 bytes
// Name:    FUN_140152690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e510e0, FUN_14501d710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140152690(undefined8 *param_1)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  FUN_14501d710(param_1,0);
  FUN_144e510e0(param_1 + 0x56);
  *param_1 = &UNK_146535450;
  LOCK();
  *(undefined2 *)((longlong)param_1 + 0x172) = 0;
  UNLOCK();
  *(undefined2 *)(param_1 + 0x2e) = 0x10;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  if (param_1[0x2a] != 0) {
    func_0x000144d9c130(param_1[0x2a]);
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  if (param_1[0x27] != 0) {
    func_0x000144d9c130(param_1[0x27]);
  }
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x25] != 0) {
    func_0x000144d9c130(param_1[0x25]);
  }
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  piVar2 = (int *)param_1[6];
  iVar4 = *(int *)((longlong)param_1 + 0x2c);
  piVar5 = piVar2;
  while (iVar4 != 0) {
    if (*piVar5 != 0) {
      *piVar5 = 0;
      iVar4 = *(int *)((longlong)param_1 + 0x2c) + -1;
      *(int *)((longlong)param_1 + 0x2c) = iVar4;
    }
    piVar5 = piVar5 + 4;
  }
  if (piVar2 != (int *)0x0) {
    func_0x000144d9c130(piVar2);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  lVar3 = param_1[4];
  uVar1 = *(uint *)((longlong)param_1 + 0x1c);
  if ((ulonglong)uVar1 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(lVar3 + lVar6) = 3;
      lVar6 = lVar6 + 0x18;
    } while ((ulonglong)uVar1 * 0x18 != lVar6);
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if (lVar3 != 0) {
    func_0x000144d9c130(lVar3);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  return;
}

