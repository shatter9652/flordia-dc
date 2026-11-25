// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026890  size: 74 bytes
// Name:    FUN_140026890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140026890(longlong param_1)

{
  undefined4 uVar1;
  undefined1 (*pauVar2) [32];
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    pauVar2 = (undefined1 (*) [32])func_0x000144f97130(0x40);
    uVar1 = _DAT_145fc6f48;
    if (pauVar2 != (undefined1 (*) [32])0x0) {
      *(undefined1 (*) [32])(*pauVar2 + 0x10) = ZEXT1232(ZEXT812(0));
      *pauVar2 = ZEXT1232(ZEXT812(0));
      *(undefined4 *)(pauVar2[1] + 0x10) = uVar1;
      *(undefined4 *)(pauVar2[1] + 0x14) = uVar1;
      *(undefined4 *)(pauVar2[1] + 0x18) = uVar1;
      *(undefined4 *)(pauVar2[1] + 0x1c) = uVar1;
    }
    *(undefined1 (**) [32])(param_1 + 0x50) = pauVar2;
  }
  return;
}

