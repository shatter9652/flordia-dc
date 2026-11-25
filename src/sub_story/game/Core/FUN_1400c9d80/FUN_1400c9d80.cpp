// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c9d80  size: 151 bytes
// Name:    FUN_1400c9d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400c9d80(longlong param_1,longlong param_2,char param_3,uint param_4)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + 0x140) & 8) == 0) && ((*(byte *)(param_1 + 0x141) & 4) == 0)) {
    bVar1 = func_0x0001400ca280(param_1);
    if ((param_4 & 4) == 0 || (~bVar1 & *(float *)(param_1 + 0x144) == 0.0) != 0)
    goto LAB_1400c9dd7;
  }
  else if ((param_4 & 4) == 0) goto LAB_1400c9dd7;
  if ((param_3 < '\0' & *(byte *)(param_2 + 0x1a4)) == 1) {
    return *(undefined4 *)(param_2 + 0x1a0);
  }
LAB_1400c9dd7:
  *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_2 + 0xb8);
  *(byte *)(param_2 + 0x1a4) = *(byte *)(param_2 + 0x1a4) | 1;
  return *(undefined4 *)(param_2 + 0xb8);
}

