// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140115720  size: 96 bytes
// Name:    FUN_140115720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006410
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140115720(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2;
  uVar4 = (ulonglong)(int)param_2;
  uVar1 = param_1[3];
  if ((uVar4 < uVar1) || ((longlong)*(int *)((longlong)param_1 + 0x24) + uVar1 <= uVar4)) {
    iVar2 = FUN_140006410();
    if (iVar2 < 0) {
      uVar3 = 0xffffffff;
    }
    else {
      param_1[3] = uVar4;
      uVar3 = (**(code **)(*(longlong *)*param_1 + 0x80))((longlong *)*param_1,param_1[1],uVar4,0);
    }
  }
  else {
    *(uint *)(param_1 + 4) = param_2 - (int)uVar1;
  }
  return uVar3;
}

