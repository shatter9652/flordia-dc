// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140005030  size: 104 bytes
// Name:    FUN_140005030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140005030(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_2 + 0x54) != 2) {
    if (*(int *)(param_2 + 0x54) == 1) {
      func_0x000144792140();
    }
    return;
  }
  puVar2 = (undefined4 *)
           func_0x000144da6f80(*(undefined8 *)(param_1 + 0x20),*(undefined2 *)(param_1 + 0x28));
  uVar1 = puVar2[1];
  *(undefined4 *)(param_2 + 0x48) = *puVar2;
  *(undefined4 *)(param_2 + 0x50) = uVar1;
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + -1;
  return;
}

