// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c4170  size: 68 bytes
// Name:    FUN_1400c4170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400c4170(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  plVar2 = (longlong *)func_0x000145026d20();
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
    if (param_2 < 2) {
      bVar1 = *(byte *)(param_1 + 0x4e + (ulonglong)param_2) & 3;
      if (bVar1 == 1) {
        uVar4 = (ulonglong)_DAT_145fc6ed8;
      }
      else {
        uVar4 = 0;
      }
      if (bVar1 != 2) {
        uVar3 = uVar4;
      }
    }
    return uVar3;
  }
  return (ulonglong)_DAT_145fc6ed8;
}

