// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140126e10  size: 333 bytes
// Name:    FUN_140126e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_140126e10(longlong param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong uStack_40;
  
  puVar1 = (uint *)(param_1 + 0x338);
  puVar2 = (ulonglong *)(param_1 + 0x340);
  uVar6 = *(uint *)(param_1 + 0x338);
LAB_140126e4f:
  do {
    do {
      while (uVar5 = uVar6, (uVar5 & 0x1ff0000) == 0) {
        LOCK();
        uVar6 = *puVar1;
        bVar12 = uVar5 == uVar6;
        if (bVar12) {
          *puVar1 = uVar5 + 1;
          uVar6 = uVar5;
        }
        UNLOCK();
        if (bVar12) {
          if (*(int *)(param_1 + 0x354) == 0) {
            iVar8 = 0;
          }
          else {
            uVar11 = 0;
            iVar8 = 0;
            do {
              plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x358) + uVar11 * 8);
              if (((*(uint *)((longlong)plVar3 + 0x38c) & 0xfffffffb) != 0) &&
                 (iVar7 = (**(code **)(*plVar3 + 0x48))(), iVar8 < iVar7)) {
                iVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x358) + uVar11 * 8) +
                                    0x48))();
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(uint *)(param_1 + 0x354));
          }
          FUN_140323580(puVar1);
          return iVar8;
        }
      }
      LOCK();
      uVar6 = *puVar1;
      bVar12 = uVar5 == uVar6;
      if (bVar12) {
        *puVar1 = uVar5 + 0x100;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (!bVar12);
    uVar10 = (uint)(*puVar2 >> 7) & 0xffffff;
    uVar11 = *puVar2;
    if ((*puVar2 >> 7 & 0xffffff) != 0) {
      do {
        if ((longlong)uVar11 < 0x100000000) {
          uVar9 = *puVar2;
        }
        else {
          LOCK();
          uVar9 = *puVar2;
          if (uVar11 == uVar9) {
            *puVar2 = uVar11 - 0x100000000;
            uVar9 = uVar11;
          }
          UNLOCK();
          uVar6 = uVar5;
          if (uVar11 == uVar9) goto LAB_140126e4f;
        }
        uVar10 = uVar10 - 1;
        uVar11 = uVar9;
      } while (uVar10 != 0);
    }
    uVar11 = *puVar2;
    do {
      while (uStack_40 = uVar11, 0xffffffff < (longlong)uStack_40) {
        LOCK();
        uVar11 = *puVar2;
        if (uStack_40 == uVar11) {
          *puVar2 = uStack_40 - 0x100000000;
          uVar11 = uStack_40;
        }
        UNLOCK();
        uVar6 = uVar5;
        if (uStack_40 == uVar11) goto LAB_140126e4f;
      }
      cVar4 = FUN_140006180(puVar2,1,&uStack_40);
      uVar6 = uVar5;
      uVar11 = uStack_40;
    } while (cVar4 == '\0');
  } while( true );
}

