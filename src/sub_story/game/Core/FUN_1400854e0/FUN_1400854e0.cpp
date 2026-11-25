// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400854e0  size: 327 bytes
// Name:    FUN_1400854e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140067a10, FUN_1451c6b60, FUN_145588f80, FUN_143bb91b0, FUN_144ff6bb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400854e0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  
  FUN_144ff6bb0();
  lVar7 = *param_2;
  if (lVar7 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 2);
  if (((ulonglong)uVar1 & 0x1ffff) != 0x1ffff) {
    plVar4 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    uVar2 = *(uint *)(plVar4[5] + ((ulonglong)uVar1 & 0x1ffff) * 4);
    if ((uVar2 >> 0x11 & 0x3ff) != uVar1 >> 0x16) {
      return;
    }
    if ((uVar2 & *(uint *)(plVar4 + 6)) != *(uint *)(plVar4 + 6)) {
      return;
    }
    if (*plVar4 == 0) {
      return;
    }
  }
  cVar5 = func_0x000144eae7d0();
  if (cVar5 == '\0') {
    FUN_145588f80(param_1,param_2);
  }
  else {
    uVar3 = *(undefined4 *)(lVar7 + 8);
    lVar7 = FUN_140067a10(*(undefined8 *)(_DAT_149975a58 + 8),uVar3);
    if (lVar7 == 0) {
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    plVar4 = (longlong *)*param_2;
    cVar5 = FUN_1451c6b60(plVar4,(int)param_2[2]);
    if (cVar5 == '\0') {
      *(undefined2 *)(param_1 + 4) = *(undefined2 *)(lVar7 + 0x6e0);
    }
    else {
      param_1[4] = *plVar4;
    }
    param_1[2] = param_2[2];
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
  }
  cVar5 = FUN_143bb91b0();
  lVar7 = *(longlong *)(*param_2 + 0x30);
  if (cVar5 == '\0') {
    uVar6 = 1;
    if (lVar7 == 0x28882fea) goto LAB_140085610;
  }
  else {
    uVar6 = 1;
    if ((lVar7 == 0x28882fea) || (lVar7 == 0xbaf521aa)) goto LAB_140085610;
  }
  uVar6 = FUN_1451c6b60(*param_2,(int)param_2[2]);
LAB_140085610:
  *(undefined1 *)(param_1 + 3) = uVar6;
  return;
}

