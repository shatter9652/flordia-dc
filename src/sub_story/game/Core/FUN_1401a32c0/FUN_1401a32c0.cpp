// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a32c0  size: 155 bytes
// Name:    FUN_1401a32c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a3360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a32c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x30) == '\x03') {
    lVar2 = func_0x000144e59150(*(undefined4 *)(param_1 + 0x9c));
    lVar1 = func_0x000144ef6450(*(undefined2 *)(lVar2 + 0x15c));
    if (*(int *)(lVar1 + 0x40) != 0) {
      return 3;
    }
    if ((*(longlong *)(lVar2 + 0x88) != 0) && (*(int *)(*(longlong *)(lVar2 + 0x88) + 0x90) != 0)) {
      return 3;
    }
    if ((*(byte *)(lVar2 + 0x3d) & 0xc) != 0) {
      return 3;
    }
  }
  else if ((*(char *)(param_1 + 0x30) == '\x02') &&
          (((lVar2 = FUN_1401a3360(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x9c)),
            lVar2 != 0 && (*(int *)(lVar2 + 0x98) != 0)) ||
           ((*(longlong *)(param_1 + 0x20) != 0 &&
            ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x413) & 0x88) != 0)))))) {
    return 3;
  }
  return 1;
}

