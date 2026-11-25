// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140093020  size: 329 bytes
// Name:    FUN_140093020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140092b80, FUN_140266500, FUN_140092bd0, FUN_140092f40, FUN_144f215a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140093020(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int aiStack_30 [2];
  undefined8 uStack_28;
  uint uStack_20;
  int iStack_1c;
  
  cVar1 = (**(code **)(*param_1 + 0xa0))();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0xd0))(param_1), iVar2 != 1)) &&
       (iVar2 = (**(code **)(*param_1 + 0xd0))(param_1), iVar2 != 2)) {
      return 0xffffffff;
    }
    (**(code **)(*param_1 + 0xa8))(param_1,aiStack_30);
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar3 = 0xffffffff;
    if (iStack_1c == iVar2) {
      uVar3 = (ulonglong)uStack_20;
    }
  }
  else {
    iVar2 = FUN_144f215a0(*param_3);
    if (iVar2 == 3) {
      uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
      FUN_140092b80(*param_3,aiStack_30);
      lVar5 = FUN_140266500(uVar4,aiStack_30[0]);
      if (lVar5 == 0) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (ulonglong)*(ushort *)(lVar5 + 0x48);
      }
    }
    else {
      FUN_140092bd0(*param_3,aiStack_30);
      iVar2 = aiStack_30[0];
      if (aiStack_30[0] != 0) {
        aiStack_30[0] = 0;
        uStack_28 = 0;
        FUN_140092f40(aiStack_30,iVar2,param_1);
        uVar4 = uStack_28;
        iVar2 = aiStack_30[0];
        cVar1 = func_0x00014505bd10(aiStack_30[0],uStack_28);
        if (cVar1 != '\0') {
          uVar3 = func_0x0001401b5910(iVar2,uVar4);
          return uVar3;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

