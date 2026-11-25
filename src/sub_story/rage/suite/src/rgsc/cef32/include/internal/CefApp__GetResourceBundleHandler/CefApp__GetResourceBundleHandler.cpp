// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145630f80  size: 1741 bytes
// Name:    CefApp::GetResourceBundleHandler
// Subsystem: core
// Class:   CefApp
//
// Evidence:
//   GTAVSRC: CefApp::GetResourceBundleHandler  (rage/suite/src/rgsc/cef32/include/internal/cef_types.h)
//   literal: Accept-Language
//
// Referenced strings (9 in this body, 9 including direct callees):
//   "XboxServicesAPI/2026.04.20260826.4"
//   "2026.04.20260826.4"
//   "User-Agent"
//   "x-xbl-contract-version"
//   "application/json; charset=utf-8"
//   "; charset=utf-8"
//   "t=utf-8"
//   "Content-Type"
//   "Accept-Language"
// Callees: FUN_1456136d0, FUN_1456382c0, FUN_1456317d0, FUN_1455ea610, FUN_145613720, FUN_1455ea040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CefApp.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CefApp__GetResourceBundleHandler
               (longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined4 param_5)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_178 [48];
  undefined8 *puStack_148;
  ulonglong uStack_140;
  undefined4 uStack_138;
  undefined2 uStack_134;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined8 uStack_130;
  ulonglong uStack_128;
  undefined4 *apuStack_120 [2];
  undefined8 uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  undefined8 uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  undefined8 *apuStack_c0 [2];
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined8 *apuStack_a0 [2];
  undefined8 uStack_90;
  ulonglong uStack_88;
  undefined8 auStack_80 [2];
  undefined8 uStack_70;
  ulonglong uStack_68;
  undefined8 auStack_60 [3];
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = _DAT_1467e2038 ^ (ulonglong)auStack_178;
  puStack_148 = param_2;
  if ((undefined8 *)(param_1 + 0xd8) != param_3) {
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    FUN_1455ea610((undefined8 *)(param_1 + 0xd8),puVar7,param_3[2]);
  }
  if ((undefined8 *)(param_1 + 0xf8) != param_4) {
    puVar7 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar7 = (undefined8 *)*param_4;
    }
    FUN_1455ea610((undefined8 *)(param_1 + 0xf8),puVar7,param_4[2]);
  }
  uVar5 = func_0x000145648d60(*param_2);
  *(undefined4 *)(param_1 + 0x11c) = uVar5;
  iVar6 = func_0x000145f40200(param_1 + 0x80);
  if (-1 < iVar6) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    if (0xf < (ulonglong)param_4[3]) {
      param_4 = (undefined8 *)*param_4;
    }
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
    iVar6 = func_0x000145f40260(*(undefined8 *)(param_1 + 0x80),param_3,param_4);
    if (-1 < iVar6) {
      uStack_b0 = 0;
      uStack_a8 = 0xf;
      apuStack_c0[0] = (undefined8 *)0x0;
      puVar7 = (undefined8 *)FUN_1456136d0(0x30);
      uVar9 = _UNK_14678e188;
      if (puVar7 == (undefined8 *)0x0) {
        func_0x0001455ea160(&uStack_140);
        func_0x000145f40450(&uStack_140,&UNK_1467e1988);
LAB_145631631:
        func_0x0001455ea160(&uStack_140);
        func_0x000145f40450(&uStack_140,&UNK_1467e1988);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uStack_b0 = 0x22;
      uStack_a8 = 0x2f;
      *puVar7 = _DAT_14678e180;
      puVar7[1] = uVar9;
      uVar4 = _UNK_14678e19c;
      uVar3 = _UNK_14678e198;
      uVar5 = _UNK_14678e194;
      *(undefined4 *)(puVar7 + 2) = _DAT_14678e190;
      *(undefined4 *)((longlong)puVar7 + 0x14) = uVar5;
      *(undefined4 *)(puVar7 + 3) = uVar3;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar4;
      *(undefined2 *)(puVar7 + 4) = _DAT_14678e1a0;
      *(undefined1 *)((longlong)puVar7 + 0x22) = 0;
      uStack_e8 = 0xf;
      uStack_f0 = 10;
      uStack_100 = _DAT_145fc12a8;
      uStack_f8 = _DAT_145fc12b0;
      uStack_f6 = 0;
      apuStack_c0[0] = puVar7;
      iVar6 = (*(code *)PTR__guard_dispatch_icall_14678f658)(param_1,&uStack_100,apuStack_c0,1);
      if (0xf < uStack_e8) {
        FUN_145613720(uStack_100,0);
      }
      uStack_f0 = 0;
      uStack_e8 = 0xf;
      uStack_100 = uStack_100 & 0xffffffffffffff00;
      if (0xf < uStack_a8) {
        FUN_145613720(apuStack_c0[0],0);
      }
      if (iVar6 < 0) goto LAB_145631143;
      iVar6 = (*(code *)PTR__guard_dispatch_icall_14678f658)(param_1,param_5);
      if (iVar6 < 0) {
LAB_1456311ab:
        lVar10 = param_2[1];
        if (lVar10 == 0) goto LAB_1456315db;
        LOCK();
        piVar1 = (int *)(lVar10 + 8);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        bVar11 = iVar6 == 1;
      }
      else {
        uVar5 = func_0x000145648d80(*param_2);
        *(undefined4 *)(param_1 + 0x120) = uVar5;
        uVar5 = func_0x000145648d80(*param_2);
        iVar6 = (*(code *)PTR__guard_dispatch_icall_14678f658)(param_1,uVar5);
        if (iVar6 < 0) goto LAB_1456311ab;
        uVar5 = func_0x000145648d70(*param_2);
        iVar6 = (*(code *)PTR__guard_dispatch_icall_14678f658)(param_1,uVar5);
        if (iVar6 < 0) goto LAB_1456311ab;
        uStack_68 = 0xf;
        uStack_70 = 1;
        auStack_80[0] = 0x31;
        uStack_110 = 0;
        uStack_108 = 0xf;
        apuStack_120[0] = (undefined4 *)0x0;
        puVar8 = (undefined4 *)FUN_1456136d0(0x20);
        uVar4 = _UNK_145fc129c;
        uVar3 = _UNK_145fc1298;
        uVar5 = _UNK_145fc1294;
        if (puVar8 == (undefined4 *)0x0) goto LAB_145631631;
        uStack_110 = 0x16;
        uStack_108 = 0x1f;
        *puVar8 = _DAT_145fc1290;
        puVar8[1] = uVar5;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        puVar8[4] = _DAT_145fc12a0;
        *(undefined2 *)(puVar8 + 5) = _DAT_145fc12a4;
        *(undefined1 *)((longlong)puVar8 + 0x16) = 0;
        apuStack_120[0] = puVar8;
        iVar6 = (*(code *)PTR__guard_dispatch_icall_14678f658)(param_1,apuStack_120,auStack_80,1);
        if (0xf < uStack_108) {
          FUN_145613720(apuStack_120[0],0);
        }
        uStack_110 = 0;
        uStack_108 = 0xf;
        apuStack_120[0] = (undefined4 *)((ulonglong)apuStack_120[0] & 0xffffffffffffff00);
        if (0xf < uStack_68) {
          FUN_145613720(auStack_80[0],0);
        }
        if (iVar6 < 0) {
          lVar10 = param_2[1];
          if (lVar10 == 0) goto LAB_1456315db;
          LOCK();
          piVar1 = (int *)(lVar10 + 8);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          bVar11 = iVar6 == 1;
        }
        else {
          uStack_90 = 0;
          uStack_88 = 0xf;
          apuStack_a0[0] = (undefined8 *)0x0;
          puVar7 = (undefined8 *)FUN_1456136d0(0x20);
          uVar9 = _UNK_14678e168;
          if (puVar7 == (undefined8 *)0x0) {
            func_0x0001455ea160(&uStack_140);
            func_0x000145f40450(&uStack_140,&UNK_1467e1988);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uStack_90 = 0x1f;
          uStack_88 = 0x1f;
          *puVar7 = _DAT_14678e160;
          puVar7[1] = uVar9;
          puVar7[2] = _DAT_14678e170;
          *(undefined4 *)(puVar7 + 3) = _DAT_14678e178;
          *(undefined2 *)((longlong)puVar7 + 0x1c) = _DAT_14678e17c;
          *(undefined1 *)((longlong)puVar7 + 0x1e) = DAT_14678e17e;
          *(undefined1 *)((longlong)puVar7 + 0x1f) = 0;
          uStack_c8 = 0xf;
          uStack_d0 = 0xc;
          uStack_e0 = _DAT_145fc1270;
          uStack_d8 = _DAT_145fc1278;
          uStack_d4 = 0;
          apuStack_a0[0] = puVar7;
          iVar6 = (*(code *)PTR__guard_dispatch_icall_14678f658)(param_1,&uStack_e0,apuStack_a0,1);
          if (0xf < uStack_c8) {
            FUN_145613720(uStack_e0,0);
          }
          uStack_d0 = 0;
          uStack_c8 = 0xf;
          uStack_e0 = uStack_e0 & 0xffffffffffffff00;
          if (0xf < uStack_88) {
            FUN_145613720(apuStack_a0[0],0);
          }
          if (iVar6 < 0) {
            lVar10 = param_2[1];
            if (lVar10 == 0) goto LAB_1456315db;
            LOCK();
            piVar1 = (int *)(lVar10 + 8);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            bVar11 = iVar6 == 1;
          }
          else {
            uVar9 = FUN_1456382c0(auStack_60);
            uStack_128 = 0xf;
            uStack_130 = 0xf;
            uStack_140 = _DAT_145fc1280;
            uStack_138 = _DAT_145fc1288;
            uStack_134 = _DAT_145fc128c;
            uStack_132 = DAT_145fc128e;
            uStack_131 = 0;
            iVar6 = (*(code *)PTR__guard_dispatch_icall_14678f658)(param_1,&uStack_140,uVar9,1);
            if (0xf < uStack_128) {
              FUN_145613720(uStack_140,0);
            }
            uStack_130 = 0;
            uStack_128 = 0xf;
            uStack_140 = uStack_140 & 0xffffffffffffff00;
            if (0xf < uStack_48) {
              FUN_145613720(auStack_60[0],0);
            }
            if (-1 < iVar6) {
              uVar5 = func_0x000145648d90(*param_2);
              iVar6 = FUN_1456317d0(param_1,uVar5);
              lVar10 = param_2[1];
              if (iVar6 < 0) {
                if (lVar10 != 0) {
                  LOCK();
                  piVar1 = (int *)(lVar10 + 8);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10);
                    LOCK();
                    piVar1 = (int *)(lVar10 + 0xc);
                    iVar6 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar6 == 1) {
                      (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10);
                    }
                  }
                }
              }
              else if (lVar10 != 0) {
                LOCK();
                piVar1 = (int *)(lVar10 + 8);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10);
                  LOCK();
                  piVar1 = (int *)(lVar10 + 0xc);
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10);
                  }
                }
              }
              goto LAB_1456315db;
            }
            lVar10 = param_2[1];
            if (lVar10 == 0) goto LAB_1456315db;
            LOCK();
            piVar1 = (int *)(lVar10 + 8);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            bVar11 = iVar6 == 1;
          }
        }
      }
      if (bVar11) {
        (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10);
        LOCK();
        piVar1 = (int *)(lVar10 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10);
        }
      }
      goto LAB_1456315db;
    }
  }
LAB_145631143:
  lVar10 = param_2[1];
  if (lVar10 != 0) {
    LOCK();
    piVar1 = (int *)(lVar10 + 8);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10);
      LOCK();
      piVar1 = (int *)(lVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (*(code *)PTR__guard_dispatch_icall_14678f658)(lVar10);
      }
    }
  }
LAB_1456315db:
  FUN_1455ea040(uStack_40 ^ (ulonglong)auStack_178);
  return;
}

