// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003d620  size: 869 bytes
// Name:    FUN_14003d620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa46c0, FUN_144e511b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003d620(longlong param_1,uint *param_2,uint *param_3,char param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  *param_2 = 0;
  *param_3 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  cVar1 = FUN_144e511b0(uVar2,*(undefined4 *)(param_1 + 100),0,0);
  if (param_4 == '\0') {
    if (cVar1 != '\0') {
      uVar2 = func_0x00014003d9a0(uVar2,0);
      auVar10._0_12_ = ZEXT812(0);
      auVar10._12_4_ = 0;
      lVar3 = FUN_144fa46c0(_DAT_14ab7f650,uVar2,_DAT_14ab56e38,
                            *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,auVar10);
      if (lVar3 != 0) {
        *(byte *)param_2 = (byte)*param_2 | 1;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    cVar1 = FUN_144e511b0(uVar2,*(undefined4 *)(param_1 + 100),1,0);
    if (cVar1 != '\0') {
      uVar2 = func_0x00014003d9a0(uVar2,1);
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
      lVar3 = FUN_144fa46c0(_DAT_14ab7f650,uVar2,_DAT_14ab56e38,
                            *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,auVar11);
      if (lVar3 != 0) {
        *(byte *)param_2 = (byte)*param_2 | 2;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    cVar1 = FUN_144e511b0(uVar2,*(undefined4 *)(param_1 + 100),2,0);
    if (cVar1 != '\0') {
      uVar2 = func_0x00014003d9a0(uVar2,2);
      auVar12._0_12_ = ZEXT812(0);
      auVar12._12_4_ = 0;
      lVar3 = FUN_144fa46c0(_DAT_14ab7f650,uVar2,_DAT_14ab56e38,
                            *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,auVar12);
      if (lVar3 != 0) {
        *(byte *)param_2 = (byte)*param_2 | 4;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    cVar1 = FUN_144e511b0(uVar2,*(undefined4 *)(param_1 + 100),3,0);
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = func_0x00014003d9a0(uVar2,3);
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    lVar3 = FUN_144fa46c0(_DAT_14ab7f650,uVar2,_DAT_14ab56e38,
                          *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,auVar6);
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      uVar2 = func_0x00014003d9a0(uVar2,0);
      auVar7._0_12_ = ZEXT812(0);
      auVar7._12_4_ = 0;
      lVar3 = FUN_144fa46c0(_DAT_14ab7f650,uVar2,_DAT_14ab56e38,
                            *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,auVar7);
      if (lVar3 != 0) {
        puVar4 = param_3;
        if ((*(byte *)(lVar3 + 0xa4) & 1) == 0) {
          puVar4 = param_2;
        }
        *puVar4 = *puVar4 | 1;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    cVar1 = FUN_144e511b0(uVar2,*(undefined4 *)(param_1 + 100),1,0);
    if (cVar1 != '\0') {
      uVar2 = func_0x00014003d9a0(uVar2,1);
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      lVar3 = FUN_144fa46c0(_DAT_14ab7f650,uVar2,_DAT_14ab56e38,
                            *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,auVar8);
      if (lVar3 != 0) {
        puVar4 = param_3;
        if ((*(byte *)(lVar3 + 0xa4) & 1) == 0) {
          puVar4 = param_2;
        }
        *puVar4 = *puVar4 | 2;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    cVar1 = FUN_144e511b0(uVar2,*(undefined4 *)(param_1 + 100),2,0);
    if (cVar1 != '\0') {
      uVar2 = func_0x00014003d9a0(uVar2,2);
      auVar9._0_12_ = ZEXT812(0);
      auVar9._12_4_ = 0;
      lVar3 = FUN_144fa46c0(_DAT_14ab7f650,uVar2,_DAT_14ab56e38,
                            *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,auVar9);
      if (lVar3 != 0) {
        puVar4 = param_3;
        if ((*(byte *)(lVar3 + 0xa4) & 1) == 0) {
          puVar4 = param_2;
        }
        *puVar4 = *puVar4 | 4;
      }
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
    cVar1 = FUN_144e511b0(uVar2,*(undefined4 *)(param_1 + 100),3,0);
    if (cVar1 == '\0') {
      return;
    }
    uVar2 = func_0x00014003d9a0(uVar2,3);
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    lVar3 = FUN_144fa46c0(_DAT_14ab7f650,uVar2,_DAT_14ab56e38,
                          *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,auVar5);
    if (lVar3 == 0) {
      return;
    }
    if ((*(byte *)(lVar3 + 0xa4) & 1) != 0) {
      param_2 = param_3;
    }
  }
  *(byte *)param_2 = (byte)*param_2 | 8;
  return;
}

