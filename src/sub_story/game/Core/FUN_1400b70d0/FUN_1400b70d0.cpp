// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b70d0  size: 378 bytes
// Name:    FUN_1400b70d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9d7a0, FUN_1400b7600, FUN_144e4c850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400b70d0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  void *pvVar7;
  
  FUN_1400b7600(param_1,param_2,param_3,9);
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  *param_1 = &UNK_14646f9d0;
  *(undefined1 (*) [16])(param_1 + 0x2a) = auVar10;
  uVar1 = *(uint *)(param_2 + 0x14);
  *(uint *)(param_1 + 0x1c) = uVar1;
  cVar2 = FUN_144d9d7a0(uVar1,uVar1 >> 0x10);
  *(byte *)(param_1 + 0x25) =
       *(byte *)(param_1 + 0x25) & 0xf7 | (uVar1 < 0xfffc0000 & (byte)(uVar1 >> 0x10)) << 3;
  *(byte *)((longlong)param_1 + 0x123) =
       *(byte *)((longlong)param_1 + 0x123) & 0xbb | cVar2 << 2 | 0x40;
  *(char *)((longlong)param_1 + 0x121) = (char)param_2[0x12];
  (**(code **)(*param_2 + 0x208))(param_2,&uStack_38);
  param_1[0x28] = uStack_38;
  param_1[0x29] = uStack_30;
  *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) & 0xfd;
  *(byte *)((longlong)param_1 + 0x124) = *(byte *)((longlong)param_1 + 0x124) & 0xf7;
  uVar6 = (ulonglong)*(uint *)(param_2[4] + 0x58);
  lVar4 = FUN_144e4c850(uVar6,*(undefined1 *)(param_2[4] + 0x84));
  if (lVar4 == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = *(short *)(lVar4 + 0xd8) != -1;
    uVar6 = CONCAT71((int7)(uVar6 >> 8),bVar9);
    bVar9 = *(longlong *)(lVar4 + 0x18) != 0 && bVar9;
  }
  bVar5 = *(byte *)(param_1 + 0x2d);
  *(byte *)(param_1 + 0x2d) = bVar5 & 0xfe | bVar9;
  if ((char)param_2[6] == '\n') {
    uVar6 = CONCAT71((int7)(uVar6 >> 8),*(byte *)((longlong)param_2 + 0x10c) >> 5) &
            0xffffffffffffff04;
  }
  else {
    uVar6 = 0;
  }
  bVar8 = bVar5 & 0xfa | bVar9;
  bVar5 = (byte)uVar6 | bVar8;
  pvVar7 = (void *)CONCAT71((int7)(uVar6 >> 8),bVar5);
  *(byte *)(param_1 + 0x2d) = bVar5;
  if ((char)param_2[6] == '\x04') {
    uVar6 = (ulonglong)*(uint *)(param_2 + 0x1a);
    lVar4 = func_0x0001451fc050();
    if (lVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT71((int7)(uVar6 >> 8),*(byte *)(lVar4 + 0x10c) >> 5) & 0xffffffffffffff04;
    }
    bVar8 = (byte)uVar6 | bVar8;
    pvVar7 = (void *)CONCAT71((int7)(uVar6 >> 8),bVar8);
    *(byte *)(param_1 + 0x2d) = bVar8;
  }
  if (((ulonglong)pvVar7 & 4) == 0) {
    bVar5 = 0;
  }
  else {
    iVar3 = rand(pvVar7);
    pvVar7 = (void *)(ulonglong)*(byte *)(param_1 + 0x2d);
    bVar5 = ((byte)iVar3 & 3) << 3;
  }
  *(byte *)(param_1 + 0x2d) = (byte)pvVar7 & 0xe7 | bVar5;
  return param_1;
}

