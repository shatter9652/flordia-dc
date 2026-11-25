// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f6e80  size: 89 bytes
// Name:    FUN_1400f6e80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409ea8b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400f6e80(longlong param_1)

{
  char cVar1;
  longlong unaff_RSI;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x10);
  if ((((uVar3 >> 10 & 1) == 0) &&
      (cVar1 = func_0x000143102660(), unaff_RSI = param_1, cVar1 != '\0')) ||
     ((uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1), (uVar3 >> 0xb & 1) == 0 &&
      (cVar1 = func_0x000143102660(param_1), cVar1 == '\0')))) {
    FUN_1409ea8b0(param_1,15000,0x96,1);
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}

