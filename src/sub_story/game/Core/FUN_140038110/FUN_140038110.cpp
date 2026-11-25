// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140038110  size: 68 bytes
// Name:    FUN_140038110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447acc60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140038110(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1447acc60(param_1,param_2[1],param_2[5],0x2deefadd,0x9120cdc);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_2 >> 8),
                     *(int *)(*param_2 + (ulonglong)*(ushort *)(param_1 + 8) * 4) != -1);
  }
  return uVar2;
}

