// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401175d0  size: 134 bytes
// Name:    FUN_1401175d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140117660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401175d0(undefined8 *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uStack_8;
  
  puVar1 = (ulonglong *)*param_1;
  uStack_8 = *puVar1;
  if (uStack_8 <= _DAT_14abce178 + 0x1fffff && _DAT_14abce178 <= uStack_8) {
    uVar2 = (longlong)&uStack_8 - (longlong)_DAT_14abce1e8;
    if (uVar2 < 0x1000000 && _DAT_14abce1e8 <= &uStack_8) {
      *(undefined1 *)(_DAT_14abce1f8 + (uVar2 >> 9)) = 1;
      puVar1 = (ulonglong *)*param_1;
    }
  }
  FUN_140117660(*(undefined8 *)(uStack_8 + 0x10),puVar1[1],(int)puVar1[2]);
  return;
}

