// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000c2f0  size: 647 bytes
// Name:    FUN_14000c2f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14000c710, FUN_144dc9800, FUN_144dc99d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000c2f0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined1 auVar6 [64];
  undefined4 *puVar7;
  uint uStack_13c;
  ulonglong uStack_138;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined1 auStack_c8 [48];
  undefined8 auStack_98 [3];
  undefined8 auStack_80 [8];
  undefined4 uVar8;
  
  uStack_d0 = 0x30;
  if (param_3 < 1) {
    iStack_cc = 0;
  }
  else {
    func_0x000145f40580(auStack_c8,0,param_3);
    iStack_cc = param_3;
  }
  FUN_144dc99d0(param_1,param_3 + -1,param_2,param_3);
  puVar1 = param_1 + 5;
  uStack_118 = *param_1;
  uStack_110 = param_1[1];
  uStack_108 = param_1[2];
  uStack_100 = param_1[3];
  auStack_c8[*(uint *)(param_1 + 5)] = 1;
  uVar2 = *(uint *)((longlong)param_1 + 0x24);
  uStack_138 = (ulonglong)uVar2;
  uStack_f8 = 4;
  if (uStack_138 == 0) goto LAB_14000c3c6;
  if (uVar2 < 5) {
    if (uVar2 != 4) goto LAB_14000c55c;
    uStack_f0 = *puVar1;
    uStack_e8 = param_1[6];
  }
  else {
    uStack_f8 = (ulonglong)uVar2;
LAB_14000c55c:
    func_0x000145f40560(&uStack_f0,puVar1,uStack_138 << 2);
  }
  uStack_f8 = CONCAT44(uVar2,(undefined4)uStack_f8);
LAB_14000c3c6:
  uStack_e0 = param_1[7];
  uStack_13c = *(uint *)(param_1 + 4);
  if (0 < param_3) {
    auVar6 = ZEXT464((uint)((ulonglong)uStack_e0 >> 0x20));
    iVar5 = param_3;
    do {
      puVar7 = &uStack_11c;
      auStack_80[0] = 4;
      auVar6 = ZEXT1664(auVar6._0_16_);
      cVar4 = FUN_14000c710(param_2,param_3,&uStack_118,auStack_80,puVar7);
      uVar3 = uStack_11c;
      uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
      uVar2 = (uint)uStack_138;
      if (cVar4 == '\0') break;
      auStack_98[0] = 4;
      func_0x00014000c580(auStack_80,uStack_11c,auStack_98);
      cVar4 = FUN_144dc9800(auStack_80,uVar3,auStack_98,param_2,CONCAT44(uVar8,param_3),&uStack_d0,
                            &uStack_118);
      if (cVar4 == '\0') break;
      if (uStack_e0._4_4_ < auVar6._0_4_) {
        *param_1 = uStack_118;
        param_1[1] = uStack_110;
        param_1[2] = uStack_108;
        param_1[3] = uStack_100;
        uStack_138 = (ulonglong)uStack_f8._4_4_;
        if (uStack_138 != 0) {
          if (uStack_13c < uStack_f8._4_4_) {
            uStack_13c = uStack_f8._4_4_;
          }
          if (uStack_f8._4_4_ == 4) {
            *puVar1 = uStack_f0;
            param_1[6] = uStack_e8;
          }
          else {
            func_0x000145f40560(puVar1,&uStack_f0,uStack_138 << 2);
          }
        }
        param_1[7] = uStack_e0;
        auVar6 = ZEXT464((uint)((ulonglong)uStack_e0 >> 0x20));
      }
      iVar5 = iVar5 + -1;
      uVar2 = (uint)uStack_138;
    } while (iVar5 != 0);
  }
  uStack_138._0_4_ = uVar2;
  *(uint *)((longlong)param_1 + 0x24) = (uint)uStack_138;
  *(uint *)(param_1 + 4) = uStack_13c;
  return;
}

