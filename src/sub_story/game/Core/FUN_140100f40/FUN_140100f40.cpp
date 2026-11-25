// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140100f40  size: 242 bytes
// Name:    FUN_140100f40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145246580, FUN_14198c8a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140100f40(void)

{
  char cVar1;
  undefined2 uStack_c;
  undefined1 uStack_a;
  undefined1 uStack_9;
  
  cVar1 = FUN_145246580();
  if (cVar1 != '\0') {
    uStack_c = _DAT_14ab7a8c8;
    uStack_a = DAT_14ab7a8ca;
    uStack_9 = 0;
    FUN_14198c8a0(0x14ab77b90,&uStack_c,0);
  }
  cVar1 = FUN_145246580();
  if (cVar1 != '\0') {
    uStack_c = _DAT_14ab7a8cc;
    uStack_a = DAT_14ab7a8ce;
    uStack_9 = 0;
    FUN_14198c8a0(0x14ab77b90,&uStack_c,0);
  }
  return;
}

