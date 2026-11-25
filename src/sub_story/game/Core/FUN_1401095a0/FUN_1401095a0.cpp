// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401095a0  size: 57 bytes
// Name:    FUN_1401095a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401095a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [10];
  undefined8 uStack_30;
  
  *param_1 = &UNK_14655fcc8;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    uStack_30 = 0x1401095c2;
    (**(code **)*puVar1)(puVar1,0);
  }
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

