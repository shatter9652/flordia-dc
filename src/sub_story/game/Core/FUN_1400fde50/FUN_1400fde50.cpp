// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fde50  size: 80 bytes
// Name:    FUN_1400fde50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da7db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400fde50(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)param_1[5];
  iVar3 = FUN_144da7db0(puVar1[5],puVar1[6],0x1000);
  if (iVar3 != 0x1000) {
    puVar2 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar2 + 5) = 0x25;
    (*(code *)*puVar2)(param_1);
  }
  *puVar1 = puVar1[6];
  puVar1[1] = 0x1000;
  return CONCAT71((int7)((ulonglong)puVar1[6] >> 8),1);
}

