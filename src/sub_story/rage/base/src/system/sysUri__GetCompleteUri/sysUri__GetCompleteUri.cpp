// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141de8eb0  size: 338 bytes
// Name:    sysUri::GetCompleteUri
// Subsystem: core
// Class:   sysUri
//
// Evidence:
//   GTAVSRC: sysUri::GetCompleteUri  (rage/base/src/system/uri.cpp)
//   literal: %s://%s%s%s%s
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452d5b70, FUN_145534890, FUN_144fcb2d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/sysUri.h"


undefined * sysUri__GetCompleteUri(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  
  puVar9 = *(undefined **)(param_1 + 0x1d68);
  if (puVar9 == (undefined *)0x0) {
    iVar8 = *(int *)(param_1 + 0x18e0);
    puVar9 = &UNK_14677e466;
    auStack_88 = ZEXT1232(ZEXT812(0));
    if (iVar8 == 1) {
      puVar9 = &UNK_14677b8f0;
    }
    auStack_68 = auStack_88;
    if (*(short *)(param_1 + 0x1964) != 0) {
      FUN_145534890(auStack_88,&UNK_146785412);
    }
    iVar1 = func_0x000145f407f0(param_1 + 0x18e4);
    iVar2 = func_0x000145f407f0(auStack_88);
    iVar3 = func_0x000145f407f0(param_1 + 0x1966);
    iVar4 = func_0x000144db6ef0(*(undefined4 *)(param_1 + 0x1d8c));
    iVar8 = iVar4 + 9 + iVar2 + iVar1 + iVar3 + (uint)(iVar8 == 1);
    lVar5 = func_0x000141191590(*(undefined8 *)(param_1 + 0x1e10),iVar8);
    *(longlong *)(param_1 + 0x1d68) = lVar5;
    if (lVar5 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      uVar6 = FUN_1452d5b70(*(undefined8 *)(param_1 + 0x1d70),*(undefined4 *)(param_1 + 0x1d8c));
      FUN_144fcb2d0(lVar5,iVar8,&UNK_14677c9f0,puVar9,param_1 + 0x18e4,auStack_88,param_1 + 0x1966,
                    uVar6);
      puVar9 = *(undefined **)(param_1 + 0x1d68);
    }
  }
  puVar7 = &UNK_14678d1bb;
  if (puVar9 != (undefined *)0x0) {
    puVar7 = puVar9;
  }
  return puVar7;
}

