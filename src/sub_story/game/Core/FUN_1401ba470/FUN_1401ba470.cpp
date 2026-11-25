// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ba470  size: 1589 bytes
// Name:    FUN_1401ba470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401ba470(undefined8 param_1,undefined8 *param_2)

{
  undefined8 ***pppuVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 ***unaff_RSI;
  undefined8 ***pppuVar6;
  ulonglong uVar7;
  undefined8 **appuStack_178 [2];
  undefined4 uStack_168;
  undefined4 uStack_164;
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
  undefined8 *apuStack_60 [3];
  undefined8 *apuStack_48 [3];
  undefined8 *apuStack_30 [3];
  
  switch(*(undefined4 *)(param_2 + 0x15)) {
  case 0:
    uStack_168 = *(undefined4 *)param_2;
    unaff_RSI = (undefined8 ***)param_2[0x14];
    appuStack_178[0] = unaff_RSI;
    if (unaff_RSI == (undefined8 ***)0x0) {
      func_0x0001456aadc0();
      goto code_r0x0001401ba4df;
    }
    LOCK();
    *(int *)(unaff_RSI + 2) = *(int *)(unaff_RSI + 2) + 1;
    UNLOCK();
    func_0x0001456aadc0();
code_r0x0001401ba70b:
    LOCK();
    pppuVar6 = unaff_RSI + 2;
    *(int *)pppuVar6 = *(int *)pppuVar6 + -1;
    UNLOCK();
    if (*(int *)pppuVar6 != 0) goto code_r0x0001401ba4df;
    ppuVar4 = *unaff_RSI;
    pppuVar6 = unaff_RSI;
    goto code_r0x0001401ba7a1;
  case 1:
    uStack_168 = *(undefined4 *)param_2;
    unaff_RSI = (undefined8 ***)param_2[0x14];
    appuStack_178[0] = unaff_RSI;
    if (unaff_RSI != (undefined8 ***)0x0) {
      LOCK();
      *(int *)(unaff_RSI + 2) = *(int *)(unaff_RSI + 2) + 1;
      UNLOCK();
      func_0x0001443834e0();
      goto code_r0x0001401ba70b;
    }
    func_0x0001443834e0();
    goto code_r0x0001401ba4df;
  case 2:
    uStack_168 = *(undefined4 *)param_2;
    unaff_RSI = (undefined8 ***)param_2[0x14];
    appuStack_178[0] = unaff_RSI;
    if (unaff_RSI != (undefined8 ***)0x0) {
      LOCK();
      *(int *)(unaff_RSI + 2) = *(int *)(unaff_RSI + 2) + 1;
      UNLOCK();
      func_0x000144383510();
      goto code_r0x0001401ba70b;
    }
    func_0x000144383510();
    goto code_r0x0001401ba4df;
  case 3:
    uStack_78 = *param_2;
    uStack_70 = param_2[1];
    func_0x0001401baab0(appuStack_178,param_2[0x14]);
    func_0x0001401bba20(param_1,appuStack_178);
    break;
  case 4:
    uStack_88 = *param_2;
    uStack_80 = param_2[1];
    func_0x0001401baab0(appuStack_178,param_2[0x14]);
    func_0x0001401baaf0(param_1,appuStack_178);
    break;
  case 5:
    uStack_98 = *param_2;
    uStack_90 = param_2[1];
    func_0x0001401baab0(appuStack_178,param_2[0x14]);
    func_0x0001456aac00(param_1,appuStack_178);
    break;
  case 6:
    uStack_164 = *(undefined4 *)param_2;
    uStack_168 = *(undefined4 *)((longlong)param_2 + 4);
    unaff_RSI = (undefined8 ***)param_2[0x14];
    appuStack_178[0] = unaff_RSI;
    if (unaff_RSI != (undefined8 ***)0x0) {
      LOCK();
      *(int *)(unaff_RSI + 2) = *(int *)(unaff_RSI + 2) + 1;
      UNLOCK();
      func_0x000144383570();
      goto code_r0x0001401ba70b;
    }
    func_0x000144383570();
    goto code_r0x0001401ba4df;
  case 7:
    uStack_164 = *(undefined4 *)param_2;
    uStack_168 = *(undefined4 *)((longlong)param_2 + 4);
    unaff_RSI = (undefined8 ***)param_2[0x14];
    appuStack_178[0] = unaff_RSI;
    if (unaff_RSI != (undefined8 ***)0x0) {
      LOCK();
      *(int *)(unaff_RSI + 2) = *(int *)(unaff_RSI + 2) + 1;
      UNLOCK();
      func_0x0001443835a0();
      goto code_r0x0001401ba70b;
    }
    func_0x0001443835a0();
    goto code_r0x0001401ba4df;
  case 8:
    uStack_164 = *(undefined4 *)param_2;
    uStack_168 = *(undefined4 *)((longlong)param_2 + 4);
    unaff_RSI = (undefined8 ***)param_2[0x14];
    appuStack_178[0] = unaff_RSI;
    if (unaff_RSI != (undefined8 ***)0x0) {
      LOCK();
      *(int *)(unaff_RSI + 2) = *(int *)(unaff_RSI + 2) + 1;
      UNLOCK();
      func_0x0001456aacc0();
      goto code_r0x0001401ba70b;
    }
    func_0x0001456aacc0();
    goto code_r0x0001401ba4df;
  case 9:
    uStack_b8 = *param_2;
    uStack_b0 = param_2[1];
    pppuVar6 = (undefined8 ***)apuStack_48;
    FUN_144e0a8d0(pppuVar6,&uStack_b8);
    func_0x0001401bab20(appuStack_178,param_2[0x14],pppuVar6);
    func_0x0001401bb170(param_1,appuStack_178);
    goto code_r0x0001401ba4d0;
  case 10:
    uStack_c8 = *param_2;
    uStack_c0 = param_2[1];
    pppuVar6 = (undefined8 ***)apuStack_30;
    FUN_144e0a8d0(pppuVar6,&uStack_c8);
    func_0x0001401bab20(appuStack_178,param_2[0x14],pppuVar6);
    func_0x0001456aadf0(param_1,appuStack_178);
    goto code_r0x0001401ba4d0;
  case 0xb:
    uStack_a8 = *param_2;
    uStack_a0 = param_2[1];
    pppuVar6 = (undefined8 ***)apuStack_60;
    FUN_144e0a8d0(pppuVar6,&uStack_a8);
    func_0x0001401bab20(appuStack_178,param_2[0x14],pppuVar6);
    func_0x0001401bab50(param_1,appuStack_178);
    goto code_r0x0001401ba4d0;
  case 0xc:
    FUN_144383d90(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0xc;
    goto code_r0x0001401ba620;
  case 0xd:
    FUN_144383d90(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0xd;
    goto code_r0x0001401ba9df;
  case 0xe:
    FUN_144383d90(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0xe;
    goto code_r0x0001401baa11;
  case 0xf:
    FUN_1401bbd20(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0xf;
code_r0x0001401ba620:
    FUN_1401bbda0(param_1,uVar5,appuStack_178);
    break;
  case 0x10:
    FUN_1401bbd20(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0x10;
code_r0x0001401ba9df:
    FUN_1401bbda0(param_1,uVar5,appuStack_178);
    break;
  case 0x11:
    FUN_1401bbd20(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0x11;
code_r0x0001401baa11:
    FUN_1401bbda0(param_1,uVar5,appuStack_178);
    break;
  case 0x12:
    func_0x0001401bbd70(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0x12;
    goto code_r0x0001401ba652;
  case 0x13:
    func_0x0001401bbd70(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0x13;
    goto code_r0x0001401ba684;
  case 0x14:
    func_0x0001401bbd70(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0x14;
    goto code_r0x0001401ba983;
  case 0x15:
    func_0x0001401bbd70(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0x15;
code_r0x0001401ba652:
    func_0x0001401bbe50(param_1,uVar5,appuStack_178);
    break;
  case 0x16:
    func_0x0001401bbd70(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0x16;
code_r0x0001401ba684:
    func_0x0001401bbe50(param_1,uVar5,appuStack_178);
    break;
  case 0x17:
    func_0x0001401bbd70(appuStack_178,param_2[0x14],param_2);
    uVar5 = 0x17;
code_r0x0001401ba983:
    func_0x0001401bbe50(param_1,uVar5,appuStack_178);
    break;
  case 0x18:
    puVar3 = (undefined8 *)param_2[0x14];
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
      UNLOCK();
      func_0x0001401baad0(param_1,puVar3);
      LOCK();
      piVar2 = (int *)(puVar3 + 2);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      goto LAB_1401ba4e2;
    }
    func_0x0001401baad0(param_1,0);
    goto code_r0x0001401ba4df;
  default:
    uVar7 = 0;
    goto LAB_1401ba4e2;
  }
  pppuVar6 = appuStack_178;
code_r0x0001401ba4d0:
  unaff_RSI = pppuVar6;
  if ((undefined8 ***)appuStack_178[0] != (undefined8 ***)0x0) {
    LOCK();
    pppuVar1 = (undefined8 ***)(appuStack_178[0] + 2);
    *(int *)pppuVar1 = *(int *)pppuVar1 + -1;
    UNLOCK();
    if (*(int *)pppuVar1 == 0) {
      ppuVar4 = (undefined8 **)*appuStack_178[0];
      unaff_RSI = (undefined8 ***)appuStack_178[0];
code_r0x0001401ba7a1:
      (*(code *)*ppuVar4)(unaff_RSI,1);
      unaff_RSI = pppuVar6;
    }
  }
code_r0x0001401ba4df:
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_1401ba4e2:
  return uVar7 & 0xffffffff;
}

