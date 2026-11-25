// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113740  size: 72 bytes
// Name:    FUN_140113740
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140113740(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = func_0x000145310cd0();
  uVar1 = _UNK_1461776f8;
  if ((lVar2 == 0) || (*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x60) != -0x3a65642c7d1d2b01)) {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    *param_3 = *(undefined8 *)(param_2 + 0x70);
    param_3[1] = uVar1;
  }
  else {
    *param_3 = _DAT_1461776f0;
    param_3[1] = uVar1;
  }
  return;
}

