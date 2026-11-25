// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140013900  size: 393 bytes
// Name:    FUN_140013900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1435a3b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140013900(undefined8 *param_1,undefined8 param_2,longlong param_3,uint param_4,uint param_5,
             undefined8 param_6,undefined8 param_7,undefined4 param_8,int param_9,uint param_10,
             undefined1 param_11,undefined8 param_12)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  *param_1 = param_2;
  param_1[2] = 0;
  uVar9 = (param_5 & 3) << 0x14;
  uVar3 = (param_10 & 3) << 0x17;
  param_1[3] = param_6;
  param_1[4] = param_7;
  uVar4 = uVar3 | uVar9 | (param_4 & 0xf) << 0xf | param_9 << 0x19;
  *(undefined1 (*) [32])(param_1 + 5) = ZEXT832(0) << 0x20;
  *(undefined1 (*) [32])((longlong)param_1 + 0x34) = ZEXT832(0) << 0x20;
  *(undefined1 (*) [32])(param_1 + 0xb) = ZEXT832(0) << 0x20;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  param_1[0x10] = param_12;
  *(undefined1 (*) [16])(param_1 + 0x11) = ZEXT816(0) << 0x20;
  *(uint *)(param_1 + 0x14) = uVar4;
  uVar6 = *(uint *)((longlong)param_1 + 0xa4) & 0xfffffff0;
  *(uint *)((longlong)param_1 + 0xa4) = uVar6;
  param_1[1] = param_3 + 0x2c4;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_3 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_3 + 700);
  uVar8 = *(ushort *)(param_3 + 0x14) & 0x7fff;
  uVar4 = uVar8 | uVar4;
  *(uint *)(param_1 + 0x14) = uVar4;
  uVar5 = (*(byte *)(param_3 + 0x2d0) & 1) << 0x13;
  *(uint *)(param_1 + 0x14) = uVar5 | uVar4;
  iVar1 = uVar6 + (uint)(*(byte *)(param_3 + 0x125) >> 7) * 2;
  *(int *)((longlong)param_1 + 0xa4) = iVar1;
  bVar2 = *(byte *)(param_3 + 0x2d0);
  if ((bVar2 & 8) != 0) {
    *(uint *)(param_1 + 0x14) = uVar5 | uVar8 | uVar3 | uVar9 | param_9 << 0x19;
  }
  auVar10._4_4_ = param_8;
  auVar10._0_4_ = param_8;
  auVar10._8_4_ = param_8;
  auVar10._12_4_ = param_8;
  auVar10 = vpcmpeqd_avx(auVar10,_DAT_146172260);
  uVar7 = (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),bVar2) & 0xffffffffffffff04;
  FUN_1435a3b80(param_1,param_3,
                CONCAT71((int7)(uVar7 >> 8),
                         (byte)uVar7 >> 2 &
                         ((((SUB161(auVar10 >> 0x1f,0) & 1) == 0 &&
                           (SUB161(auVar10 >> 0x3f,0) & 1) == 0) &&
                          (SUB161(auVar10 >> 0x5f,0) & 1) == 0) && -1 < auVar10[0xf])),param_8,
                param_11);
  *(byte *)((longlong)param_1 + 0xa2) = *(byte *)((longlong)param_1 + 0xa2) | 0x40;
  return param_1;
}

