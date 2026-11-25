// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077fc0  size: 350 bytes
// Name:    FUN_140077fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140077fc0(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  undefined4 uStack_3c;
  
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x100000000;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  uVar3 = *(uint *)(param_1 + 0x10 + (longlong)param_3 * 0x30);
  if (*(uint *)(lVar5 + 4) <= uVar3) {
    *(undefined4 *)(param_1 + 0x10 + (longlong)param_3 * 0x30) = 0;
    uVar3 = 0;
  }
  uVar7 = (ulonglong)uVar3;
  uVar12 = *(uint *)(*(longlong *)(lVar5 + 8) + uVar7 * 0x14);
  iVar11 = *(int *)(*(longlong *)(lVar5 + 8) + (ulonglong)(uVar3 + 1) * 0x14);
  cVar10 = *(char *)(*(longlong *)(lVar5 + 0x30) + 0x1c);
  if (cVar10 == '\v') {
    uStack_3c = 0;
    lVar5 = func_0x000145594640(lVar5 + 0x50,&uStack_3c);
    param_2[1] = lVar5;
    *(undefined4 *)((longlong)param_2 + 0x24) = uStack_3c;
    lVar5 = *(longlong *)(param_1 + 0xd0);
    cVar10 = *(char *)(*(longlong *)(lVar5 + 0x30) + 0x1c);
LAB_140078095:
    uVar3 = *(uint *)(lVar5 + 0x58);
    uVar9 = iVar11 + 0x200;
    uVar6 = 0;
    lVar8 = 0;
    if (cVar10 != '\x05') goto LAB_1400780bd;
  }
  else {
    if (cVar10 != '\x05') goto LAB_140078095;
    iVar4 = func_0x000144ee89c0(5);
    uVar3 = *(uint *)(lVar5 + 0x58);
    uVar9 = iVar11 + 0x380;
    uVar12 = (uVar12 - iVar4) + 0x180;
  }
  uVar6 = *(uint *)(*(longlong *)(lVar5 + 8) + 8 + uVar7 * 0x14);
  lVar8 = (ulonglong)*(ushort *)(*(longlong *)(lVar5 + 8) + 0xc + uVar7 * 0x14) << 0xb;
LAB_1400780bd:
  if (uVar3 <= uVar9) {
    uVar9 = uVar3 - 1;
  }
  uVar2 = uVar3 - 1;
  if (uVar12 < uVar3) {
    uVar2 = uVar12;
  }
  lVar1 = *(longlong *)(lVar5 + 0x38);
  iVar11 = uVar2 - uVar6;
  if (uVar2 < uVar6) {
    iVar11 = 0;
  }
  iVar4 = uVar9 - uVar6;
  if (uVar9 < uVar6) {
    iVar4 = 0;
  }
  *(int *)((longlong)param_2 + 0x14) = iVar11;
  *(int *)(param_2 + 3) = iVar4;
  *(int *)(param_2 + 2) = *(int *)(lVar5 + 0x5c) - (int)lVar8;
  *param_2 = lVar8 + lVar1;
  *(int *)(param_2 + 5) = (int)*(short *)(lVar5 + 0x50);
  return;
}

