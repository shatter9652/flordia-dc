// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012ac40  size: 431 bytes
// Name:    FUN_14012ac40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143628f80, FUN_14012adf0, FUN_144fdb460, FUN_1405e34b0, FUN_14012ae30, FUN_1450bc1b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012ac40(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar7 = func_0x000144da6540(*(undefined4 *)(lVar3 + 0x9c));
  if (lVar7 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar7 + 0x10c8);
  }
  *(undefined1 *)(param_1 + 0x1699) = param_2;
  FUN_14012ae30(param_1 + 0x10,lVar7 + 0xe10);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(lVar7 + 0xf30);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(lVar7 + 0xf38);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(lVar7 + 0xf40);
  *(undefined1 *)(param_1 + 0x141) = *(undefined1 *)(lVar7 + 0xf41);
  lVar8 = FUN_14012adf0(lVar7,0);
  if (lVar8 == 0) {
    FUN_144fdb460(param_1 + 0x390);
  }
  else {
    FUN_14012ae30(param_1 + 0x390,lVar8);
  }
  FUN_14012ae30(param_1 + 0x270,lVar7 + 0xf60);
  FUN_14012ae30(param_1 + 0x150,lVar7 + 0x1490);
  FUN_1450bc1b0(param_1 + 0x4b0,*(undefined8 *)(lVar7 + 0x16d0));
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(lVar7 + 0x1700);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(lVar7 + 0x16d8);
  *(undefined1 *)(param_1 + 0x4c8) = *(undefined1 *)(lVar7 + 0xf51);
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar9 = (ulonglong)uVar1 & 0x1ffff;
  if ((((uVar9 != 0x1ffff) &&
       (plVar4 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar4 != (longlong *)0x0)) &&
      (uVar2 = *(uint *)(plVar4[5] + uVar9 * 4), (uVar2 >> 0x11 & 0x3ff) == uVar1 >> 0x16)) &&
     ((((uVar2 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6) && (*plVar4 != 0)) &&
      (lVar7 = *plVar4 + (ulonglong)(uint)((int)uVar9 * (int)plVar4[1]),
      *(char *)(lVar7 + 0x30) == '\x03')))) {
    *(undefined1 *)(param_1 + 0x4c9) = 0;
    cVar5 = FUN_1405e34b0(lVar3,lVar7);
    if (cVar5 == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_143628f80(lVar7);
    }
    *(undefined1 *)(param_1 + 0x4c9) = uVar6;
    return;
  }
  *(undefined1 *)(param_1 + 0x4c9) = 0;
  return;
}

