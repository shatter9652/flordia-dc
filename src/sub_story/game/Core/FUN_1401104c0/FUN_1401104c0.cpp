// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401104c0  size: 623 bytes
// Name:    FUN_1401104c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_144f13310, FUN_1401107c0, FUN_140110790, FUN_140110770, FUN_144f13260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401104c0(longlong *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [4];
  
  if (param_1[0x18] == 0) {
    uVar10 = 0;
    goto LAB_14011070d;
  }
  FUN_140004b40(0x149ab3cf8);
  lVar8 = param_1[1];
  lVar7 = *(longlong *)(param_1[0x18] + 0xa0);
  *(longlong *)(lVar8 + 0x30) = lVar7;
  if (lVar7 == 0) {
LAB_140110720:
    uVar10 = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar8 + 0x30);
    FUN_1401107c0(puVar1);
    puVar3 = (undefined4 *)*puVar1;
    if (puVar3 == (undefined4 *)0x0) goto LAB_140110720;
    uVar5 = *puVar3;
    cVar4 = func_0x000144ee8680(uVar5);
    if (cVar4 == '\0') goto LAB_140110720;
    uVar5 = FUN_140110770(uVar5,puVar3[3]);
    *(undefined4 *)(lVar8 + 0x58) = uVar5;
    *(undefined4 *)(lVar8 + 0x5c) = uVar5;
    uVar5 = FUN_140110790(puVar3,*(undefined8 *)(lVar8 + 0x40));
    uVar6 = FUN_144f13310(puVar1,uVar5,0x81f95048);
    FUN_144f13260(puVar1,uVar5,uVar6,&uStack_48,&uStack_4c,&uStack_50);
    *(undefined4 *)(lVar8 + 0x68) = *(undefined4 *)(lVar8 + 0x24);
    lVar7 = (**(code **)(*param_1 + 0x18))(param_1,uStack_4c,uStack_50,uStack_48);
    param_1[0x1a] = lVar7;
    if ((0x20 < *(uint *)(lVar7 + 8)) || (*(uint *)(param_1 + 0x10b) < *(uint *)(lVar7 + 4)))
    goto LAB_140110720;
    *(uint *)(lVar8 + 0x68) = *(uint *)(lVar7 + 4) * 2 + *(int *)(lVar8 + 0x58);
    uVar6 = FUN_144f13310(puVar1,uVar5,0x21e86a3);
    FUN_144f13260(puVar1,uVar5,uVar6,&uStack_48,&uStack_4c,&uStack_50);
    lVar8 = (**(code **)(*param_1 + 0x18))(param_1,uStack_4c,uStack_50,uStack_48);
    param_1[0x1b] = lVar8;
    uVar6 = FUN_144f13310(puVar1,uVar5,0x5eb5e655);
    FUN_144f13260(puVar1,uVar5,uVar6,&uStack_48,(longlong)param_1 + 0x854,auStack_44);
    lVar8 = param_1[0x1a];
    if (*(int *)(lVar8 + 8) != 0) {
      puVar9 = (undefined2 *)(lVar8 + 0x1a);
      uVar11 = 0;
      do {
        lVar7 = (longlong)(int)uVar11;
        lVar12 = lVar7 * 0x20;
        *(undefined1 *)((longlong)param_1 + lVar12 + 0xfc) = *(undefined1 *)(puVar9 + -1);
        *(undefined4 *)(param_1 + lVar7 * 4 + 0x1c) = *(undefined4 *)(puVar9 + -5);
        *(undefined2 *)(param_1 + lVar7 * 4 + 0x1d) = puVar9[-2];
        *(undefined2 *)((longlong)param_1 + lVar12 + 0xea) = puVar9[-3];
        *(undefined2 *)((longlong)param_1 + lVar12 + 0xf6) = *puVar9;
        *(undefined2 *)((longlong)param_1 + lVar12 + 0xfa) = 0xcb58;
        bVar2 = *(byte *)((longlong)puVar9 + -1);
        *(byte *)((longlong)param_1 + lVar12 + 0xfd) = bVar2;
        if ((bVar2 & 0xef) == 0) {
          *(undefined1 *)((longlong)param_1 + lVar12 + 0xfd) = 1;
        }
        *(undefined2 *)(param_1 + lVar7 * 4 + 0x1f) = 0;
        *(undefined2 *)(param_1 + lVar7 * 4 + 0x1e) = 0;
        *(undefined4 *)((longlong)param_1 + lVar12 + 0xec) = 0;
        *(undefined4 *)((longlong)param_1 + lVar12 + 0xe4) = 0xffffffff;
        uVar11 = uVar11 + 1;
        puVar9 = puVar9 + 8;
      } while (uVar11 < *(uint *)(lVar8 + 8));
    }
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_1[0x18] + 4);
    uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  func_0x000144d9dab0(0x149ab3cf8);
LAB_14011070d:
  return uVar10 & 0xffffffff;
}

