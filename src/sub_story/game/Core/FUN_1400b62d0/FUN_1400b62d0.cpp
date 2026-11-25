// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b62d0  size: 333 bytes
// Name:    FUN_1400b62d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9d7a0, FUN_1400b64e0, FUN_1400b7600, FUN_1400b6420, FUN_144f43650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400b62d0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  
  FUN_1400b7600();
  *param_1 = &UNK_14646da30;
  bVar1 = *(byte *)(param_1 + 0x28);
  bVar12 = (byte)*(uint *)(param_2 + 0x34) >> 4 & (*(uint *)(param_2 + 0x34) & 4) == 0;
  bVar2 = *(byte *)(param_1 + 0x25);
  *(byte *)(param_1 + 0x28) = bVar1 & 0xfe | bVar12;
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar8;
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar10;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x40);
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar6;
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar6 = *(undefined8 *)(param_2 + 0x78);
  param_1[0x14] = *(undefined8 *)(param_2 + 0x60);
  param_1[0x15] = uVar4;
  param_1[0x16] = uVar5;
  param_1[0x17] = uVar6;
  uVar3 = *(uint *)(param_2 + 0xa0);
  *(uint *)(param_1 + 0x1c) = uVar3;
  bVar13 = (uVar3 < 0xfffc0000 & (byte)(uVar3 >> 0x10) & 1) << 3;
  *(byte *)(param_1 + 0x25) = bVar2 & 0xf7 | bVar13;
  *(byte *)(param_1 + 0x25) =
       bVar2 & 0x77 | bVar13 | ((*(ushort *)(param_2 + 0x98) & 0xc) == 0) << 7;
  cVar11 = FUN_144d9d7a0();
  *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) & 0xfb | cVar11 << 2;
  *(byte *)(param_1 + 0x28) = bVar1 & 0xfc | bVar12;
  cVar11 = FUN_1400b64e0(param_2,param_1);
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb | cVar11 << 2;
  cVar11 = FUN_1400b6420(param_2,param_1);
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf7 | cVar11 << 3;
  *(byte *)((longlong)param_1 + 0x127) = *(byte *)((longlong)param_1 + 0x127) & 0xdf;
  FUN_144f43650(param_1,param_3);
  return param_1;
}

