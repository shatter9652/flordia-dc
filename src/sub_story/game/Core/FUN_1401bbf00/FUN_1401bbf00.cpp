// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bbf00  size: 101 bytes
// Name:    FUN_1401bbf00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e96700, FUN_145078e80, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401bbf00(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_144e96700(0x149aafb50);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = func_0x000144fc99c0(0,0);
    puVar1 = (undefined8 *)FUN_144fac3c0(uVar2,0x30,0x10);
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  FUN_145078e80(puVar1,0xffffffff);
  *puVar1 = &UNK_1465ea780;
  *(undefined4 *)(puVar1 + 5) = 1;
  return puVar1;
}

