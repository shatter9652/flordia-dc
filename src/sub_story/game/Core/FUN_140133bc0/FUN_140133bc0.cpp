// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133bc0  size: 302 bytes
// Name:    FUN_140133bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f93d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140133bc0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int aiStack_24 [3];
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  lVar2 = func_0x000144e24670(uVar1);
  if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0x12) & 2) == 0)) &&
     (lVar2 = func_0x000144db7a10(uVar1), lVar2 != 0)) {
    uVar4 = (ulonglong)*(uint *)(lVar2 + 0x4bc);
    if (uVar4 != 0) {
      if (*(uint *)(lVar2 + 0x4bc) == 1) {
        aiStack_24[0] = *(int *)(lVar2 + 0x4c0);
      }
      else {
        func_0x000145f40560(aiStack_24,(int *)(lVar2 + 0x4c0),uVar4 * 4);
      }
      if (param_2 == '\0') {
        uVar3 = 0;
        do {
          if ((((aiStack_24[uVar3] != 0) && (lVar2 = func_0x000144f1f810(), lVar2 != 0)) &&
              (lVar2 = FUN_144f93d60(*(undefined4 *)(lVar2 + 0x24),*(undefined8 *)(lVar2 + 0x28),
                                     0xc2), lVar2 != 0)) &&
             ((*(int *)(lVar2 + 0x44) != 0 ||
              ((*(char *)(lVar2 + 0x1a) == '\x01' &&
               ((*(char *)(lVar2 + 0x1b) != '\0' || ((byte)(*(char *)(param_1 + 0xfa) - 5U) < 2)))))
              ))) {
            return 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar4 != uVar3);
      }
      else {
        uVar3 = 0;
        do {
          if (((aiStack_24[uVar3] != 0) && (lVar2 = func_0x000144f1f810(), lVar2 != 0)) &&
             (lVar2 = FUN_144f93d60(*(undefined4 *)(lVar2 + 0x24),*(undefined8 *)(lVar2 + 0x28),0xc2
                                   ), lVar2 != 0)) {
            if (*(int *)(lVar2 + 0x44) != 0) {
              return 1;
            }
            if ((*(char *)(lVar2 + 0x1a) == '\x01') && (*(char *)(lVar2 + 0x18) == '\x01')) {
              if (*(char *)(lVar2 + 0x1b) != '\0') {
                return 1;
              }
              if ((byte)(*(char *)(param_1 + 0xfa) - 5U) < 2) {
                return 1;
              }
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar4 != uVar3);
      }
    }
  }
  return 0;
}

