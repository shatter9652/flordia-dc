// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400136a0  size: 233 bytes
// Name:    FUN_1400136a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453b56b0, FUN_14504ead0, FUN_144fb2170, FUN_144e4cfa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400136a0(longlong param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  
  *(uint *)(param_1 + 0x648) = ~*(uint *)(param_1 + 0x648) & 1;
  lVar1 = (longlong)param_2 + (ulonglong)((~*param_2 & 1) * 0x30) + 8;
  FUN_1453b56b0(lVar1,param_1 + 0x18);
  FUN_144fb2170(param_1 + 0x650 + (ulonglong)*(uint *)(param_1 + 0x648) * 0x30,param_3);
  FUN_14504ead0(param_1 + 0x650 + (ulonglong)*(uint *)(param_1 + 0x648) * 0x30,lVar1);
  FUN_144e4cfa0(param_1 + 0x650 + (ulonglong)*(uint *)(param_1 + 0x648) * 0x30);
  func_0x0001455cfba0(param_1 + 0x18,
                      *(undefined8 *)
                       (param_1 + 0x660 + (ulonglong)*(uint *)(param_1 + 0x648) * 0x30));
  puVar2 = (undefined8 *)((longlong)param_4 + (ulonglong)((~*param_4 & 1) * 0x30) + 8);
  FUN_144da2e30(param_1 + 0x6b0,*(undefined2 *)((longlong)puVar2 + 0x26));
  if ((ulonglong)*(ushort *)((longlong)puVar2 + 0x26) != 0) {
    func_0x000145f40560(((ulonglong)*(ushort *)(param_1 + 0x6d8) + *(longlong *)(param_1 + 0x6b8)) -
                        (ulonglong)*(ushort *)(param_1 + 0x6d6),
                        ((ulonglong)*(ushort *)(puVar2 + 5) + puVar2[1]) -
                        (ulonglong)*(ushort *)((longlong)puVar2 + 0x26));
  }
  *(short *)(param_1 + 0x6d4) = *(short *)(param_1 + 0x6d4) + *(short *)((longlong)puVar2 + 0x24);
  *(ulonglong *)(param_1 + 0x6c8) = *(ulonglong *)(param_1 + 0x6c8) | puVar2[3];
  *(uint *)(param_1 + 0x6d0) = *(uint *)(param_1 + 0x6d0) | *(uint *)(puVar2 + 4);
  uVar3 = *(ushort *)(param_1 + 0x6da);
  uVar4 = *(ushort *)((longlong)puVar2 + 0x2a) & 0x1000;
  *(ushort *)(param_1 + 0x6da) = uVar4 | uVar3;
  uVar6 = (*(ushort *)((longlong)puVar2 + 0x2a) | uVar3) & 0x2000;
  *(ushort *)(param_1 + 0x6da) = uVar4 | uVar3 & 0xdfff | uVar6;
  *(ushort *)(param_1 + 0x6da) =
       uVar4 | uVar3 & 0x5fff | uVar6 | (*(ushort *)((longlong)puVar2 + 0x2a) | uVar3) & 0x8000;
  uVar5 = (*(longlong *)(param_1 + 0x6c0) + 0x651e95c4d06fbfb1U ^ puVar2[2]) * -0x622015f714c7d297;
  uVar5 = (uVar5 >> 0x2f ^ puVar2[2] ^ uVar5) * -0x622015f714c7d297;
  *(ulonglong *)(param_1 + 0x6c0) = (uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
  FUN_144dd1c20(*puVar2);
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  *puVar2 = 0;
  puVar2[4] = 0;
  *(undefined1 (*) [16])(puVar2 + 2) = auVar7;
  *(byte *)((longlong)puVar2 + 0x2b) = *(byte *)((longlong)puVar2 + 0x2b) & 0xcf;
  return;
}

