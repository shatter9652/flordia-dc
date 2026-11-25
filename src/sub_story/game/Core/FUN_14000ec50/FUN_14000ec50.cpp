// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000ec50  size: 193 bytes
// Name:    FUN_14000ec50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eab9e0, FUN_144e96ad0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000ec50(ulonglong param_1,undefined4 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uStack_78;
  ulonglong *puStack_70;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    FUN_144e96ad0(&uStack_68);
    func_0x000144e96af0(&uStack_78);
    uStack_78 = param_3 & 0xffffffffff;
    pcStack_50 = FUN_1448b3fe0;
    puStack_48 = &UNK_1408d04c0;
    puStack_70 = (ulonglong *)CONCAT71(puStack_70._1_7_,(char)(param_3 >> 0x28) != '\0');
    puStack_40 = &SUB_140004380;
    uStack_68 = uStack_78;
    uStack_60 = puStack_70._0_4_;
    uStack_78 = param_1;
    puStack_70 = &uStack_68;
    uStack_5c = param_2;
    puStack_58 = &uStack_78;
    FUN_144eab9e0(lVar1);
  }
  return;
}

