// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a8ae0  size: 210 bytes
// Name:    FUN_1401a8ae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401abe80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a8ae0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  
  if (((*(byte *)(param_1 + 0x92) & 0xc) == 4) &&
     (uVar3 = *(uint *)(param_1 + 0x20), uVar3 != 0x1ffff)) {
    uVar4 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar3 & 0x1ffff) * 4);
    if (((~uVar4 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
       (((uVar4 & 0x7fe0000) == (uVar3 & 0xfffe0000) && (*_DAT_14abb6918 != 0)))) {
      lVar5 = func_0x0001454dcdb0(*(undefined4 *)
                                   (*_DAT_14abb6918 + 0x9c +
                                   (ulonglong)((uVar3 & 0x1ffff) * (int)_DAT_14abb6918[1])));
      if (lVar5 != 0) {
        FUN_1401abe80(lVar5,0x7dd27eab,0xd7c9d1b7);
        bVar1 = *(byte *)(param_1 + 0x92);
        bVar2 = *(byte *)(param_1 + 0x91);
        bVar6 = bVar1 | 8;
        *(byte *)(param_1 + 0x92) = bVar6;
        if ((bVar2 & 0x20) != 0) {
          bVar6 = bVar1 | 0x18;
        }
        if ((bVar2 & 0x60) != 0) {
          *(byte *)(param_1 + 0x92) = bVar6 | bVar2 >> 1 & 0x20;
        }
      }
    }
  }
  return;
}

