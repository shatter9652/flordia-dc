// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048ba0  size: 138 bytes
// Name:    FUN_140048ba0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1420cde40, FUN_144fcb2d0, FUN_14128ba10, FUN_140643cd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140048ba0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [256];
  
  puVar2 = (undefined8 *)FUN_1420cde40(param_3);
  puVar4 = (undefined8 *)0x14a9240c0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2;
  }
  uVar1 = *puVar4;
  uVar3 = FUN_140643cd0();
  FUN_14128ba10(uVar3,auStack_128,0x100,uVar1,&UNK_14678d1bb,0);
  FUN_144fcb2d0(param_1,param_2,&UNK_1467854ea,auStack_128,param_3);
  return;
}

