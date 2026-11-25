// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140150370  size: 104 bytes
// Name:    FUN_140150370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e71070
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140150370(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong unaff_RSI;
  
  if (*(char *)(param_1 + 0x2e) == '\0') {
    lVar3 = func_0x000144fdec90(param_2);
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
    if (lVar3 == 0) goto LAB_140150393;
    uVar1 = *(undefined4 *)(lVar3 + 0x9c);
    lVar3 = func_0x000144e59150(uVar1);
    if (((*(byte *)(lVar3 + 0x2b) & 0x10) == 0) || (cVar2 = FUN_144e71070(uVar1), cVar2 == '\0'))
    goto LAB_140150393;
  }
  lVar3 = func_0x0001401503e0(*(undefined8 *)(param_1 + 0x48));
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x14) == '\0')) {
    unaff_RSI = 0;
  }
  else {
    unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
  }
LAB_140150393:
  return unaff_RSI & 0xffffffff;
}

