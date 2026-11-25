// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019ab30  size: 304 bytes
// Name:    FUN_14019ab30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503b300, FUN_140006180, FUN_1408b76c0, FUN_1451e6af0, FUN_140465670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019ab30(longlong param_1,longlong param_2)

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
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_2 + 8);
  puVar1 = (uint *)(param_1 + 0x108);
  puVar2 = (ulonglong *)(param_1 + 0x118);
  uVar5 = *(uint *)(param_1 + 0x108);
LAB_14019ab7c:
  do {
    do {
      while (uVar4 = uVar5, (uVar4 & 0x10000ff) == 0) {
        LOCK();
        uVar5 = *puVar1;
        bVar9 = uVar4 == uVar5;
        if (bVar9) {
          *puVar1 = uVar4 | 0x1000000;
          uVar5 = uVar4;
        }
        UNLOCK();
        if (bVar9) {
          FUN_1408b76c0(param_1,*(undefined8 *)(param_2 + 8));
          FUN_140465670(puVar1);
          FUN_14503b300(uStack_48);
          FUN_1451e6af0(param_1);
          LOCK();
          *(byte *)(param_1 + 0x134) = *(byte *)(param_1 + 0x134) & 0xfd;
          UNLOCK();
          return;
        }
      }
      LOCK();
      uVar5 = *puVar1;
      bVar9 = uVar4 == uVar5;
      if (bVar9) {
        *puVar1 = uVar4 + 0x10000;
        uVar5 = uVar4;
      }
      UNLOCK();
    } while (!bVar9);
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
          if (uVar7 == uVar6) goto LAB_14019ab7c;
        }
        uVar8 = uVar8 - 1;
        uVar7 = uVar6;
      } while (uVar8 != 0);
    }
    uVar7 = *puVar2;
    do {
      while (uStack_50 = uVar7, 0xffffffff < (longlong)uStack_50) {
        LOCK();
        uVar7 = *puVar2;
        if (uStack_50 == uVar7) {
          *puVar2 = uStack_50 - 0x100000000;
          uVar7 = uStack_50;
        }
        UNLOCK();
        uVar5 = uVar4;
        if (uStack_50 == uVar7) goto LAB_14019ab7c;
      }
      cVar3 = FUN_140006180(puVar2,1,&uStack_50);
      uVar5 = uVar4;
      uVar7 = uStack_50;
    } while (cVar3 == '\0');
  } while( true );
}

