// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000b050  size: 121 bytes
// Name:    FUN_14000b050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451b06a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14000b050(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  ulonglong uVar2;
  float fStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [24];
  
  uStack_38 = *param_2;
  uStack_30 = param_2[1];
  cVar1 = FUN_1451b06a0(param_1,&uStack_38,auStack_28,&iStack_3c,&fStack_40,1,0xffffffff,0xffffffff,
                        1);
  if (cVar1 == '\0') {
    uVar2 = (ulonglong)_DAT_145fc6f50;
  }
  else {
    uVar2 = func_0x000144f4a750(param_1,(float)iStack_3c + fStack_40,param_3);
  }
  return uVar2;
}

