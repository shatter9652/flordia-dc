// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140166a70  size: 65 bytes
// Name:    FUN_140166a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140166a70(longlong param_1)

{
  if (((1 < *(byte *)(param_1 + 0x155) - 3) && ((*(byte *)(param_1 + 0x154) & 1) != 0)) &&
     (*(longlong *)(param_1 + 0x48) != 0)) {
    func_0x0001401564a0(*(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x9c));
  }
  FUN_141959520(*(undefined8 *)(param_1 + 0x170));
  *(byte *)(param_1 + 0x1bb) = *(byte *)(param_1 + 0x1bb) & 0xfb;
  return;
}

