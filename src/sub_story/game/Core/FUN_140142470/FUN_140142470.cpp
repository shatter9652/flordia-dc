// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140142470  size: 71 bytes
// Name:    FUN_140142470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140142470(longlong param_1)

{
  uint uStack_1c;
  
  func_0x000144f16940(param_1 + 0xd0,&uStack_1c);
  if ((~uStack_1c & 0xfffffff) != 0) {
    func_0x000144fefc30(param_1 + 0xd0);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}

