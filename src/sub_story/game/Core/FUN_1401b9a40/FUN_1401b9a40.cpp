// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9a40  size: 421 bytes
// Name:    FUN_1401b9a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145079070, FUN_144390a80, FUN_1443914d0, FUN_1452436f0, FUN_1401bae50, FUN_14438f660, FUN_14045a030, FUN_14045a310, FUN_1401b9bf0, FUN_144390ab0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401b9a40(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 auStack_b8 [8];
  undefined4 uStack_98;
  int iStack_94;
  undefined1 auStack_88 [32];
  undefined1 uStack_68;
  undefined1 auStack_58 [16];
  
  auStack_58._0_12_ = ZEXT812(0);
  auStack_58._12_4_ = 0;
  uStack_98 = 0x275822c4;
  func_0x000144df5050(auStack_88);
  uStack_68 = 0;
  FUN_14045a310(*(undefined8 *)(*param_1 + 0x20),&uStack_98,0);
  FUN_1452436f0(*(undefined8 *)(*param_1 + 0x20),&iStack_bc);
  if (iStack_bc == 0) {
    if (iStack_94 == 0) {
      FUN_14438f660(*(undefined8 *)(*param_1 + 0x20),auStack_b8);
    }
    else {
      FUN_1401b9bf0(*(undefined8 *)(*param_1 + 0x20),auStack_b8);
    }
    lVar5 = FUN_145079070(&uStack_98,param_1,auStack_b8,0,0,0);
    if (lVar5 == 0) {
      return 0;
    }
  }
  else {
    if (1 < iStack_bc - 1U) {
      return 0;
    }
    lVar5 = FUN_1401bae50(param_1[2],*(undefined8 *)(*param_1 + 0x230),&uStack_98);
    if (lVar5 == 0) {
      return 0;
    }
    lVar1 = *param_1;
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    auStack_b8[0] = 0;
    uStack_c0 = 0;
    FUN_144390a80(uVar6,auStack_b8);
    FUN_144390ab0(uVar6,&uStack_c0);
    uVar3 = auStack_b8[0];
    uVar2 = uStack_c0;
    uVar6 = func_0x000144f01ca0(lVar5);
    if (iStack_94 == 0) {
      FUN_1443914d0(lVar1,uVar6,uVar3,uVar2,iStack_bc == 1);
    }
    else {
      FUN_14045a030(lVar1,0xf5d26b83,uVar6,uVar3,uVar2,iStack_bc == 1);
    }
  }
  uVar4 = func_0x000145077fb0(*(undefined8 *)(*param_1 + 0x20));
  *(undefined1 *)(lVar5 + 0x20) = uVar4;
  return lVar5;
}

