// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070920  size: 44 bytes
// Name:    FUN_140070920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140070920(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  lVar1 = func_0x000144ea4d00();
  puVar3 = *(undefined8 **)(lVar1 + 0xa0);
  if (*(undefined8 **)(lVar1 + 0xa0) == (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(lVar1 + 0x80);
  }
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xa8) == 4) {
    puVar3 = puVar3 + 4;
  }
  else {
    uVar2 = 0;
    switch(*(int *)(param_1 + 0xa8)) {
    case 0:
      break;
    case 1:
      puVar3 = puVar3 + 1;
      break;
    case 2:
      puVar3 = puVar3 + 2;
      break;
    case 3:
      puVar3 = puVar3 + 3;
      break;
    default:
      goto code_r0x000140070971;
    case 5:
      puVar3 = puVar3 + 5;
      break;
    case 6:
      puVar3 = puVar3 + 6;
    }
  }
  uVar2 = *puVar3;
code_r0x000140070971:
  return uVar2;
}

