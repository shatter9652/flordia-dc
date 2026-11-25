// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140030170  size: 82 bytes
// Name:    FUN_140030170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140030170(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*(char *)((longlong)param_1 + 0x432b) == '\0') {
    lVar2 = func_0x000144ef6280(*(undefined4 *)(*param_1 + 0x9c));
    if (lVar2 == 0) {
      bVar3 = false;
    }
    else {
      if ((*(byte *)(lVar2 + 0x4f) & 2) == 0) {
        bVar1 = (byte)((uint)*(undefined4 *)(lVar2 + 0xd8) >> 0x19) & 1;
      }
      else {
        bVar1 = 1;
      }
      bVar3 = *(byte *)((longlong)param_1 + 0x432a) != bVar1;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

