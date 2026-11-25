// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140091250  size: 500 bytes
// Name:    FUN_140091250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14075a460, FUN_144e59120, FUN_14513c970, FUN_1453b77f0, FUN_1453b7790, FUN_1453b77c0, FUN_1456a4750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140091250(longlong param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lStack_50;
  int aiStack_48 [2];
  undefined8 uStack_40;
  
  uVar6 = param_2;
  if (*(uint *)(param_2 + 0x48) != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(uint *)(param_2 + 0x28 + uVar6 * 4);
      if ((uVar2 & 0x3f8000) == 0x50000) {
        uVar2 = uVar2 & 0x7fff;
        uVar5 = ~*(uint *)(_DAT_14ab7f6e0[5] + (ulonglong)uVar2 * 4) & *(uint *)(_DAT_14ab7f6e0 + 6)
        ;
        uVar6 = (ulonglong)uVar5;
        if (uVar5 == 0) {
          uVar6 = 0;
          if (*_DAT_14ab7f6e0 != 0) {
            lVar3 = FUN_14513c970(*_DAT_149ab14a8,*(undefined8 *)(_DAT_149ab14a8 + 2),
                                  *(undefined8 *)
                                   (*_DAT_14ab7f6e0 + (ulonglong)(uVar2 * (int)_DAT_14ab7f6e0[1])));
            if (lVar3 == 0) {
              return;
            }
            if (*(char *)(lVar3 + 99) != '\x01') {
              return;
            }
            aiStack_48[0] = 0;
            uStack_40 = 0;
            FUN_1453b7790();
            uVar2 = *(uint *)(lVar3 + 0xc);
            if ((ulonglong)uVar2 != 0) {
              lVar3 = *(longlong *)(lVar3 + 0x10);
              lVar7 = 0;
              puVar8 = _DAT_14ab5d000;
              do {
                lVar4 = FUN_1453b77f0(*puVar8,*(undefined8 *)(puVar8 + 2),
                                      *(undefined8 *)(lVar3 + lVar7));
                if ((((lVar4 != 0) &&
                     (cVar1 = func_0x000140d56bf0(*(undefined4 *)(lVar4 + 0x70)), cVar1 != '\0')) &&
                    (lVar4 = FUN_14075a460(param_2), lVar4 != 0)) &&
                   ((*(char *)(lVar4 + 0x30) == '\x03' &&
                    (lStack_50 = lVar4, cVar1 = FUN_144e59120(*(undefined4 *)(lVar4 + 0x9c)),
                    cVar1 != '\0')))) {
                  FUN_1456a4750(param_1 + 0xf8,&lStack_50);
                  puVar8 = _DAT_14ab5d000;
                }
                lVar7 = lVar7 + 8;
              } while ((ulonglong)uVar2 << 3 != lVar7);
            }
            if (aiStack_48[0] == 0) {
              return;
            }
            do {
              FUN_1453b77c0(aiStack_48);
            } while (aiStack_48[0] != 0);
            return;
          }
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (*(uint *)(param_2 + 0x48) != uVar6);
  }
  cVar1 = func_0x000140d56bf0(*(undefined4 *)(param_2 + 0x70),uVar6);
  if (cVar1 != '\0') {
    aiStack_48[0] = 0;
    uStack_40 = 0;
    FUN_1453b7790();
    lVar3 = FUN_14075a460(param_2);
    if (((lVar3 != 0) && (*(char *)(lVar3 + 0x30) == '\x03')) &&
       (lStack_50 = lVar3, cVar1 = FUN_144e59120(*(undefined4 *)(lVar3 + 0x9c)), cVar1 != '\0')) {
      FUN_1456a4750(param_1 + 0xf8,&lStack_50);
    }
    if (aiStack_48[0] != 0) {
      do {
        FUN_1453b77c0(aiStack_48);
      } while (aiStack_48[0] != 0);
    }
  }
  return;
}

