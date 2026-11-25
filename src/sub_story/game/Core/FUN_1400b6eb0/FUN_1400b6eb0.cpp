// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6eb0  size: 354 bytes
// Name:    FUN_1400b6eb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145214fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b6eb0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  
  func_0x000145214ea0(auStack_d8);
  func_0x000145f40560(param_1,auStack_d8,0x90);
  func_0x000144fb0750(uStack_90);
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)*(ushort *)(param_2 + 0x180);
  }
  *(uint *)(param_1 + 1) = uVar5;
  *param_1 = param_2;
  uVar5 = func_0x000145214ee0(param_4,param_1 + 10);
  *(uint *)(param_1 + 8) = uVar5;
  bVar1 = *(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 0x11) = bVar1 & 0xfe;
  lVar7 = (ulonglong)uVar5 * 0x14;
  lVar6 = func_0x000144f97130(lVar7);
  lVar3 = lVar6;
  lVar4 = lVar6;
  if (uVar5 != 0) {
    while (lVar4 != 0) {
      func_0x000145214e80(lVar3);
      lVar7 = lVar7 + -0x14;
      lVar3 = lVar3 + 0x14;
      lVar4 = lVar7;
    }
  }
  param_1[9] = lVar6;
  FUN_145214fd0(param_4,lVar6,(ulonglong)uVar5);
  if (param_3 != 0) {
    lVar7 = *(longlong *)(param_3 + 0x38);
    param_1[2] = *(longlong *)(param_3 + 0x30);
    param_1[3] = lVar7;
    lVar7 = *(longlong *)(param_3 + 0x48);
    param_1[4] = *(longlong *)(param_3 + 0x40);
    param_1[5] = lVar7;
    lVar7 = *(longlong *)(param_3 + 0x28);
    param_1[6] = *(longlong *)(param_3 + 0x20);
    param_1[7] = lVar7;
  }
  if ((param_2 == 0) || (plVar2 = *(longlong **)(param_2 + 0x198), plVar2 == (longlong *)0x0)) {
    lVar7 = 0;
    param_1[0xd] = 0;
  }
  else {
    param_1[0xd] = *plVar2;
    lVar7 = plVar2[2];
  }
  param_1[0xe] = lVar7;
  *(byte *)(param_1 + 0x11) =
       bVar1 & 0xf6 | (*(byte *)(*(longlong *)(param_4 + 0x10) + 0x30) & 1) << 3;
  func_0x000144f14870(param_1);
  return;
}

