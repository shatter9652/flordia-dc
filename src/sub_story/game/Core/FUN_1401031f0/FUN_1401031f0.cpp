// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401031f0  size: 915 bytes
// Name:    FUN_1401031f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145321810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401031f0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uStack_48;
  uint uStack_44;
  
  lVar6 = *(longlong *)(param_1 + 200);
  (**(code **)(*param_2 + 0x60))
            (param_2,*(undefined8 *)
                      (*(longlong *)(lVar6 + 0xc60) +
                      (ulonglong)
                      *(byte *)(*(longlong *)(lVar6 + 0xc70) + 5 +
                               (ulonglong)
                               (*(uint *)(*(longlong *)(lVar6 + 0xc68) +
                                         (ulonglong)*(byte *)(param_1 + 0x1e0) * 4) >> 0xf & 0x1ff)
                               * 0x18) * 8));
  (**(code **)(*param_2 + 0x110))
            (param_2,_DAT_14751f606,
             param_1 + 0x248 + (ulonglong)((uint)*(byte *)(param_1 + 0x1f8) * 0x60),0x60,0x60);
  _DAT_14ab4e7c0 = (_DAT_14ab4e7c0 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_14ab4e7c0 >> 0x20);
  uStack_48 = (undefined4)_DAT_14ab4e7c0;
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  lVar6 = *(longlong *)(param_1 + 0x1a8);
  uVar2 = *(undefined8 *)(param_1 + 0x198);
  lVar4 = *(longlong *)(param_1 + 0x1c8);
  uVar5 = *(byte *)(param_1 + 0x8198) ^ 1;
  (**(code **)(*param_2 + 0x1f0))(param_2,uVar1,5);
  (**(code **)(*param_2 + 0x1f0))(param_2,uVar2,5);
  (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f616,uVar1);
  (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f618,uVar2);
  lVar3 = *param_2;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    uVar5 = uVar5 | 4;
    (**(code **)(lVar3 + 0x1f0))(param_2,lVar4,5);
    lVar3 = *param_2;
  }
  (**(code **)(lVar3 + 0x90))(param_2,_DAT_14751f61e,lVar4);
  if (lVar6 == 0) {
    lVar4 = *param_2;
    lVar6 = 0;
  }
  else {
    uVar5 = uVar5 | 8;
    (**(code **)(*param_2 + 0x1f0))(param_2,lVar6,5);
    lVar4 = *param_2;
  }
  (**(code **)(lVar4 + 0x90))(param_2,_DAT_14751f61a,lVar6);
  uStack_44 = uVar5 | 2;
  (**(code **)(*param_2 + 0x1f0))(param_2,*(undefined8 *)(param_1 + 0x1c0),5);
  (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f620,*(undefined8 *)(param_1 + 0x1c0));
  (**(code **)(*param_2 + 0x68))(param_2,&uStack_48,2,0);
  FUN_145321810(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 400);
  lVar6 = *(longlong *)(param_1 + 0x1b0);
  uVar2 = *(undefined8 *)(param_1 + 0x1a0);
  lVar4 = *(longlong *)(param_1 + 0x1d0);
  (**(code **)(*param_2 + 0x1f0))(param_2,uVar1,5);
  (**(code **)(*param_2 + 0x1f0))(param_2,uVar2,5);
  (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f616,uVar1);
  (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f618,uVar2);
  if (lVar4 == 0) {
    uStack_44 = uStack_44 & 0xfffffffb;
    lVar4 = 0;
    lVar3 = *param_2;
  }
  else {
    uStack_44 = uStack_44 | 4;
    (**(code **)(*param_2 + 0x1f0))(param_2,lVar4,5);
    lVar3 = *param_2;
  }
  (**(code **)(lVar3 + 0x90))(param_2,_DAT_14751f61e,lVar4);
  if (lVar6 == 0) {
    uStack_44 = uStack_44 & 0xfffffff7;
    lVar6 = 0;
    lVar4 = *param_2;
  }
  else {
    uStack_44 = uStack_44 | 8;
    (**(code **)(*param_2 + 0x1f0))(param_2,lVar6,5);
    lVar4 = *param_2;
  }
  (**(code **)(lVar4 + 0x90))(param_2,_DAT_14751f61a,lVar6);
  uStack_44 = uStack_44 & 0xfffffffd;
  (**(code **)(*param_2 + 0x90))(param_2,_DAT_14751f620,0);
  (**(code **)(*param_2 + 0x68))(param_2,&uStack_48,2,0);
  FUN_145321810(param_1,param_2);
  (**(code **)(*param_2 + 0x148))(param_2,_DAT_14751f606);
  *(undefined1 *)(param_1 + 0x1fb) = 0;
  return;
}

