// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cd0d0  size: 387 bytes
// Name:    FUN_1401cd0d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cd260, FUN_144f69c60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401cd0d0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                  undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  uint uStack_ac;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [12];
  undefined4 uStack_7c;
  undefined1 auStack_78 [12];
  uint uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined5 uStack_50;
  
  auVar6 = ZEXT1664(*(undefined1 (*) [16])((longlong)_DAT_14a210d14 * 0x730 + 0x14a94bca0));
  lVar3 = FUN_1401cd260(*(undefined8 *)(param_2 + 0xc),*(undefined4 *)(param_3 + 8),param_5);
  if (lVar3 != 0) {
    uStack_ac = 0xffffffff;
    auVar4 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
    auVar5 = vcvtps2ph_f16c(ZEXT416(_DAT_146159bd0),3);
    auStack_78 = SUB1612((undefined1  [16])0x0,4);
    auStack_88 = SUB1612((undefined1  [16])0x0,0);
    uStack_7c = 0;
    uStack_6c = auVar4._0_4_ << 0x10 | (uint)auVar5._0_2_;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_68 = 0xc;
    uStack_60 = 0xffff0000ffff;
    uStack_54 = func_0x0001400eb490(lVar3);
    uStack_64 = 0;
    auStack_a8 = vsubps_avx(*(undefined1 (*) [16])(param_2 + 4),auVar6._0_16_);
    auStack_98 = vsubps_avx(*(undefined1 (*) [16])(param_2 + 8),auVar6._0_16_);
    FUN_144f69c60(param_1,param_4,param_3,auStack_a8,auStack_98,auStack_88,&uStack_ac,0xffffffff);
    if (uStack_ac != 0xffffffff) {
      uVar1 = *(uint *)(param_1 + 0x2938);
      if (uVar1 < *(uint *)(param_1 + 0x2928)) {
        iVar2 = *param_2;
        *(uint *)(param_1 + 0x2938) = uVar1 + 1;
        *(uint *)(*(longlong *)(param_1 + 0x2930) + (ulonglong)uVar1 * 4) =
             uStack_ac & 0xffff | iVar2 << 0x10;
      }
    }
  }
  return;
}

