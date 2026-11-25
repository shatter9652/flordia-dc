// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049120  size: 89 bytes
// Name:    FUN_140049120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec6720, FUN_144ec6670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140049120(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar3 = 0xffffffff;
  if ((param_2 & 0xffffffc0) == 0) {
    if (*(longlong *)((ulonglong)(param_2 & 0x3f) * 0x18 + 0x1478f6280) != 0) {
      lVar1 = (ulonglong)(param_2 & 0x3f) * 0x18;
      plVar2 = (longlong *)(lVar1 + 0x1478f6280);
      if (*(char *)(lVar1 + 0x1478f6290) == '\x01') {
        FUN_144ec6720();
        if (*plVar2 != 0) {
          func_0x000144d9c130();
        }
        FUN_144ec6670();
      }
      uVar3 = 0;
      *plVar2 = 0;
    }
  }
  return uVar3;
}

