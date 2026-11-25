// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140171970  size: 49 bytes
// Name:    FUN_140171970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140174990
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140171970(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = *(char *)(param_1 + 0x1c) == '\0';
  if (bVar2) {
    *(char *)(param_1 + 0x1c) = '\x01';
  }
  UNLOCK();
  if (bVar2) {
    cVar1 = FUN_140174990(param_1);
    *(char *)(param_1 + 0x1c) = cVar1 * '\x02';
  }
  do {
  } while (*(char *)(param_1 + 0x1c) == '\x01');
  return;
}

