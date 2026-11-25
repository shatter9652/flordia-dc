// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400400b0  size: 99 bytes
// Name:    FUN_1400400b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145099f80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400400b0(undefined8 param_1,uint param_2,uint param_3,byte param_4,float param_5)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  cVar1 = func_0x000144e555a0();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_145099f80(param_1);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),
                     (byte)uVar2 &
                     (0.0 < param_5 & param_3 == 0 & param_4 |
                     ((int)param_3 < 3 && ((param_2 & 0xff) >> (param_3 & 0x1f) & 1) != 0))) ^ 1;
  }
  return uVar3;
}

