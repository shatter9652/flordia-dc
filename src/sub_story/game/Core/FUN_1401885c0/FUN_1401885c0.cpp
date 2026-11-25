// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401885c0  size: 528 bytes
// Name:    FUN_1401885c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f25f0, FUN_144dd5ae0, FUN_1401887d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401885c0(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong unaff_R14;
  longlong lVar9;
  undefined1 auVar10 [64];
  longlong alStack_40 [3];
  
  cVar2 = *(char *)((longlong)param_1 + 0x5f4);
  if (cVar2 == '\x01') {
    QueryPerformanceCounter(alStack_40);
    unaff_R14 = alStack_40[0];
  }
  uVar3 = *(uint *)((longlong)param_1 + 0x1c4);
  if ((ulonglong)uVar3 != 0) {
    lVar9 = 0;
    do {
      FUN_1401887d0(*(undefined8 *)((longlong)param_1 + lVar9 + 0x1c8));
      lVar9 = lVar9 + 8;
    } while ((ulonglong)uVar3 << 3 != lVar9);
  }
  plVar1 = param_1 + 0xbd;
  if (cVar2 != '\0') {
    QueryPerformanceCounter(alStack_40);
    LOCK();
    *plVar1 = *plVar1 + (alStack_40[0] - unaff_R14);
    UNLOCK();
  }
  func_0x000144eb7710(plVar1);
  if (*(byte *)(param_1 + 0xc1) != 0) {
    uVar7 = 0;
    auVar10 = ZEXT464((uint)(*(float *)(param_1 + 0xbe) / (float)*(byte *)(param_1 + 0xc1)));
    do {
      func_0x000145040430(param_1[uVar7 + 0x39],auVar10._0_8_);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(param_1 + 0xc1));
  }
  FUN_1400f25f0(param_1 + 0x89);
  piVar4 = (int *)param_1[0x8c];
  iVar5 = *(int *)((longlong)param_1 + 0x45c);
  piVar6 = piVar4;
  while (iVar5 != 0) {
    if (*piVar6 != 0) {
      *piVar6 = 0;
      iVar5 = *(int *)((longlong)param_1 + 0x45c) + -1;
      *(int *)((longlong)param_1 + 0x45c) = iVar5;
    }
    piVar6 = piVar6 + 0xc;
  }
  if (((int *)(param_1 + 0x8d) != piVar4) && (piVar4 != (int *)0x0)) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x8b) = 8;
  param_1[0x8c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  if ((param_1 + 0x48 != (undefined8 *)param_1[0x47]) &&
     ((undefined8 *)param_1[0x47] != (undefined8 *)0x0)) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x46) = 0x80;
  param_1[0x47] = 0;
  param_1[0x3f] = 6;
  param_1[0x38] = 6;
  param_1[0x31] = 6;
  if ((ulonglong)*(uint *)((longlong)param_1 + 4) != 0) {
    lVar9 = (ulonglong)*(uint *)((longlong)param_1 + 4) << 6;
    puVar8 = param_1 + 1;
    do {
      func_0x000144e3f340(puVar8);
      puVar8 = puVar8 + 8;
      lVar9 = lVar9 + -0x40;
    } while (lVar9 != 0);
  }
  *param_1 = 6;
  FUN_144dd5ae0(param_1[0xbf]);
  FUN_144dd5ae0(param_1[0xc0]);
  FUN_144dd5ae0(param_1);
  return;
}

