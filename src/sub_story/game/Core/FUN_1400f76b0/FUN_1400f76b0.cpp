// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f76b0  size: 120 bytes
// Name:    FUN_1400f76b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1400f7770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f76b0(longlong param_1,char param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 unaff_RSI;
  
  if (param_2 != '\0') {
    if ((*(byte *)(param_1 + 0x10) & 0x10) == 0) {
      FUN_1400f7770(param_1);
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
    }
    return;
  }
  FUN_140004b40(0x147455748);
  if ((*(byte *)(param_1 + 0x10) & 0x10) == 0) {
    FUN_1400f7770(param_1);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
  }
  func_0x000144d9dab0(0x147455748);
  if ((param_3 == '\0') &&
     (cVar1 = func_0x0001400f7730(*(undefined8 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x20)),
     cVar1 == '\0')) {
    return;
  }
  switch(*(uint *)(param_1 + 0x10) >> 2 & 3) {
  case 0:
    if (*(longlong *)(param_1 + 0x38) == 0) {
      return;
    }
    FUN_1400f7a40(param_1 + 0x28,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4),
                  *(undefined2 *)(param_1 + 0x12));
    break;
  case 1:
    if (*(longlong *)(param_1 + 0x38) == 0) {
      return;
    }
    FUN_1400f7aa0(param_1 + 0x28,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x30),
                  *(undefined2 *)(param_1 + 0x12));
    break;
  case 2:
    if (*(longlong *)(param_1 + 0x38) == 0) {
      return;
    }
    FUN_1400f7b00(param_1 + 0x28,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x30),
                  *(undefined2 *)(param_1 + 0x12),param_4,unaff_RSI);
    break;
  case 3:
    goto code_r0x0001400f79f7;
  }
  *(byte *)(param_1 + 0x10) = (*(byte *)(param_1 + 0x10) & 0xfc) + 1;
code_r0x0001400f79f7:
  return;
}

