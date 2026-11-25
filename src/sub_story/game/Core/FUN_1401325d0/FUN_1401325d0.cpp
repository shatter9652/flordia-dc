// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401325d0  size: 61 bytes
// Name:    FUN_1401325d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140132650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1401325d0(int param_1,int param_2)

{
  undefined1 uVar1;
  uint *puVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((param_1 == 0) ||
     (puVar2 = (uint *)FUN_140132650(*(undefined4 *)(_DAT_14abb6910 + 8),
                                     *(undefined8 *)(_DAT_14abb6910 + 0x10),param_1),
     puVar2 == (uint *)0x0)) {
    return 0;
  }
  uVar1 = 1;
  if ((*puVar2 & 1) == 0) {
    if ((-1 < (char)*puVar2 || param_2 == 0) || ((ulonglong)(ushort)puVar2[4] == 0)) {
      return 0;
    }
    lVar3 = 0;
    do {
      if (*(int *)(*(longlong *)(puVar2 + 2) + lVar3 * 4) == param_2) {
        return 1;
      }
      bVar4 = (ulonglong)(ushort)puVar2[4] - 1 != lVar3;
      uVar1 = 0;
      lVar3 = lVar3 + 1;
    } while (bVar4);
  }
  return uVar1;
}

