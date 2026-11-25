// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014bdf0  size: 260 bytes
// Name:    FUN_14014bdf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140355b80, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_14014bdf0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  ulonglong uStack_48;
  
  puVar1 = (uint *)(param_1 + 0x20);
  puVar2 = (ulonglong *)(param_1 + 0x28);
  uVar5 = *(uint *)(param_1 + 0x20);
LAB_14014be2a:
  do {
    do {
      while (uVar4 = uVar5, (uVar4 & 0x1ff0000) == 0) {
        LOCK();
        uVar5 = *puVar1;
        bVar10 = uVar4 == uVar5;
        if (bVar10) {
          *puVar1 = uVar4 + 1;
          uVar5 = uVar4;
        }
        UNLOCK();
        if (bVar10) {
          uVar6 = FUN_140355b80(param_1,param_2);
          FUN_140323580(puVar1);
          return uVar6;
        }
      }
      LOCK();
      uVar5 = *puVar1;
      bVar10 = uVar4 == uVar5;
      if (bVar10) {
        *puVar1 = uVar4 + 0x100;
        uVar5 = uVar4;
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
          uVar5 = uVar4;
          if (uVar8 == uVar7) goto LAB_14014be2a;
        }
        uVar9 = uVar9 - 1;
        uVar8 = uVar7;
      } while (uVar9 != 0);
    }
    uVar8 = *puVar2;
    do {
      while (uStack_48 = uVar8, 0xffffffff < (longlong)uStack_48) {
        LOCK();
        uVar8 = *puVar2;
        if (uStack_48 == uVar8) {
          *puVar2 = uStack_48 - 0x100000000;
          uVar8 = uStack_48;
        }
        UNLOCK();
        uVar5 = uVar4;
        if (uStack_48 == uVar8) goto LAB_14014be2a;
      }
      cVar3 = FUN_140006180(puVar2,1,&uStack_48);
      uVar5 = uVar4;
      uVar8 = uStack_48;
    } while (cVar3 == '\0');
  } while( true );
}

