// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f1840  size: 92 bytes
// Name:    FUN_1400f1840
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145359cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400f1840(longlong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined7 uVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  undefined1 **ppuStack_28;
  code *pcStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  
  uStack_31 = 1;
  if (*(char *)(param_1 + 0x1b8) == '\x01') {
    ppuStack_28 = &puStack_30;
    puStack_30 = &uStack_31;
    pcStack_20 = FUN_142a2e740;
    puStack_18 = &UNK_1401167b0;
    puStack_10 = &SUB_140004380;
    uVar1 = FUN_145359cc0();
    uVar2 = (undefined7)((ulonglong)uVar1 >> 8);
  }
  else {
    uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
    uStack_31 = 1;
  }
  return CONCAT71(uVar2,uStack_31) & 0xffffffffffffff01;
}

