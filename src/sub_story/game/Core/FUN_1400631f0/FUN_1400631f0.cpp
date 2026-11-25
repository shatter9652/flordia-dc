// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400631f0  size: 257 bytes
// Name:    FUN_1400631f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6fa0, FUN_1456a37c0, FUN_145647140, FUN_144e49120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400631f0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined8 auStack_70 [4];
  undefined8 uStack_50;
  undefined1 *puStack_48;
  uint uStack_40;
  
  cVar1 = *(char *)(param_1 + 0x80);
  uVar8 = (uint)cVar1;
  lVar2 = *(longlong *)(param_2 + 0x10);
  uStack_50 = 0x140063229;
  lVar5 = FUN_145647140();
  lVar5 = -lVar5;
  if (uVar8 == 2) {
    *(undefined8 *)((longlong)&puStack_48 + lVar5) = 0;
  }
  else {
    *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x1400632df;
    func_0x000145f40580((longlong)&puStack_48 + lVar5,0,(longlong)(int)uVar8 * 4);
    puVar7 = (undefined1 *)((longlong)&puStack_48 + lVar5);
    if (cVar1 < '\x01') goto LAB_140063260;
  }
  puVar7 = (undefined1 *)((longlong)&puStack_48 + lVar5);
  uVar6 = 0;
  do {
    if (*(longlong *)(param_1 + 0x40 + uVar6 * 8) == lVar2) {
      *(undefined4 *)((longlong)&puStack_48 + (uVar6 & 0xffffffff) * 4 + lVar5) = 0x3f800000;
      puVar7 = (undefined1 *)((longlong)&puStack_48 + lVar5);
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar8 != uVar6);
LAB_140063260:
  puStack_48 = (undefined1 *)((longlong)&puStack_48 + lVar5);
  uStack_40 = uVar8;
  *(undefined8 *)(puVar7 + -0x28) = 0x14006327a;
  lVar5 = FUN_144e49120(param_1,&puStack_48,0);
  if (lVar5 != lVar2) {
    *(undefined8 *)(puVar7 + -0x28) = 0x1400632c3;
    FUN_1456a37c0(lVar2,lVar5);
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar7 + -0x28) = 0x140063297;
  FUN_144da6fa0(uVar4,uVar3,1);
  *(undefined1 *)(param_2 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}

