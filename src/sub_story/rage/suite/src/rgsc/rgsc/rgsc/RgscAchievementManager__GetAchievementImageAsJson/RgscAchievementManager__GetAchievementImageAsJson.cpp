// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14561b570  size: 798 bytes
// Name:    RgscAchievementManager::GetAchievementImageAsJson
// Subsystem: core
// Class:   RgscAchievementManager
//
// Evidence:
//   GTAVSRC: RgscAchievementManager::GetAchievementImageAsJson  (rage/suite/src/rgsc/rgsc/rgsc/achievements.cpp)
//   literal: AchievementId
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14562d3a0, FUN_1455f0130, FUN_14562c320, FUN_14561cee0, FUN_145613720, FUN_1456175d0, FUN_1455ea040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/RgscAchievementManager.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void RgscAchievementManager__GetAchievementImageAsJson
               (undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 auStack_148 [48];
  undefined8 uStack_118;
  ulonglong uStack_110;
  undefined *puStack_108;
  undefined4 uStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  longlong lStack_e8;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1467e2038 ^ (ulonglong)auStack_148;
  uStack_d8 = 0;
  uStack_d0 = 0x3000000000000;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = _DAT_145f43040;
  uStack_90 = _UNK_145f43048;
  uStack_88 = 0;
  uStack_80 = 0;
  puStack_f8 = param_1;
  uVar8 = (*(code *)PTR__guard_dispatch_icall_14678f658)(1);
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uStack_c8 = uVar8;
  uStack_c0 = uVar8;
  puVar9 = (undefined4 *)FUN_1456175d0(auStack_58,param_2,uVar8);
  uStack_110 = 0x40500014678ddd0;
  uStack_118 = 0xd;
  uVar10 = (ulonglong)uStack_d8._4_4_;
  if (uStack_d8._4_4_ <= (uint)uStack_d8) {
    if (uStack_d8._4_4_ == 0) {
      uStack_d8 = CONCAT44(0x10,(uint)uStack_d8);
      uVar10 = func_0x00014562c300(uVar8,0x200);
    }
    else {
      uStack_d8._4_4_ = (uStack_d8._4_4_ + 1 >> 1) + uStack_d8._4_4_;
      uVar10 = FUN_14562c320(uVar8,uStack_d0 & 0xffffffffffff,uVar10 << 5,
                             (ulonglong)uStack_d8._4_4_ << 5);
    }
    uStack_d0 = uStack_d0 & 0xffff000000000000 | uVar10;
  }
  puVar11 = (undefined8 *)((uStack_d8 & 0xffffffff) * 0x20 + (uStack_d0 & 0xffffffffffff));
  *puVar11 = uStack_118;
  puVar11[1] = uStack_110;
  uStack_110 = uStack_110 & 0xffffffffffff;
  uVar5 = puVar9[1];
  uVar6 = puVar9[2];
  uVar7 = puVar9[3];
  puVar2 = (undefined4 *)((uStack_d8 & 0xffffffff) * 0x20 + 0x10 + (uStack_d0 & 0xffffffffffff));
  *puVar2 = *puVar9;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined2 *)((longlong)puVar9 + 0xe) = 0;
  uStack_d8 = CONCAT44(uStack_d8._4_4_,(uint)uStack_d8 + 1);
  FUN_1455f0130(&uStack_118);
  FUN_1455f0130(auStack_58);
  puStack_108 = &UNK_14678daf8;
  uStack_100 = 0xf;
  FUN_14561cee0(&uStack_d8,&puStack_108,param_3,uStack_c8);
  FUN_14562d3a0(&uStack_78,&uStack_d8);
  puVar11 = (undefined8 *)func_0x0001455fab90(*param_1,auStack_f0);
  puVar12 = &uStack_78;
  if (0xf < uStack_60) {
    puVar12 = (undefined1 *)CONCAT71(uStack_77,uStack_78);
  }
  (*(code *)PTR__guard_dispatch_icall_14678f658)(*puVar11,&UNK_14678db98,puVar12,0);
  if (lStack_e8 != 0) {
    LOCK();
    piVar1 = (int *)(lStack_e8 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)PTR__guard_dispatch_icall_14678f658)(lStack_e8);
      LOCK();
      piVar1 = (int *)(lStack_e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_14678f658)(lStack_e8);
      }
    }
  }
  if (0xf < uStack_60) {
    FUN_145613720(CONCAT71(uStack_77,uStack_78),0);
  }
  uStack_68 = 0;
  uStack_60 = 0xf;
  uStack_78 = 0;
  (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_c0);
  (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_a8);
  (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_b0);
  FUN_1455f0130(&uStack_d8);
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar4);
      LOCK();
      piVar1 = (int *)(lVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar4);
      }
    }
  }
  FUN_1455ea040(uStack_48 ^ (ulonglong)auStack_148);
  return;
}

