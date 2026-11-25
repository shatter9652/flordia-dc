// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401218b0  size: 959 bytes
// Name:    FUN_1401218b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e51990, FUN_144dbce00, FUN_140037a50, FUN_140056cb0, FUN_1428e2610, FUN_140a9eb60, FUN_140056a20, FUN_141cf43e0, FUN_1428fc310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401218b0(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  float fStack_68;
  int iStack_64;
  undefined8 uStack_60;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (param_4 - 5U < 0xfffffffd) {
    return;
  }
  if (param_2[1] == 0) {
    return;
  }
  if (_DAT_147b97378 == 0) {
    return;
  }
  cVar4 = func_0x000144eec1e0(_DAT_147b973e8);
  if (cVar4 == '\0') {
    return;
  }
  iVar5 = func_0x0001428ede40(*param_2);
  iVar1 = *(int *)(param_2 + 3);
  fVar11 = (float)(_DAT_14615a740 / (double)(iVar5 - 1));
  uVar6 = FUN_141cf43e0(0x147b97380,0x29304e07);
  if (param_4 == 3) {
    uVar8 = 0x3131e5e4;
  }
  else {
    if (param_4 != 4) goto LAB_14012197a;
    uVar8 = 0x6655b272;
  }
  uVar6 = FUN_141cf43e0(0x147b97380,uVar8);
LAB_14012197a:
  uStack_60 = *(undefined8 *)((longlong)param_2 + 0x1c);
  fStack_68 = fVar11;
  iStack_64 = iVar5;
  func_0x0001452d22e0(param_1,0x10);
  FUN_140a9eb60(0x147b97380,param_1,0xe6fa3957,&fStack_68,0x10);
  lVar10 = param_2[1];
  if ((lVar10 != 0) &&
     (lVar2 = *(longlong *)(lVar10 + 8), (ushort)(*(short *)(lVar2 + 0x12) - 1U) < _DAT_14a943ab8))
  {
    uStack_6c = *(undefined2 *)(lVar10 + 0x16);
    uStack_70 = *(undefined4 *)(lVar10 + 0x12);
    *(undefined1 *)(param_1 + 0x121a4) = 1;
    FUN_144dbce00(param_1,1,lVar2,&uStack_70,0x105);
    lVar10 = param_2[1];
  }
  FUN_1428fc310(0x147b97380,param_1,0x5609167f,lVar10);
  uVar7 = FUN_1428e2610(0x147b97380,0x1eabb23d);
  if ((short)uVar7 != 0) {
    uVar8 = FUN_144e51990(param_1,uVar7,param_3,param_4 << 5,0x20,0);
    func_0x000144d9dcb0(param_1,uVar7,uVar8);
    *(undefined2 *)(param_1 + 0x6200 + (ulonglong)((uVar7 & 0xffff) >> 2) * 2) = 0;
  }
  lVar2 = _DAT_147b97378;
  lVar10 = *(longlong *)(_DAT_147b97378 + 0xc70) +
           (ulonglong)
           ((*(uint *)(*(longlong *)(_DAT_147b97378 + 0xc68) + ((ulonglong)uVar6 & 0xff) * 4) >> 0xf
            & 0x1ff) + (uint)(iVar1 != 0)) * 0x18;
  *(longlong *)(param_1 + 0x12298) = lVar10;
  lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0xc60) + (ulonglong)*(byte *)(lVar10 + 5) * 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != lVar10) {
    uVar9 = 0x700002f0ff;
    if ((lVar10 != 0) && (lVar2 != 0)) {
      if ((*(longlong **)(lVar2 + 0xe8) == (longlong *)0x0) ||
         (((*(longlong **)(lVar10 + 0xe8) == (longlong *)0x0 ||
           (**(longlong **)(lVar2 + 0xe8) != **(longlong **)(lVar10 + 0xe8))) ||
          (*(char *)(lVar10 + 0x108) != *(char *)(lVar2 + 0x108))))) {
        uVar9 = 0x1011;
      }
      else {
        uVar9 = 0;
      }
      if (((*(longlong **)(lVar2 + 0xf0) == (longlong *)0x0) ||
          (*(longlong **)(lVar10 + 0xf0) == (longlong *)0x0)) ||
         ((**(longlong **)(lVar2 + 0xf0) != **(longlong **)(lVar10 + 0xf0) ||
          (*(char *)(lVar10 + 0x109) != *(char *)(lVar2 + 0x109))))) {
        uVar9 = uVar9 | 0x2022;
      }
      if (((*(longlong **)(lVar2 + 0xf8) == (longlong *)0x0) ||
          (*(longlong **)(lVar10 + 0xf8) == (longlong *)0x0)) ||
         ((**(longlong **)(lVar2 + 0xf8) != **(longlong **)(lVar10 + 0xf8) ||
          (*(char *)(lVar10 + 0x10a) != *(char *)(lVar2 + 0x10a))))) {
        uVar9 = uVar9 | 0x4044;
      }
      if ((((*(longlong **)(lVar2 + 0x100) == (longlong *)0x0) ||
           (*(longlong **)(lVar10 + 0x100) == (longlong *)0x0)) ||
          (**(longlong **)(lVar2 + 0x100) != **(longlong **)(lVar10 + 0x100))) ||
         (*(char *)(lVar10 + 0x10b) != *(char *)(lVar2 + 0x10b))) {
        uVar9 = uVar9 | 0x8088;
      }
      uVar9 = uVar9 | 0x20000;
    }
    *(longlong *)(param_1 + 0x10) = lVar10;
    *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | uVar9;
  }
  *(undefined1 *)(param_1 + 0x121a4) = 1;
  FUN_140056a20(param_1,iVar5 + 0x7fU >> 7,1,1);
  if (((**(uint **)(param_1 + 0x12198) & 0xc000000) == 0) &&
     (cVar4 = func_0x000144e88f60(param_1), cVar4 != '\0')) {
    puVar3 = *(uint **)(param_1 + 0x12198);
    while ((*puVar3 & 0xe000000) != 0x2000000) {
      FUN_140037a50(puVar3,0,1);
    }
    FUN_140056cb0(param_1);
  }
  func_0x000144fa7ab0(param_1);
  return;
}

