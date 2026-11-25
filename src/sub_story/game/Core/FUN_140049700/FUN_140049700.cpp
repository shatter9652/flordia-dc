// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049700  size: 131 bytes
// Name:    FUN_140049700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e68010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140049700(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  lVar1 = *(longlong *)(uVar4 + 0x20);
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0x41c) & 0x10) == 0)) &&
     (cVar3 = *(char *)(uVar4 + 0xfa), 4 < (byte)(cVar3 - 7U))) {
    cVar2 = func_0x000144e67ff0();
    bVar5 = false;
    if ((cVar2 != '\0') || (cVar3 == '\x02')) goto LAB_14004975e;
    if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
      cVar3 = FUN_144e68010();
      if (cVar3 != '\0') {
        bVar5 = true;
        if (*(char *)(param_1 + 0xba) == '\0') {
          bVar5 = 9999 < (uint)(_DAT_14abbef40 - *(int *)(param_1 + 100));
        }
        goto LAB_14004975e;
      }
    }
  }
  bVar5 = false;
LAB_14004975e:
  *(bool *)(param_1 + 0xba) = bVar5;
  return;
}

