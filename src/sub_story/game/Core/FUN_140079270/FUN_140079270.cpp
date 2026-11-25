// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140079270  size: 84 bytes
// Name:    FUN_140079270
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e2d5a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140079270(longlong param_1,char param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined1 auStack_c [4];
  
  if (param_2 == '\0') {
    uVar1 = func_0x000144edcaf0(param_1);
    fVar2 = (float)FUN_144e2d5a0(uVar1,*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,auStack_c,0,
                                 0);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x14a0);
  }
  return fVar2 < _DAT_145fc7020;
}

