// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f6f60  size: 117 bytes
// Name:    FUN_1400f6f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409ea8b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400f6f60(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(ulonglong *)(param_1 + 0x10) & 0x4000004) == 0) {
    uVar3 = 0x14;
    if (((uint)*(ulonglong *)(param_1 + 0x10) >> 0x16 & 1) == 0) {
      uVar3 = 0;
    }
    if (uVar3 < _DAT_14a4a29e4) {
      uVar3 = _DAT_14a4a29e4;
    }
    if (uVar3 != 0) {
      iVar1 = func_0x0001405eabb0();
      iVar2 = func_0x0001405eabc0();
      if ((uint)(iVar1 - (_DAT_14a4ac9cc + iVar2)) < uVar3) {
        FUN_1409ea8b0(param_1,0x9c4,0x96,1);
        uVar4 = 0;
      }
    }
  }
  return uVar4 & 0xffffffff;
}

