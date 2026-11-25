// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140040480  size: 93 bytes
// Name:    FUN_140040480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140040480(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140004b40();
  if ((ulonglong)*(uint *)(param_1 + 0xac) != 0) {
    lVar1 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0xb0 + lVar1);
      if (*(int *)(lVar2 + 0x24) == param_2) goto LAB_1400404c8;
      lVar1 = lVar1 + 8;
    } while ((ulonglong)*(uint *)(param_1 + 0xac) << 3 != lVar1);
  }
  lVar2 = 0;
LAB_1400404c8:
  func_0x000144d9dab0(param_1 + 0x40188);
  return lVar2;
}

