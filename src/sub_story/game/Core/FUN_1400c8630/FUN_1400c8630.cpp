// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8630  size: 178 bytes
// Name:    FUN_1400c8630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1413a8340
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c8630(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = func_0x000144da10f0(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = func_0x0001452f0240(*(undefined8 *)(lVar1 + 0x650));
  }
  *(byte *)(param_2 + 0x14d) = *(byte *)(param_2 + 0x14d) & 0xf7 | (lVar1 != 0) << 3;
  if (*(char *)(param_1 + 0x38d) == '\0') {
    *(undefined8 *)(param_1 + 0x300) = 0;
  }
  *(undefined1 *)(param_1 + 0x38d) = 0;
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x300) = 0;
    if ((*(longlong *)(lVar1 + 0x128) != 0) &&
       ((*(byte *)(*(longlong *)(lVar1 + 0x128) + 0x80) & 0x10) != 0)) {
      uVar2 = FUN_1413a8340(*(undefined4 *)(lVar1 + 0x220),*(undefined1 *)(lVar1 + 0x270));
      *(undefined8 *)(param_1 + 0x300) = uVar2;
    }
  }
  return;
}

