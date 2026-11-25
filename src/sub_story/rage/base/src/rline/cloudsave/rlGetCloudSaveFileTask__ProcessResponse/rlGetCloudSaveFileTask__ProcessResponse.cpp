// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1456c4170  size: 558 bytes
// Name:    rlGetCloudSaveFileTask::ProcessResponse
// Subsystem: core
// Class:   rlGetCloudSaveFileTask
//
// Evidence:
//   GTAVSRC: rlGetCloudSaveFileTask::ProcessResponse  (rage/base/src/rline/cloudsave/rlcloudsave.cpp)
//   literal: Last-Modified
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141a937c0, FUN_1404e0da0, netHttpRequest::ParseDateString, FUN_145647140, FUN_1456c43d0, FUN_1404e0f50, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlGetCloudSaveFileTask.h"


void rlGetCloudSaveFileTask__ProcessResponse
               (undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 **ppuVar9;
  longlong alStack_80 [7];
  undefined1 *puStack_48;
  undefined4 uStack_3c;
  
  alStack_80[2] = 0x1456c4195;
  uVar4 = func_0x0001404e0d90();
  lVar1 = (ulonglong)uVar4 * 0x58 + 0x149a46ba0;
  alStack_80[2] = 0x1456c41b7;
  FUN_140004b40(lVar1);
  ppuVar9 = &puStack_48;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined1 *)((longlong)param_2 + 0xc) = 0;
    *(undefined1 *)((longlong)param_2 + 0x18c) = 0;
    *(undefined1 *)((longlong)param_2 + 0x1cc) = 0;
    *(undefined4 *)(param_2 + 0x4a) = 0;
    *(undefined1 *)((longlong)param_2 + 0x254) = 0;
    *(undefined1 *)((longlong)param_2 + 0x269) = 0;
    alStack_80[6] = 0x1456c41fb;
    lVar7 = FUN_145647140();
    lVar7 = -lVar7;
    puStack_48 = (undefined1 *)((longlong)&puStack_48 + lVar7);
    ppuVar9 = (undefined1 **)((longlong)&puStack_48 + lVar7);
    uStack_3c = 0x180;
    *(undefined8 *)((longlong)alStack_80 + lVar7 + 0x10) = 0x1456c4218;
    iVar5 = FUN_141a937c0(param_3);
    if (iVar5 != 0x194) {
      *(undefined8 *)((longlong)alStack_80 + lVar7 + 0x10) = 0x1456c4233;
      uVar6 = FUN_1404e0f50(param_3);
      *(undefined4 *)(param_2 + 1) = uVar6;
      uVar8 = *(undefined8 *)(param_3 + 0x58);
      uVar6 = *(undefined4 *)(param_3 + 0x74);
      *(undefined4 **)((longlong)alStack_80 + lVar7 + 0x28) = &uStack_3c;
      *(undefined8 *)((longlong)alStack_80 + lVar7) = 0x1456c425e;
      cVar2 = FUN_1404e0da0(uVar8,uVar6,&UNK_146784a18,(longlong)&puStack_48 + lVar7);
      if (cVar2 != '\0') {
        *(undefined8 *)((longlong)alStack_80 + lVar7 + 0x10) = 0x1456c4272;
        uVar8 = netHttpRequest__ParseDateString((longlong)&puStack_48 + lVar7);
        *param_2 = uVar8;
      }
      uStack_3c = 0x180;
      *(undefined8 *)((longlong)alStack_80 + lVar7 + 0x10) = 0x1456c4294;
      func_0x000145f40580((longlong)&puStack_48 + lVar7,0,0x180);
      uVar8 = *(undefined8 *)(param_3 + 0x58);
      uVar6 = *(undefined4 *)(param_3 + 0x74);
      *(undefined4 **)((longlong)alStack_80 + lVar7 + 0x28) = &uStack_3c;
      *(undefined8 *)((longlong)alStack_80 + lVar7) = 0x1456c42b8;
      cVar2 = FUN_1404e0da0(uVar8,uVar6,&UNK_14677f3fc,(longlong)&puStack_48 + lVar7);
      if (cVar2 != '\0') {
        *(undefined8 *)((longlong)alStack_80 + lVar7 + 0x10) = 0x1456c4395;
        func_0x000144dac8f0((longlong)param_2 + 0xc,&puStack_48,0x180);
      }
      uStack_3c = 0x180;
      *(undefined8 *)((longlong)alStack_80 + lVar7 + 0x10) = 0x1456c42df;
      func_0x000145f40580((longlong)&puStack_48 + lVar7,0,0x180);
      uVar8 = *(undefined8 *)(param_3 + 0x58);
      uVar6 = *(undefined4 *)(param_3 + 0x74);
      *(undefined4 **)((longlong)alStack_80 + lVar7 + 0x28) = &uStack_3c;
      *(undefined8 *)((longlong)alStack_80 + lVar7) = 0x1456c4303;
      cVar2 = FUN_1404e0da0(uVar8,uVar6,&UNK_14678143e,(longlong)&puStack_48 + lVar7);
      if (cVar2 != '\0') {
        *(undefined8 *)((longlong)alStack_80 + lVar7 + 0x10) = 0x1456c4325;
        func_0x000144dac8f0((longlong)param_2 + 0x18c,&puStack_48,0x40);
      }
    }
    *(undefined8 *)((longlong)alStack_80 + lVar7 + 0x10) = 0x1456c433c;
    uVar3 = FUN_1456c43d0(param_4,param_2 + 0x3a);
    *(undefined1 *)((longlong)param_2 + 0x1cc) = uVar3;
    *(undefined8 *)((longlong)alStack_80 + lVar7 + 0x10) = 0x1456c4359;
    uVar3 = func_0x0001456c43a0(param_4,(longlong)param_2 + 0x255);
    *(undefined1 *)((longlong)param_2 + 0x254) = uVar3;
  }
  *(undefined8 *)((longlong)ppuVar9 + -0x28) = 0x1456c436f;
  func_0x000144d9dab0(lVar1);
  return;
}

