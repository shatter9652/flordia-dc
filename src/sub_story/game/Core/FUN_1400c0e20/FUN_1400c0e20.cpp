// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c0e20  size: 58 bytes
// Name:    FUN_1400c0e20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c0e60, FUN_140048400, FUN_144e65220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400c0e20(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1400c0e60();
  *param_1 = &UNK_14655f280;
  FUN_144e65220(param_1 + 0xd);
  FUN_140048400(param_1 + 0xf,*param_2);
  return param_1;
}

