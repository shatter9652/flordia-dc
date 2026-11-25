// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140027480  size: 94 bytes
// Name:    FUN_140027480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140027480(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar4;
  
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb0))();
  if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = *(char *)(_DAT_14ab7ef10 + 0x266);
  }
  if ((cVar4 == '\0') &&
     (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != *(longlong **)(param_1 + 0x20))) {
    bVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
    uVar3 = CONCAT71((int7)((uVar3 & 0xffffffff) >> 8),(byte)(uVar3 & 0xffffffff) | bVar2);
  }
  return uVar3;
}

