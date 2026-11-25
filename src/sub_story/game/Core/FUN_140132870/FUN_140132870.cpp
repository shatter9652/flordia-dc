// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140132870  size: 66 bytes
// Name:    FUN_140132870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140132870(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  lVar3 = func_0x000144f3aef0();
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar3 != 0) {
    iVar1 = func_0x0001450e52e0(lVar3 + 0x10,0x53);
    if (iVar1 != 0) {
      uVar2 = func_0x000144dc06c0(iVar1);
      if (uVar2 < _DAT_149dc5590) {
        uVar4 = 0;
      }
    }
  }
  return uVar4 & 0xffffffff;
}

