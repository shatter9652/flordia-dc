// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140167d60  size: 182 bytes
// Name:    FUN_140167d60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140167d60(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined **ppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  undefined4 uStack_40;
  undefined **ppuStack_18;
  
  if (*(longlong *)(param_1 + 0x468) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x468) + 0x100);
    uStack_40 = *(undefined4 *)(lVar1 + 0x10);
    puStack_50 = &UNK_1462093f0;
    pcStack_68 = FUN_145eb8b20;
    pcStack_60 = FUN_142699db0;
    pcStack_58 = FUN_142699de0;
    ppuStack_70 = &puStack_50;
    lStack_48 = param_1;
    ppuStack_18 = &puStack_50;
    uVar2 = (**(code **)(_DAT_149fe6500 + 0x1f0))
                      (_DAT_149fe6500 + 0x1d8,*(undefined8 *)(param_1 + 0x100),lVar1,
                       CONCAT71((int7)((ulonglong)&ppuStack_70 >> 8),1),&ppuStack_70);
    *(undefined4 *)(param_1 + 0x510) = uVar2;
    if (ppuStack_18 != (undefined **)0x0) {
      (**(code **)(*ppuStack_18 + 0x20))(ppuStack_18,ppuStack_18 != &puStack_50);
    }
  }
  return;
}

