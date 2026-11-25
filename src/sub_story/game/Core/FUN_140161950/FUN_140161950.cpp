// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140161950  size: 68 bytes
// Name:    FUN_140161950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401f13d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140161950(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = func_0x000140006170(*(undefined4 *)(param_1 + 4));
  if (cVar2 != '\0') {
    cVar2 = func_0x000140d0d800(*(undefined4 *)(param_1 + 0xc));
    if (cVar2 == '\0') {
      func_0x000144ec8b40();
      uVar1 = func_0x000140c1a840();
      FUN_1401f13d0(uVar1,*(undefined4 *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}

