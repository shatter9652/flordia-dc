// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140082b10  size: 103 bytes
// Name:    FUN_140082b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402eb220, FUN_1401331f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140082b10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iStack_14;
  
  lVar2 = func_0x000144e59150(*(undefined4 *)(param_1 + 0x9c));
  if (lVar2 != 0) {
    lVar2 = func_0x000144ef6450(*(undefined2 *)(lVar2 + 0x15c));
    if ((*(ushort *)(lVar2 + 0x74) & 0x1e0) != 0) {
      return 1;
    }
  }
  FUN_1401331f0(&iStack_14,param_1);
  if (iStack_14 != 0) {
    cVar1 = FUN_1402eb220(iStack_14,1,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

