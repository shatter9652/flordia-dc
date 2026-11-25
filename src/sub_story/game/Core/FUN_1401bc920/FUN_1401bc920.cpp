// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bc920  size: 152 bytes
// Name:    FUN_1401bc920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb5c40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401bc920(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (((*(ulonglong *)(param_2 + 0xf8) & *(ulonglong *)(*(longlong *)(*param_1 + 0xb0) + 0x100)) !=
       0) && ((((ulonglong)DAT_149e44eb0 - 1 | 0x2000) & *(ulonglong *)(param_2 + 0x100)) != 0)) {
    uStack_48 = *(undefined8 *)(param_2 + 0x50);
    uStack_40 = *(undefined8 *)(param_2 + 0x58);
    uStack_38 = *(undefined8 *)(param_2 + 0x60);
    uStack_30 = *(undefined8 *)(param_2 + 0x68);
    uStack_28 = *(undefined8 *)(param_2 + 0x70);
    uStack_20 = *(undefined8 *)(param_2 + 0x78);
    auVar1 = *(undefined1 (*) [16])(param_2 + 0x80);
    auVar2 = vpunpckhwd_avx(auVar1,auVar1);
    auVar2 = vpsrad_avx(auVar2,0x10);
    auVar2 = vcvtdq2ps_avx(auVar2);
    auVar2 = vshufpd_avx(auVar2,auVar2,3);
    fStack_18 = auVar2._0_4_ * _DAT_146159c90 + auVar1._0_4_;
    fStack_14 = auVar2._4_4_ * _UNK_146159c94 + auVar1._4_4_;
    fStack_10 = auVar2._8_4_ * _UNK_146159c98 + auVar1._8_4_;
    fStack_c = auVar2._12_4_ * _UNK_146159c9c + auVar1._12_4_;
    FUN_144fb5c40(param_1,param_2,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x20),&uStack_48,
                  param_3);
  }
  return;
}

