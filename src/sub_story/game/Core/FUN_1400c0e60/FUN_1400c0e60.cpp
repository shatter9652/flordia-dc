// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c0e60  size: 90 bytes
// Name:    FUN_1400c0e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330, FUN_144f9fc30, FUN_140008d40, FUN_144e774f0, FUN_144e65220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400c0e60(undefined8 *param_1,undefined8 *param_2)

{
  FUN_144da6330();
  *param_1 = &UNK_1466807f0;
  FUN_144e65220(param_1 + 3);
  *param_1 = &UNK_14655f210;
  FUN_140008d40(param_1 + 5,*param_2);
  FUN_144f9fc30(param_1 + 8);
  FUN_144e774f0(param_1 + 9);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  return param_1;
}

