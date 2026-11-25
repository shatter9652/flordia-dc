// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140101320  size: 109 bytes
// Name:    FUN_140101320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140101390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140101320(longlong param_1,char param_2,undefined1 *param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  
  if (((*(int *)(param_1 + 0x24) == 0x3491773f) && (*(int *)(param_1 + 0xee8) == 1)) &&
     (*(longlong *)(param_1 + 0xee0) != 0)) {
    lVar3 = func_0x000144eb3780(*(undefined4 *)(*(longlong *)(param_1 + 0xee0) + 0x9c));
    if (lVar3 != 0) {
      cVar2 = FUN_140101390(*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x30));
      if (cVar2 != '\0') {
        *param_3 = 1;
        return 1;
      }
    }
  }
  *param_3 = 0;
  bVar1 = *(byte *)(param_1 + 0xbf4);
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) != 0 && param_2 == '\0') {
    bVar4 = (bVar1 & 2) >> 1;
  }
  return bVar4;
}

