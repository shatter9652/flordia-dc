// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ee800  size: 48 bytes
// Name:    FUN_1400ee800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407b76c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_1400ee800(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = FUN_1407b76c0(param_4 + 0x1660);
  uVar1 = _DAT_145fc6f70;
  if (cVar2 == '\0') {
    *param_2 = _DAT_145fc6f70;
    param_2[1] = uVar1;
    param_2[2] = uVar1;
    param_2[3] = uVar1;
  }
  return param_2;
}

