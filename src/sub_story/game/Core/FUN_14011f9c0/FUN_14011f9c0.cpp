// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011f9c0  size: 75 bytes
// Name:    FUN_14011f9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14011f9c0(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_14a9438f4 == '\x01') {
    uVar2 = *(undefined8 *)(_DAT_14a9439b8 + (ulonglong)_DAT_14a9437b0 * 8);
  }
  else if ((DAT_147665ca0 != '\x01') ||
          ((cVar1 = func_0x00014011fa10(), uVar2 = _DAT_147665ca8, cVar1 != '\0' &&
           (DAT_14801335c != '\x01')))) {
    uVar2 = 0;
  }
  return uVar2;
}

