// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007c670  size: 45 bytes
// Name:    FUN_14007c670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007c670(ushort *param_1,ushort param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  
  if (*param_1 == param_2) {
    return;
  }
  func_0x0001450268f0();
  *param_1 = param_2;
  cVar2 = func_0x000144ddb170();
  if (cVar2 != '\0') {
    lVar3 = func_0x000144da4590();
    if ((param_2 < 0xcd) && (*(char *)(lVar3 + 0x3490 + (ulonglong)param_2 * 0x468) == '\x01')) {
      LOCK();
      piVar1 = (int *)(lVar3 + (ulonglong)param_2 * 0x468 + 0x3484);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      return;
    }
    return;
  }
  return;
}

