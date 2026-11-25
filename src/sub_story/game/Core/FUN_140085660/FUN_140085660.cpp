// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140085660  size: 68 bytes
// Name:    FUN_140085660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140085660(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = func_0x000144da6540();
  if (((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x10b0), lVar2 == 0)) ||
     (*(longlong *)(lVar2 + 0x1050) != param_2)) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x1068);
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    *param_3 = *(undefined8 *)(lVar2 + 0x1060);
    param_3[1] = uVar1;
  }
  return uVar3;
}

