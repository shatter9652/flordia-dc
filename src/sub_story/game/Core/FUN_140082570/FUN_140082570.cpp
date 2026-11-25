// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140082570  size: 115 bytes
// Name:    FUN_140082570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f474a0, FUN_144ead9e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140082570(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  uVar4 = 0;
  cVar2 = FUN_144f474a0(uVar1,0);
  if (cVar2 != '\0') {
    cVar2 = FUN_144ead9e0(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x264));
    uVar4 = 1;
    if (cVar2 == '\0') {
      lVar3 = func_0x000144da10f0(uVar1);
      lVar3 = func_0x000144f3ea40(*(undefined8 *)(lVar3 + 0x650),0x183);
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 0xd0) & 0x1fc0000) == 0x140000)) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

