// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6600  size: 36 bytes
// Name:    FUN_1400b6600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc21d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400b6600(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  iVar1 = FUN_144fc21d0(param_2,0);
  uVar2 = func_0x000144f298a0();
  if ((char)uVar2 != '\0') {
    return uVar2;
  }
  if ((ulonglong)*(byte *)(param_1 + 4) != 0) {
    uVar3 = 0;
    pcVar4 = (char *)(*(longlong *)(param_1 + 0x50) + 0xc);
    do {
      if ((*(int *)(pcVar4 + -8) == iVar1) && (*pcVar4 == '\0')) {
        return CONCAT71((int7)(uVar3 >> 8),(char)uVar3 + '\x01');
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x10;
    } while (*(byte *)(param_1 + 4) != uVar3);
  }
  return 0;
}

