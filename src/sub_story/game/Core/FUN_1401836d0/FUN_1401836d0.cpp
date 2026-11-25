// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401836d0  size: 607 bytes
// Name:    FUN_1401836d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140183b70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_1401836d0(undefined8 param_1,int *param_2,longlong *param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iStack_60;
  int iStack_5c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  iVar1 = *param_2;
  if (iVar1 == 3) {
code_r0x0001401836e5:
    uStack_40 = *(undefined8 *)(param_2 + 4);
    iStack_60 = param_2[1];
    auStack_50._0_12_ = ZEXT812(0);
    auStack_50._12_4_ = 0;
    iStack_5c = 0;
    if (iVar1 == 6) {
      iStack_5c = param_2[2];
    }
  }
  else {
    uVar2 = 0;
    switch(iVar1) {
    case 1:
      uStack_40 = *(undefined8 *)(param_2 + 4);
      auStack_50 = ZEXT816(0);
      iStack_60 = 1;
      break;
    case 2:
      iStack_5c = param_2[2];
      uStack_40 = *(undefined8 *)(param_2 + 4);
      auStack_50._0_12_ = ZEXT812(0);
      auStack_50._12_4_ = 0;
      iStack_60 = 2;
      goto code_r0x00014018371e;
    default:
      goto code_r0x000140183724;
    case 4:
      plVar3 = *(longlong **)(param_2 + 2);
      if ((plVar3 != (longlong *)0x0) &&
         (uVar4 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_4), uVar4 != 0)) {
        uStack_58 = (undefined2)param_2[6];
        uStack_40 = *(undefined8 *)(param_2 + 4);
        iStack_60 = param_2[1];
        iStack_5c = 0;
        uStack_38 = 0;
        uStack_56 = 0;
        func_0x00014503e5b0(uVar4);
        auStack_50._8_8_ = 0;
        auStack_50._0_8_ = uVar4;
        if ((*(byte *)((longlong)param_2 + 0x1a) & 1) != 0) {
          uStack_38 = 1;
        }
        uVar2 = FUN_140183b70(param_1,&iStack_60);
        goto code_r0x000140183802;
      }
      uStack_40 = *(undefined8 *)(param_2 + 4);
      auStack_50._0_12_ = ZEXT812(0);
      auStack_50._12_4_ = 0;
      iStack_60 = 2;
      break;
    case 5:
      plVar3 = (longlong *)FUN_1401851d0(param_1,*(undefined8 *)(param_2 + 2),param_5);
      if ((longlong *)*param_3 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*param_3 + 0x10))();
      }
      *param_3 = (longlong)plVar3;
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      iVar1 = param_2[6];
      uVar4 = (**(code **)(*plVar3 + 0xa8))(plVar3,param_4);
      uStack_40 = *(undefined8 *)(param_2 + 4);
      iStack_60 = param_2[1];
      iStack_5c = 0;
      uStack_56 = 0;
      uStack_58 = (short)iVar1;
      if (uVar4 != 0) {
        func_0x00014503e5b0(uVar4);
      }
      auStack_50._8_8_ = 0;
      auStack_50._0_8_ = uVar4;
      uStack_38 = 1;
      uVar2 = FUN_140183b70(param_1);
      if (uVar4 == 0) {
        return uVar2;
      }
code_r0x000140183802:
      func_0x00014503e5c0(uVar4);
      goto code_r0x000140183724;
    case 6:
      goto code_r0x0001401836e5;
    }
    iStack_5c = 0;
  }
code_r0x00014018371e:
  uStack_56 = 0;
  uStack_58 = 0;
  uStack_38 = 0;
  uVar2 = FUN_140183b70(param_1,&iStack_60);
code_r0x000140183724:
  return uVar2;
}

