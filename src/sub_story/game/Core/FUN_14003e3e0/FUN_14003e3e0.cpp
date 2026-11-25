// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003e3e0  size: 159 bytes
// Name:    FUN_14003e3e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003e480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003e3e0(longlong param_1,char param_2)

{
  uint uVar1;
  
  if ((param_2 != '\0') ||
     (((*(byte *)(param_1 + 0x11) & 8) == 0 &&
      ((*(longlong *)(param_1 + 0x1050) == 0 || ((*(byte *)(param_1 + 0x106c) & 0x80) == 0)))))) {
    FUN_14003e480(param_1 + 0x1050);
    *(undefined4 *)(param_1 + 0x10c0) = 0xffffffff;
    uVar1 = *(uint *)(param_1 + 0x10);
    if ((uVar1 >> 0xb & 1) != 0) {
      uVar1 = uVar1 & 0xfffff7ff;
      *(uint *)(param_1 + 0x10) = uVar1;
      if (*(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x18) != 0) {
        (**(code **)(param_1 + 0x30))(param_1 + 0x18,0xb);
        uVar1 = *(uint *)(param_1 + 0x10);
      }
    }
    if (((uVar1 >> 0xe & 1) != 0) &&
       (*(uint *)(param_1 + 0x10) = uVar1 & 0xffffbfff,
       *(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014003e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x30))(param_1 + 0x18,0xe);
      return;
    }
  }
  return;
}

