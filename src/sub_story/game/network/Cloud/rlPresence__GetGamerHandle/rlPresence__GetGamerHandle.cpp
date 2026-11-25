// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143ebd2a0  size: 454 bytes
// Name:    rlPresence::GetGamerHandle
// Subsystem: core
// Class:   rlPresence
//
// Evidence:
//   GTAVSRC: rlPresence::GetGamerHandle  (game/network/Cloud/CloudManager.cpp)
//   literal: secure/%s/%s
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e4cc20, FUN_143ebed70, FUN_145c38400, FUN_143ebd470, FUN_1402675a0, FUN_143ebee20, FUN_1459a0e30, FUN_140004b40, FUN_145884790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlPresence.h"


int rlPresence__GetGamerHandle
              (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
              undefined8 param_5,undefined4 param_6,uint param_7,undefined4 param_8,
              undefined8 param_9)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 in_stack_fffffffffffffe38;
  undefined2 uVar9;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [264];
  
  uVar2 = param_7;
  uVar6 = param_5;
  uVar9 = (undefined2)((uint)in_stack_fffffffffffffe38 >> 0x10);
  FUN_140004b40(0x1498f8968);
  bVar8 = (uVar2 >> 0x16 & 1) != 0;
  if (bVar8) {
    uVar5 = func_0x000144f507b0();
    FUN_144e4cc20(auStack_148,&UNK_14677cd98,uVar5,uVar6);
  }
  else {
    func_0x000144dac8f0(auStack_148,&param_5,0x100);
  }
  uVar6 = FUN_143ebed70(param_4,auStack_148,uVar2);
  iVar4 = FUN_1459a0e30(param_1,uVar6);
  if (iVar4 == -1) {
    func_0x0001428d50a0(&uStack_1a0,&UNK_145955790,param_1);
    FUN_145c38400(auStack_148,uVar2);
    lVar7 = FUN_145884790(0x370);
    uVar1 = param_6;
    if (lVar7 == 0) {
      FUN_1402675a0(0x146c69a28,4);
      iVar4 = -1;
    }
    else {
      uVar3 = func_0x000145eff710(uVar2);
      uStack_158 = uStack_180;
      uStack_178 = uStack_1a0;
      uStack_170 = uStack_198;
      uStack_168 = uStack_190;
      uStack_160 = uStack_188;
      FUN_143ebee20(lVar7,param_2,param_3,param_4,CONCAT22(uVar9,uVar3),uVar1,&uStack_178);
      iVar4 = FUN_143ebd470(param_1,0,lVar7,uVar6,uVar2,bVar8,param_8,param_9);
    }
  }
  func_0x000144d9dab0(0x1498f8968);
  return iVar4;
}

