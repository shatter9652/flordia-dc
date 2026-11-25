// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019bf70  size: 113 bytes
// Name:    FUN_14019bf70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019bf70(undefined4 *param_1,longlong *param_2,undefined4 param_3,int param_4,char param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  
  if (param_5 == '\0') {
    cVar4 = (**(code **)(*param_2 + 0x120))(param_2,param_3);
  }
  else {
    cVar4 = param_4 == -0xa8ef02b;
  }
  uVar1 = (**(code **)(*_DAT_14ab7ef10 + 0x68))(_DAT_14ab7ef10,param_2);
  uVar2 = 0x27eb33d7;
  if (cVar4 != '\0') {
    uVar2 = 0xee38e8e0;
  }
  uVar3 = 0x317a7aae;
  if (cVar4 != '\0') {
    uVar3 = 0xc3859dd9;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  return;
}

