// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140024610  size: 435 bytes
// Name:    FUN_140024610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df1bf0, FUN_144df1c70, FUN_144df2420, FUN_144df1ba0, FUN_144e079f0, FUN_144e07920, FUN_144dfa080, FUN_144df1cf0, FUN_144e04200
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140024610(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auVar8 [64];
  undefined1 auStack_258 [16];
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [40];
  undefined1 auStack_1f0 [48];
  undefined1 auStack_1c0 [72];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 extraout_var [56];
  
  lVar7 = FUN_144dfa080(param_1[1],(int)param_2[1]);
  if (lVar7 != 0) {
    FUN_144df1bf0(auStack_1f0,param_2,param_2);
    FUN_144df1ba0(auStack_218,param_2,param_2);
    FUN_144df1c70(auStack_1c0,param_2,0);
    plVar3 = (longlong *)*param_2;
    iVar2 = (int)param_2[1];
    iVar5 = func_0x000144e05fa0(plVar3[1]);
    uStack_228 = _DAT_145fc6ee0;
    uStack_220 = _UNK_145fc6ee8;
    if (iVar2 != iVar5) {
      uVar6 = (**(code **)(*plVar3 + 0xf0))(plVar3,iVar2);
      (**(code **)(*plVar3 + 0x108))(plVar3,uVar6,&uStack_178);
      uStack_228 = uStack_178;
      uStack_220 = uStack_170;
    }
    lStack_238 = *param_2;
    lStack_230 = param_2[1];
    lStack_248 = *param_2;
    lStack_240 = param_2[1];
    FUN_144df2420(&uStack_178,param_1[1],auStack_1f0,auStack_218,auStack_1c0,&lStack_248,&lStack_238
                  ,&uStack_228,1,0,0,0,1,0);
    uVar1 = *(undefined1 *)param_1[2];
    FUN_144e07920(auStack_258);
    auVar8._0_8_ = FUN_144e079f0(&uStack_178,*param_1,auStack_258,
                                 CONCAT31((int3)((uint)iVar2 >> 8),uVar1));
    auVar8._8_56_ = extraout_var;
    auStack_258 = vpcmpeqd_avx(auVar8._0_16_,auVar8._0_16_);
    bVar4 = FUN_144e04200(param_2,&uStack_178,param_3,auStack_258);
    *(byte *)param_1[3] = *(byte *)param_1[3] | bVar4;
    FUN_144df1cf0(&uStack_178);
  }
  return;
}

