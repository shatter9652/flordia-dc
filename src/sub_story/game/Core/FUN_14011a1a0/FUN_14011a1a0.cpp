// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a1a0  size: 125 bytes
// Name:    FUN_14011a1a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011a220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_14011a1a0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_14011a220();
  if ((((((cVar1 == '\0') || (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_2 + 0x10))) ||
        (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18))) ||
       ((*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20) ||
        (*(int *)(param_1 + 0x38) != *(int *)(param_2 + 0x38))))) ||
      ((*(char *)(param_1 + 0x40) != *(char *)(param_2 + 0x40) ||
       ((*(char *)(param_1 + 0x41) != *(char *)(param_2 + 0x41) ||
        (*(char *)(param_1 + 0x42) != *(char *)(param_2 + 0x42))))))) ||
     ((*(char *)(param_1 + 0x43) != *(char *)(param_2 + 0x43) ||
      ((*(char *)(param_1 + 0x44) != *(char *)(param_2 + 0x44) ||
       (*(char *)(param_1 + 0x45) != *(char *)(param_2 + 0x45))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                     *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48));
  }
  return uVar2;
}

