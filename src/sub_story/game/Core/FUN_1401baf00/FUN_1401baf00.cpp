// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401baf00  size: 549 bytes
// Name:    FUN_1401baf00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_1401baf00(undefined1 (*param_1) [16],undefined8 param_2,int param_3,undefined4 param_4,
             uint param_5)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auStack_48 [8];
  uint uStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  auVar5 = ZEXT464(param_5);
  *(undefined8 *)param_1[10] = param_2;
  if (param_3 == 3) {
    uVar2 = func_0x0001406af070(9,param_4);
    *(undefined4 *)(param_1[10] + 8) = uVar2;
    func_0x000144e0a910(auStack_48);
    func_0x0001401bb130(auStack_48);
    func_0x0001401bb150(auStack_48,auVar5._0_8_);
    auVar1._4_4_ = fStack_3c;
    auVar1._0_4_ = uStack_40;
    auVar1._8_4_ = fStack_38;
    auVar1._12_4_ = fStack_34;
    auVar3 = vinsertps_avx(auVar1,ZEXT416((uint)(fStack_38 + fStack_38)),0x1c);
    auVar3 = vunpcklps_avx(auVar3,ZEXT416((uint)fStack_3c));
    *param_1 = auVar3;
    param_1[1][0] = 2;
  }
  else {
    switch(param_3) {
    case 0:
      uVar2 = func_0x0001406af070(3,param_4);
      *(undefined4 *)(param_1[10] + 8) = uVar2;
      func_0x000144e48580(auStack_48);
      func_0x0001456aabf0(auStack_48);
      func_0x000144e485f0(auStack_48);
      auVar4._0_12_ = ZEXT812(0);
      auVar4._12_4_ = 0;
      auVar3._0_4_ = fStack_38 + fStack_38;
      auVar3._4_4_ = fStack_34 + fStack_34;
      auVar3._8_4_ = fStack_30 + fStack_30;
      auVar3._12_4_ = fStack_2c + fStack_2c;
      auVar3 = vblendps_avx(auVar3,auVar4,8);
      *param_1 = auVar3;
      param_1[1][0] = 3;
      break;
    case 1:
      uVar2 = func_0x0001406af070(0,param_4);
      *(undefined4 *)(param_1[10] + 8) = uVar2;
      func_0x000144e0b130(auStack_48);
      func_0x0001456aac70(auStack_48);
      func_0x0001456aacb0(auStack_48,auVar5._0_8_);
      *(uint *)*param_1 = uStack_40;
      *(uint *)(*param_1 + 4) = uStack_40;
      *(uint *)(*param_1 + 8) = uStack_40;
      *(uint *)(*param_1 + 0xc) = uStack_40;
      param_1[1][0] = 0;
      break;
    case 2:
      uVar2 = func_0x0001406af070(6,param_4);
      *(undefined4 *)(param_1[10] + 8) = uVar2;
      func_0x000144df5e30(auStack_48);
      func_0x000144375a90(auStack_48);
      func_0x000144375ac0(auStack_48,auVar5._0_8_);
      auVar3 = vinsertps_avx(ZEXT416(uStack_40),ZEXT416((uint)(fStack_3c + fStack_3c)),0x1c);
      *param_1 = auVar3;
      param_1[1][0] = 1;
      break;
    case 4:
    case 7:
    case 10:
      return 0;
    case 5:
    case 6:
      uVar2 = func_0x0001406af070(0x15,param_4);
      *(undefined4 *)(param_1[10] + 8) = uVar2;
      func_0x0001401bb130(param_1);
      func_0x0001401bb150(param_1,auVar5._0_8_);
      break;
    case 8:
      uVar2 = func_0x0001406af070(0xf,param_4);
      *(undefined4 *)(param_1[10] + 8) = uVar2;
      func_0x0001401bbe90(param_1);
      func_0x0001401bbdf0(param_1,auVar5._0_8_);
      *(undefined4 *)param_1[9] = 1;
      break;
    case 9:
      uVar2 = func_0x0001406af070(0xc,param_4);
      *(undefined4 *)(param_1[10] + 8) = uVar2;
      func_0x000144375aa0(param_1);
      func_0x000144375ae0(param_1,auVar5._0_8_);
    }
  }
  return 1;
}

