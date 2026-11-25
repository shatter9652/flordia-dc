// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140102ed0  size: 798 bytes
// Name:    FUN_140102ed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145321660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140102ed0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_158 [12];
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (((*(longlong *)(param_1 + 0x1b8) != 0) && (*(longlong *)(param_1 + 0x1c8) != 0)) &&
     (*(longlong *)(param_1 + 0x1d0) != 0)) {
    uStack_144 = 0;
    uStack_14c = 0;
    func_0x0001423739d0(param_1,auStack_158,param_3,param_4,param_6);
    uStack_e0 = *(undefined8 *)(param_1 + 0x308);
    uStack_d8 = *(undefined8 *)(param_1 + 0x310);
    uStack_d0 = *(undefined8 *)(param_1 + 0x318);
    uStack_c8 = *(undefined8 *)(param_1 + 800);
    uStack_c0 = *(undefined8 *)(param_1 + 0x328);
    uStack_b8 = *(undefined8 *)(param_1 + 0x330);
    uStack_b0 = *(undefined8 *)(param_1 + 0x338);
    uStack_a8 = *(undefined8 *)(param_1 + 0x340);
    uStack_a0 = *(undefined8 *)(param_1 + 0x348);
    uStack_98 = *(undefined8 *)(param_1 + 0x350);
    uStack_90 = *(undefined8 *)(param_1 + 0x358);
    uStack_88 = *(undefined8 *)(param_1 + 0x360);
    uStack_80 = *(undefined8 *)(param_1 + 0x368);
    uStack_78 = *(undefined8 *)(param_1 + 0x370);
    uStack_70 = *(undefined8 *)(param_1 + 0x378);
    uStack_68 = *(undefined8 *)(param_1 + 0x380);
    uStack_60 = *(undefined8 *)(param_1 + 0x388);
    uStack_58 = *(undefined8 *)(param_1 + 0x390);
    uStack_50 = *(undefined8 *)(param_1 + 0x398);
    uStack_48 = *(undefined8 *)(param_1 + 0x3a0);
    uStack_40 = *(undefined8 *)(param_1 + 0x3a8);
    uStack_38 = *(undefined8 *)(param_1 + 0x3b0);
    uStack_30 = *(undefined8 *)(param_1 + 0x3b8);
    uStack_28 = *(undefined8 *)(param_1 + 0x3c0);
    uStack_140 = *(undefined8 *)(param_1 + 0x3c8);
    uStack_138 = *(undefined8 *)(param_1 + 0x3d0);
    uStack_130 = *(undefined8 *)(param_1 + 0x3d8);
    uStack_128 = *(undefined8 *)(param_1 + 0x3e0);
    uStack_120 = *(undefined8 *)(param_1 + 1000);
    uStack_118 = *(undefined8 *)(param_1 + 0x3f0);
    uStack_110 = *(undefined8 *)(param_1 + 0x3f8);
    uStack_108 = *(undefined8 *)(param_1 + 0x400);
    uStack_100 = *(undefined8 *)(param_1 + 0x408);
    uStack_f8 = *(undefined8 *)(param_1 + 0x410);
    uStack_f0 = *(undefined8 *)(param_1 + 0x418);
    uStack_e8 = *(undefined8 *)(param_1 + 0x420);
    (**(code **)(*param_2 + 0x110))(param_2,_DAT_14751f608,auStack_158,0x138,0x138);
    if (*(longlong *)(param_1 + 0x1b8) == 0) {
      uVar2 = 0;
      (**(code **)(*param_2 + 0xd0))(param_2,_DAT_14751f612,0);
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x1a8 + (ulonglong)*(byte *)(param_1 + 0x1f9) * 8);
      (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined8 *)(lVar1 + 8),1);
      (**(code **)(*param_2 + 0xd0))
                (param_2,_DAT_14751f612,*(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x28));
      (**(code **)(*param_2 + 0x1f0))(param_2,*(undefined8 *)(param_1 + 0x1b8),5);
      uVar2 = *(undefined8 *)(param_1 + 0x1b8);
    }
    (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f61c,uVar2);
    if ((*(longlong *)(param_1 + 0x1c8) == 0) || (*(longlong *)(param_1 + 0x1d0) == 0)) {
      (**(code **)(*param_2 + 0x140))(param_2,_DAT_14751f60c,_DAT_148406210);
      (**(code **)(*param_2 + 0x140))(param_2,_DAT_14751f60e,_DAT_148fcfc38);
      uVar2 = 0;
    }
    else {
      (**(code **)(*param_2 + 0x1a0))
                (param_2,*(undefined8 *)
                          (param_1 + 0x1c8 + (ulonglong)(*(byte *)(param_1 + 0x1fa) ^ 1) * 8),1);
      (**(code **)(*param_2 + 0x140))
                (param_2,_DAT_14751f60c,
                 *(undefined8 *)(param_1 + 0x110 + (ulonglong)(*(byte *)(param_1 + 0x1fa) ^ 1) * 8))
      ;
      (**(code **)(*param_2 + 0x1b0))(param_2,*(undefined8 *)(param_1 + 0x120),1);
      (**(code **)(*param_2 + 0x140))(param_2,_DAT_14751f60e,*(undefined8 *)(param_1 + 0x120));
      (**(code **)(*param_2 + 0x1f0))
                (param_2,*(undefined8 *)
                          (param_1 + 0x1c8 + (ulonglong)*(byte *)(param_1 + 0x1fa) * 8),5);
      uVar2 = *(undefined8 *)(param_1 + 0x1c8 + (ulonglong)*(byte *)(param_1 + 0x1fa) * 8);
    }
    (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f61e,uVar2);
    FUN_145321660(param_1,param_2,*(undefined1 *)(param_1 + 0x1e0),param_5 + 9);
    (**(code **)(*param_2 + 0x1a0))
              (param_2,*(undefined8 *)(param_1 + 0x1c8 + (ulonglong)*(byte *)(param_1 + 0x1fa) * 8),
               1);
    (**(code **)(*param_2 + 0x148))(param_2,_DAT_14751f608);
  }
  return;
}

