// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007b980  size: 228 bytes
// Name:    FUN_14007b980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007b980(longlong param_1,undefined4 param_2,byte param_3)

{
  longlong lVar1;
  
  switch(param_2) {
  case 0:
    *(uint *)(param_1 + 0x7f8) = (uint)(param_3 ^ 1);
    break;
  case 1:
    *(byte *)(param_1 + 0x800) = param_3;
    break;
  case 2:
    *(byte *)(param_1 + 0x805) = param_3;
    break;
  case 3:
    *(byte *)(param_1 + 0x806) = param_3;
    break;
  case 4:
    if (param_3 == 0) {
      if (*(longlong *)(param_1 + 0x7b0) != 0) {
        func_0x000144d9c130(*(longlong *)(param_1 + 0x7b0),0xadd0);
        *(undefined8 *)(param_1 + 0x7b0) = 0;
      }
    }
    else {
      lVar1 = func_0x000144f97130(0xadd0);
      if (lVar1 != 0) {
        FUN_1456a3e00(lVar1);
      }
      *(longlong *)(param_1 + 0x7b0) = lVar1;
    }
    break;
  case 5:
    *(byte *)(param_1 + 0x808) = param_3;
    break;
  case 6:
    *(byte *)(param_1 + 0x809) = param_3;
    break;
  case 7:
    if (param_3 != 0) {
      LOCK();
      *(int *)(param_1 + 0x7f4) = *(int *)(param_1 + 0x7f4) + 1;
      UNLOCK();
      return;
    }
    LOCK();
    *(int *)(param_1 + 0x7f4) = *(int *)(param_1 + 0x7f4) + -1;
    UNLOCK();
    return;
  case 8:
    *(byte *)(param_1 + 0x80b) = param_3;
    break;
  case 9:
    *(byte *)(param_1 + 0x80d) = param_3;
  }
  return;
}

