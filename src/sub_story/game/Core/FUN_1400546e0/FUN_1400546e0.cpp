// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400546e0  size: 45 bytes
// Name:    FUN_1400546e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400546e0(void)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uStack_40;
  
  cVar4 = func_0x000144eec1e0(*_DAT_14a02d000);
  lVar3 = _DAT_1493f3638;
  if (cVar4 != '\0') {
    return true;
  }
  if (((DAT_14abbe2e0 == '\0') && (cVar4 = func_0x000144f7b6a0(), cVar4 == '\0')) &&
     (DAT_14abbe2e1 != '\x01')) {
    bVar10 = false;
  }
  else {
    puVar1 = (uint *)(lVar3 + 0x18);
    puVar2 = (ulonglong *)(lVar3 + 0x20);
    uVar6 = *(uint *)(lVar3 + 0x18);
LAB_140054765:
    do {
      uVar5 = uVar6;
      if ((uVar5 & 0x1ff0000) != 0) {
        LOCK();
        uVar6 = *puVar1;
        bVar10 = uVar5 == uVar6;
        if (bVar10) {
          *puVar1 = uVar5 + 0x100;
          uVar6 = uVar5;
        }
        UNLOCK();
        if (bVar10) {
          uVar9 = (uint)(*puVar2 >> 7) & 0xffffff;
          uVar8 = *puVar2;
          if ((*puVar2 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar8 < 0x100000000) {
                uVar7 = *puVar2;
              }
              else {
                LOCK();
                uVar7 = *puVar2;
                if (uVar8 == uVar7) {
                  *puVar2 = uVar8 - 0x100000000;
                  uVar7 = uVar8;
                }
                UNLOCK();
                uVar6 = uVar5;
                if (uVar8 == uVar7) goto LAB_140054765;
              }
              uVar9 = uVar9 - 1;
              uVar8 = uVar7;
            } while (uVar9 != 0);
          }
          uVar8 = *puVar2;
          do {
            while (uStack_40 = uVar8, 0xffffffff < (longlong)uStack_40) {
              LOCK();
              uVar8 = *puVar2;
              if (uStack_40 == uVar8) {
                *puVar2 = uStack_40 - 0x100000000;
                uVar8 = uStack_40;
              }
              UNLOCK();
              uVar6 = uVar5;
              if (uStack_40 == uVar8) goto LAB_140054765;
            }
            cVar4 = FUN_140006180(puVar2,1,&uStack_40);
            uVar6 = uVar5;
            uVar8 = uStack_40;
          } while (cVar4 == '\0');
        }
        goto LAB_140054765;
      }
      LOCK();
      uVar6 = *puVar1;
      bVar10 = uVar5 == uVar6;
      if (bVar10) {
        *puVar1 = uVar5 + 1;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (!bVar10);
    if (((DAT_14abbe2e0 == '\0') && (cVar4 = func_0x000144f7b6a0(), cVar4 == '\0')) &&
       (DAT_14abbe2e1 != '\x01')) {
      bVar10 = false;
    }
    else {
      bVar10 = *(int *)(lVar3 + 4) != 0;
    }
    FUN_140323580(puVar1);
  }
  return bVar10;
}

