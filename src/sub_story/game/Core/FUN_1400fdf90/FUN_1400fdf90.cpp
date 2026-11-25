// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fdf90  size: 395 bytes
// Name:    FUN_1400fdf90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400fe1a0, FUN_1400fe120, FUN_1400fe170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fdf90(longlong *param_1,int param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  iVar5 = param_2;
  lVar1 = (longlong)param_2 + 0x10;
  if (param_3 != '\0') {
    iVar5 = param_2 + 0x10;
    lVar1 = (longlong)param_2 + 0x14;
  }
  lVar1 = param_1[lVar1];
  if (lVar1 == 0) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0x32;
    *(int *)(lVar2 + 0x2c) = iVar5;
    (**(code **)*param_1)(param_1);
  }
  if (*(char *)(lVar1 + 0x111) == '\0') {
    FUN_1400fe170(param_1,0xc4);
    auVar3 = vpsadbw_avx((undefined1  [16])0x0,*(undefined1 (*) [16])(lVar1 + 1));
    auVar4 = vpshufd_avx(auVar3,0xee);
    auVar3 = vpaddq_avx(auVar3,auVar4);
    uVar7 = auVar3._0_4_;
    FUN_1400fe1a0(param_1,uVar7 + 0x13);
    FUN_1400fe120(param_1,iVar5);
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 1));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 2));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 3));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 4));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 5));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 6));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 7));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 8));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 9));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 10));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 0xb));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 0xc));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 0xd));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 0xe));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 0xf));
    FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 0x10));
    if (uVar7 != 0) {
      uVar6 = 0;
      do {
        FUN_1400fe120(param_1,*(undefined1 *)(lVar1 + 0x11 + uVar6));
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    *(undefined1 *)(lVar1 + 0x111) = 1;
  }
  return;
}

