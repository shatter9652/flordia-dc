// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145626c80  size: 2520 bytes
// Name:    netXblHttp::GetAuthActorHeaderName
// Subsystem: core
// Class:   netXblHttp
//
// Evidence:
//   GTAVSRC: netXblHttp::GetAuthActorHeaderName  (rage/base/src/rline/durango/private/rlxblhttptask.cpp)
//   literal: x-xbl-contract-version
//
// Referenced strings (2 in this body, 2 including direct callees):
//   "userpresence"
//   "x-xbl-contract-version"
// Callees: FUN_145615600, FUN_145615060, FUN_145632510, FUN_145628110, FUN_145613720, FUN_1456262c0, FUN_1455ea720, FUN_1456138c0, FUN_145617470, FUN_1455f0130, FUN_14561cd90, FUN_1456136d0, FUN_1455ea610, FUN_1455ea040, FUN_141b332b0, FUN_1455f14a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netXblHttp.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void netXblHttp__GetAuthActorHeaderName(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auStack_368 [32];
  undefined4 uStack_348;
  undefined8 uStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [8];
  longlong lStack_308;
  undefined1 auStack_300 [8];
  longlong lStack_2f8;
  undefined8 uStack_2f0;
  undefined *apuStack_2e8 [4];
  undefined1 auStack_2c8 [16];
  longlong *plStack_2b8;
  longlong *plStack_2b0;
  longlong *plStack_298;
  ulonglong *puStack_290;
  int *piStack_280;
  ulonglong uStack_268;
  uint uStack_260;
  undefined1 auStack_250 [104];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  longlong lStack_1d0;
  int aiStack_1c8 [2];
  undefined1 auStack_1c0 [40];
  ulonglong uStack_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [24];
  ulonglong auStack_170 [2];
  undefined8 uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined8 uStack_140;
  ulonglong uStack_138;
  undefined8 *apuStack_130 [2];
  undefined8 uStack_120;
  ulonglong uStack_118;
  undefined8 auStack_110 [2];
  undefined8 uStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = _DAT_1467e2038 ^ (ulonglong)auStack_368;
  apuStack_2e8[0] = &UNK_145f42df8;
  apuStack_2e8[2] = &UNK_145f42e00;
  __0__basic_ios_DU__char_traits_D_std___std__IEAA_XZ(auStack_250);
  __0__basic_iostream_DU__char_traits_D_std___std__QEAA_PEAV__basic_streambuf_DU__char_traits_D_std___1__Z
            (apuStack_2e8,apuStack_2e8 + 3,0);
  *(undefined **)((longlong)apuStack_2e8 + (longlong)*(int *)(apuStack_2e8[0] + 4)) = &UNK_145f42df0
  ;
  *(int *)((longlong)apuStack_2e8 + (longlong)*(int *)(apuStack_2e8[0] + 4) + -4) =
       *(int *)(apuStack_2e8[0] + 4) + -0x98;
  __0__basic_streambuf_DU__char_traits_D_std___std__IEAA_XZ(apuStack_2e8 + 3);
  apuStack_2e8[3] = &UNK_145f42d70;
  uStack_268 = 0;
  uStack_260 = 0;
  uVar6 = FUN_141b332b0(apuStack_2e8 + 2,&UNK_14678e2e0);
  uVar7 = func_0x000145615980(param_1 + 0x10);
  uVar6 = __6__basic_ostream_DU__char_traits_D_std___std__QEAAAEAV01__K_Z(uVar6,uVar7);
  FUN_141b332b0(uVar6,&UNK_14678d5b0);
  FUN_145615600(param_1 + 0x10,aiStack_1c8);
  if (aiStack_1c8[0] < 0) {
    FUN_145615060(auStack_1c0);
    *(undefined **)((longlong)apuStack_2e8 + (longlong)*(int *)(apuStack_2e8[0] + 4)) =
         &UNK_145f42df0;
    *(int *)((longlong)apuStack_2e8 + (longlong)*(int *)(apuStack_2e8[0] + 4) + -4) =
         *(int *)(apuStack_2e8[0] + 4) + -0x98;
    FUN_1455ea720(apuStack_2e8 + 3);
    __1__basic_iostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_2c8);
    __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_250);
    lVar9 = *(longlong *)(param_3 + 8);
    if (lVar9 != 0) {
      (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar9,0);
      FUN_145613720(lVar9,0);
    }
    func_0x000145613940(param_3);
    goto LAB_1456275f2;
  }
  FUN_14561cd90(&uStack_338,auStack_1c0);
  uVar6 = uStack_338;
  auStack_88[0] = 0;
  uStack_78 = 0;
  uStack_70 = 0xf;
  lStack_328 = 0;
  lStack_320 = 0;
  uStack_318 = 0;
  if ((((byte)uStack_260 & 0x22) == 2) || (uVar2 = *puStack_290, uVar2 == 0)) {
    if (((uStack_260 & 4) == 0) && (*plStack_298 != 0)) {
      lStack_328 = *plStack_2b8;
      lStack_320 = (*piStack_280 - lStack_328) + *plStack_298;
    }
  }
  else {
    lStack_328 = *plStack_2b0;
    uVar12 = uVar2;
    if (uVar2 < uStack_268) {
      uVar12 = uStack_268;
    }
    lStack_320 = uVar12 - lStack_328;
    uStack_198 = uVar2;
  }
  if (lStack_328 != 0) {
    FUN_1455ea610(auStack_88,lStack_328,lStack_320);
  }
  uStack_138 = 0xf;
  uStack_140 = 0xc;
  uStack_150 = _DAT_14678dd00;
  uStack_148 = _DAT_14678dd08;
  uStack_144 = 0;
  uVar7 = FUN_145632510(&uStack_68,&uStack_150,auStack_88);
  uStack_158 = 0xf;
  uStack_160 = 4;
  auStack_170[0] = 0x54534f50;
  uStack_1e0 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x48) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uStack_1e0 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = uStack_338;
  }
  uStack_1e8 = *(undefined8 *)(param_1 + 0x40);
  uStack_348 = 0x47;
  iVar5 = (*(code *)PTR__guard_dispatch_icall_14678f658)(uVar6,&uStack_1e8,auStack_170,uVar7);
  if (0xf < uStack_158) {
    FUN_145613720(auStack_170[0],0);
  }
  uStack_160 = 0;
  uStack_158 = 0xf;
  auStack_170[0] = auStack_170[0] & 0xffffffffffffff00;
  if (0xf < uStack_50) {
    FUN_145613720(CONCAT71(uStack_67,uStack_68),0);
  }
  uStack_58 = 0;
  uStack_50 = 0xf;
  uStack_68 = 0;
  if (0xf < uStack_138) {
    FUN_145613720(uStack_150,0);
  }
  uStack_140 = 0;
  uStack_138 = 0xf;
  uStack_150 = uStack_150 & 0xffffffffffffff00;
  if (0xf < uStack_70) {
    FUN_145613720(auStack_88[0],0);
  }
  if (iVar5 < 0) {
    if (lStack_330 != 0) {
      LOCK();
      piVar1 = (int *)(lStack_330 + 8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)PTR__guard_dispatch_icall_14678f658)(lStack_330);
        LOCK();
        piVar1 = (int *)(lStack_330 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (*(code *)PTR__guard_dispatch_icall_14678f658)();
        }
      }
    }
    FUN_145615060(auStack_1c0);
    *(undefined **)((longlong)apuStack_2e8 + (longlong)*(int *)(apuStack_2e8[0] + 4)) =
         &UNK_145f42df0;
    *(int *)((longlong)apuStack_2e8 + (longlong)*(int *)(apuStack_2e8[0] + 4) + -4) =
         *(int *)(apuStack_2e8[0] + 4) + -0x98;
    FUN_1455ea720(apuStack_2e8 + 3);
    __1__basic_iostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_2c8);
    __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_250);
    lVar9 = *(longlong *)(param_3 + 8);
    if (lVar9 != 0) {
      (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar9,0);
      FUN_145613720(lVar9,0);
    }
    func_0x000145613940(param_3);
    goto LAB_1456275f2;
  }
  uStack_e8 = 0;
  uStack_e0 = 0x3000000000000;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = _DAT_145f43040;
  uStack_a0 = _UNK_145f43048;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_d8 = (*(code *)PTR__guard_dispatch_icall_14678f658)(1);
  uStack_d0 = uStack_d8;
  FUN_1456262c0(param_2,&uStack_e8,uStack_d8);
  iVar5 = (*(code *)PTR__guard_dispatch_icall_14678f658)(uVar6,&uStack_e8);
  if (iVar5 < 0) {
    (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_d0);
    (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_b8);
    (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_c0);
LAB_1456271ef:
    FUN_1455f0130(&uStack_e8);
    if (lStack_330 != 0) {
      LOCK();
      piVar1 = (int *)(lStack_330 + 8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)PTR__guard_dispatch_icall_14678f658)(lStack_330);
        LOCK();
        piVar1 = (int *)(lStack_330 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (*(code *)PTR__guard_dispatch_icall_14678f658)();
        }
      }
    }
    FUN_145615060(auStack_1c0);
    *(undefined **)((longlong)apuStack_2e8 + (longlong)*(int *)(apuStack_2e8[0] + 4)) =
         &UNK_145f42df0;
  }
  else {
    uStack_f8 = 0xf;
    uStack_100 = 1;
    auStack_110[0] = 0x33;
    puVar8 = (undefined8 *)FUN_1456136d0(0x20);
    uVar7 = _UNK_145fc0078;
    if (puVar8 == (undefined8 *)0x0) {
LAB_14562763c:
      func_0x0001455ea160(&lStack_328);
      func_0x000145f40450(&lStack_328,&UNK_1467e1988);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uStack_120 = 0x16;
    uStack_118 = 0x1f;
    *puVar8 = _DAT_145fc0070;
    puVar8[1] = uVar7;
    *(undefined4 *)(puVar8 + 2) = _DAT_145fc0080;
    *(undefined2 *)((longlong)puVar8 + 0x14) = _DAT_145fc0084;
    *(undefined1 *)((longlong)puVar8 + 0x16) = 0;
    apuStack_130[0] = puVar8;
    iVar5 = (*(code *)PTR__guard_dispatch_icall_14678f658)(uVar6,apuStack_130,auStack_110,1);
    if (0xf < uStack_118) {
      FUN_145613720(apuStack_130[0],0);
    }
    uStack_120 = 0;
    uStack_118 = 0xf;
    apuStack_130[0] = (undefined8 *)((ulonglong)apuStack_130[0] & 0xffffffffffffff00);
    if (0xf < uStack_f8) {
      FUN_145613720(auStack_110[0],0);
    }
    if (iVar5 < 0) {
      (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_d0);
      (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_b8);
      (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_c0);
      goto LAB_1456271ef;
    }
    FUN_145617470(auStack_310,param_3);
    lVar9 = FUN_1456136d0(0x18);
    if (lVar9 == 0) {
      func_0x0001455ea160(auStack_188);
      func_0x000145f40450(auStack_188,&UNK_1467e1988);
      goto LAB_14562763c;
    }
    func_0x0001456138f0(auStack_1d8,auStack_310);
    lStack_1d0 = lStack_308;
    lStack_308 = 0;
    lVar10 = FUN_145628110(lVar9,auStack_1d8);
    lVar9 = lStack_308;
    if (lStack_308 != 0) {
      (*(code *)PTR__guard_dispatch_icall_14678f658)(lStack_308,0);
      FUN_145613720(lVar9,0);
    }
    func_0x000145613940(auStack_310);
    uVar7 = FUN_1456138c0(auStack_190,param_3);
    func_0x0001456138f0(auStack_300,uVar7);
    lStack_2f8 = 0;
    if (lVar10 != 0) {
      plVar11 = (longlong *)(*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10,&uStack_2f0);
      lVar9 = lStack_2f8;
      if (&lStack_2f8 != plVar11) {
        lVar3 = *plVar11;
        *plVar11 = 0;
        bVar13 = lStack_2f8 != 0;
        lStack_2f8 = lVar3;
        if (bVar13) {
          (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar9,0);
          FUN_145613720(lVar9,0);
        }
      }
      if (uStack_2f0 != 0) {
        (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_2f0,0);
        FUN_145613720(uStack_2f0,0);
      }
    }
    func_0x000145613940(uVar7);
    (*(code *)PTR__guard_dispatch_icall_14678f658)(uVar6,auStack_300,0);
    if (lVar10 != 0) {
      (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10,0);
      FUN_145613720(lVar10,0);
    }
    (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_d0);
    (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_b8);
    (*(code *)PTR__guard_dispatch_icall_14678f658)(uStack_c0);
    FUN_1455f0130(&uStack_e8);
    if (lStack_330 != 0) {
      LOCK();
      piVar1 = (int *)(lStack_330 + 8);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)PTR__guard_dispatch_icall_14678f658)(lStack_330);
        LOCK();
        piVar1 = (int *)(lStack_330 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (*(code *)PTR__guard_dispatch_icall_14678f658)();
        }
      }
    }
    FUN_145615060(auStack_1c0);
    *(undefined **)((longlong)apuStack_2e8 + (longlong)*(int *)(apuStack_2e8[0] + 4)) =
         &UNK_145f42df0;
  }
  *(int *)((longlong)apuStack_2e8 + (longlong)*(int *)(apuStack_2e8[0] + 4) + -4) =
       *(int *)(apuStack_2e8[0] + 4) + -0x98;
  FUN_1455ea720(apuStack_2e8 + 3);
  __1__basic_iostream_DU__char_traits_D_std___std__UEAA_XZ(auStack_2c8);
  __1__basic_ios_DU__char_traits_D_std___std__UEAA_XZ(auStack_250);
  FUN_1455f14a0(param_3);
LAB_1456275f2:
  FUN_1455ea040(uStack_48 ^ (ulonglong)auStack_368);
  return;
}

