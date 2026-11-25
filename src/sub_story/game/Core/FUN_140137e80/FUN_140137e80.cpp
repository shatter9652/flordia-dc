// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137e80  size: 440 bytes
// Name:    FUN_140137e80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140137e80(undefined1 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  switch(param_1) {
  case 1:
    puVar2 = (undefined8 *)FUN_1401379f0(0x38);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144ff3740(puVar2);
      *puVar2 = &UNK_146679be0;
      uVar1 = 1;
code_r0x000140137ed2:
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 0;
      *(undefined4 *)(puVar2 + 5) = uVar1;
      return puVar2;
    }
    break;
  case 2:
    puVar2 = (undefined8 *)FUN_1401379f0(0x40);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144ff3740(puVar2);
      *puVar2 = &UNK_146679c10;
      uVar1 = 2;
      goto code_r0x000140137ed2;
    }
    break;
  case 3:
    puVar2 = (undefined8 *)FUN_1401379f0(0x48);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144ff3740(puVar2);
      *puVar2 = &UNK_146679c40;
      uVar1 = 3;
      goto code_r0x000140137ed2;
    }
    break;
  case 4:
    puVar2 = (undefined8 *)FUN_1401379f0(0x50);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144ff3740(puVar2);
      *puVar2 = &UNK_146679c70;
      uVar1 = 4;
      goto code_r0x000140137ed2;
    }
    break;
  case 5:
    puVar2 = (undefined8 *)FUN_1401379f0(0x58);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144ff3740(puVar2);
      *puVar2 = &UNK_146679ca0;
      uVar1 = 5;
      goto code_r0x000140137ed2;
    }
    break;
  case 6:
    puVar2 = (undefined8 *)FUN_1401379f0(0x60);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144ff3740(puVar2);
      *puVar2 = &UNK_146679cd0;
      uVar1 = 6;
      goto code_r0x000140137ed2;
    }
    break;
  case 7:
    puVar2 = (undefined8 *)FUN_1401379f0(0x68);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144ff3740(puVar2);
      *puVar2 = &UNK_146679d00;
      uVar1 = 7;
      goto code_r0x000140137ed2;
    }
    break;
  case 8:
    puVar2 = (undefined8 *)FUN_1401379f0(0x70);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_144ff3740(puVar2);
      *puVar2 = &UNK_146679d30;
      uVar1 = 8;
      goto code_r0x000140137ed2;
    }
  }
  return (undefined8 *)0x0;
}

