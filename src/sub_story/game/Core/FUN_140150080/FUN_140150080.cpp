// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140150080  size: 59 bytes
// Name:    FUN_140150080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140150080(void)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  lVar1 = func_0x000144f855e0();
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar1 != 0) {
    lVar1 = func_0x000144f85660(*(undefined4 *)(lVar1 + 0x40),*(undefined1 *)(lVar1 + 0x1e2),0);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc8c) != 0)) {
      uVar2 = 0;
    }
  }
  return uVar2 & 0xffffffff;
}

