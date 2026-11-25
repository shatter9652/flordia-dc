// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af390  size: 278 bytes
// Name:    FUN_1401af390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144efb2c0, FUN_140447980, FUN_144e23920, FUN_1401b0d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401af390(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    uVar3 = 0x21;
  }
  else if (param_2 == 0) {
    uVar3 = 0x1c9;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x9c);
    cVar1 = FUN_144e23920(uVar5);
    if (cVar1 == '\0') {
      lVar2 = func_0x000144da10f0(uVar5);
      if (((lVar2 != 0) && ((*(byte *)(lVar2 + 0x3c1) & 0x80) != 0)) &&
         (0 < (longlong)*(int *)(lVar2 + 0x3b8))) {
        lVar4 = 0;
        do {
          if (*(short *)(lVar2 + 0x352 + lVar4 * 4) == 0xcf) {
            return 0x74;
          }
          lVar4 = lVar4 + 1;
        } while (*(int *)(lVar2 + 0x3b8) != lVar4);
      }
      if (((param_3 == 0) || ((*(byte *)(param_3 + 0xab) & 2) == 0)) &&
         ((lVar2 = func_0x000144efb270(*(undefined4 *)(param_2 + 0x9c)), lVar2 != 0 &&
          (lVar2 = FUN_144efb2c0(*(undefined4 *)(lVar2 + 0x13c)), lVar2 != 0)))) {
        cVar1 = FUN_1401b0d50(lVar2);
        if (cVar1 != '\0') {
          return 0x7e;
        }
        uVar5 = *(undefined4 *)(param_1 + 0x9c);
      }
      lVar2 = func_0x000144fe0500(uVar5);
      if ((lVar2 == 0) || (cVar1 = FUN_140447980(lVar2), cVar1 == '\0')) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0xa3;
      }
    }
    else {
      uVar3 = 0xe0;
    }
  }
  return uVar3;
}

