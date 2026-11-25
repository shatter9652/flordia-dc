// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047d00  size: 64 bytes
// Name:    FUN_140047d00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_140047d00(uint param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    cVar1 = '\x01';
  }
  else {
    lVar2 = 0;
    do {
      cVar1 = (**(code **)(**(longlong **)(param_2 + lVar2) + 0x30))();
      if (cVar1 == '\0') {
        return '\0';
      }
      bVar3 = (ulonglong)param_1 * 8 + -8 != lVar2;
      lVar2 = lVar2 + 8;
    } while (bVar3);
  }
  return cVar1;
}

