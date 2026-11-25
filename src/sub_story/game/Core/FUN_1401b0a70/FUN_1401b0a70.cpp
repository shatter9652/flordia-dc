// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b0a70  size: 473 bytes
// Name:    FUN_1401b0a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14535ccd0, FUN_1401b0c90, FUN_1401af300, FUN_144f013e0, FUN_1401b0c50, FUN_1452dd5f0, FUN_140066b50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b0a70(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (param_1 == 0) {
    uVar3 = 0x21;
  }
  else if (param_2 == 0) {
    uVar3 = 0x1c9;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x9c);
    lVar2 = func_0x0001450f21c0(uVar5);
    if (lVar2 != 0) {
      cVar1 = FUN_14535ccd0(lVar2,1,1);
      if (cVar1 != '\0') {
        return 0x240;
      }
      uVar5 = *(undefined4 *)(param_1 + 0x9c);
    }
    lVar2 = func_0x0001451585e0(uVar5);
    if ((lVar2 == 0) || (fVar6 = (float)func_0x000145158630(lVar2,10,0), fVar6 <= 0.0)) {
      uVar5 = *(undefined4 *)(param_2 + 0x9c);
      cVar1 = FUN_1452dd5f0(uVar5,0);
      if (cVar1 == '\0') {
        cVar1 = FUN_1401b0c90(*(undefined8 *)(param_2 + 0x20));
        if ((cVar1 != '\0') &&
           ((lVar2 = func_0x000144ef6280(uVar5), lVar2 == 0 ||
            (((*(byte *)(lVar2 + 0x33) & 1) == 0 && ((*(byte *)(lVar2 + 0xbf) & 1) == 0)))))) {
          lVar2 = func_0x000144e6ea40(uVar5);
          if (lVar2 == 0) {
            return 0x242;
          }
          uVar3 = func_0x000144e6e9f0();
          cVar1 = FUN_140066b50(uVar3);
          if (cVar1 == '\0') {
            return 0x242;
          }
        }
        if ((param_3 == 0) || ((*(byte *)(param_3 + 0xab) & 2) == 0)) {
          uVar5 = *(undefined4 *)(param_1 + 0x9c);
          lVar2 = func_0x000144da10f0(uVar5);
          if ((lVar2 != 0) &&
             (((*(byte *)(lVar2 + 0x3c7) & 4) != 0 && (0 < (longlong)*(int *)(lVar2 + 0x3b8))))) {
            lVar4 = 0;
            do {
              if (*(short *)(lVar2 + 0x352 + lVar4 * 4) == 0x1ba) {
                return 0x245;
              }
              lVar4 = lVar4 + 1;
            } while (*(int *)(lVar2 + 0x3b8) != lVar4);
          }
          uVar3 = FUN_1401af300(uVar5);
          if ((int)uVar3 != 1) {
            return uVar3;
          }
        }
        lVar2 = FUN_144f013e0(*(undefined4 *)(param_2 + 0x9c));
        if ((lVar2 == 0) || (cVar1 = FUN_1401b0c50(lVar2), cVar1 == '\0')) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0x54;
        }
      }
      else {
        uVar3 = 0x235;
      }
    }
    else {
      uVar3 = 0x241;
    }
  }
  return uVar3;
}

