// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400676e0  size: 108 bytes
// Name:    FUN_1400676e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_1400676e0(longlong *param_1)

{
  undefined1 uStack_79;
  undefined1 auStack_78 [8];
  undefined1 *apuStack_70 [9];
  code *pcStack_28;
  undefined *puStack_20;
  code *pcStack_18;
  
  uStack_79 = 0;
  if (apuStack_70 != (undefined1 **)0x0) {
    apuStack_70[0] = &uStack_79;
  }
  pcStack_28 = FUN_14203b670;
  puStack_20 = &UNK_1401167b0;
  pcStack_18 = (code *)&SUB_140004380;
  (**(code **)(*param_1 + 0x48))(param_1,auStack_78);
  if (pcStack_18 != (code *)0x0) {
    (*pcStack_18)(apuStack_70);
  }
  return uStack_79;
}

