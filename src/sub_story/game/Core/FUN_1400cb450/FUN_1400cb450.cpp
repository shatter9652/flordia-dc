// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cb450  size: 91 bytes
// Name:    FUN_1400cb450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400cb4b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cb450(longlong param_1,uint param_2,int param_3,undefined8 *param_4,undefined8 *param_5
                  )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = param_4[1];
  if (param_3 == 4) {
    param_2 = param_2 & 3 ^ 2;
  }
  puVar1 = (undefined8 *)(param_1 + 0x370 + (ulonglong)param_2 * 0x50);
  *puVar1 = *param_4;
  puVar1[1] = uVar2;
  uVar2 = param_5[1];
  puVar1 = (undefined8 *)(param_1 + 0x380 + (ulonglong)param_2 * 0x50);
  *puVar1 = *param_5;
  puVar1[1] = uVar2;
  FUN_1400cb4b0(param_1);
  *(undefined1 *)(param_1 + 0x66e) = 1;
  return;
}

