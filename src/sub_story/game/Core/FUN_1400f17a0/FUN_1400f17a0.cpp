// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f17a0  size: 86 bytes
// Name:    FUN_1400f17a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f81f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400f17a0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = func_0x000144ef6110(param_2);
  if (lVar3 == 0) {
    bVar2 = true;
  }
  else {
    cVar1 = func_0x000140006170(*(undefined4 *)(lVar3 + 0x104));
    if ((cVar1 == '\0') &&
       (cVar1 = func_0x000140006170(*(undefined4 *)(lVar3 + 0x108)), cVar1 == '\0')) {
      lVar3 = FUN_144f81f90(*(undefined4 *)(lVar3 + 0x128));
      return lVar3 != param_1;
    }
    bVar2 = false;
  }
  return bVar2;
}

