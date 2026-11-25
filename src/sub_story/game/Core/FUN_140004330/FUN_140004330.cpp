// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140004330  size: 68 bytes
// Name:    FUN_140004330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ede8d0, FUN_144edeba0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_140004330(longlong param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  cVar1 = FUN_144ede8d0(param_1,*(char *)(_DAT_149975a40 + 0x11) != '\0');
  cVar2 = '\0';
  if (cVar1 != '\0') {
    LOCK();
    cVar2 = *(char *)(param_1 + 0x1c6);
    bVar3 = cVar2 == '\x01';
    if (bVar3) {
      *(char *)(param_1 + 0x1c6) = '\x03';
      cVar2 = '\x01';
    }
    UNLOCK();
    if (bVar3) {
      FUN_144edeba0(param_1);
      LOCK();
      cVar2 = *(char *)(param_1 + 0x1c6);
      *(char *)(param_1 + 0x1c6) = '\0';
      UNLOCK();
    }
  }
  return cVar2;
}

