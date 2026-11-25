// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014ce10  size: 167 bytes
// Name:    FUN_14014ce10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014cfe0, FUN_14014cec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14014ce10(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_28;
  undefined4 uStack_24;
  
  if (*(float *)(param_1 + 0xc) <= 0.0) {
    bVar1 = false;
  }
  else {
    FUN_14014cfe0(&uStack_88);
    uStack_88 = *param_2;
    uStack_80 = param_2[1];
    uStack_74 = *(undefined8 *)(param_1 + 0x10);
    uStack_6c = *(undefined8 *)(param_1 + 0x18);
    uStack_54 = *(undefined4 *)(param_1 + 0x20);
    uStack_78 = *(undefined4 *)(param_1 + 0xc);
    uStack_24 = 0x40400000;
    *(undefined4 *)(param_1 + 0x24) = uStack_78;
    FUN_14014cec0(&uStack_88);
    if ((short)uStack_50 == -1) {
      fStack_28 = *(float *)(param_1 + 0x24);
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = uStack_50;
      *(float *)(param_1 + 0x24) = fStack_28;
    }
    bVar1 = fStack_28 <= 0.0;
    *(bool *)(param_1 + 0x40) = bVar1;
  }
  return bVar1;
}

