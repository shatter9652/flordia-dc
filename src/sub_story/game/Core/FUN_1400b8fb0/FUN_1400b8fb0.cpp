// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8fb0  size: 73 bytes
// Name:    FUN_1400b8fb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140a781a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b8fb0(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_140a781a0();
    if (param_2 != 0) {
      bVar1 = func_0x000144f40700(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10));
      *(ushort *)(param_2 + 0x32) = (ushort)bVar1 << 8 | *(ushort *)(param_2 + 0x32) & 0xfeff;
    }
  }
  return;
}

