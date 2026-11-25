// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189430  size: 208 bytes
// Name:    FUN_140189430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140189430(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar1 = *param_2;
  if (uVar1 != 0x1ffff) {
    uVar5 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if ((((~uVar5 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
        (uVar5 = uVar5 & 0x7fe0000, uVar5 == (uVar1 & 0xfffe0000))) &&
       (lVar2 = *_DAT_14abb6918, lVar2 != 0)) {
      lVar2 = func_0x000144e591d0(*(undefined4 *)
                                   (lVar2 + 0x9c +
                                   (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1])),lVar2,
                                  uVar5,0);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x88) == 0)) {
        lVar3 = func_0x000140b2de40(*(undefined4 *)(lVar2 + 0x84));
        if (lVar3 == param_1) {
          func_0x0001401898a0(lVar2,0);
        }
      }
    }
  }
  uVar1 = *(int *)(param_1 + 0xb4) - 1;
  puVar4 = (uint *)((ulonglong)uVar1 * 4 + *(longlong *)(param_1 + 0xb8));
  if (puVar4 != param_2) {
    *param_2 = *puVar4;
    uVar1 = *(int *)(param_1 + 0xb4) - 1;
  }
  *(uint *)(param_1 + 0xb4) = uVar1;
  *(byte *)(param_1 + 0x182) = *(byte *)(param_1 + 0x182) & uVar1 != 0;
  return;
}

