// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001ccd0  size: 99 bytes
// Name:    FUN_14001ccd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144daa460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001ccd0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar1 = (ulonglong)param_4;
  puVar2 = (undefined8 *)(uVar1 * 0x10 + param_3);
  do {
    uVar1 = uVar1 + 1;
    FUN_144daa460(*(undefined8 *)(param_1 + 0x10),&uStack_48,
                  *(undefined4 *)(param_2 + -4 + uVar1 * 4));
    *puVar2 = uStack_48;
    puVar2[1] = uStack_40;
    puVar2 = puVar2 + 2;
  } while ((int)uVar1 != 5);
  return;
}

