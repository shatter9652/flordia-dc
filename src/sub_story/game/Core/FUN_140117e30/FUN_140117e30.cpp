// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117e30  size: 174 bytes
// Name:    FUN_140117e30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401e8190, FUN_14522cfc0, FUN_14302ec70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140117e30(longlong param_1,int param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong alStack_48 [6];
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      uVar2 = FUN_14522cfc0(param_1,alStack_48,6);
      if (uVar2 != 0) {
        if (param_3 == '\0') {
          uVar4 = 0;
          do {
            if (alStack_48[uVar4] != 0) {
              return 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
        }
        else {
          uVar4 = 0;
          do {
            if ((alStack_48[uVar4] != 0) &&
               (cVar1 = FUN_14302ec70(alStack_48[uVar4],param_1), cVar1 == '\0')) {
              return 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
        }
      }
    }
    else {
      lVar3 = FUN_1401e8190(*(undefined4 *)(param_1 + 0x9c));
      if ((lVar3 != 0) &&
         ((((param_2 == -0x6d9487bf || (param_2 == 0xdc2c816)) || (param_3 == '\0')) ||
          (cVar1 = FUN_14302ec70(lVar3,param_1), cVar1 == '\0')))) {
        return 1;
      }
    }
  }
  return 0;
}

