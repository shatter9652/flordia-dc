// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400be080  size: 132 bytes
// Name:    FUN_1400be080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e72580, FUN_140113b30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400be080(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
LAB_1400be0d9:
    uVar2 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x9c);
    cVar1 = func_0x000144ed25e0(uVar4);
    if (cVar1 != '\0') {
      lVar3 = func_0x000144fc0920(uVar4);
      if (lVar3 != 0) {
        lVar3 = FUN_140113b30(*(undefined4 *)(lVar3 + 0x14),*(undefined8 *)(lVar3 + 0x18));
        if (lVar3 != 0) {
          param_1 = lVar3;
        }
        uVar4 = *(undefined4 *)(param_1 + 0x9c);
      }
    }
    cVar1 = func_0x000144da28f0(uVar4);
    if (cVar1 == '\0') {
      cVar1 = FUN_144e72580(uVar4);
      if (cVar1 == '\0') {
        lVar3 = func_0x000144ef6280(uVar4);
        if ((lVar3 == 0) ||
           (((*(byte *)(lVar3 + 0x26) & 8) == 0 && ((*(byte *)(lVar3 + 0xb2) & 8) == 0))))
        goto LAB_1400be0d9;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

