// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054710  size: 314 bytes
// Name:    FUN_140054710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140054710(longlong param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  ulonglong uStack_40;
  
  if (((DAT_14abbe2e0 == '\0') && (cVar3 = func_0x000144f7b6a0(), cVar3 == '\0')) &&
     (DAT_14abbe2e1 != '\x01')) {
    uVar7 = 0;
  }
  else {
    puVar1 = (uint *)(param_1 + 0x18);
    puVar2 = (ulonglong *)(param_1 + 0x20);
    uVar5 = *(uint *)(param_1 + 0x18);
LAB_140054765:
    do {
      uVar4 = uVar5;
      if ((uVar4 & 0x1ff0000) != 0) {
        LOCK();
        uVar5 = *puVar1;
        bVar9 = uVar4 == uVar5;
        if (bVar9) {
          *puVar1 = uVar4 + 0x100;
          uVar5 = uVar4;
        }
        UNLOCK();
        if (bVar9) {
          uVar8 = (uint)(*puVar2 >> 7) & 0xffffff;
          uVar7 = *puVar2;
          if ((*puVar2 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar7 < 0x100000000) {
                uVar6 = *puVar2;
              }
              else {
                LOCK();
                uVar6 = *puVar2;
                if (uVar7 == uVar6) {
                  *puVar2 = uVar7 - 0x100000000;
                  uVar6 = uVar7;
                }
                UNLOCK();
                uVar5 = uVar4;
                if (uVar7 == uVar6) goto LAB_140054765;
              }
              uVar8 = uVar8 - 1;
              uVar7 = uVar6;
            } while (uVar8 != 0);
          }
          uVar7 = *puVar2;
          do {
            while (uStack_40 = uVar7, 0xffffffff < (longlong)uStack_40) {
              LOCK();
              uVar7 = *puVar2;
              if (uStack_40 == uVar7) {
                *puVar2 = uStack_40 - 0x100000000;
                uVar7 = uStack_40;
              }
              UNLOCK();
              uVar5 = uVar4;
              if (uStack_40 == uVar7) goto LAB_140054765;
            }
            cVar3 = FUN_140006180(puVar2,1,&uStack_40);
            uVar5 = uVar4;
            uVar7 = uStack_40;
          } while (cVar3 == '\0');
        }
        goto LAB_140054765;
      }
      LOCK();
      uVar5 = *puVar1;
      bVar9 = uVar4 == uVar5;
      if (bVar9) {
        *puVar1 = uVar4 + 1;
        uVar5 = uVar4;
      }
      UNLOCK();
    } while (!bVar9);
    if (((DAT_14abbe2e0 == '\0') && (cVar3 = func_0x000144f7b6a0(), cVar3 == '\0')) &&
       (DAT_14abbe2e1 != '\x01')) {
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(int *)(param_1 + 4) != 0);
    }
    FUN_140323580(puVar1);
  }
  return uVar7 & 0xffffffff;
}

