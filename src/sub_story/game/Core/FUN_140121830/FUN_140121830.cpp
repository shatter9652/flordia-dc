// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140121830  size: 62 bytes
// Name:    FUN_140121830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140121830(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = _DAT_147455658;
  if (((_DAT_14745563c == 4) && (DAT_14801335c == '\0')) && (_DAT_147455658 != 0)) {
    iVar2 = func_0x000144db65a0();
    LOCK();
    *(int *)(lVar1 + 0x20) = iVar2 + 3;
    UNLOCK();
    uVar3 = *(undefined8 *)(lVar1 + 8);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

