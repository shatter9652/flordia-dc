// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14323ba20  size: 221 bytes
// Name:    netLocalizedStringInCloudRequest::Start
// Subsystem: core
// Class:   netLocalizedStringInCloudRequest
//
// Evidence:
//   GTAVSRC: netLocalizedStringInCloudRequest::Start  (game/network/SocialClubServices/netLocalizedCloudStrings.cpp)
//   literal: sc/msg/%s/%s.%s
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1457d1ec0, FUN_143ec8e70, FUN_1402675a0, FUN_14550f720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netLocalizedStringInCloudRequest.h"


bool netLocalizedStringInCloudRequest__Start(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_98 [136];
  
  *(undefined4 *)(param_1 + 100) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x60) = 0;
  UNLOCK();
  FUN_14550f720(auStack_98,&UNK_14677ce17,param_2,param_3,&UNK_14677ed59);
  iVar1 = FUN_143ec8e70(0x18010002,auStack_98,0x100,3);
  *(int *)(param_1 + 0x30) = iVar1;
  if (iVar1 == -1) {
    FUN_1457d1ec0(0x146ada8d0,4,0xb7,0xaa90e714);
    *(undefined4 *)(param_1 + 100) = 0xffffffff;
    LOCK();
    bVar2 = *(int *)(param_1 + 0x60) == 1;
    if (bVar2) {
      *(int *)(param_1 + 0x60) = 2;
    }
    UNLOCK();
    if (!bVar2) {
      FUN_1402675a0(0x146dd5b58,1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x60) = 1;
    UNLOCK();
  }
  return *(int *)(param_1 + 0x60) == 1;
}

