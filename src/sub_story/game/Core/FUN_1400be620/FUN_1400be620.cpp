// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400be620  size: 137 bytes
// Name:    FUN_1400be620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f4eec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400be620(longlong param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong unaff_RDI;
  
  bVar1 = *(byte *)(param_1 + 0x299);
  if (((bVar1 & 1) != 0) && (*(char *)(param_1 + 0x10d) == '\x01')) {
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    cVar2 = FUN_144f4eec0(param_1 + 0x90,1);
    if (cVar2 != '\0') goto LAB_1400be69f;
  }
  if (((bVar1 & 2) != 0) && (*(char *)(param_1 + 0x19d) == '\x01')) {
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    cVar2 = FUN_144f4eec0(param_1 + 0x120,1);
    if (cVar2 != '\0') goto LAB_1400be69f;
  }
  if (((bVar1 & 4) != 0) && (*(char *)(param_1 + 0x22d) == '\x01')) {
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
    cVar2 = FUN_144f4eec0(param_1 + 0x1b0,1);
    if (cVar2 != '\0') goto LAB_1400be69f;
  }
  unaff_RDI = 0;
LAB_1400be69f:
  return unaff_RDI & 0xffffffff;
}

