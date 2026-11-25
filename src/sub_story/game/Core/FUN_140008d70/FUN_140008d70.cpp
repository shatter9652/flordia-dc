// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140008d70  size: 138 bytes
// Name:    FUN_140008d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330, FUN_144da62a0, FUN_144e65220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140008d70(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_144da6330();
  *param_1 = &UNK_1466807f0;
  FUN_144e65220(param_1 + 3);
  *param_1 = &UNK_14667a140;
  FUN_144da62a0(*param_2,param_1 + 10);
  if (*(short *)(param_1 + 0xb) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_144e65220(param_1[10] + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (uVar2 < *(ushort *)(param_1 + 0xb));
  }
  FUN_144da62a0(*param_2,param_1 + 0xc);
  FUN_144da62a0(*param_2,param_1 + 6);
  return param_1;
}

