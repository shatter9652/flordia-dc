// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007d80  size: 86 bytes
// Name:    FUN_140007d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145044930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140007d80(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 in_RAX;
  
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0xb0) & 1) == 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
    cVar2 = FUN_145044930(CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x30)) &
                          0xffffffff,uVar1);
    if ((cVar2 == '\0') &&
       ((cVar2 = func_0x00014043b710(uVar1), cVar2 != '\0' ||
        (cVar2 = func_0x000144ff6880(uVar1), cVar2 != '\0')))) {
      return *(longlong *)(param_1 + 0x28) != 0;
    }
  }
  return false;
}

