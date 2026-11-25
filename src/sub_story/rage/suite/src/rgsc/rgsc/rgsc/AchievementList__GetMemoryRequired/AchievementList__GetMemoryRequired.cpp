// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143dc8960  size: 670 bytes
// Name:    AchievementList::GetMemoryRequired
// Subsystem: core
// Class:   AchievementList
//
// Evidence:
//   GTAVSRC: AchievementList::GetMemoryRequired  (rage/suite/src/rgsc/rgsc/rgsc/achievements.cpp)
//   literal: Achievements
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404e39e0, FUN_1402675a0, FUN_1457d1ec0, FUN_1404e4b80, FUN_1404e33d0, FUN_1404e3460, FUN_1404e4b00, FUN_1404e3010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/AchievementList.h"


undefined8
AchievementList__GetMemoryRequired(undefined1 *param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_70 [48];
  
  *param_1 = 0;
  FUN_1404e3010(auStack_70);
  func_0x0001404e3040(auStack_70,param_1,0x1a40,1);
  iVar5 = 0;
  FUN_1404e33d0(auStack_70,0,0);
  cVar2 = FUN_1404e4b00(auStack_70,&UNK_14677b311);
  if (cVar2 == '\0') {
    uVar3 = 0x128;
    uVar4 = 0xca6acb50;
  }
  else {
    param_3 = param_3 & 0xffffffff;
    do {
      uVar1 = param_2[1];
      if (((uVar1 == 0) || (0xff < uVar1)) || (cVar2 = func_0x000143dc8c00(uVar1), cVar2 == '\0')) {
        FUN_1402675a0(0x146c31db8,1);
      }
      else {
        cVar2 = FUN_1404e33d0(auStack_70,0,0);
        if (cVar2 == '\0') {
          uVar3 = 0x136;
          uVar4 = 0x4b09f769;
          goto LAB_143dc8be6;
        }
        cVar2 = FUN_1404e4b80(auStack_70,&UNK_146784655,*param_2);
        if (cVar2 == '\0') {
          uVar3 = 0x137;
          uVar4 = 0x19dbc8e8;
          goto LAB_143dc8be6;
        }
        cVar2 = FUN_1404e39e0(auStack_70);
        if (cVar2 == '\0') {
          uVar3 = 0x138;
          uVar4 = 0xfc829400;
          goto LAB_143dc8be6;
        }
        cVar2 = FUN_1404e3460(auStack_70);
        if (cVar2 == '\0') {
          uVar3 = 0x139;
          goto LAB_143dc8be0;
        }
        iVar5 = iVar5 + 1;
      }
      param_2 = param_2 + 6;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    cVar2 = FUN_1404e3460(auStack_70);
    if (cVar2 == '\0') {
      uVar3 = 0x13f;
    }
    else {
      cVar2 = FUN_1404e3460(auStack_70);
      if (cVar2 != '\0') {
        if (iVar5 == 0) {
          FUN_1402675a0(0x146c31db8,4);
          return 0;
        }
        return 1;
      }
      uVar3 = 0x140;
    }
LAB_143dc8be0:
    uVar4 = 0xc0c8bc6c;
  }
LAB_143dc8be6:
  FUN_1457d1ec0(0x146c31db8,1,uVar3,uVar4);
  return 0;
}

