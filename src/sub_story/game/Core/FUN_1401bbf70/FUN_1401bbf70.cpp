// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bbf70  size: 71 bytes
// Name:    FUN_1401bbf70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001401bbf83: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001401bbf88) */
/* WARNING: Removing unreachable block (ram,0x0001401bbfc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401bbf70(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = _DAT_146159bc0;
  uVar2 = _DAT_145fc6edc;
  uVar1 = _DAT_145fc6ed8;
  *param_2 = _DAT_145fc6edc;
  param_2[1] = uVar2;
  param_2[2] = uVar2;
  param_2[3] = uVar2;
  *(undefined8 *)(param_2 + 4) = uVar3;
  *(undefined8 *)(param_2 + 6) = 0;
  param_2[8] = uVar1;
  param_2[9] = uVar1;
  param_2[10] = uVar1;
  param_2[0xb] = uVar1;
  *(undefined8 *)(param_2 + 0xc) = 0xff00000000000000;
  *(undefined1 *)(param_2 + 0xe) = 0;
  return;
}

