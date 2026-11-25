// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141fb2600  size: 372 bytes
// Name:    FUN_141fb2600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_141fb2600(longlong *param_1,longlong *param_2,int param_3,int *param_4,longlong *param_5,
             undefined8 param_6,longlong param_7,undefined8 *param_8)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uStack_78;
  ulonglong uStack_70;
  
  if (param_4 == (int *)0x0) {
    if (param_8 == (undefined8 *)0x0) {
      iVar2 = (**(code **)(*param_5 + 0x60))(param_5,param_6,param_7,&uStack_78,0x10);
      if (iVar2 != 0x10) {
        return 0;
      }
    }
    else {
      uStack_78 = *param_8;
      uStack_70 = param_8[1];
    }
    if ((int)uStack_78 == 0x52504639) {
      iVar2 = *(int *)((longlong)&uStack_78 + (ulonglong)(param_3 != 0) * 4 + 4);
      puVar4 = (undefined8 *)func_0x000144f97130(iVar2);
      *param_1 = (longlong)puVar4;
      iVar2 = iVar2 + -0x10;
      *puVar4 = uStack_78;
      puVar4[1] = uStack_70;
      iVar3 = (**(code **)(*param_5 + 0x60))(param_5,param_6,param_7 + 0x10,puVar4 + 2,iVar2);
      if (iVar3 == iVar2) {
        if (param_3 == 1) {
          uVar7 = uStack_70 & 0xffffffff;
          if (uStack_78._4_4_ != (int)uStack_70) {
            iVar2 = uStack_78._4_4_ - (int)uStack_70;
            lVar5 = func_0x000144d9c160(iVar2,1);
            lVar1 = *param_2;
            lVar6 = lVar1;
            if (lVar1 != lVar5) {
              *param_2 = lVar5;
              lVar6 = lVar5;
              lVar5 = lVar1;
            }
            if (lVar5 != 0) {
              func_0x000144d9c130(lVar5);
              lVar6 = *param_2;
            }
            iVar3 = (**(code **)(*param_5 + 0x60))(param_5,param_6,uVar7 + param_7,lVar6,iVar2);
            if (iVar3 != iVar2) {
              return 0;
            }
          }
        }
        return 1;
      }
    }
  }
  else {
    *param_1 = (longlong)param_4;
    if (*param_4 == 0x52504639) {
      return 1;
    }
  }
  return 0;
}

