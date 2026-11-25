// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140027230  size: 146 bytes
// Name:    FUN_140027230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140026bd0, FUN_140026b10, FUN_144e479b0, FUN_140027d80, FUN_140026890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140027230(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [64];
  
  *param_3 = 0xffffffff;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  uVar3 = FUN_140026890(puVar1);
  cVar2 = FUN_140026bd0(param_2,*puVar1);
  if (cVar2 == '\0') {
    cVar2 = FUN_140026b10(param_2,**(undefined8 **)(param_1 + 0x20));
    if (cVar2 != '\0') {
      *param_3 = 0xfffffffd;
    }
  }
  else {
    FUN_144e479b0(param_1,auStack_78);
    func_0x000144e46ba0(*(undefined8 *)(param_1 + 0x20),auStack_68);
    FUN_140027d80(uVar3,*(undefined4 *)(param_2 + 0x18),auStack_68,auStack_78);
  }
  return;
}

