// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400920b0  size: 139 bytes
// Name:    FUN_1400920b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140091f90, FUN_144e92640, FUN_144ead9e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400920b0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  cVar1 = FUN_144ead9e0();
  if ((((cVar1 == '\0') || (lVar3 = func_0x000145252a20(param_2), lVar3 == 0)) ||
      (cVar1 = FUN_140091f90(*(undefined4 *)(lVar3 + 0x8a0),*(undefined1 *)(lVar3 + 0x8a4)),
      cVar1 != '\0')) ||
     (cVar1 = func_0x000144da4370(*(undefined1 *)(lVar3 + 0x8a5)), cVar1 == '\0')) {
    return 0;
  }
  lVar3 = func_0x000144da10f0(param_2);
  if (lVar3 != 0) {
    iVar2 = FUN_144e92640(lVar3 + 0x120,0x82);
    if (iVar2 != -1) {
      return 0;
    }
    iVar2 = FUN_144e92640(lVar3 + 0x120,0x69);
    if (iVar2 != -1) {
      return 0;
    }
  }
  return 1;
}

