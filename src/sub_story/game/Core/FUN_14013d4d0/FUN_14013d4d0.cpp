// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d4d0  size: 107 bytes
// Name:    FUN_14013d4d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f86dc0, FUN_145271bd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14013d4d0(undefined4 param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = func_0x0001425aed50();
  if (uVar1 == 0xffffffff) {
    uVar2 = (ulonglong)_DAT_14764f304;
    if (_DAT_14764f304 == _DAT_14764f300) {
      uVar1 = 0xff;
    }
    else {
      _DAT_14764f304 = _DAT_14764f304 + 1;
      lVar3 = uVar2 * 0x40;
      *(undefined4 *)(lVar3 + 0x14764f308) = 0;
      FUN_144f86dc0(lVar3 + 0x14764f310);
      *(undefined4 *)(lVar3 + 0x14764f308) = param_1;
      FUN_145271bd0(lVar3 + 0x14764f310,param_1);
      uVar1 = (uint)(byte)(DAT_14764f304 - 1);
    }
  }
  return uVar1;
}

