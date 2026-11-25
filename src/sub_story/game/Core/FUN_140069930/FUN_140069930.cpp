// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140069930  size: 83 bytes
// Name:    FUN_140069930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447acc60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_140069930(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_1447acc60(param_1,param_2[1],param_2[5],param_3,param_4);
  if (cVar3 != '\0') {
    if (*(int *)(*param_2 + (ulonglong)*(ushort *)(param_1 + 8) * 4) != -1) {
      puVar1 = (undefined8 *)(*param_2 + (ulonglong)*(ushort *)(param_1 + 8) * 4);
      uVar2 = puVar1[1];
      *param_5 = *puVar1;
      param_5[1] = uVar2;
      return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
    }
  }
  return 0;
}

