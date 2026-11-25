// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140053f70  size: 431 bytes
// Name:    FUN_140053f70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e76d70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140053f70(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  
  lVar2 = (*(code *)*param_1)(param_1[3],0x110);
  if (lVar2 == 0) {
    return 0;
  }
  if ((int)*(uint *)(param_1 + 4) < 0x10) {
    uVar1 = 0x10;
LAB_140054102:
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  else if (0x1000 < *(uint *)(param_1 + 4)) {
    uVar1 = 0x1000;
    goto LAB_140054102;
  }
  if ((int)*(uint *)((longlong)param_1 + 0x24) < 0x10) {
    uVar1 = 0x10;
LAB_140054117:
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  }
  else if (0x1000 < *(uint *)((longlong)param_1 + 0x24)) {
    uVar1 = 0x1000;
    goto LAB_140054117;
  }
  uVar1 = 0x10;
  if (0xf < (int)*(uint *)(param_1 + 5)) {
    if (*(uint *)(param_1 + 5) < 0x1001) goto LAB_140053fd6;
    uVar1 = 0x1000;
  }
  *(undefined4 *)(param_1 + 5) = uVar1;
LAB_140053fd6:
  uVar3 = FUN_144e76d70(param_1,&UNK_14677c510,0x80);
  *(undefined8 *)(lVar2 + 0xf8) = uVar3;
  uVar3 = FUN_144e76d70(param_1,&UNK_14677c5b1,0x50,*(undefined4 *)((longlong)param_1 + 0x24));
  *(undefined8 *)(lVar2 + 0x100) = uVar3;
  lVar4 = FUN_144e76d70(param_1,&UNK_14677c66c,0x28,*(undefined4 *)(param_1 + 5));
  *(longlong *)(lVar2 + 0x108) = lVar4;
  if (*(longlong *)(lVar2 + 0xf8) == 0) {
    return 0;
  }
  if (lVar4 != 0) {
    if (*(longlong *)(lVar2 + 0x100) != 0) {
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      *(longlong *)(lVar2 + 8) = lVar2;
      *(longlong *)lVar2 = lVar2;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(longlong *)(lVar2 + 0x58) = lVar2 + 0x50;
      *(longlong *)(lVar2 + 0x50) = lVar2 + 0x50;
      *(undefined2 *)(lVar2 + 0x74) = 0;
      *(undefined1 (*) [16])(lVar2 + 0x60) = auVar5;
      *(longlong *)(lVar2 + 0x78) = lVar2 + 0x78;
      *(longlong *)(lVar2 + 0x80) = lVar2 + 0xb8;
      *(undefined1 (*) [32])(lVar2 + 0x88) = ZEXT832(0) << 0x20;
      *(undefined1 (*) [32])(lVar2 + 0x94) = ZEXT832(0) << 0x20;
      *(longlong *)(lVar2 + 0xb8) = lVar2 + 0xb8;
      *(longlong *)(lVar2 + 0xc0) = lVar2 + 0x78;
      *(undefined1 (*) [32])(lVar2 + 200) = ZEXT832(0) << 0x20;
      *(undefined1 (*) [32])(lVar2 + 0xd4) = ZEXT832(0) << 0x20;
      return lVar2;
    }
    return 0;
  }
  return 0;
}

