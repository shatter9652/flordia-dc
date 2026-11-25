// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001df60  size: 656 bytes
// Name:    FUN_14001df60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df1ba0, FUN_144e08210, FUN_144df1bf0, FUN_144df1c70, FUN_145012550, FUN_144df1cf0, FUN_14505ef20, FUN_144df2420
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001df60(undefined1 (*param_1) [16],longlong param_2,undefined4 param_3,undefined4 param_4
                  ,undefined4 param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plStack_2b8;
  int iStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  float fStack_298;
  undefined4 uStack_294;
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined8 uStack_260;
  longlong *aplStack_258 [2];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_230 [40];
  undefined1 auStack_208 [48];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b0 [72];
  undefined8 uStack_168;
  undefined8 uStack_160;
  
  plVar6 = (longlong *)func_0x000144e03080(*(undefined8 *)(param_2 + 400),param_3);
  lVar7 = FUN_145012550(param_2,param_5);
  (**(code **)(**(longlong **)(lVar7 + 0x9a8) + 0x18))(*(longlong **)(lVar7 + 0x9a8),&uStack_2a8,0);
  cVar2 = func_0x000144e03060(param_4);
  if (cVar2 == '\0') {
    (**(code **)(*plVar6 + 0x20))(plVar6,&plStack_2b8);
  }
  else {
    (**(code **)(*plVar6 + 0x20))(plVar6,&uStack_168);
    FUN_14505ef20(&uStack_168,&plStack_2b8);
  }
  FUN_144df1bf0(auStack_208,&uStack_2a8,&plStack_2b8);
  FUN_144df1ba0(auStack_230,&uStack_2a8,&plStack_2b8,1);
  FUN_144df1c70(auStack_1b0,&plStack_2b8,0);
  iVar5 = iStack_2b0;
  plVar6 = plStack_2b8;
  iVar3 = func_0x000144e05fa0(plStack_2b8[1]);
  uStack_248 = _DAT_145fc6ee0;
  uStack_240 = _UNK_145fc6ee8;
  if (iVar5 != iVar3) {
    uVar4 = (**(code **)(*plVar6 + 0xf0))(plVar6,iVar5);
    (**(code **)(*plVar6 + 0x108))(plVar6,uVar4);
    uStack_248 = uStack_168;
    uStack_240 = uStack_160;
  }
  aplStack_258[0] = plStack_2b8;
  uStack_268 = uStack_2a8;
  uStack_260 = uStack_2a0;
  FUN_144df2420(&uStack_168,lVar7,auStack_208,auStack_230,auStack_1b0,&uStack_268,aplStack_258,
                &uStack_248,1,0,1,0,0,0);
  FUN_144e08210(&fStack_298,auStack_288,&uStack_168,0,1);
  if (_DAT_146159ec4 < fStack_298) {
    iVar5 = func_0x000144e05fa0(plStack_2b8[1]);
    if (iStack_2b0 == iVar5) {
      auStack_1c8._0_12_ = ZEXT812(0);
      auStack_1c8._12_4_ = 0;
    }
    else {
      uVar4 = (**(code **)(*plStack_2b8 + 0xf0))(plStack_2b8,iStack_2b0);
      (**(code **)(*plStack_2b8 + 0x108))(plStack_2b8,uVar4,auStack_1d8);
    }
    auVar1 = vsubps_avx(auStack_278,auStack_1c8);
    *param_1 = auVar1;
    *(ulonglong *)param_1[1] = CONCAT44(uStack_294,fStack_298);
    *(undefined8 *)(param_1[1] + 8) = uStack_290;
  }
  FUN_144df1cf0(&uStack_168);
  return;
}

