// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140005880  size: 84 bytes
// Name:    FUN_140005880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140005420
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140005880(undefined8 *param_1,int param_2)

{
  *param_1 = &UNK_1463cdc30;
  param_1[0x3a] = &UNK_146687ed0;
  func_0x000140487090(param_1 + 0x3a);
  FUN_140005420(param_1);
  if (param_2 != 0) {
    func_0x000144d9c130(param_1,0x240);
  }
  return param_1;
}

