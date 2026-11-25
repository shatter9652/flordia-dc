// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140155ea0  size: 143 bytes
// Name:    FUN_140155ea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140155ea0(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if ((((uVar4 == 0) || (*(char *)(uVar4 + 0x30) != '\x04')) ||
      ((*(uint *)(uVar4 + 0xb4) & 0x3e) != 0x18)) ||
     ((((*(ushort *)(uVar4 + 0x96) & 0xf) != 5 ||
       (cVar1 = func_0x000140155f30(*(undefined8 *)(uVar4 + 0x20),*(undefined4 *)(uVar4 + 0xb0)),
       cVar1 == '\0')) ||
      ((lVar3 = func_0x000144dd1230(*(undefined4 *)(uVar4 + 0x9c)), lVar3 == 0 ||
       ((*(byte *)(lVar3 + 0x10) & 1) == 0)))))) {
    return 0;
  }
  if ((*(byte *)(uVar4 + 0x36) & 2) != 0) {
    return 0;
  }
  if ((*(byte *)(uVar4 + 0x31) & 0x40) != 0) {
    return 0;
  }
  uVar2 = (_DAT_14abbef40 - *(int *)(param_1 + 0x1c)) - 2;
  return CONCAT31((int3)(uVar2 >> 8),uVar2 < 0x176e);
}

