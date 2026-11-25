// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164ee0  size: 48 bytes
// Name:    FUN_140164ee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144ecc85d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140164ee0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  (**(code **)(*_DAT_148759d00 + 0x90))(_DAT_148759d00,param_1,param_2,param_3);
  uVar1 = param_3 & 0xffffffffffffffc0;
  do {
    xsaveopt(uVar1,0x200);
    uVar1 = uVar1 + 0x40;
  } while (uVar1 <= (param_3 - 1) + (ulonglong)uRam00000001475e7000);
  return;
}

