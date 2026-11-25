// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400633b0  size: 279 bytes
// Name:    FUN_1400633b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6fa0, FUN_1456a37c0, FUN_144e49380, FUN_145647140, FUN_1400634d0, FUN_144e49120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400633b0(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 auStack_70 [4];
  undefined8 uStack_50;
  undefined1 *apuStack_48 [2];
  int iStack_38;
  
  bVar1 = *(byte *)(param_1 + 0x80);
  uVar5 = (uint)bVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar7 = (longlong)(char)bVar1;
  uStack_50 = 0x1400633e7;
  lVar3 = FUN_145647140(bVar1,param_2,lVar7);
  lVar3 = -lVar3;
  puVar6 = (undefined1 *)((longlong)apuStack_48 + lVar3);
  if (uVar5 == 2) {
    *(undefined8 *)((longlong)apuStack_48 + lVar3) = 0;
    puVar6 = (undefined1 *)((longlong)apuStack_48 + lVar3);
  }
  else if (uVar5 == 1) {
    *(undefined4 *)((longlong)apuStack_48 + lVar3) = 0;
  }
  else {
    *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x1400634be;
    func_0x000145f40580((longlong)apuStack_48 + lVar3,0,lVar7 << 2);
    puVar6 = (undefined1 *)((longlong)apuStack_48 + lVar3);
  }
  apuStack_48[1] = (undefined1 *)((longlong)apuStack_48 + lVar3);
  iStack_38 = (int)(char)uVar5;
  *(undefined8 *)(puVar6 + -0x28) = 0x14006341b;
  uVar4 = FUN_144e49120(param_1,apuStack_48 + 1,0);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if ((*(ushort *)(lVar3 + 0x34) & 0x7fff) != 0) {
    *(undefined8 *)(puVar6 + -0x28) = 0x14006344c;
    FUN_144e49380(uVar4,lVar3 + 0x20,_DAT_145fc6ed8,0);
  }
  *(undefined8 *)(puVar6 + -0x28) = 0x14006345c;
  FUN_1400634d0(uVar2);
  *(undefined8 *)(puVar6 + -0x28) = 0x140063467;
  FUN_1456a37c0(uVar2,uVar4);
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(puVar6 + -0x28) = 0x14006347f;
  FUN_144da6fa0(uVar4,uVar2,1);
  *(undefined1 *)(param_2 + 0x18) = 1;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}

