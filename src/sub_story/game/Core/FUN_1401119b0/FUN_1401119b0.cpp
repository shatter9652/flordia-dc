// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401119b0  size: 119 bytes
// Name:    FUN_1401119b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1438a3fc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401119b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(short *)(param_1 + 0xb14) == 0x10) &&
     (uVar1 = *(uint *)(param_1 + 0x854), (ulonglong)uVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x858);
    lVar5 = 0;
    do {
      lVar4 = FUN_1438a3fc0(*(undefined8 *)(lVar2 + lVar5),param_2,param_3);
      if ((lVar4 != 0) &&
         (cVar3 = func_0x000144f48c60(*(undefined1 *)(lVar4 + 0x8c)), cVar3 != '\0')) {
        return lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar5);
  }
  return 0;
}

