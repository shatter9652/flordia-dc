// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400091b0  size: 290 bytes
// Name:    FUN_1400091b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_1400091b0(longlong param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  ulonglong uStack_40;
  
  if ((*(byte *)(param_1 + 0x134) & 1) == 0) {
    iVar10 = *(int *)(param_1 + 0x50);
  }
  else {
    puVar1 = (uint *)(param_1 + 0x108);
    puVar2 = (ulonglong *)(param_1 + 0x110);
    uVar5 = *(uint *)(param_1 + 0x108);
LAB_140009201:
    do {
      uVar4 = uVar5;
      if ((uVar4 & 0x1ff0000) != 0) {
        LOCK();
        uVar5 = *puVar1;
        bVar11 = uVar4 == uVar5;
        if (bVar11) {
          *puVar1 = uVar4 + 0x100;
          uVar5 = uVar4;
        }
        UNLOCK();
        if (bVar11) {
          uVar9 = (uint)(*puVar2 >> 7) & 0xffffff;
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
                if (uVar7 == uVar6) goto LAB_140009201;
              }
              uVar9 = uVar9 - 1;
              uVar7 = uVar6;
            } while (uVar9 != 0);
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
              if (uStack_40 == uVar7) goto LAB_140009201;
            }
            cVar3 = FUN_140006180(puVar2,1,&uStack_40);
            uVar5 = uVar4;
            uVar7 = uStack_40;
          } while (cVar3 == '\0');
        }
        goto LAB_140009201;
      }
      LOCK();
      uVar5 = *puVar1;
      bVar11 = uVar4 == uVar5;
      if (bVar11) {
        *puVar1 = uVar4 + 1;
        uVar5 = uVar4;
      }
      UNLOCK();
    } while (!bVar11);
    iVar10 = 0;
    for (lVar8 = *(longlong *)(param_1 + 0x120); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x50)) {
      iVar10 = iVar10 + *(int *)(lVar8 + 0x30);
    }
    FUN_140323580(puVar1);
  }
  return iVar10;
}

