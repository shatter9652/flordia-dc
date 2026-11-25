// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fe2b0  size: 230 bytes
// Name:    FUN_1400fe2b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400fe460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fe2b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 unaff_RBX;
  undefined4 *puVar6;
  int iVar7;
  undefined8 unaff_RSI;
  uint uVar8;
  undefined8 unaff_RDI;
  
  iVar3 = *(int *)((longlong)param_1 + 0x4c);
  uVar8 = 0;
  if (0 < iVar3) {
    iVar7 = 0;
    puVar6 = (undefined4 *)(param_1[0xb] + 0x10);
    do {
      iVar3 = FUN_1400fe460(param_1,*puVar6);
      uVar8 = uVar8 + iVar3;
      iVar3 = *(int *)((longlong)param_1 + 0x4c);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x18;
    } while (iVar7 < iVar3);
    uVar8 = (uint)(uVar8 != 0);
  }
  uVar4 = 0xc9;
  if ((*(char *)((longlong)param_1 + 0x101) != '\0') ||
     (uVar4 = 0xc2, *(char *)((longlong)param_1 + 0x124) != '\0')) goto LAB_1400fe343;
  if ((int)param_1[9] == 8) {
    if (iVar3 < 1) {
      uVar4 = 0xc0;
      if ((byte)uVar8 == 0) goto LAB_1400fe343;
LAB_1400fe35d:
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + 0x28) = 0x4b;
      (**(code **)(lVar2 + 8))(param_1,0);
      uVar4 = 0xc9;
      if (*(char *)((longlong)param_1 + 0x101) != '\0') goto LAB_1400fe343;
      bVar1 = *(byte *)((longlong)param_1 + 0x124);
      uVar4 = 0xc2;
    }
    else {
      bVar1 = 1;
      piVar5 = (int *)(param_1[0xb] + 0x18);
      do {
        if ((1 < piVar5[-1]) || (1 < *piVar5)) {
          bVar1 = 0;
        }
        piVar5 = piVar5 + 0x18;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (((byte)uVar8 & bVar1) != 0) goto LAB_1400fe35d;
      uVar4 = 0xc0;
    }
    if (bVar1 != 0) goto LAB_1400fe343;
  }
  uVar4 = 0xc1;
LAB_1400fe343:
  FUN_1400fe170(param_1,uVar4,param_3,param_4,unaff_RBX,unaff_RDI,unaff_RSI);
  FUN_1400fe1a0(param_1,*(int *)((longlong)param_1 + 0x4c) * 3 + 8);
  if ((0xffff < *(int *)((longlong)param_1 + 0x34)) || (0xffff < (int)param_1[6])) {
    *(undefined8 *)(*param_1 + 0x28) = 0xffff00000029;
    (**(code **)*param_1)(param_1);
  }
  FUN_1400fe120(param_1,(int)param_1[9]);
  FUN_1400fe1a0(param_1,*(undefined4 *)((longlong)param_1 + 0x34));
  FUN_1400fe1a0(param_1,(int)param_1[6]);
  FUN_1400fe120(param_1,*(undefined4 *)((longlong)param_1 + 0x4c));
  if (0 < *(int *)((longlong)param_1 + 0x4c)) {
    puVar6 = (undefined4 *)param_1[0xb];
    iVar3 = 0;
    do {
      FUN_1400fe120(param_1,*puVar6);
      FUN_1400fe120(param_1,puVar6[2] * 0x10 + puVar6[3]);
      FUN_1400fe120(param_1,puVar6[4]);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 0x18;
    } while (iVar3 < *(int *)((longlong)param_1 + 0x4c));
  }
  return;
}

