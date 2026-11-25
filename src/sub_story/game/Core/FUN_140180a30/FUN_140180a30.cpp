// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140180a30  size: 74 bytes
// Name:    FUN_140180a30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14104e980
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140180a30(ulonglong param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar1 = *(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c);
  cVar2 = func_0x000144fe33d0(uVar1);
  if ((cVar2 != '\0') ||
     ((uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1), param_2 != 7 &&
      (cVar2 = FUN_14104e980(uVar1,*(undefined1 *)((param_1 & 0xfffffffffffffff0) + 0xfa)),
      cVar2 == '\0')))) {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}

