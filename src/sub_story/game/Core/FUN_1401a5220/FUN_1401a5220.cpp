// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a5220  size: 1796 bytes
// Name:    FUN_1401a5220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144feae70, FUN_1450ce180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a5220(longlong *param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_18;
  undefined2 uStack_14;
  
  if (param_3 != 0) {
    puVar4 = (undefined4 *)(param_3 + 0x12);
    if (*param_1 == 0) {
      uStack_14 = *(undefined2 *)(param_3 + 0x16);
      uStack_18 = *puVar4;
      (*(code *)param_1[1])
                (*(undefined8 *)(param_3 + 8),&uStack_18,
                 CONCAT62((int6)((ulonglong)puVar4 >> 0x10),1),1);
    }
    else {
      uStack_14 = *(undefined2 *)(param_3 + 0x16);
      uStack_18 = *puVar4;
      (*(code *)param_1[1])(*param_1,*(undefined8 *)(param_3 + 8),&uStack_18,1,1);
    }
  }
  if (_DAT_14849b9a8 != 0) {
    puVar4 = (undefined4 *)(_DAT_14849b9a8 + 0x18);
    if (*param_1 == 0) {
      uStack_14 = *(undefined2 *)(_DAT_14849b9a8 + 0x1c);
      uStack_18 = *puVar4;
      (*(code *)param_1[1])
                (*(undefined8 *)(_DAT_14849b9a8 + 8),&uStack_18,1,
                 CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
    }
    else {
      uStack_14 = *(undefined2 *)(_DAT_14849b9a8 + 0x1c);
      uStack_18 = *puVar4;
      (*(code *)param_1[1])();
    }
  }
  if (*(longlong *)((ulonglong)_DAT_14849bb7c * 8 + 0x14849b9c0) != 0) {
    lVar1 = *(longlong *)((ulonglong)_DAT_14849bb7c * 8 + 0x14849b9b0);
    puVar4 = (undefined4 *)(lVar1 + 0x12);
    if (*param_1 == 0) {
      uStack_14 = *(undefined2 *)(lVar1 + 0x16);
      uStack_18 = *puVar4;
      (*(code *)param_1[1])
                (*(undefined8 *)(lVar1 + 8),&uStack_18,1,CONCAT71((int7)((ulonglong)puVar4 >> 8),1))
      ;
    }
    else {
      uStack_14 = *(undefined2 *)(lVar1 + 0x16);
      uStack_18 = *puVar4;
      (*(code *)param_1[1])();
    }
  }
  lVar1 = func_0x000140134cd0();
  if (lVar1 != 0) {
    if (*param_1 == 0) {
      uStack_18 = 0xffffffff;
      uStack_14 = 0xffff;
      (*(code *)param_1[1])(lVar1,&uStack_18,1,1);
    }
    else {
      uStack_18 = 0xffffffff;
      uStack_14 = 0xffff;
      (*(code *)param_1[1])(*param_1,lVar1,&uStack_18,1,1);
    }
  }
  lVar1 = func_0x000140134ce0();
  if (lVar1 != 0) {
    if (*param_1 == 0) {
      uStack_18 = 0xffffffff;
      uStack_14 = 0xffff;
      (*(code *)param_1[1])(lVar1,&uStack_18,1,1);
    }
    else {
      uStack_18 = 0xffffffff;
      uStack_14 = 0xffff;
      (*(code *)param_1[1])(*param_1,lVar1,&uStack_18,1,1);
    }
  }
  lVar1 = func_0x000140134cf0();
  if (lVar1 != 0) {
    if (*param_1 == 0) {
      uStack_18 = 0xffffffff;
      uStack_14 = 0xffff;
      (*(code *)param_1[1])(lVar1,&uStack_18,7,1);
    }
    else {
      uStack_18 = 0xffffffff;
      uStack_14 = 0xffff;
      (*(code *)param_1[1])(*param_1,lVar1,&uStack_18,7,1);
    }
  }
  lVar1 = *(longlong *)((longlong)_DAT_1492acac0 * 8 + 0x1492acaa0);
  puVar3 = (undefined8 *)&DAT_14a958670;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(lVar1 + 8);
  }
  if (*param_1 == 0) {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(*puVar3,&uStack_18,1,1);
  }
  else {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])();
  }
  lVar1 = *(longlong *)((ulonglong)param_2 * 8 + 0x14849b890);
  if (lVar1 != 0) {
    if (*param_1 == 0) {
      uStack_14 = *(undefined2 *)(lVar1 + 0x16);
      uStack_18 = *(undefined4 *)(lVar1 + 0x12);
      (*(code *)param_1[1])(*(undefined8 *)(lVar1 + 8),&uStack_18,5,0);
    }
    else {
      uStack_14 = *(undefined2 *)(lVar1 + 0x16);
      uStack_18 = *(undefined4 *)(lVar1 + 0x12);
      (*(code *)param_1[1])();
    }
  }
  puVar4 = (undefined4 *)(_DAT_14849b998 + 0x18);
  if (*param_1 == 0) {
    uStack_14 = *(undefined2 *)(_DAT_14849b998 + 0x1c);
    uStack_18 = *puVar4;
    (*(code *)param_1[1])
              (*(undefined8 *)(_DAT_14849b998 + 8),&uStack_18,1,
               CONCAT71((int7)((ulonglong)puVar4 >> 8),1));
  }
  else {
    uStack_14 = *(undefined2 *)(_DAT_14849b998 + 0x1c);
    uStack_18 = *puVar4;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(*(undefined8 *)(_DAT_14849bab0 + 8),&uStack_18,1,1);
  }
  else {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])();
  }
  if (*param_1 == 0) {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(0x148492dd0,&uStack_18,7,1);
  }
  else {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(*param_1,0x148492dd0,&uStack_18,7,1);
  }
  if (*param_1 == 0) {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(_DAT_148fcfa98,&uStack_18,1,1);
  }
  else {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])();
  }
  uVar2 = FUN_144feae70();
  if (*param_1 == 0) {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_18,1,1);
  }
  else {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_18,1,1);
  }
  uVar2 = FUN_1450ce180();
  if (*param_1 == 0) {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_18,1,1);
  }
  else {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_18,1,1);
  }
  uVar2 = func_0x0001450ccad0();
  if (*param_1 == 0) {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(uVar2,&uStack_18,1,1);
  }
  else {
    uStack_18 = 0xffffffff;
    uStack_14 = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar2,&uStack_18,1,1);
  }
  lVar1 = func_0x0001450cc790();
  if (*param_1 == 0) {
    uStack_14 = *(undefined2 *)(lVar1 + 0x16);
    uStack_18 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar1 + 8),&uStack_18,
               CONCAT62((int6)((ulonglong)&uStack_18 >> 0x10),1),1);
  }
  else {
    uStack_14 = *(undefined2 *)(lVar1 + 0x16);
    uStack_18 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar1 = func_0x0001450cc7c0();
  if (*param_1 == 0) {
    uStack_14 = *(undefined2 *)(lVar1 + 0x16);
    uStack_18 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar1 + 8),&uStack_18,
               CONCAT62((int6)((ulonglong)&uStack_18 >> 0x10),1),1);
  }
  else {
    uStack_14 = *(undefined2 *)(lVar1 + 0x16);
    uStack_18 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  return;
}

