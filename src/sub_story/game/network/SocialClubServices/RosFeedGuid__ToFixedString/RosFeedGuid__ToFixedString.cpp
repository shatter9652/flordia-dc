// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143ecccb0  size: 324 bytes
// Name:    RosFeedGuid::ToFixedString
// Subsystem: core
// Class:   RosFeedGuid
//
// Evidence:
//   GTAVSRC: RosFeedGuid::ToFixedString  (game/network/SocialClubServices/SocialClubFeed.cpp)
//   literal: %08x%08x%08x
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402675a0, FUN_14114d230, FUN_1457d1ec0, FUN_1412da520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/RosFeedGuid.h"


undefined8
RosFeedGuid__ToFixedString(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined4 uVar8;
  
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  *param_2 = auVar6;
  if (param_1 == 0) {
    uVar8 = 0;
    uVar7 = 0x559bfa95;
    FUN_1402675a0(0x146c69ac0,4,param_3,0x29,0x559bfa95,0);
    uVar4 = 0x29;
    uVar5 = 0x3acbce85;
  }
  else {
    lVar3 = func_0x000145f407f0();
    if (lVar3 == 0x18) {
      iVar2 = FUN_1412da520(param_1,&UNK_146778d6c,param_2,*param_2 + 4,*param_2 + 8);
      if (iVar2 == 3) {
        return 1;
      }
      uVar8 = 8;
      uVar7 = 0x11fdd4ce;
      FUN_1402675a0(0x146c69ac0,4);
      uVar4 = 0x2d;
      uVar5 = 0x895b368;
    }
    else {
      cVar1 = FUN_14114d230(param_2,param_1);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar8 = 8;
      uVar7 = 0x187b3c1;
      FUN_1402675a0(0x146c69ac0,4);
      uVar4 = 0x31;
      uVar5 = 0xc6e136b4;
    }
  }
  FUN_1457d1ec0(0x146c69ac0,1,uVar4,uVar5,uVar7,uVar8);
  return 0;
}

