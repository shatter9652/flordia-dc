// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7450  size: 120 bytes
// Name:    FUN_1401a7450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14506ee30, FUN_140613320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a7450(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x1190) | 0x100;
  if (*(short *)(param_1 + 0x11ae) == -1) {
    uVar1 = *(ulonglong *)(param_1 + 0x1190);
  }
  *(ulonglong *)(param_1 + 0x1190) = uVar1 & 0xfffffffffffff7ff;
  *(undefined4 *)(param_1 + 0x1280) = 0;
  if (*(longlong *)(param_1 + 0x1188) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x1188) + 0x14) = 0;
  }
  FUN_14506ee30(param_1);
  FUN_140613320(param_1 + 0xae0);
  *(undefined4 *)(param_1 + 0xacc) = 0;
  *(undefined4 *)(param_1 + 0x13dc) = 0;
  return;
}

