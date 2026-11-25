// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140102c90  size: 567 bytes
// Name:    FUN_140102c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145321660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140102c90(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined8 param_6)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_160 [12];
  undefined1 auStack_154 [32];
  undefined1 auStack_134 [32];
  undefined1 auStack_114 [32];
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [28];
  undefined4 uStack_ac;
  undefined1 auStack_a8 [28];
  undefined4 uStack_8c;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [28];
  undefined4 uStack_4c;
  undefined1 auStack_48 [28];
  undefined4 uStack_2c;
  
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  auStack_134 = ZEXT1632(auVar5);
  auStack_154 = ZEXT1632(auVar5);
  uStack_f4 = 0;
  uStack_ec = 0x80000000;
  auStack_c8 = ZEXT1628(auVar5);
  uStack_ac = 0;
  auStack_a8 = ZEXT828(auVar5._4_8_);
  uStack_8c = 0x80000000;
  auStack_88 = ZEXT1632(auVar5);
  auStack_68 = ZEXT1628(auVar5);
  auStack_48 = ZEXT828(auVar5._4_8_);
  uStack_2c = 0x80000000;
  auStack_114 = auStack_134;
  auStack_e8 = auStack_154;
  uStack_4c = uStack_ac;
  func_0x0001423739d0(param_1,auStack_160,param_3,param_4,param_6);
  (**(code **)(*param_2 + 0x110))(param_2,_DAT_14751f608,auStack_160,0x138,0x138);
  uVar2 = *(byte *)(param_1 + 0x1f9) ^ 1;
  if ((char)param_3 != '\0') {
    uVar2 = (uint)*(byte *)(param_1 + 0x1f9);
  }
  lVar1 = *(longlong *)(param_1 + 0x188 + (ulonglong)uVar2 * 8);
  (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined8 *)(lVar1 + 8),1);
  (**(code **)(*param_2 + 0xd0))
            (param_2,_DAT_14751f60a,*(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x28));
  (**(code **)(*param_2 + 0x1f0))(param_2,*(undefined8 *)(param_1 + 0x1c0),5);
  (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f616,*(undefined8 *)(param_1 + 0x1c0));
  if (param_5 == '\0') {
    (**(code **)(*param_2 + 0x140))(param_2,_DAT_14751f60e,_DAT_148fcfc38);
    uVar3 = 7;
    uVar4 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1a0))
              (param_2,*(undefined8 *)(param_1 + 0x1c8 + (ulonglong)*(byte *)(param_1 + 0x1fa) * 8),
               1);
    (**(code **)(*param_2 + 0x140))
              (param_2,_DAT_14751f60e,
               *(undefined8 *)(param_1 + 0x110 + (ulonglong)*(byte *)(param_1 + 0x1fa) * 8));
    (**(code **)(*param_2 + 0x1f0))(param_2,*(undefined8 *)(param_1 + 0x1d8),5);
    uVar4 = *(undefined8 *)(param_1 + 0x1d8);
    uVar3 = 8;
  }
  (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f620,uVar4);
  FUN_145321660(param_1,param_2,*(undefined1 *)(param_1 + 0x1e0),uVar3);
  (**(code **)(*param_2 + 0x1a0))(param_2,*(undefined8 *)(param_1 + 0x1c0),1);
  (**(code **)(*param_2 + 0x148))(param_2,_DAT_14751f608);
  return;
}

