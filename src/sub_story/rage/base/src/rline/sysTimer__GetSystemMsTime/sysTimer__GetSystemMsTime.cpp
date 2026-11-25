// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143ec4aa0  size: 1664 bytes
// Name:    sysTimer::GetSystemMsTime
// Subsystem: core
// Class:   sysTimer
//
// Evidence:
//   GTAVSRC: sysTimer::GetSystemMsTime  (rage/base/src/rline/rlhttptask.cpp)
//   literal: multipart/form-data; boundary=%s
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145373ee0, rlCloud::CreateUrl, FUN_141fb27c0, FUN_1402675a0, FUN_1418e3ab0, FUN_1457d1ec0, FUN_1411d04f0, FUN_145206a00, FUN_1452d5b70, FUN_141952790, FUN_1451c4210, FUN_1414997d0, FUN_142097ba0, FUN_1411d0210, FUN_140cad320, FUN_1451181c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/sysTimer.h"


undefined8
sysTimer__GetSystemMsTime
          (int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined1 *param_7,longlong param_8,int param_9,undefined8 *param_10,
          longlong param_11)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  undefined8 auStack_1c8 [3];
  undefined4 uStack_1ac;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [32];
  undefined1 auStack_178 [32];
  undefined1 uStack_158;
  longlong alStack_148 [33];
  
  if (*param_1 == 6) {
    if (param_8 == 0) {
      uVar6 = 0xaca;
      uVar8 = 0xad8a7ab5;
    }
    else {
      uVar5 = func_0x000145f407f0(param_8);
      if (uVar5 < 0x101) {
        *(byte *)((longlong)param_1 + 0x2701) = *(byte *)((longlong)param_1 + 0x2701) & 0xfe;
        cVar3 = func_0x000140b85020(*param_7);
        if (cVar3 != '\0') {
          FUN_140cad320(auStack_1c8);
          piVar11 = (int *)0x0;
          cVar3 = rlCloud__CreateUrl(auStack_1c8,param_4,param_5,param_6,param_7,param_8,0);
          if (cVar3 == '\0') {
            piVar10 = (int *)0x0;
            uVar9 = 0x9cdcd838;
            FUN_1402675a0(0x146c699e0,4);
            uVar6 = 0xadd;
            uVar8 = 0xb04b31db;
          }
          else {
            uStack_158 = 0;
            auStack_198 = ZEXT1232(ZEXT812(0));
            auStack_178 = auStack_198;
            uVar6 = FUN_1452d5b70(auStack_1c8[0],uStack_1ac);
            lVar7 = func_0x000145f405a0(uVar6,0x2f);
            if (lVar7 != 0) {
              alStack_148[0] = lVar7 + 1;
              func_0x000144dac8f0(auStack_198,alStack_148,0x41);
              func_0x000141631bd0(auStack_1c8,(int)lVar7 - (int)uVar6);
            }
            lVar7 = FUN_1451181c0(param_2);
            cVar3 = func_0x0001450903f0(*(undefined4 *)(lVar7 + 0x280));
            if (cVar3 == '\0') {
              piVar11 = (int *)(ulonglong)param_2;
              piVar10 = (int *)0x2;
              uVar9 = 0x7cda7c16;
              FUN_1402675a0(0x146c699e0,4);
              uVar6 = 0xaf0;
              uVar8 = 0x48114cc5;
            }
            else if ((param_9 == 1) &&
                    (cVar3 = FUN_1411d04f0(auStack_1c8,&UNK_146789541), cVar3 == '\0')) {
              piVar10 = (int *)0x0;
              uVar9 = 0x9cdcd838;
              FUN_1402675a0(0x146c699e0,4);
              uVar6 = 0xaf6;
              uVar8 = 0xd2487727;
            }
            else {
              piVar1 = param_1 + 2;
              uVar6 = func_0x0001416e8860();
              if (param_11 == 0) {
                param_11 = func_0x0001414e70e0();
              }
              FUN_1414997d0(piVar1,param_11,uVar6,5);
              piVar10 = param_1 + 0x7f4;
              uVar6 = FUN_1452d5b70(auStack_1c8[0],uStack_1ac);
              cVar3 = func_0x000143dcd180(piVar10,param_2,uVar6);
              if (cVar3 == '\0') {
                piVar10 = (int *)0x0;
                uVar9 = 0x981def84;
                FUN_1402675a0(0x146c699e0,4);
                uVar6 = 0xafb;
                uVar8 = 0x4cbd24e;
              }
              else {
                piVar11 = param_1 + 0x7f2;
                uVar6 = FUN_1452d5b70(auStack_1c8[0],uStack_1ac);
                uVar9 = 0;
                cVar3 = FUN_1418e3ab0(piVar1,param_3,uVar6,0x1e,0,piVar10,piVar11);
                if (cVar3 == '\0') {
                  piVar10 = (int *)0x0;
                  uVar9 = 0xe2187bc3;
                  FUN_1402675a0(0x146c699e0,4);
                  uVar6 = 0xb06;
                  uVar8 = 0xbb21910d;
                }
                else {
                  uVar6 = FUN_142097ba0(lVar7);
                  FUN_1411d0210(piVar1,&UNK_14677aa46,uVar6);
                  FUN_145206a00(&uStack_1a0,0);
                  piVar2 = param_1 + 0x7ea;
                  FUN_145373ee0(piVar2,&UNK_146778e13,uStack_1a0);
                  FUN_141fb27c0(alStack_148,&UNK_14677cc79,piVar2);
                  cVar3 = FUN_1411d0210(piVar1,&UNK_146782698,alStack_148);
                  if (cVar3 == '\0') {
                    uVar6 = 0xb11;
                    uVar8 = 0xaff783ef;
                  }
                  else {
                    cVar3 = FUN_141952790(piVar1,&UNK_146789c3f,2);
                    if (cVar3 == '\0') {
                      uVar6 = 0xb13;
                      uVar8 = 0x9da89c84;
                    }
                    else {
                      uVar4 = func_0x000145f407f0(piVar2);
                      cVar3 = FUN_141952790(piVar1,piVar2,uVar4);
                      if (cVar3 == '\0') {
                        uVar6 = 0xb14;
                        uVar8 = 0xd96df5a7;
                      }
                      else {
                        cVar3 = FUN_141952790(piVar1,&UNK_14678d163,2);
                        if (cVar3 == '\0') {
                          uVar6 = 0xb15;
                          uVar8 = 0x65695add;
                        }
                        else {
                          FUN_141fb27c0(alStack_148,&UNK_14678d0fe,auStack_198);
                          uVar4 = func_0x000145f407f0(alStack_148);
                          cVar3 = FUN_141952790(piVar1,alStack_148,uVar4);
                          if (cVar3 == '\0') {
                            uVar6 = 0xb18;
                            uVar8 = 0xcf532dbd;
                          }
                          else {
                            cVar3 = FUN_141952790(piVar1,&UNK_14678d140,0x25);
                            if (cVar3 != '\0') {
                              *(undefined8 **)(param_1 + 0x97e) = param_10;
                              if (param_10 != (undefined8 *)0x0) {
                                *param_10 = 0;
                                *(undefined4 *)(param_10 + 1) = 0;
                                *(undefined1 *)((longlong)param_10 + 0xc) = 0;
                                *(undefined1 *)((longlong)param_10 + 0x18c) = 0;
                                *(undefined1 *)((longlong)param_10 + 0x1cc) = 0;
                                *(undefined4 *)(param_10 + 0x4a) = 0;
                                *(undefined1 *)((longlong)param_10 + 0x254) = 0;
                                *(undefined1 *)((longlong)param_10 + 0x269) = 0;
                              }
                              *param_1 = 1;
                              FUN_1451c4210(auStack_1c8);
                              return 1;
                            }
                            uVar6 = 0xb1a;
                            uVar8 = 0x19204235;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_1457d1ec0(0x146c699e0,1,uVar6,uVar8,uVar9,piVar10,piVar11);
          FUN_1451c4210(auStack_1c8);
          goto LAB_143ec5104;
        }
        FUN_1402675a0(0x146c699e0,4);
        uVar6 = 0xad5;
        uVar8 = 0xc185d359;
      }
      else {
        FUN_1402675a0(0x146c699e0,4);
        uVar6 = 0xacf;
        uVar8 = 0x9c4f1019;
      }
    }
  }
  else {
    uVar6 = 0xac8;
    uVar8 = 0xcdd7c5d7;
  }
  FUN_1457d1ec0(0x146c699e0,1,uVar6,uVar8);
LAB_143ec5104:
  *param_1 = 5;
  return 0;
}

