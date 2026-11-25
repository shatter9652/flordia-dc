// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140040760  size: 243 bytes
// Name:    FUN_140040760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140040760(longlong param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uStack_40;
  
  puVar1 = (uint *)(param_1 + 0x20);
  puVar2 = (ulonglong *)(param_1 + 0x28);
  uVar6 = *(uint *)(param_1 + 0x20);
LAB_140040796:
  do {
    do {
      while (uVar5 = uVar6, (uVar5 & 0x1ff0000) == 0) {
        LOCK();
        uVar6 = *puVar1;
        bVar10 = uVar5 == uVar6;
        if (bVar10) {
          *puVar1 = uVar5 + 1;
          uVar6 = uVar5;
        }
        UNLOCK();
        if (bVar10) {
          uVar3 = *(undefined1 *)(param_1 + 0x50);
          FUN_140323580(puVar1);
          return CONCAT71((int7)((ulonglong)puVar2 >> 8),uVar3) & 0xffffffff;
        }
      }
      LOCK();
      uVar6 = *puVar1;
      bVar10 = uVar5 == uVar6;
      if (bVar10) {
        *puVar1 = uVar5 + 0x100;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (!bVar10);
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
          if (uVar8 == uVar7) goto LAB_140040796;
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
        if (uStack_40 == uVar8) goto LAB_140040796;
      }
      cVar4 = FUN_140006180(puVar2,1,&uStack_40);
      uVar6 = uVar5;
      uVar8 = uStack_40;
    } while (cVar4 == '\0');
  } while( true );
}

